// EpisodeLogger.cs
// パックの射出からゴールまでを1エピソードとし、その間のプレイヤーの行動を記録・評価する。

using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

public class EpisodeLogger : MonoBehaviour
{
    public static EpisodeLogger Instance { get; private set; }

    [Header("ロギング設定")]
    [Tooltip("エピソードごとの集計データを保存するファイル名")]
    public string episodeSummaryFileName = "episode_summary.csv";
    [Tooltip("各ヒットの詳細データを保存するファイル名")]
    public string hitDetailsFileName = "hit_details.csv";
    [Header("難易度連携設定")]
    [Tooltip("実験の総エピソード数")]
    public int totalEpisodes = 24;
    [Tooltip("半径の初期値")]
    public float initialRadius = 1.6f;
    [Tooltip("半径を縮小させる量")]
    public float shrinkAmount = 0.3f;
    [Tooltip("半径を縮小させる間隔（エピソード数）")]
    public int shrinkInterval = 6;
    [Tooltip("半径を初期値に戻すエピソード番号")]
    public int resetEpisode = 19;
    [Tooltip("制御対象のPuckHitController")]
    public PuckHitController puckHitController;
    [Header("プレイヤー設定")]
    [Tooltip("プレイヤーの向きの基準となるTransform（OVRCameraRigのTrackingSpaceなど）")]
    public Transform playerTrackingSpace;
    [Header("フィールド設定")]
    [Tooltip("相手のゴールのTransform")]
    public Transform opponentGoal;
    [Tooltip("左の壁のX座標（パックの半径を考慮した値）")]
    public float wallXLeft = -2.595f;
    [Tooltip("右の壁のX座標（パックの半径を考慮した値）")]
    public float wallXRight = 2.595f;

    // --- 内部変数 ---
    private StreamWriter _episodeWriter;
    private StreamWriter _hitWriter;
    private int _episodeID = 0;
    private bool _isEpisodeActive = false;

    // 現在のエピソード情報を保持するクラス
    private class EpisodeData
    {
        public int ID;
        public float StartTime;
        public int HitCount_Assisted = 0;
        public int HitCount_NonAssisted = 0;
        public List<float> ShotAccuracyScores = new List<float>(); // ショットの正確さ（0-1）を保持

        public EpisodeData(int id)
        {
            ID = id;
            StartTime = Time.time;
        }
    }
    private EpisodeData _currentEpisode;

    void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        if (playerTrackingSpace == null)
        {
            Debug.LogError("Player Tracking Spaceが設定されていません！OVRCameraRigのTrackingSpaceなどをアタッチしてください。", this);
            this.enabled = false;
        }
        Instance = this;
        InitializeFiles();
    }

    /// <summary>
    /// Goal.csから呼び出され、新しいエピソードを開始する
    /// </summary>
    public void StartNewEpisode()
    {
        // もし前のエピソードがゴールせずに終了していたら、先に記録を完了させる
        if (_isEpisodeActive && _currentEpisode != null)
        {
            EndEpisode("NoGoal_Reset");
        }

        _episodeID++;
        _currentEpisode = new EpisodeData(_episodeID);
        _isEpisodeActive = true;

         // ★★★ 一定エピソードごとに半径を縮小させる ★★★
        if (puckHitController != null)
        {
            float targetRadius;
            // 最後のエピソード群（例: 19～24）では初期半径に戻す
            if (_episodeID >= resetEpisode)
            {
                targetRadius = initialRadius;
            }
            else // それ以前のエピソードでは段階的に縮小
            {
                // 何回縮小したかを計算 (例: Ep 1-5 -> 0回, Ep 6-11 -> 1回, Ep 12-17 -> 2回)
                int shrinkCount = (_episodeID - 1) / shrinkInterval;
                targetRadius = initialRadius - (shrinkCount * shrinkAmount);
            }
            
            // MalletControllerに半径を設定させる
            puckHitController.SetRadius(targetRadius);
        }
        Debug.Log($"<color=yellow>--- Episode {_episodeID} Started ---</color>");
    }

    /// <summary>
    /// ヒット情報を記録する
    /// </summary>
    [System.Obsolete]
    public void LogHit(PuckHitController mallet, Collider puckCollider, bool wasAssisted)
    {
        if (!_isEpisodeActive || _currentEpisode == null) return;

        // ヒット回数をカウント
        if (wasAssisted)
        {
            _currentEpisode.HitCount_Assisted++;
        }
        else
        {
            _currentEpisode.HitCount_NonAssisted++;
        }
        
        float advancedAccuracy = CalculateAdvancedAccuracy(puckCollider.transform.position, puckCollider.attachedRigidbody.velocity);
        _currentEpisode.ShotAccuracyScores.Add(advancedAccuracy);
        
        WriteHitDetail(mallet, wasAssisted, advancedAccuracy);
    }

    /// <summary>
    /// Goal.csから呼び出され、エピソードを終了し、集計データを記録する
    /// </summary>
    public void EndEpisode(string result)
    {
        if (!_isEpisodeActive || _currentEpisode == null) return;

        float duration = Time.time - _currentEpisode.StartTime;
        float avgAccuracy = _currentEpisode.ShotAccuracyScores.Count > 0 ? 
                            _currentEpisode.ShotAccuracyScores.Average() : 0;
        
        // エピソードスコアを計算（例）
        // ゴール成功で+1000点、ヒット数が少ないほど高得点、正確性が高いほど高得点
        float score = (result == "OpponentGoal" ? 1000 : 0) 
                    - (_currentEpisode.HitCount_Assisted* 10) 
                      + avgAccuracy * 100 - duration * 5;

        // エピソード集計データを書き込み
        string line = string.Format("{0},{1},{2},{3},{4},{5},{6}",
            _currentEpisode.ID,
            result,
            duration,
            _currentEpisode.HitCount_Assisted,
            _currentEpisode.HitCount_NonAssisted,
            avgAccuracy,
            score
        );
        _episodeWriter.WriteLine(line);
        _episodeWriter.Flush();

        Debug.Log($"<color=yellow>--- Episode {_currentEpisode.ID} Ended. Result: {result}, Score: {score:F0} ---</color>");
        
        _isEpisodeActive = false;
        _currentEpisode = null;
    }

    /// <summary>
    /// ショットの正確さを、複数の理想軌道との類似度で評価する
    /// </summary>
    private float CalculateAdvancedAccuracy(Vector3 puckPosition, Vector3 puckVelocity)
    {
        Vector3 actualDirection = puckVelocity.normalized;
        actualDirection.y = 0; // XZ平面で評価

        // --- 3つの理想軌道を計算 ---
        // 1. 直接ゴールを狙う軌道
        Vector3 directDirection = (opponentGoal.position - puckPosition).normalized;
        directDirection.y = 0;

        // 2. 右壁に反射させてゴールを狙う軌道
        Vector3 virtualGoalRight = new Vector3(wallXRight + (wallXRight - opponentGoal.position.x), 0, opponentGoal.position.z);
        Vector3 bankRightDirection = (virtualGoalRight - puckPosition).normalized;

        // 3. 左壁に反射させてゴールを狙う軌道
        Vector3 virtualGoalLeft = new Vector3(wallXLeft + (wallXLeft - opponentGoal.position.x), 0, opponentGoal.position.z);
        Vector3 bankLeftDirection = (virtualGoalLeft - puckPosition).normalized;

        // --- 実際のショット方向と、3つの理想軌道の類似度（内積）を計算 ---
        float dotDirect = Vector3.Dot(actualDirection, directDirection.normalized);
        float dotBankRight = Vector3.Dot(actualDirection, bankRightDirection.normalized);
        float dotBankLeft = Vector3.Dot(actualDirection, bankLeftDirection.normalized);

        // 最も類似度が高いものを、このショットの評価とする
        float maxSimilarity = Mathf.Max(dotDirect, dotBankRight, dotBankLeft);

        // 類似度を0～1のスコアに変換して返す
        return (maxSimilarity + 1f) / 2f;
    }

    private void WriteHitDetail(PuckHitController mallet, bool wasAssisted, float accuracy)
    {
        var interactor = mallet.grabbingInteractor;
        if (interactor == null) return;
        IHand hand = interactor.Hand;
        OVRInput.Controller controller = (hand.Handedness == Handedness.Left) ? OVRInput.Controller.LTouch : OVRInput.Controller.RTouch;

        // --- ★★★ ワールド座標系への変換 ★★★ ---
        Quaternion trackingSpaceRotation = playerTrackingSpace.rotation;

        // ローカル座標・速度を取得
        Vector3 localPos = OVRInput.GetLocalControllerPosition(controller);
        Quaternion localRot = OVRInput.GetLocalControllerRotation(controller);
        Vector3 localVel = OVRInput.GetLocalControllerVelocity(controller);
        Vector3 localAngVel = OVRInput.GetLocalControllerAngularVelocity(controller);

        // ワールド座標・回転・速度に変換
        Vector3 worldPos = playerTrackingSpace.TransformPoint(localPos); // 位置の変換にはTransformPointを使用
        Quaternion worldRot = trackingSpaceRotation * localRot;
        Vector3 worldVel = trackingSpaceRotation * localVel;
        Vector3 worldAngVel = trackingSpaceRotation * localAngVel;

        string line = $"{_currentEpisode.ID},{Time.time},{(wasAssisted ? 1 : 0)},{accuracy},{worldPos.x},{worldPos.y},{worldPos.z},{worldRot.x},{worldRot.y},{worldRot.z},{worldRot.w},{worldVel.x},{worldVel.y},{worldVel.z},{worldAngVel.x},{worldAngVel.y},{worldAngVel.z}";
        _hitWriter.WriteLine(line);
        _hitWriter.Flush();
    }

    private void InitializeFiles()
    {
        string dataPath = Path.Combine(Application.dataPath, "Data");
        if (!Directory.Exists(dataPath)) Directory.CreateDirectory(dataPath);

        // エピソード集計用ファイル
        string episodeFilePath = Path.Combine(dataPath, episodeSummaryFileName);
        bool episodeFileExists = File.Exists(episodeFilePath);
        _episodeWriter = new StreamWriter(episodeFilePath, true, Encoding.UTF8);
        if (!episodeFileExists)
        {
            _episodeWriter.WriteLine("EpisodeID,Result,Duration,AssistedHits,NonAssistedHits,AvgAccuracy,Score");
            _episodeWriter.Flush();
        }
        
        // ヒット詳細用ファイル
        string hitFilePath = Path.Combine(dataPath, hitDetailsFileName);
        bool hitFileExists = File.Exists(hitFilePath);
        _hitWriter = new StreamWriter(hitFilePath, true, Encoding.UTF8);
        if (!hitFileExists)
        {
            _hitWriter.WriteLine("EpisodeID,Timestamp,WasAssisted,Accuracy,WorldPosX,WorldPosY,WorldPosZ,WorldRotX,WorldRotY,WorldRotZ,WorldRotW,WorldVelX,WorldVelY,WorldVelZ,WorldAngVelX,WorldAngVelY,WorldAngVelZ");
            _hitWriter.Flush();
        }
    }

    void OnApplicationQuit()
    {
        // ゲーム終了時に、進行中のエピソードがあれば記録
        if (_isEpisodeActive)
        {
            EndEpisode("Quit");
        }
        
        if (_episodeWriter != null) _episodeWriter.Close();
        if (_hitWriter != null) _hitWriter.Close();
    }
}
