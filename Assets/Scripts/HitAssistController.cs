// HitAssistController.cs (オブジェクトプール版)
// エフェクトを動的に生成するのではなく、シーンに配置済みのオブジェクトを移動・再生する方式に変更。
// これにより、Instantiate時の問題を完全に回避します。

using UnityEngine;
using System.Collections;
using System.Linq;

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
    [Tooltip("【シーンに配置済みの】パーティクルエフェクトオブジェクト")]
    public ParticleSystem assistHitEffect; // ★★★ Inspectorからシーン上のオブジェクトをアタッチ ★★★
    [Tooltip("効果音を再生するAudioSource（任意）。未設定の場合はこのオブジェクトのものを探します")]
    public AudioSource assistHitAudioSource;

    [Header("衝突設定")]
    [Tooltip("アシスト後、物理マレットとパックの当たり判定を無視する時間")]
    public float ignoreCollisionDuration = 0.2f;

    [Header("OVRGrabbableがアタッチされたオブジェクト")]
    public OVRGrabbable grabbableObject;

    // --- 内部変数 ---
    private Rigidbody selfRigidbody;
    private OVRGrabbable grabbable;
    private OVRGrabber grabbedBy = null;
    private Vector3 previousGrabberPosition;
    private Vector3 grabberVelocity;
    // エフェクトを隠しておくための、カメラから遠い待機場所
    private readonly Vector3 effectWaitPosition = new Vector3(0, -30, 0);
    private float effectVisibleDuration = 1.0f;
    // エフェクトを戻すコルーチンを管理するための変数
    private Coroutine returnEffectCoroutine;
    // 表す場所
    public Vector3 EffectWaitPosition;

    private int assistHitCount = 0; // アシストヒットの回数をカウントする変数
    void Start()
    {
        selfRigidbody = GetComponent<Rigidbody>();
        grabbable = grabbableObject != null ? grabbableObject : GetComponent<OVRGrabbable>();

        if (grabbable == null)
        {
            Debug.LogError("OVRGrabbableコンポーネントが見つかりません！", this);
            this.enabled = false;
            return;
        }
        // エフェクトの初期設定
        if (assistHitEffect != null)
        {
            // 最初に待機場所へ移動させておく
            assistHitEffect.transform.position = effectWaitPosition;
        }
        else
        {
            Debug.LogWarning("assistHitEffect がInspectorで設定されていません。", this);
        }
    }

    void Update()
    {
        if (grabbable.isGrabbed && grabbedBy == null)
        {
            grabbedBy = grabbable.grabbedBy;
            if (grabbedBy != null)
            {
                previousGrabberPosition = grabbedBy.transform.position;
            }
        }
        else if (!grabbable.isGrabbed && grabbedBy != null)
        {
            grabbedBy = null;
            grabberVelocity = Vector3.zero;
        }
    }

    [System.Obsolete]
    void FixedUpdate()
    {
        // assistHitCount++;
        // // アシストヒットの回数をカウント
        // if (assistHitCount % 400 == 0)
        // {
        //     assistHitEffect.transform.position = EffectWaitPosition;
        //     Debug.Log($"<color=lime>Effect moved to </color>");

        //     // 2. 一定時間後に待機場所へ戻す処理を開始する
        //     returnEffectCoroutine = StartCoroutine(ReturnEffectToWaitPosition());
        // }

        if (grabbedBy != null)
        {
            Vector3 currentPosition = grabbedBy.transform.position;
            Vector3 movementDelta = currentPosition - previousGrabberPosition;
            grabberVelocity = movementDelta / Time.fixedDeltaTime;
            float moveDistance = movementDelta.magnitude;

            if (moveDistance > 0.001f && grabberVelocity.magnitude > minAssistVelocity)
            {
                RaycastHit[] hits = Physics.SphereCastAll(previousGrabberPosition, assistSphereCollider.radius, movementDelta.normalized, moveDistance);

                if (hits.Length > 0)
                {
                    var sortedHits = hits.OrderBy(h => h.distance).ToArray();
                    foreach (var hit in sortedHits)
                    {
                        if (hit.collider.CompareTag("Puck"))
                        {
                            TriggerAssist(hit.collider, hit.point);
                            break;
                        }
                    }
                }
            }
            previousGrabberPosition = currentPosition;
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
        
        // もし既に戻す処理が実行中なら、一旦停止する（連続ヒット対策）
        if (returnEffectCoroutine != null)
        {
            StopCoroutine(returnEffectCoroutine);
        }

        // 1. ループ再生中のエフェクトをヒット地点に移動させる
        assistHitEffect.transform.position = position;
        Debug.Log($"<color=lime>Effect moved to {position}</color>");

        // 2. 一定時間後に待機場所へ戻す処理を開始する
        returnEffectCoroutine = StartCoroutine(ReturnEffectToWaitPosition());
    }

    void ProvideHapticFeedback()
    {
        if (grabbedBy != null) OVRInput.SetControllerVibration(0.8f, 0.8f, OVRInput.Controller.RTouch);
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
    
    // エフェクトを待機場所に戻すためのコルーチン
    private IEnumerator ReturnEffectToWaitPosition()
    {
        // 設定された時間だけ待つ
        yield return new WaitForSeconds(effectVisibleDuration);

        // 待機場所へ戻す
        assistHitEffect.transform.position = effectWaitPosition;
        Debug.Log("<color=orange>Effect returned to wait position.</color>");
    }
}
