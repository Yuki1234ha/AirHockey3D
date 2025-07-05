// PuckHitController.cs
// パックを打ち返す機能に特化したスクリプト。
// ★★★ ヒットストップ機能を追加 ★★★

using UnityEngine;
using System.Collections;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

[RequireComponent(typeof(CapsuleCollider))]
public class PuckHitController : MonoBehaviour
{
    [Header("アシスト設定")]
    [Tooltip("アシスト機能が作動する、手の最低スイング速度")]
    public float minAssistVelocity = 1.0f;
    [Tooltip("アシストヒット時の打撃力を調整する係数")]
    public float assistImpactMultiplier = 1.5f;
    [Tooltip("アシスト判定の最大の長さ（高さ）")]
    public float maxAssistHeight = 1.2f;

    [Header("半径縮小設定")]
    [Tooltip("アシスト成功時に縮小する半径の量")]
    public float radiusShrinkAmount = 0.05f;
    [Tooltip("アシスト半径の最小値")]
    public float minRadius = 0.34f;

    [Header("ヒットストップ設定")]
    [Tooltip("ヒットストップの最大時間（秒）")]
    public float maxHitStopDuration = 0.1f;
    [Tooltip("ヒットストップの最小時間（秒）")]
    public float minHitStopDuration = 0.0f;
    [Tooltip("ヒットストップ中の時間の進み方（0で完全停止）")]
    [Range(0f, 1f)]
    public float hitStopTimescale = 0.1f;

    [Header("Interaction SDK 設定")]
    [Tooltip("親オブジェクトにアタッチされているHandGrabInteractable")]
    public HandGrabInteractable interactableObject;

    [Header("衝突設定")]
    [Tooltip("接触後、親オブジェクト全体の当たり判定を無視する時間")]
    public float ignoreCollisionDuration = 0.3f;
    [Header("連携設定")]
    [Tooltip("フィードバックを提供するためのPuckFeedbackController")]
    public PuckFeedbackController puckFeedbackController;
    [Header("プレイヤー設定")]
    [Tooltip("プレイヤーの向きの基準となるTransform（OVRCameraRigのTrackingSpaceなど）")]
    public Transform playerTrackingSpace;

    // --- 内部変数 ---
    private CapsuleCollider assistTriggerCollider;
    private IInteractableView interactable;
    public HandGrabInteractor grabbingInteractor { get; private set; } = null;
    public Vector3 grabberVelocity;
    private float initialRadius;
    private float initialHeight;
    public bool canHit = true; 

    [Header("追従設定")]
    [Tooltip("追従する親オブジェクト（paddle1など）のTransform")]
    public Transform targetToFollow;
    [Tooltip("位置をリセットする対象のRigidbody")]
    public Rigidbody targetRigidbody;

    [Header("追従制御")]
    [Tooltip("物理マレットについているPlanarFollowerスクリプト")]
    public PlanarFollower planarFollower;
    private int HitShrinkCount = 0;
    private Vector3 initialPosition;
    public float CurrentRadius => assistTriggerCollider != null ? assistTriggerCollider.radius : 0f;

    void Awake()
    {
        assistTriggerCollider = GetComponent<CapsuleCollider>();
        initialRadius = assistTriggerCollider.radius;
        initialHeight = assistTriggerCollider.height;
        canHit = true;

        if (targetRigidbody != null)
        {
            initialPosition = targetRigidbody.position;
        }

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

    private void HandleInteractorViewAdded(IInteractorView interactorView)
    {
        grabbingInteractor = interactorView as HandGrabInteractor;
        if (grabbingInteractor != null)
        {
            assistTriggerCollider.radius = initialRadius;
            Debug.Log($"<color=green>PuckHitController Grabbed. Radius reset to {initialRadius}.</color>");
        }
    }

    private void HandleInteractorViewRemoved(IInteractorView interactorView)
    {
        if ((Object)interactorView == grabbingInteractor)
        {
            grabbingInteractor = null;
            grabberVelocity = Vector3.zero;
            ResetAssistCollider();

            if (targetRigidbody != null)
            {
                targetRigidbody.position = initialPosition;
                targetRigidbody.linearVelocity = Vector3.zero;
                targetRigidbody.angularVelocity = Vector3.zero;
                Debug.Log($"<color=cyan>Mallet position reset to {initialPosition}.</color>");
            }
        }
    }

    void FixedUpdate()
    {
        if (grabbingInteractor != null && grabbingInteractor.Hand != null)
        {
            OVRInput.Controller controller = (grabbingInteractor.Hand.Handedness == Handedness.Left) ? OVRInput.Controller.LTouch : OVRInput.Controller.RTouch;
            Vector3 localVelocity = OVRInput.GetLocalControllerVelocity(controller);
            Quaternion trackingSpaceRotation = playerTrackingSpace.rotation;
            grabberVelocity = trackingSpaceRotation * localVelocity;
            AdjustAssistCollider();
        }
    }

    private void AdjustAssistCollider()
    {
        Vector3 velocityXZ = new Vector3(grabberVelocity.x, 0, grabberVelocity.z);
        float speed = velocityXZ.magnitude;

        if (speed < 0.01f)
        {
            ResetAssistCollider();
            Debug.Log($"<color=yellow>Assist collider reset due to low speed: {speed}</color>");
            return;
        }

        float normalizedSpeed = Mathf.Clamp01(speed / minAssistVelocity);
        assistTriggerCollider.height = Mathf.Lerp(initialHeight, maxAssistHeight, normalizedSpeed);
        Quaternion targetRotation = Quaternion.LookRotation(velocityXZ.normalized);
        transform.rotation = targetRotation;
    }

    private void ResetAssistCollider()
    {
        if (assistTriggerCollider != null)
        {
            assistTriggerCollider.height = initialHeight;
        }
        if (targetToFollow != null)
        {
            transform.position = targetToFollow.position;
            transform.rotation = targetToFollow.rotation;
        }
    }

    [System.Obsolete]
    void OnTriggerEnter(Collider other)
    {
        if (!canHit || grabbingInteractor == null || grabberVelocity.magnitude < minAssistVelocity) return;

        if (other.CompareTag("Puck"))
        {
            Debug.Log($"<color=green>Hit detected with puck: {other.name} at position {other.transform.position}</color>");
            // アシストの強度を計算 (0.0 - 1.0)
            float intensity = Mathf.InverseLerp(initialHeight, maxAssistHeight, assistTriggerCollider.height);

            if (puckFeedbackController != null)
            {
                Debug.Log($"<color=blue>Providing feedback with intensity: {intensity}</color>");
                puckFeedbackController.ProvideFeedback(intensity, other.ClosestPoint(transform.position));
            }
            
            EpisodeLogger.Instance.LogHit(this, other, true);
            TriggerAssist(other);
        }
    }

    /// <summary>
    /// ★★★ 新規追加: 指定した時間だけゲームの時間を遅くするコルーチン ★★★
    /// </summary>
    private IEnumerator HitStopCoroutine(float duration)
    {
        if (duration <= 0) yield break;

        // 元の時間の進み方を保存
        float originalTimescale = Time.timeScale;
        Time.timeScale = hitStopTimescale;

        // 時間の進み方の影響を受けないリアルタイム秒数で待機
        yield return new WaitForSecondsRealtime(duration);

        // 時間の進み方を元に戻す
        Time.timeScale = originalTimescale;
    }

    [System.Obsolete]
    void TriggerAssist(Collider puckCollider)
    {
        Rigidbody puckRigidbody = puckCollider.GetComponent<Rigidbody>();
        if (puckRigidbody == null) return;
        Vector3 malletPosXZ = new Vector3(transform.position.x, 0, transform.position.z);
        Vector3 puckPosXZ = new Vector3(puckCollider.transform.position.x, 0, puckCollider.transform.position.z);
        Vector3 idealNormalXZ = (malletPosXZ - puckPosXZ).normalized;
        Vector3 grabberVelocityXZ = new Vector3(grabberVelocity.x, 0, grabberVelocity.z);
        Vector3 reflectionXZ = Vector3.Reflect(grabberVelocityXZ, idealNormalXZ) * -1;
        float speedXZ = grabberVelocityXZ.magnitude;
        Vector3 finalVelocity = reflectionXZ.normalized * speedXZ * assistImpactMultiplier;
        puckRigidbody.velocity = finalVelocity;
        Debug.Log($"<color=green>Assist triggered! New puck velocity: {finalVelocity}</color>");
        DisableAllCollisionsForDuration(ignoreCollisionDuration);
        // ★★★ 追加: ヒットストップを開始 ★★★
        float intensity = Mathf.InverseLerp(initialHeight, maxAssistHeight, assistTriggerCollider.height);
        float hitStopDuration = Mathf.Lerp(minHitStopDuration, maxHitStopDuration, intensity);
        if(planarFollower != null)
        {
            planarFollower.PauseFollowing(hitStopDuration); 
        }
    }

    public void ShrinkAssistRadius()
    {
        float newRadius = assistTriggerCollider.radius - radiusShrinkAmount;
        assistTriggerCollider.radius = Mathf.Max(newRadius, minRadius);
    }
    
    public void SetRadius(float newRadius)
    {
        assistTriggerCollider.radius = Mathf.Max(newRadius, minRadius);
    }

    private IEnumerator DisableAllCollisionsForDuration(float duration)
    {
        canHit = false;
        Collider[] allPaddleColliders = targetToFollow.GetComponentsInChildren<Collider>();
        foreach (var col in allPaddleColliders) col.enabled = false;
        yield return new WaitForSeconds(duration);
        foreach (var col in allPaddleColliders)
        {
            if (col != null) col.enabled = true;
        }
        canHit = true;
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
