// AIAgentController.cs
// Unity 6およびInference Engineの最新サンプルコードの仕様に準拠したONNXモデル制御スクリプト。
// AIマレットを制御します。

using UnityEngine;
using Unity.InferenceEngine; // サンプルコードに合わせ、名前空間をInferenceEngineに指定
using System.Collections; 
using System.Collections.Generic;
using System.Linq;
using System.Text; // StringBuilderを使用するために追加

public class AIAgentController : MonoBehaviour
{
    [Header("ONNXモデル設定")]
    [Tooltip("Assets内にあるONNXモデルファイルを指定")]
    public ModelAsset modelAsset;

    [Header("オブジェクト参照")]
    [Tooltip("AIマレットのRigidbody")]
    public Rigidbody selfRigidbody;

    [Tooltip("プレイヤーマレットのTransform")]
    public Transform playerMallet;

    [Tooltip("パックのRigidbody")]
    public Rigidbody puckRigidbody;

    [Header("AI設定")]
    [Tooltip("AIマレットの移動速度")]
    public float moveSpeed = 2.5f; // ★★★ AIマレットの移動速度をInspectorから設定可能に ★★★

    [Tooltip("デバッグ用のログ出力を有効にする")]
    public bool enableDebugLogs = true; // ★★★ InspectorからON/OFFできるログ出力フラグを追加 ★★★

    [Tooltip("モデルへの入力として使用する過去のフレーム数")]
    private const int ObservationBufferSize = 5;

    [Tooltip("1フレームあたりの観測データの次元数")]
    private const int DataDimension = 10;

    // --- Inference Engine関連 ---
    private Model runtimeModel;
    private Worker engine;
    private Tensor<float> inputTensor;

    private IEnumerator inferenceSchedule;

    // --- 観測データ関連 ---
    private readonly List<float[]> observationBuffer = new List<float[]>();

    void Start()
    {
        if (Mathf.Abs(Time.fixedDeltaTime - (1f / 60f)) > 0.001f)
        {
            Debug.LogWarning($"現在のFixed Timestep ({Time.fixedDeltaTime:F6}s) は60fpsと一致していません。Project Settings > Time > Fixed Timestep を {1f / 60f:F6} に設定してください。");
        }
        if (selfRigidbody == null) selfRigidbody = GetComponent<Rigidbody>();
        if (selfRigidbody == null)
        {
            Debug.LogError("AIマレットにRigidbodyがアタッチされていません。", this);
            this.enabled = false;
            return;
        }

        runtimeModel = ModelLoader.Load(modelAsset);
        engine = new Worker(runtimeModel, BackendType.GPUCompute);
        var inputShape = new TensorShape(1, ObservationBufferSize * DataDimension);
        inputTensor = new Tensor<float>(inputShape);

        Debug.Log("ONNXモデルをロードし、推論エンジンの準備が完了しました。");
    }

    void FixedUpdate()
    {
        // --- Step 1: デフォルトアクションとして停止 ---
        selfRigidbody.linearVelocity = Vector3.zero;

        // --- Step 2: 前のフレームの推論が完了したかチェック ---
        if (inferenceSchedule != null)
        {
            // 推論を1ステップ進める。MoveNext()がfalseを返せば完了。
            bool hasMoreWork = true;

            if (!hasMoreWork)
            {
                // ★ 1フレームで完了した場合のみ、結果を取得して行動を適用 ★
                string outputName = "deterministic_continuous_actions";
                using var outputTensor = (engine.PeekOutput(outputName) as Tensor<float>).ReadbackAndClone();

                float targetVelocityX = outputTensor[0];
                float targetVelocityZ = outputTensor[1];

                ApplyAction(targetVelocityX, targetVelocityZ);
            }
            else
            {
                // ★ 推論がまだ完了していない場合は、何もしない ★
                if (enableDebugLogs)
                {
                    Debug.Log("<color=yellow>[Inference]</color> 推論がまだ完了していません。次のフレームで再試行します。");
                }
            }
            inferenceSchedule = null; // 推論スケジュールをリセット
            // else: まだ計算中。結果は棄却され、次のフレームで新しい推論に上書きされる。
        }

        // --- Step 3: 常に新しい観測データで、次のフレームのための推論を開始 ---
        CollectObservations();
        if (observationBuffer.Count >= ObservationBufferSize)
        {
            RequestDecision();
        }
    }

    /// <summary>
    /// 各オブジェクトの座標と速度を取得し、モデルの入力形式に整形する。
    /// </summary>
    void CollectObservations()
    {
        float[] currentObservation = new float[DataDimension];

        // --- 観測データを取得 ---
        Vector3 selfPos = selfRigidbody.position;
        Vector3 selfVel = selfRigidbody.linearVelocity;
        Vector3 playerPos = playerMallet.position;
        Vector3 puckPos = puckRigidbody.position;
        Vector3 puckVel = puckRigidbody.linearVelocity;

        currentObservation[0] = selfPos.x;
        currentObservation[1] = selfPos.z;
        currentObservation[2] = selfVel.x;
        currentObservation[3] = selfVel.z;
        currentObservation[4] = playerPos.x; // プレイヤーとの相対位置
        currentObservation[5] = playerPos.z; // プレイヤーとの相対位置
        currentObservation[6] = puckPos.x; // パックとの相対位置
        currentObservation[7] = puckPos.z; // パックとの相対位置
        currentObservation[8] = puckVel.x; // パックの速度X
        currentObservation[9] = puckVel.z;

        // ★★★ ログ出力追加（観測データ） ★★★
        if (enableDebugLogs)
        {
            var sb = new StringBuilder();
            sb.Append("<color=cyan>[Observation]</color> ");
            sb.Append($"SelfPos:({selfPos.x:F2}, {selfPos.z:F2}), ");
            sb.Append($"PlayerPos:({playerPos.x:F2}, {playerPos.z:F2}), ");
            sb.Append($"PuckPos:({puckPos.x:F2}, {puckPos.z:F2}), ");
            sb.Append($"PuckVel:({puckVel.x:F2}, {puckVel.z:F2})");
            Debug.Log(sb.ToString());
        }

        // // --- データを正規化してバッファに追加 ---
        // for (int i = 0; i < DataDimension; i++)
        // {
        //     currentObservation[i] /= 10.0f;
        // }

        observationBuffer.Add(currentObservation);
        if (observationBuffer.Count > ObservationBufferSize)
        {
            observationBuffer.RemoveAt(0); // バッファサイズを維持
        }
    }

    /// <summary>
    /// ONNXモデルに現在の観測データを渡し、推論を実行して行動を決定・適用する。
    /// </summary>
    void RequestDecision()
    {
        // ★★★ InvalidOperationExceptionを解決するための修正箇所 ★★★
        // 推論を実行するたびに、新しい入力テンソルを生成します。
        // これにより、GPUが使用中のメモリにCPUが書き込もうとする競合を防ぎます。
        var inputShape = new TensorShape(1, ObservationBufferSize * DataDimension);
        using var inputTensor = new Tensor<float>(inputShape); // 'using'で自動的にDisposeされ、メモリリークを防ぎます。

        // 観測データを新しいテンソルに書き込みます。
        float[] flatObservations = observationBuffer.SelectMany(obs => obs).ToArray();
        for (int i = 0; i < flatObservations.Length; i++)
        {
            inputTensor[i] = flatObservations[i];
        }

        if (enableDebugLogs)
        {
            // Tensor<float>にToReadOnlyArray()は存在しないため、手動で値を取得
            int inputTensorElementCount = inputTensor.shape.length;
            var tensorValues = string.Join(", ", Enumerable.Range(0, Mathf.Min(10, inputTensorElementCount)).Select(i => inputTensor[i])); // 先頭10個だけ表示
            Debug.Log($"<color=green>[Inference Input]</color> Input Tensor: {inputTensor.ToString()}, Values: [{tensorValues}]");
        }

        inferenceSchedule = engine.ScheduleIterable(inputTensor);
    }


    /// <summary>
    /// 推論結果（目標速度）をAIマレットのRigidbodyに適用する。
    /// </summary>
    void ApplyAction(float velocityX, float velocityZ)
    {

        float scaledVelocityX = velocityX * moveSpeed;
        float scaledVelocityZ = velocityZ * moveSpeed;
        
        // ZとXの順番が逆になっていたのを修正
        Vector3 targetVelocity = new Vector3(scaledVelocityX, 0f, scaledVelocityZ);
        
        if (enableDebugLogs)
        {
            Debug.Log($"<color=orange>[Action]</color> Applying Scaled Velocity: {targetVelocity.ToString("F3")}");
        }

        selfRigidbody.linearVelocity = targetVelocity;
    }

    void OnDestroy()
    {
        engine?.Dispose();
        inputTensor?.Dispose();
    }
}
