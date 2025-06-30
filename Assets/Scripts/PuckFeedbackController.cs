// PuckFeedbackController.cs
// パックとの接触を検知し、音と振動のフィードバックのみを提供するスクリプト。
// 打ち返し機能は持ちません。

using UnityEngine;
using System.Collections;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

public class PuckFeedbackController : MonoBehaviour
{
    [Tooltip("判定に使うSphereCollider")]
    public SphereCollider assistTriggerCollider;
    [Header("フィードバック設定")]
    [Tooltip("アシスト機能が作動する、手の最低スイング速度")]
    public float minAssistVelocity = 1.0f;
    [Tooltip("接触時に再生する効果音")]
    public AudioClip hitSound;
    [Tooltip("効果音を再生するためのAudioSourceコンポーネント")]
    public AudioSource audioSource;
    [Tooltip("【シーンに配置済みの】ループ再生させるパーティクルエフェクト")]
    public ParticleSystem hitEffect;
    [Tooltip("エフェクトが見える時間（秒）")]
    public float effectVisibleDuration = 0.5f;
    [Tooltip("振動の周波数")]
    [Range(0f, 1f)]
    public float vibrationFrequency = 0.8f;
    [Tooltip("振動の強度")]
    [Range(0f, 1f)]
    public float vibrationAmplitude = 0.8f;
    [Tooltip("振動の継続時間（秒）")]
    public float vibrationDuration = 0.1f;

    [Header("Interaction SDK 設定")]
    [Tooltip("親オブジェクトにアタッチされているHandGrabInteractable")]
    public HandGrabInteractable interactableObject;

    [Header("追従設定")]
    [Tooltip("追従する親オブジェクト（paddle1など）のTransform")]
    public Transform targetToFollow;
    [Header("連携設定")]
    [Tooltip("クールダウン状態を参照するためのPuckHitController")]
    public PuckHitController hitController;
    // --- 内部変数 ---
    private IInteractableView interactable;
    private HandGrabInteractor grabbingInteractor = null;
    private readonly Vector3 effectWaitPosition = new Vector3(0, -30, 0);
    private Coroutine returnEffectCoroutine;
    private Vector3 grabberVelocity;
    private float initialRadius;

    void Awake()
    {
        // 自身のSphereColliderを取得し、初期半径を保存
        //assistTriggerCollider = GetComponent<SphereCollider>();
        initialRadius = assistTriggerCollider.radius;
        // 自分または親からHandGrabInteractableコンポーネントを探す
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

    // 掴んだ手を記録
    private void HandleInteractorViewAdded(IInteractorView interactorView)
    {
        grabbingInteractor = interactorView as HandGrabInteractor;
    }

    // 離した手をリセット
    private void HandleInteractorViewRemoved(IInteractorView interactorView)
    {
        if ((object)interactorView == grabbingInteractor)
        {
            grabbingInteractor = null;
        }
    }

    // パックとの接触を検知
    // void OnTriggerEnter(Collider other)
    // {
    //     // 掴まれていない場合は何もしない
    //     if (hitController != null && !hitController.canHit) return;
    //     if (grabbingInteractor == null || hitController.grabberVelocity.magnitude > minAssistVelocity)
    //     {
    //         // 掴んでいない、または掴んでいる手の速度が十分でない場合は何もしない
    //         return;
    //     }
    //     //Debug.Log($"<color=green>PuckFeedbackController: {gameObject.name} has collided with {other.gameObject.name}</color>");
    //     // 接触した相手が"Puck"タグを持っている場合のみフィードバックを返す
    //     if (other.CompareTag("Puck"))
    //     {
    //         // ★★★ ロガーに「アシストなし接触」を通知 ★★★
    //         if (MotionDataLogger.Instance != null)
    //         {
    //             MotionDataLogger.Instance.LogNonAssistedTouch(assistTriggerCollider, grabbingInteractor);
    //         }

    //         ProvideHapticFeedback();
    //         PlayHitSound();
    //         PlayHitEffect(other.ClosestPoint(transform.position));
    //     }
    // }

    public void ProvideHapticFeedback()
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
        OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, controller);
        yield return new WaitForSeconds(vibrationDuration);
        OVRInput.SetControllerVibration(0, 0, controller);
    }

    public void PlayHitSound()
    {
        if (audioSource != null && hitSound != null)
        {
            audioSource.PlayOneShot(hitSound);
        }
    }

    public void PlayHitEffect(Vector3 position)
    {
        if (hitEffect == null) return;

        if (returnEffectCoroutine != null)
        {
            StopCoroutine(returnEffectCoroutine);
        }

        hitEffect.transform.position = position;
        returnEffectCoroutine = StartCoroutine(ReturnEffectToWaitPosition());
    }

    private IEnumerator ReturnEffectToWaitPosition()
    {
        yield return new WaitForSeconds(effectVisibleDuration);
        hitEffect.transform.position = effectWaitPosition;
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
