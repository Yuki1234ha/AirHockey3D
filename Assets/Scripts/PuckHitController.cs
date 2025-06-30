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
    [Header("連携設定")]
    [Tooltip("フィードバックを提供するためのPuckFeedbackController")]
    public PuckFeedbackController puckFeedbackController;
    [Header("プレイヤー設定")]
    [Tooltip("プレイヤーの向きの基準となるTransform（OVRCameraRigのTrackingSpaceなど）")]
    public Transform playerTrackingSpace;

    // --- 内部変数 ---
    
    private SphereCollider assistTriggerCollider;
    private IInteractableView interactable;
    public HandGrabInteractor grabbingInteractor { get; private set; } = null; // ロガーから参照される可能性
    public Vector3 grabberVelocity;
    private float initialRadius;
    public bool canHit = true; 

    [Header("追従設定")]
    [Tooltip("追従する親オブジェクト（paddle1など）のTransform")]
    public Transform targetToFollow;
    [Header("追従制御")]
    [Tooltip("物理マレットについているPlanarFollowerスクリプト")]
    public PlanarFollower planarFollower;
    private int HitShrinkCount = 0;

    void Awake()
    {
        // 自身のSphereColliderを取得し、初期半径を保存
        assistTriggerCollider = GetComponent<SphereCollider>();
        initialRadius = assistTriggerCollider.radius;
        canHit = true; // 初期状態ではヒット可能

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
        if (grabbingInteractor != null && grabbingInteractor.Hand != null)
        {
            OVRInput.Controller controller = (grabbingInteractor.Hand.Handedness == Handedness.Left) ? OVRInput.Controller.LTouch : OVRInput.Controller.RTouch;
            
            // 1. コントローラーのローカル速度を取得
            Vector3 localVelocity = OVRInput.GetLocalControllerVelocity(controller);
            
            // 2. プレイヤーの現在の向き（回転）を取得
            Quaternion trackingSpaceRotation = playerTrackingSpace.rotation;
            
            // 3. ローカル速度をプレイヤーの向きに合わせて回転させ、ワールド空間での正しい速度ベクトルに変換する
            grabberVelocity = trackingSpaceRotation * localVelocity;
        }
    }

    [System.Obsolete]
    void OnTriggerEnter(Collider other)
    {
        // 掴まれていない、または速度が足りない場合は処理を中断
        // ヒットが許可されていない、掴んでいない、またはパックでない場合は処理しない
        if (!canHit || grabbingInteractor == null || grabberVelocity.magnitude < minAssistVelocity) return;

        // 接触した相手が"Puck"タグを持っている場合のみ処理を実行
        if (other.CompareTag("Puck"))
        {
            // if(MotionDataLogger.Instance != null)
            // {
            //     MotionDataLogger.Instance.LogAssistedHit(other, assistTriggerCollider, grabbingInteractor);
            // }
            EpisodeLogger.Instance.LogHit(this, other, true);

            // ヒットフィードバックを提供
            puckFeedbackController?.ProvideHapticFeedback();
            puckFeedbackController?.PlayHitSound();
            puckFeedbackController?.PlayHitEffect(other.ClosestPoint(transform.position));
            // アシストが作動した場合のみ、打ち返しと半径縮小を実行
            Debug.Log($"<color=blue>PuckHitController: Assist triggered with velocity {grabberVelocity} collision with {other.gameObject.name}</color>");
            TriggerAssist(other);
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
        Vector3 reflectionXZ = Vector3.Reflect(grabberVelocityXZ, idealNormalXZ) *  -1; // 反射ベクトルを反転
        float speedXZ = grabberVelocityXZ.magnitude;
        Vector3 finalVelocity = reflectionXZ.normalized * speedXZ * assistImpactMultiplier;
        puckRigidbody.velocity = finalVelocity;
        Debug.Log($"<color=green>PuckHitController: Puck velocity set to {finalVelocity}</color>");

        HitShrinkCount++;
        // 4. アシスト成功時に半径を縮小
        if (HitShrinkCount % 5 == 0) // 5回ヒットごとに半径を縮小
        {
            ShrinkAssistRadius();
        }
        // 5. パックの衝突を一時的に無視する
        DisableAllCollisionsForDuration(ignoreCollisionDuration);
        if(planarFollower != null)
        {
                // PuckHitControllerにはignoreCollisionDurationがないため、
                // 一時的に固定値（例: 0.2f）を使うか、フィールドを追加してください。
                planarFollower.PauseFollowing(ignoreCollisionDuration); 
        }
    }

    void ShrinkAssistRadius()
    {
        float newRadius = assistTriggerCollider.radius - radiusShrinkAmount;
        // 半径が最小値より小さくならないように制限
        assistTriggerCollider.radius = Mathf.Max(newRadius, minRadius);
        Debug.Log($"<color=orange>Assist Radius shrunk to: {assistTriggerCollider.radius}</color>");
    }

    private IEnumerator DisableAllCollisionsForDuration(float duration)
    {
        canHit = false; // 次のヒット判定を無効化
        
        // 親オブジェクト（targetToFollow）とその全ての子のコライダーを取得
        Collider[] allPaddleColliders = targetToFollow.GetComponentsInChildren<Collider>();

        // 全てのコライダーを無効化
        foreach (var col in allPaddleColliders)
        {
            col.enabled = false;
        }

        // 指定した時間だけ待機
        yield return new WaitForSeconds(duration);

        // 全てのコライダーを再度有効化
        foreach (var col in allPaddleColliders)
        {
            // 待機中にオブジェクトが破棄されている可能性を考慮
            if (col != null)
            {
                col.enabled = true;
            }
        }
        
        canHit = true; // ヒット判定を再度有効化
        Debug.Log("<color=lime>All paddle colliders re-enabled.</color>");
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

