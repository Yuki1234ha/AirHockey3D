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
     // ★★★ ゲームルール設定を追加 ★★★
    [Header("ゲームルール設定")]
    [Tooltip("フィールドのセンターラインのZ座標")]
    public float centerLineZ = 0.5f;

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

        //inferenceTimer = new Stopwatch();

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
    /// ML-Agentsが観測を要求するときに呼ばれる
    /// </summary>
    [System.Obsolete]
    public override void CollectObservations(VectorSensor sensor)
    {
        // 1. 自分の位置 (XZ平面) (2 float)
        sensor.AddObservation(transform.localPosition.x * dir);
        sensor.AddObservation(transform.localPosition.z * dir); // Y -> Z

        // 2. 自分の速度 (XZ平面) (2 float)
        sensor.AddObservation(selfRigidbody.velocity.x * dir);
        sensor.AddObservation(selfRigidbody.velocity.z * dir); // Y -> Z

        // 3. 敵の位置 (XZ平面) (2 float)
        sensor.AddObservation(playerMallet.transform.localPosition.x * dir);
        sensor.AddObservation(playerMallet.transform.localPosition.z * dir); // Y -> Z

        // 4. パックの位置 (XZ平面) (2 float)
        sensor.AddObservation(puckRigidbody.transform.localPosition.x * dir);
        sensor.AddObservation(puckRigidbody.transform.localPosition.z * dir); // Y -> Z

        // 5. パックの速度 (XZ平面) (2 float)
        Vector3 puck_velocity = puckRigidbody.velocity * dir;
        sensor.AddObservation(puck_velocity.x);
        sensor.AddObservation(puck_velocity.z); // Y -> Z
        // inferenceTimer.Restart();
        // // 観測バッファが満たされていない場合は、ゼロで埋める
        // while (observationBuffer.Count < observationHistorySize)
        // {
        //     observationBuffer.Insert(0, new float[10]);
        // }

        // // 最新の観測データを計算
        // float[] currentObservation = new float[10];
        // UnityEngine.Vector3 selfPos = selfRigidbody.position;
        // UnityEngine.Vector3 selfVel = selfRigidbody.linearVelocity;
        // UnityEngine.Vector3 playerPos = playerMallet.position;
        // UnityEngine.Vector3 puckPos = puckRigidbody.position;
        // UnityEngine.Vector3 puckVel = puckRigidbody.linearVelocity;

        // currentObservation[0] = selfPos.x * dir;
        // currentObservation[1] = selfPos.z * dir;
        // currentObservation[2] = selfVel.x * dir;
        // currentObservation[3] = selfVel.z * dir;
        // currentObservation[4] = playerPos.x * dir;
        // currentObservation[5] = playerPos.z * dir;
        // currentObservation[6] = puckPos.x * dir;
        // currentObservation[7] = puckPos.z * dir;
        // currentObservation[8] = puckVel.x * dir;
        // currentObservation[9] = puckVel.z * dir;

        // // バッファを更新
        // observationBuffer.Add(currentObservation);
        // while (observationBuffer.Count > observationHistorySize)
        // {
        //     observationBuffer.RemoveAt(0);
        // }

        // // バッファ内の全データをセンサーに追加
        // foreach (var obs in observationBuffer)
        // {
        //     sensor.AddObservation(obs);
        // }
    }

    private void FixedUpdate()
    {
        // 意思決定をリクエストし、観測と行動のサイクルを開始する
        this.RequestDecision();
    }

    /// <summary>
    /// ML-Agentsがモデルから行動を受け取ったときに呼ばれる
    /// </summary>
    [System.Obsolete]
    public override void OnActionReceived(ActionBuffers actions)
    {
        // inferenceTimer.Stop();
        // framesCollected++; // フレームカウンターをインクリメント

        // // ★★ 観測データが十分に溜まるまで行動しない ★★
        // if (framesCollected < observationHistorySize)
        // {
        //     if (logEnabled) Debug.Log($"<color=grey>[{gameObject.name}] Waiting for observations... ({framesCollected}/{observationHistorySize})</color>");
        //     // 念のため静止させておく
        //     selfRigidbody.linearVelocity = UnityEngine.Vector3.zero;
        //     return; // ここで処理を中断し、行動しない
        // }

        // // --- ここから先は、データが十分に溜まった後でないと実行されない ---
        // if (logEnabled) Debug.Log($"<color=magenta>[{gameObject.name}] Action received.</color>");

        float moveleftgear = Mathf.Clamp(actions.ContinuousActions[0], -1.0f, 1.0f) * 1.6f;
        float moverightgear = Mathf.Clamp(actions.ContinuousActions[1], -1.0f, 1.0f) * 1.6f;

        // 速度に変換 (YをZにマッピング)
        float current_velocity_x_byNN = (-moverightgear - moveleftgear) * Mathf.Sqrt(2) / 2;
        float current_velocity_z_byNN = (-moverightgear + moveleftgear) * Mathf.Sqrt(2) / 2; // Y -> Z

        // Rigidbodyに力を加える (3D用に変更)
        selfRigidbody.velocity += new Vector3(dir * current_velocity_x_byNN, 0f, dir * current_velocity_z_byNN);

        // プレイヤーの行動範囲を制限するロジック (Z軸で判定)
        float threthold_z = 1.0f; // 閾値の軸をZに変更
        if (gameObject.transform.localPosition.z * dir >= threthold_z && selfRigidbody.velocity.z * dir >= 0)
        {
            // Z軸方向の速度のみを0にする
            selfRigidbody.velocity = new Vector3(selfRigidbody.velocity.x, 0f, 0f);
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
