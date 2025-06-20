// AIArrowController.cs
// モデルの出力をガイド矢印として可視化するバージョン。
// ★★★ 学習時のデータ形式（バッファリング、絶対座標）と詳細なデバッグログを実装した最終修正版 ★★★

using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class AIArrowController : Agent
{
    [Header("オブジェクト参照")]
    public Rigidbody selfRigidbody;
    public Transform playerMallet;
    public Rigidbody puckRigidbody;
    // 壁の参照は学習コードの観測に含まれていなかったため、一旦コメントアウト
    // public Transform leftWall;
    // public Transform rightWall;

    [Header("AI設定")]
    [Tooltip("このAIエージェントのID（0または1）")]
    public int agentID = 1;
    [Tooltip("モデルが出力するアクションの最大速度")]
    public float maxSpeed = 20.0f;
    [Tooltip("モデルが参照する過去の観測フレーム数")]
    public int observationHistorySize = 5;

    [Header("可視化・デバッグ設定")]
    [Tooltip("VR空間に表示する矢印のプレハブをここに設定")]
    public GameObject suggestionArrowPrefab;
    [Tooltip("矢印の長さ（ベクトルの強さ）を調整する係数")]
    public float arrowLengthMultiplier = 0.2f;
    [Tooltip("デバッグログを有効にする")]
    public bool enableDebugLogs = true;

    // --- 内部変数 ---
    private float dir;
    private GameObject suggestionArrowInstance;
    private readonly List<float[]> observationBuffer = new List<float[]>();

    public override void Initialize()
    {
        if (selfRigidbody == null) selfRigidbody = GetComponent<Rigidbody>();
        dir = (agentID == 0) ? 1.0f : -1.0f;

        if (suggestionArrowPrefab != null)
        {
            suggestionArrowInstance = Instantiate(suggestionArrowPrefab, transform.position, Quaternion.identity);
            suggestionArrowInstance.SetActive(false);
        }
        else
        {
            Debug.LogError("Suggestion Arrow Prefabが設定されていません！", this);
        }
    }

    [System.Obsolete]
    public override void OnEpisodeBegin()
    {
        selfRigidbody.velocity = Vector3.zero;
        selfRigidbody.angularVelocity = Vector3.zero;
        observationBuffer.Clear(); // エピソード開始時にバッファをクリア
        if(suggestionArrowInstance != null)
        {
            suggestionArrowInstance.SetActive(false);
        }
    }

    /// <summary>
    /// 観測データを収集する
    /// </summary>
    public override void CollectObservations(VectorSensor sensor)
    {
        // --- 1. 最新の観測データを計算 ---
        var currentObservation = new float[10];
        Vector3 selfPos = selfRigidbody.position;
        Vector3 selfVel = selfRigidbody.linearVelocity; // Unity 6では .velocity の代わりに .linearVelocity
        Vector3 playerPos = playerMallet.position;
        Vector3 puckPos = puckRigidbody.position;
        Vector3 puckVel = puckRigidbody.linearVelocity;

        // ★★★ ご指摘の通り、学習時と同じく「絶対座標」を観測データとして使用 ★★★
        currentObservation[0] = selfPos.x * dir;
        currentObservation[1] = selfPos.z * dir;
        currentObservation[2] = selfVel.x * dir;
        currentObservation[3] = selfVel.z * dir;
        currentObservation[4] = playerPos.x * dir;
        currentObservation[5] = playerPos.z * dir;
        currentObservation[6] = puckPos.x * dir;
        currentObservation[7] = puckPos.z * dir;
        currentObservation[8] = puckVel.x * dir;
        currentObservation[9] = puckVel.z * dir;

        // --- 2. 観測バッファを更新 ---
        observationBuffer.Add(currentObservation);
        if (observationBuffer.Count > observationHistorySize)
        {
            observationBuffer.RemoveAt(0);
        }

        // --- 3. バッファ内の全データをセンサーに追加 ---
        foreach (var obs in observationBuffer)
        {
            sensor.AddObservation(obs);
        }

        // --- 4. ログ出力 ---
        if (enableDebugLogs)
        {
            var sb = new StringBuilder();
            sb.Append($"<color=cyan>[OBSERVE Frame:{Time.frameCount}]</color> Buffer Size: {observationBuffer.Count}/{observationHistorySize}. ");
            // 最新の観測データのみ表示
            sb.Append($"SelfPos:({selfPos.x:F2}, {selfPos.z:F2}), PuckPos:({puckPos.x:F2}, {puckPos.z:F2})");
            Debug.Log(sb.ToString());
        }
    }

    /// <summary>
    /// モデルから行動を受け取ったときに呼ばれる
    /// </summary>
    [System.Obsolete]
    public override void OnActionReceived(ActionBuffers actions)
    {
        // ★★★ バッファが完全に満たされるまで行動しないガード節 ★★★
        if (observationBuffer.Count < observationHistorySize)
        {
            if (suggestionArrowInstance != null && suggestionArrowInstance.activeSelf)
            {
                suggestionArrowInstance.SetActive(false);
            }
            if (enableDebugLogs)
            {
                Debug.Log($"<color=grey>[WAITING]</color> Observation buffer not full. Skipping action.");
            }
            return;
        }

        // --- 以下は、バッファが満たされた後のみ実行される ---

        // 1. モデルの生出力を取得
        float moveLeftGear = actions.ContinuousActions[0];
        float moveRightGear = actions.ContinuousActions[1];
        
        if(enableDebugLogs)
        {
             Debug.Log($"<color=yellow>[RAW ACTION]</color> LeftGear: {moveLeftGear:F3}, RightGear: {moveRightGear:F3}");
        }

        // 2. 目標速度ベクトルを計算
        moveLeftGear = Mathf.Clamp(moveLeftGear, -1.0f, 1.0f) * maxSpeed;
        moveRightGear = Mathf.Clamp(moveRightGear, -1.0f, 1.0f) * maxSpeed;
        float moveX = (-moveRightGear - moveLeftGear) * Mathf.Sqrt(2) / 2;
        float moveZ = (-moveRightGear + moveLeftGear) * Mathf.Sqrt(2) / 2;
        Vector3 targetVelocity = new Vector3(moveX * dir, 0f, moveZ * dir);

        // 3. 物理的な動きは行わない
        selfRigidbody.velocity = Vector3.zero;

        // 4. 計算したベクトルを矢印として可視化
        if (suggestionArrowInstance != null)
        {
            if (targetVelocity.magnitude < 0.1f)
            {
                if(suggestionArrowInstance.activeSelf) suggestionArrowInstance.SetActive(false);
            }
            else
            {
                if(!suggestionArrowInstance.activeSelf) suggestionArrowInstance.SetActive(true);
                
                suggestionArrowInstance.transform.position = selfRigidbody.position + Vector3.up * 0.1f;
                suggestionArrowInstance.transform.rotation = Quaternion.LookRotation(targetVelocity);
                suggestionArrowInstance.transform.localScale = new Vector3(1, 1, targetVelocity.magnitude * arrowLengthMultiplier);

                if(enableDebugLogs)
                {
                    Debug.Log($"<color=orange>[VISUALIZE]</color> Updating Arrow. Target Velocity: {targetVelocity.ToString("F3")}");
                }
            }
        }
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {
        // テスト用の手動入力
    }
}
