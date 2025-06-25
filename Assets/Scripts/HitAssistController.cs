// HitAssistController.cs (Interaction SDK最終版)
// Oculus Interaction SDK (Unity 6系) の正しいイベントモデルに対応。
// WhenSelectingInteractorViewAdded/Removedイベントを利用してグラブ状態を検知します。

using UnityEngine;
using System.Collections;
using System.Linq;
// Oculus Interaction SDKに必要なusingディレクティブ
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

[RequireComponent(typeof(Rigidbody))]
public class HitAssistController : MonoBehaviour
{
    [Header("アシスト設定")]
    [Tooltip("アシスト機能が作動する、手の最低スイング速度")]
    public float minAssistVelocity = 1.0f;

    [Tooltip("アシストヒット時の打撃力を調整する係数")]
    public float assistImpactMultiplier = 1.5f;

    [Tooltip("アシスト判定を行う球体（Sphere）のコライダー。子のAssistAreaオブジェクトなどを設定")]
    public SphereCollider assistSphereCollider;

    [Tooltip("物理的に衝突するマレット本体のコライダー")]
    public Collider physicalMalletCollider;


    [Header("フィードバック設定")]
    [Tooltip("アシストヒット時に再生する効果音")]
    public AudioClip assistHitSound;
    [Tooltip("【シーンに配置済みの】ループ再生させるパーティクルエフェクト")]
    public ParticleSystem assistHitEffect;
    [Tooltip("エフェクトが見える時間（秒）")]
    public float effectVisibleDuration = 1.0f;
    [Tooltip("効果音を再生するAudioSource（任意）。未設定の場合はこのオブジェクトのものを探します")]
    public AudioSource assistHitAudioSource;

    [Header("衝突設定")]
    [Tooltip("アシスト後、物理マレットとパックの当たり判定を無視する時間")]
    public float ignoreCollisionDuration = 0.2f;

    [Header("Interaction SDK 設定")]
    [Tooltip("このオブジェクトにアタッチされているHandGrabInteractableコンポーネント")]
    public HandGrabInteractable interactableObject;

    [Tooltip("追従する対象のTransformを設定します")]
    public Transform target;
    [Tooltip("振動の継続時間（秒）")]
    public float vibrationDuration = 0.1f;

    // --- 内部変数 ---
    private Rigidbody selfRigidbody;
    private IInteractableView interactable; // IInteractableViewとして参照を保持
    private HandGrabInteractor grabbingInteractor = null;
    private Vector3 previousGrabberPosition;
    private Vector3 grabberVelocity;

    // エフェクトを隠しておくための、カメラから遠い待機場所
    private readonly Vector3 effectWaitPosition = new Vector3(0, -30, 0);
    // エフェクトを戻すコルーチンを管理するための変数
    private Coroutine returnEffectCoroutine;

    // Awakeでコンポーネントの参照を取得
    void Awake()
    {
        selfRigidbody = GetComponent<Rigidbody>();
        interactable = interactableObject != null ? interactableObject : GetComponent<HandGrabInteractable>();

        if (interactable == null)
        {
            Debug.LogError("HandGrabInteractableコンポーネントが見つかりません！このGameObjectにアタッチしてください。", this);
            this.enabled = false;
        }
    }

    // OnEnable/OnDisableでイベントの登録・解除を行うのが安全な作法
    void OnEnable()
    {
        if (interactable != null)
        {
            // ★★★ 正しいイベントに登録 ★★★
            interactable.WhenSelectingInteractorViewAdded += HandleInteractorViewAdded;
            interactable.WhenSelectingInteractorViewRemoved += HandleInteractorViewRemoved;
        }
    }

    void OnDisable()
    {
        if (interactable != null)
        {
            // ★★★ 登録したイベントを解除 ★★★
            interactable.WhenSelectingInteractorViewAdded -= HandleInteractorViewAdded;
            interactable.WhenSelectingInteractorViewRemoved -= HandleInteractorViewRemoved;
        }
    }

    void Start()
    {
        // エフェクトの初期設定
        if (assistHitEffect != null)
        {
            assistHitEffect.transform.position = effectWaitPosition;
        }
        else
        {
            Debug.LogWarning("assistHitEffect がInspectorで設定されていません。", this);
        }
    }
    // オブジェクトが掴まれた時に呼ばれる
    private void HandleInteractorViewAdded(IInteractorView interactorView)
    {
        // イベントを発生させたInteractorをHandGrabInteractorとして取得
        grabbingInteractor = interactorView as HandGrabInteractor;
        if (grabbingInteractor != null)
        {
            // 速度計算のために初期位置を記録
            previousGrabberPosition = grabbingInteractor.transform.position;
            Debug.Log($"<color=green>Grabbed by: {grabbingInteractor.name}</color>");
        }
    }

    // オブジェクトが離された時に呼ばれる
    private void HandleInteractorViewRemoved(IInteractorView interactorView)
    {
        // 離したInteractorが、現在掴んでいるInteractorと同じか確認
        if ((object)interactorView == grabbingInteractor)
        {
            Debug.Log($"<color=red>Released by: {grabbingInteractor.name}</color>");
            grabbingInteractor = null;
            grabberVelocity = Vector3.zero;
        }
    }

    void Update()
    {
        // オブジェクトが掴まれている間だけ、コントローラーの物理的な速度を取得する
        if (grabbingInteractor != null)
        {
            IHand hand = grabbingInteractor.Hand;
            if (hand != null)
            {
                // 掴んでいる手から左右のコントローラーを特定
                OVRInput.Controller controller = (hand.Handedness == Handedness.Left) 
                    ? OVRInput.Controller.LTouch 
                    : OVRInput.Controller.RTouch;
                
                // 追跡空間におけるコントローラーのローカル速度を取得（これが物理的なスイング速度）
                grabberVelocity = OVRInput.GetLocalControllerVelocity(controller);
            }
        }
    }

    [System.Obsolete]
    // void FixedUpdate()
    // {
    //     // オブジェクトが掴まれている間だけ、速度を計算してアシスト判定を行う
    //     if (grabbingInteractor != null)
    //     {
    //         Vector3 currentPosition = grabbingInteractor.transform.position;
    //         Vector3 movementDelta = currentPosition - previousGrabberPosition;
    //         grabberVelocity = movementDelta / Time.fixedDeltaTime;
    //         float moveDistance = movementDelta.magnitude;

    //         if (moveDistance > 0.001f && grabberVelocity.magnitude > minAssistVelocity)
    //         {
    //             RaycastHit[] hits = Physics.SphereCastAll(previousGrabberPosition, assistSphereCollider.radius, movementDelta.normalized, moveDistance);
    //             Debug.Log($"SphereCast hit {hits.Length} objects");
    //             if (hits.Length > 0)
    //             {
    //                 foreach (var hit in hits)
    //                 {
    //                     Debug.Log($"Hit: {hit.collider.name} at distance {hit.collider.tag}");
    //                     if (hit.collider.CompareTag("Puck"))
    //                     {
    //                         Debug.Log($"Assist hit: {hit.collider.name} at distance {hit.distance}");
    //                         TriggerAssist(hit.collider, hit.point);
    //                         break;
    //                     }
    //                 }
    //             }
    //         }
    //         previousGrabberPosition = currentPosition;
    //     }
    // }
    void OnTriggerEnter(Collider other)
    {
        Debug.Log($"<color=blue>OnTriggerEnter: {other.name} with tag {other.tag} with layer {other.gameObject.layer}</color>");
        // 掴まれていない、または速度が足りない場合は何もしない
        if (grabbingInteractor == null || grabberVelocity.magnitude < minAssistVelocity)
        {
            Debug.Log($"<color=red>OnTriggerEnter: {other.name} with tag {other.tag} - Ignored due to low velocity or not grabbed</color>");
            return;
        }


        // 衝突した相手が "Puck" タグを持っている場合
        if (other.CompareTag("Puck"))
        {
            // デバッグ用ログ
            Debug.Log($"Assist hit: {other.name} at position {other.transform.position}");
            // ヒットポイントは、接触したパックの中心位置とする
            Vector3 hitPoint = other.transform.position;
            TriggerAssist(other, hitPoint);
        }
    }

    [System.Obsolete]
    void TriggerAssist(Collider puckCollider, Vector3 hitPoint)
    {
        Rigidbody puckRigidbody = puckCollider.GetComponent<Rigidbody>();
        if (puckRigidbody == null) return;

        Vector3 idealNormal = (transform.position - puckCollider.transform.position).normalized;
        Vector3 reflection = Vector3.Reflect(grabberVelocity, idealNormal);
        puckRigidbody.velocity = reflection.normalized * grabberVelocity.magnitude * assistImpactMultiplier;

        ProvideHapticFeedback();
        PlayAssistSound();
        PlayAssistEffect(hitPoint);
        StartCoroutine(IgnoreCollision(puckCollider));
    }

    void PlayAssistEffect(Vector3 position)
    {
        if (assistHitEffect == null) return;

        if (returnEffectCoroutine != null)
        {
            StopCoroutine(returnEffectCoroutine);
        }

        assistHitEffect.transform.position = position;

        returnEffectCoroutine = StartCoroutine(ReturnEffectToWaitPosition());
    }

    private IEnumerator ReturnEffectToWaitPosition()
    {
        yield return new WaitForSeconds(effectVisibleDuration);
        assistHitEffect.transform.position = effectWaitPosition;
    }

    void ProvideHapticFeedback()
    {
        if (grabbingInteractor != null)
        {
            IHand hand = grabbingInteractor.Hand;
            if (hand != null)
            {
                OVRInput.Controller controllerToVibrate = (hand.Handedness == Handedness.Left) 
                    ? OVRInput.Controller.LTouch 
                    : OVRInput.Controller.RTouch;
                StartCoroutine(VibrateForDuration(controllerToVibrate));
            }
        }
    }

    private IEnumerator VibrateForDuration(OVRInput.Controller controller)
    {
        // 振動を開始
        OVRInput.SetControllerVibration(0.8f, 0.8f, controller);

        // 指定した時間待機
        yield return new WaitForSeconds(vibrationDuration);

        // 振動を停止
        OVRInput.SetControllerVibration(0, 0, controller);
    }

    void PlayAssistSound()
    {
        var audioSource = assistHitAudioSource != null ? assistHitAudioSource : GetComponent<AudioSource>();
        if (audioSource != null && assistHitSound != null) audioSource.PlayOneShot(assistHitSound);
    }

    private IEnumerator IgnoreCollision(Collider puckCollider)
    {
        // パックのコライダーが存在しない場合は処理を中断
        if (puckCollider == null) yield break;

        // このオブジェクト（paddle1）とその子に含まれる全てのコライダーを取得
        Collider[] allPaddleColliders = GetComponentsInChildren<Collider>();

        // 全てのコライダーとパックの衝突を一時的に無効化
        foreach(Collider paddleCollider in allPaddleColliders)
        {
            if (paddleCollider != null) // コライダーが破棄されていないか確認
            {
                Physics.IgnoreCollision(paddleCollider, puckCollider, true);
            }
        }

        // 指定した時間だけ待機
        yield return new WaitForSeconds(ignoreCollisionDuration);

        // オブジェクトが破棄されていないか確認してから、衝突を再度有効化
        if(puckCollider != null)
        {
            foreach(Collider paddleCollider in allPaddleColliders)
            {
                // paddleColliderも破棄されていないか確認
                if (paddleCollider != null)
                {
                    Physics.IgnoreCollision(paddleCollider, puckCollider, false);
                }
            }
        }
    }

    void LateUpdate()
    {
        // 追従対象が設定されていなければ、何もしない
        if (target == null)
        {
            return;
        }

        // 1. 対象の回転を基準に、自身の回転を設定する
        transform.rotation = target.rotation;

        // 2. 対象の位置と回転を基準に、自身の位置を設定する
        transform.position = target.position;
    }
}
