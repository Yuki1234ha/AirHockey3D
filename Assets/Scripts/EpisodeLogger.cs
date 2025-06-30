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
    [Tooltip("半径を縮小させる間隔（エピソード数）")]
    public int shrinkEpisodeInterval = 3;
    [Tooltip("制御対象のPuckHitController")]
    public PuckHitController puckHitController;

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
        if (puckHitController != null && _episodeID > 0 && _episodeID % shrinkEpisodeInterval == 0)
        {
            puckHitController.ShrinkAssistRadius();
            Debug.Log($"<color=magenta>Episode {_episodeID}: Shrinking hit radius.</color>");
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
        
        // --- ショットの正確さを計算 ---
        Vector3 puckVelocity = puckCollider.attachedRigidbody.velocity;
        Transform opponentGoal = FindObjectOfType<Goal>().opponentGoal; // 簡易的な取得方法
        Vector3 idealDirection = (opponentGoal.position - puckCollider.transform.position).normalized;
        
        // ベクトルのなす角から正確さをスコア化 (1:完璧, 0:逆方向)
        float accuracy = Vector3.Dot(puckVelocity.normalized, idealDirection.normalized);
        accuracy = (accuracy + 1) / 2; // -1~1の範囲を0~1に変換
        _currentEpisode.ShotAccuracyScores.Add(accuracy);
        
        // --- ヒット詳細データを書き込み ---
        WriteHitDetail(mallet, wasAssisted, accuracy);
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
                    - (_currentEpisode.HitCount_Assisted* 10 + _currentEpisode.HitCount_NonAssisted) 
                      + avgAccuracy * 100;

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

    private void WriteHitDetail(PuckHitController mallet, bool wasAssisted, float accuracy)
    {
        // UnifiedMalletControllerから運動情報を取得
        var interactor = mallet.grabbingInteractor;
        if (interactor == null) return;
        IHand hand = interactor.Hand;
        OVRInput.Controller controller = (hand.Handedness == Handedness.Left) ? OVRInput.Controller.LTouch : OVRInput.Controller.RTouch;
        
        var pos = OVRInput.GetLocalControllerPosition(controller);
        var rot = OVRInput.GetLocalControllerRotation(controller);
        var vel = OVRInput.GetLocalControllerVelocity(controller);
        var angVel = OVRInput.GetLocalControllerAngularVelocity(controller);

        string line = string.Format("{0},{1},{2},{3},{4},{5},{6},{7},{8},{9},{10},{11},{12},{13},{14},{15}",
            _currentEpisode.ID,
            Time.time,
            wasAssisted ? 1 : 0,
            accuracy,
            pos.x, pos.y, pos.z,
            rot.x, rot.y, rot.z, rot.w,
            vel.x, vel.y, vel.z,
            angVel.x, angVel.y, angVel.z
        );
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
            _hitWriter.WriteLine("EpisodeID,Timestamp,WasAssisted,Accuracy,PosX,PosY,PosZ,RotX,RotY,RotZ,RotW,VelX,VelY,VelZ,AngVelX,AngVelY,AngVelZ");
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
