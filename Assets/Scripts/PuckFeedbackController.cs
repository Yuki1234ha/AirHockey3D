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
    [Header("フィードバック設定")]
    [Tooltip("接触時に再生する効果音")]
    public AudioClip hitSound;
    [Tooltip("効果音を再生するためのAudioSourceコンポーネント")]
    public AudioSource audioSource;
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
    // --- 内部変数 ---
    private IInteractableView interactable;
    private HandGrabInteractor grabbingInteractor = null;

    void Awake()
    {
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
    void OnTriggerEnter(Collider other)
    {
        // 掴まれていない場合は何もしない
        if (grabbingInteractor == null) return;
        Debug.Log($"<color=green>PuckFeedbackController: {gameObject.name} has collided with {other.gameObject.name}</color>");
        // 接触した相手が"Puck"タグを持っている場合のみフィードバックを返す
        if (other.CompareTag("Puck"))
        {
            ProvideHapticFeedback();
            PlayHitSound();
        }
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
        OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, controller);
        yield return new WaitForSeconds(vibrationDuration);
        OVRInput.SetControllerVibration(0, 0, controller);
    }

    void PlayHitSound()
    {
        if (audioSource != null && hitSound != null)
        {
            audioSource.PlayOneShot(hitSound);
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
