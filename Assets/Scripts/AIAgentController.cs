// AIAgentController.cs
// Unity 6およびInference Engineの最新サンプルコードの仕様に準拠したONNXモデル制御スクリプト。
// AIマレットを制御します。

using UnityEngine;
using Unity.InferenceEngine; // サンプルコードに合わせ、名前空間をInferenceEngineに指定
using System.Collections.Generic;
using System.Linq;

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
    [Tooltip("モデルの出力に掛ける速度の乗数")]
    public float actionMultiplier = 1.6f;

    [Tooltip("モデルへの入力として使用する過去のフレーム数")]
    private const int ObservationBufferSize = 10;

    [Tooltip("1フレームあたりの観測データの次元数")]
    private const int DataDimension = 10;

    // --- Inference Engine関連 ---
    private Model runtimeModel;
    private Worker engine; // サンプルコードに合わせ、具象クラスのWorkerを使用
    private Tensor<float> inputTensor; // ジェネリック版のTensor<T>を使用

    // --- 観測データ関連 ---
    private readonly List<float[]> observationBuffer = new List<float[]>();

    void Start()
    {
        // --- 必須コンポーネントの確認 ---
        if (selfRigidbody == null) selfRigidbody = GetComponent<Rigidbody>();
        if (selfRigidbody == null)
        {
            Debug.LogError("AIマレットにRigidbodyがアタッチされていません。", this);
            this.enabled = false;
            return;
        }

        // --- Inference Engineの初期化 ---
        // 1. モデルのロード
        runtimeModel = ModelLoader.Load(modelAsset);

        // 2. 推論エンジンの作成 (サンプルコードのスタイルに準拠)
        // CreateWorkerの代わりに、Workerのコンストラクタを直接呼び出します。
        engine = new Worker(runtimeModel, BackendType.GPUCompute);

        // 3. 入力テンソルの準備
        var inputShape = new TensorShape(1, ObservationBufferSize * DataDimension);
        inputTensor = new Tensor<float>(inputShape);

        Debug.Log("ONNXモデルをロードし、推論エンジンの準備が完了しました。");
    }

    void FixedUpdate()
    {
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

        // Unity 6では Rigidbody.velocity の代わりに linearVelocity を使用
        currentObservation[0] = selfRigidbody.position.x;
        currentObservation[1] = selfRigidbody.position.z;
        currentObservation[2] = selfRigidbody.linearVelocity.x;
        currentObservation[3] = selfRigidbody.linearVelocity.z;

        currentObservation[4] = playerMallet.position.x - selfRigidbody.position.x;
        currentObservation[5] = playerMallet.position.z - selfRigidbody.position.z;

        currentObservation[6] = puckRigidbody.position.x - selfRigidbody.position.x;
        currentObservation[7] = puckRigidbody.position.z - selfRigidbody.position.z;
        currentObservation[8] = puckRigidbody.linearVelocity.x;
        currentObservation[9] = puckRigidbody.linearVelocity.z;

        for (int i = 0; i < DataDimension; i++)
        {
            currentObservation[i] /= 10.0f;
        }

        observationBuffer.Add(currentObservation);
        if (observationBuffer.Count > ObservationBufferSize)
        {
            observationBuffer.RemoveAt(0);
        }
    }

    /// <summary>
    /// ONNXモデルに現在の観測データを渡し、推論を実行して行動を決定・適用する。
    /// </summary>
    void RequestDecision()
    {
        // 1. 新しい入力テンソルを毎フレーム作成する
        // 既存の inputTensor は破棄し、新しいものを作成します。
        // これにより、前フレームのGPU処理による影響を受けなくなります。
        inputTensor?.Dispose(); // 既存のテンソルがあれば破棄
        var inputShape = new TensorShape(1, ObservationBufferSize * DataDimension);
        inputTensor = new Tensor<float>(inputShape); // 新しいテンソルを作成
        
        float[] flatObservations = observationBuffer.SelectMany(obs => obs).ToArray();
        for (int i = 0; i < flatObservations.Length; i++)
        {
            inputTensor[i] = flatObservations[i]; // ここに書き込み
        }
        
        engine.Schedule(inputTensor);

        var outputTensor = engine.PeekOutput() as Tensor<float>;

        float targetVelocityX = outputTensor[0];
        float targetVelocityZ = outputTensor[1];

        ApplyAction(targetVelocityX, targetVelocityZ);

        // 必要に応じて、outputTensorもDisposeすることを検討
        // PeekOutput() は内部的なテンソルへの参照を返すので、
        // 明示的なDisposeは不要かもしれませんが、メモリリークを避けるために考慮する価値はあります。
        // ただし、Inference Engineのドキュメントで推奨されている場合はそれに従ってください。
        // 現在のサンプルコードの一般的なパターンでは、outputTensorはエンジンが管理する傾向にあります。
    }
    /// <summary>
    /// 推論結果（目標速度）をAIマレットのRigidbodyに適用する。
    /// </summary>
    void ApplyAction(float velocityX, float velocityZ)
    {
        float scaledVelocityX = velocityX * actionMultiplier;
        float scaledVelocityZ = velocityZ * actionMultiplier;
        Vector3 targetVelocity = new Vector3(scaledVelocityZ,0f, scaledVelocityX);
        
        // Unity 6では Rigidbody.velocity の代わりに linearVelocity を使用
        selfRigidbody.linearVelocity = targetVelocity;
    }

    void OnDestroy()
    {
        // アプリケーション終了時にリソースを解放する
        engine?.Dispose();
        inputTensor?.Dispose();
    }
}
