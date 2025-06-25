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

    void FixedUpdate()
    {
        // オブジェクトが掴まれている間だけ、速度を計算する
        if (grabbingInteractor != null)
        {
            Vector3 currentPosition = grabbingInteractor.transform.position;
            Vector3 movementDelta = currentPosition - previousGrabberPosition;
            // Time.deltaTimeで割ることで、フレームレートに依存しない秒速を計算
            grabberVelocity = movementDelta / Time.deltaTime;
            previousGrabberPosition = currentPosition;
            Debug.Log($"<color=green>Grabber Velocity: {grabberVelocity.magnitude}</color>");
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
                OVRInput.SetControllerVibration(0.8f, 0.8f, controllerToVibrate);
            }
        }
    }
    
    void PlayAssistSound()
    {
        var audioSource = assistHitAudioSource != null ? assistHitAudioSource : GetComponent<AudioSource>();
        if (audioSource != null && assistHitSound != null) audioSource.PlayOneShot(assistHitSound);
    }

    private IEnumerator IgnoreCollision(Collider puckCollider)
    {
        if (physicalMalletCollider == null || puckCollider == null) yield break;
        Physics.IgnoreCollision(physicalMalletCollider, puckCollider, true);
        yield return new WaitForSeconds(ignoreCollisionDuration);
        if (physicalMalletCollider != null && puckCollider != null) Physics.IgnoreCollision(physicalMalletCollider, puckCollider, false);
    }
}
