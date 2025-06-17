// AIAgentController.cs
// ML-Agentsフレームワークを利用して推論を実行する、パフォーマンスと実装を最適化した最終版。
// ★ 推論時間の計測機能と、色付きのデバッグログ機能を追加 ★
// ★ FixedUpdateで手動で意思決定をリクエストする方式に変更 ★
// ★★ 観測データが十分に溜まるまで行動しないように修正 ★★

using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;
using System.Collections.Generic;
using System.Diagnostics; // Stopwatchのために追加
using Debug = UnityEngine.Debug; // 明示的にUnityEngine.Debugを使用

public class AIAgentController : Agent
{
    [Header("オブジェクト参照")]
    public Rigidbody selfRigidbody;
    public Transform playerMallet;
    public Rigidbody puckRigidbody;
    public Transform leftWall;
    public Transform rightWall;

    [Header("AI設定")]
    [Tooltip("このAIエージェントのID（0または1）")]
    public int agentID = 0;
    [Tooltip("モデルが出力するアクションの最大速度")]
    public float maxSpeed = 20.0f;
    [Tooltip("観測履歴を保存するフレーム数")]
    public int observationHistorySize = 5;

    [Header("デバッグ設定")]
    [Tooltip("有効にすると、デバッグログと推論時間を出力します")]
    public bool logEnabled = true;

    // --- 内部変数 ---
    private float dir; // 座標系の向き(1.0f or -1.0f)
    private readonly List<float[]> observationBuffer = new List<float[]>();
    private Stopwatch inferenceTimer;
    
    // ★★ エピソード開始からのフレームを数えるカウンター ★★
    private int framesCollected = 0;

    /// <summary>
    /// エージェントが初期化されるときに一度だけ呼ばれる
    /// </summary>
    public override void Initialize()
    {
        if (logEnabled) Debug.Log($"<color=cyan>[{gameObject.name}] Initializing Agent (ID: {agentID})...</color>");

        inferenceTimer = new Stopwatch();

        if (selfRigidbody == null) selfRigidbody = GetComponent<Rigidbody>();
        dir = (agentID == 0) ? 1.0f : -1.0f;

        if (logEnabled) Debug.Log($"<color=green>[{gameObject.name}] Agent Initialized successfully.</color>");
    }

    /// <summary>
    /// 新しいエピソード（ゲームのラウンド）が始まるときに呼ばれる
    /// </summary>
    public override void OnEpisodeBegin()
    {
        if (logEnabled) Debug.Log($"<color=cyan>[{gameObject.name}] New episode started.</color>");
        
        // ★★ 内部状態をリセット ★★
        selfRigidbody.linearVelocity = UnityEngine.Vector3.zero;
        selfRigidbody.angularVelocity = UnityEngine.Vector3.zero;
        observationBuffer.Clear(); // バッファをクリア
        framesCollected = 0;       // フレームカウンターをリセット
    }

    /// <summary>
    /// 物理演算の更新タイミングで呼ばれるFixedUpdate
    /// </summary>
    private void FixedUpdate()
    {
        // 意思決定をリクエストし、観測と行動のサイクルを開始する
        this.RequestDecision();
    }


    /// <summary>
    /// ML-Agentsが観測を要求するときに呼ばれる
    /// </summary>
    public override void CollectObservations(VectorSensor sensor)
    {
        inferenceTimer.Restart();
        // 観測バッファが満たされていない場合は、ゼロで埋める
        while (observationBuffer.Count < observationHistorySize)
        {
            observationBuffer.Insert(0, new float[10]);
        }

        // 最新の観測データを計算
        float[] currentObservation = new float[10];
        UnityEngine.Vector3 selfPos = selfRigidbody.position;
        UnityEngine.Vector3 selfVel = selfRigidbody.linearVelocity;
        UnityEngine.Vector3 playerPos = playerMallet.position;
        UnityEngine.Vector3 puckPos = puckRigidbody.position;
        UnityEngine.Vector3 puckVel = puckRigidbody.linearVelocity;

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

        // バッファを更新
        observationBuffer.Add(currentObservation);
        while (observationBuffer.Count > observationHistorySize)
        {
            observationBuffer.RemoveAt(0);
        }

        // バッファ内の全データをセンサーに追加
        foreach (var obs in observationBuffer)
        {
            sensor.AddObservation(obs);
        }
    }

    /// <summary>
    /// ML-Agentsがモデルから行動を受け取ったときに呼ばれる
    /// </summary>
    public override void OnActionReceived(ActionBuffers actions)
    {
        inferenceTimer.Stop();
        framesCollected++; // フレームカウンターをインクリメント

        // ★★ 観測データが十分に溜まるまで行動しない ★★
        if (framesCollected < observationHistorySize)
        {
            if (logEnabled) Debug.Log($"<color=grey>[{gameObject.name}] Waiting for observations... ({framesCollected}/{observationHistorySize})</color>");
            // 念のため静止させておく
            selfRigidbody.linearVelocity = UnityEngine.Vector3.zero;
            return; // ここで処理を中断し、行動しない
        }

        // --- ここから先は、データが十分に溜まった後でないと実行されない ---
        if (logEnabled) Debug.Log($"<color=magenta>[{gameObject.name}] Action received.</color>");

        float moveLeftGear = actions.ContinuousActions[0];
        float moveRightGear = actions.ContinuousActions[1];
        
        moveLeftGear = Mathf.Clamp(moveLeftGear, -1.0f, 1.0f) * maxSpeed;
        moveRightGear = Mathf.Clamp(moveRightGear, -1.0f, 1.0f) * maxSpeed;

        float moveX = (-moveRightGear - moveLeftGear) * Mathf.Sqrt(2) / 2;
        float moveZ = (-moveRightGear + moveLeftGear) * Mathf.Sqrt(2) / 2;

        UnityEngine.Vector3 targetVelocity = new UnityEngine.Vector3(moveX * dir, 0f, moveZ * dir);
        selfRigidbody.linearVelocity = targetVelocity;

        if (logEnabled)
        {
            Debug.Log($"<color=magenta>[{gameObject.name}] Action executed. Target Velocity: {targetVelocity.ToString("F3")}</color>");
            Debug.Log($"<color=yellow>[{gameObject.name}] Inference Time: {inferenceTimer.Elapsed.TotalMilliseconds:F2} ms</color>");
        }
    }

    /// <summary>
    /// プレイヤーが操作するためのテスト用メソッド
    /// </summary>
    public override void Heuristic(in ActionBuffers actionsOut)
    {
        // 必要であれば、キーボード入力で操作するロジックをここに記述
    }
}
