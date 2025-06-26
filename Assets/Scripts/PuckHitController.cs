// PuckHitController.cs
// パックを打ち返す機能に特化したスクリプト。
// ヒットアシストが成功するたびに、当たり判定の半径が小さくなる。

using UnityEngine;
using System.Collections;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

// このスクリプトはSphereColliderが必須です
[RequireComponent(typeof(SphereCollider))]
public class PuckHitController : MonoBehaviour
{
    [Header("アシスト設定")]
    [Tooltip("アシスト機能が作動する、手の最低スイング速度")]
    public float minAssistVelocity = 1.0f;
    [Tooltip("アシストヒット時の打撃力を調整する係数")]
    public float assistImpactMultiplier = 1.5f;

    [Header("半径縮小設定")]
    [Tooltip("アシスト成功時に縮小する半径の量")]
    public float radiusShrinkAmount = 0.05f;
    [Tooltip("アシスト半径の最小値")]
    public float minRadius = 0.34f;

    [Header("Interaction SDK 設定")]
    [Tooltip("親オブジェクトにアタッチされているHandGrabInteractable")]
    public HandGrabInteractable interactableObject;

    [Header("衝突設定")]
    [Tooltip("接触後、親オブジェクト全体の当たり判定を無視する時間")]
    public float ignoreCollisionDuration = 0.3f;

    // --- 内部変数 ---
    private SphereCollider assistTriggerCollider;
    private IInteractableView interactable;
    private HandGrabInteractor grabbingInteractor = null;
    private Vector3 grabberVelocity;
    private float initialRadius;

    [Header("追従設定")]
    [Tooltip("追従する親オブジェクト（paddle1など）のTransform")]
    public Transform targetToFollow;

    void Awake()
    {
        // 自身のSphereColliderを取得し、初期半径を保存
        assistTriggerCollider = GetComponent<SphereCollider>();
        initialRadius = assistTriggerCollider.radius;

        // 親からHandGrabInteractableコンポーネントを探す
        interactable = interactableObject != null ? interactableObject : GetComponentInParent<HandGrabInteractable>();
        if (interactable == null)
        {
            Debug.LogError("HandGrabInteractableコンポーネントが見つかりません！親オブジェクトなどを確認してください。", this);
            this.enabled = false;
        }
    }

    void OnEnable()
    {
        if (interactable != null)
        {
            interactable.WhenSelectingInteractorViewAdded += HandleInteractorViewAdded;
            interactable.WhenSelectingInteractorViewRemoved += HandleInteractorViewRemoved;
        }
    }

    void OnDisable()
    {
        if (interactable != null)
        {
            interactable.WhenSelectingInteractorViewAdded -= HandleInteractorViewAdded;
            interactable.WhenSelectingInteractorViewRemoved -= HandleInteractorViewRemoved;
        }
    }

    // 掴んだ時に半径をリセット
    private void HandleInteractorViewAdded(IInteractorView interactorView)
    {
        grabbingInteractor = interactorView as HandGrabInteractor;
        if (grabbingInteractor != null)
        {
            assistTriggerCollider.radius = initialRadius;
            Debug.Log($"<color=green>PuckHitController Grabbed. Radius reset to {initialRadius}.</color>");
        }
    }

    // 離した手をリセット
    private void HandleInteractorViewRemoved(IInteractorView interactorView)
    {
        if ((Object)interactorView == grabbingInteractor)
        {
            grabbingInteractor = null;
            grabberVelocity = Vector3.zero;
        }
    }

    void FixedUpdate()
    {
        // 掴んでいる間だけ、正確な手のスイング速度を計算
        if (grabbingInteractor != null)
        {
            IHand hand = grabbingInteractor.Hand;
            if (hand != null)
            {
                OVRInput.Controller controller = (hand.Handedness == Handedness.Left)
                    ? OVRInput.Controller.LTouch
                    : OVRInput.Controller.RTouch;
                grabberVelocity = OVRInput.GetLocalControllerVelocity(controller);
            }
        }
    }

    [System.Obsolete]
    void OnTriggerEnter(Collider other)
    {
        // 掴まれていない、または速度が足りない場合は処理を中断
        if (grabbingInteractor == null || grabberVelocity.magnitude < minAssistVelocity)
        {
            return;
        }

        // 接触した相手が"Puck"タグを持っている場合のみ処理を実行
        if (other.CompareTag("Puck"))
        {
            TriggerAssist(other);
            // 衝突無視を開始
            StartCoroutine(IgnoreCollisionForDuration(other));
        }
    }

    [System.Obsolete]
    void TriggerAssist(Collider puckCollider)
    {
        Rigidbody puckRigidbody = puckCollider.GetComponent<Rigidbody>();
        if (puckRigidbody == null) return;

        // XZ平面上での反射計算
        Vector3 malletPosXZ = new Vector3(transform.position.x, 0, transform.position.z);
        Vector3 puckPosXZ = new Vector3(puckCollider.transform.position.x, 0, puckCollider.transform.position.z);
        Vector3 idealNormalXZ = (malletPosXZ - puckPosXZ).normalized;
        Vector3 grabberVelocityXZ = new Vector3(grabberVelocity.x, 0, grabberVelocity.z);
        Vector3 reflectionXZ = Vector3.Reflect(grabberVelocityXZ, idealNormalXZ);
        float speedXZ = grabberVelocityXZ.magnitude;
        Vector3 finalVelocity = reflectionXZ.normalized * speedXZ * assistImpactMultiplier;

        puckRigidbody.velocity = finalVelocity;
        Debug.Log($"<color=green>{grabberVelocity}Assist triggered! New puck velocity: {finalVelocity}</color>");
        // アシスト半径を縮小
        ShrinkAssistRadius();
    }

    void ShrinkAssistRadius()
    {
        float newRadius = assistTriggerCollider.radius - radiusShrinkAmount;
        // 半径が最小値より小さくならないように制限
        assistTriggerCollider.radius = Mathf.Max(newRadius, minRadius);
        Debug.Log($"<color=orange>Assist Radius shrunk to: {assistTriggerCollider.radius}</color>");
    }

    private IEnumerator IgnoreCollisionForDuration(Collider puckCollider)
    {
        if (puckCollider == null || targetToFollow == null) yield break;

        // 親オブジェクトとその全ての子のコライダーを取得
        Collider[] allPaddleColliders = targetToFollow.GetComponentsInChildren<Collider>();

        foreach (var paddleCollider in allPaddleColliders)
        {
            if (paddleCollider != null)
            {
                Physics.IgnoreCollision(paddleCollider, puckCollider, true);
            }
        }

        yield return new WaitForSeconds(ignoreCollisionDuration);

        if (puckCollider != null) // 待機中にパックが破棄されていないか確認
        {
            foreach (var paddleCollider in allPaddleColliders)
            {
                if (paddleCollider != null)
                {
                    Physics.IgnoreCollision(paddleCollider, puckCollider, false);
                }
            }
        }
    }

    void LateUpdate()
    {
        if (targetToFollow != null)
        {
            transform.position = targetToFollow.position;
            transform.rotation = targetToFollow.rotation;
        }
    }
}

