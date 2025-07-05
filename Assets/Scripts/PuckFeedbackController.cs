// PuckFeedbackController.cs
// パックとの接触を検知し、音と振動のフィードバックのみを提供するスクリプト。
// ★★★ エフェクト表示時間も可変になるように修正 ★★★

using UnityEngine;
using System.Collections;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

public class PuckFeedbackController : MonoBehaviour
{
    [Header("サウンド設定")]
    [Tooltip("接触時に再生する効果音")]
    public AudioClip hitSound;
    [Tooltip("効果音を再生するためのAudioSourceコンポーネント")]
    public AudioSource audioSource;
    
    [Header("エフェクト設定")]
    [Tooltip("【シーンに配置済みの】ループ再生させるパーティクルエフェクト")]
    public ParticleSystem hitEffect;
    [Tooltip("エフェクトが見える最大時間（秒）")]
    public float maxEffectVisibleDuration = 0.5f;
    [Tooltip("エフェクトが見える最小時間（秒）")]
    public float minEffectVisibleDuration = 0.1f;


    [Header("振動設定")]
    [Tooltip("振動の周波数")]
    [Range(0f, 1f)]
    public float vibrationFrequency = 0.8f;
    [Tooltip("振動の最大強度")]
    [Range(0f, 1f)]
    public float maxVibrationAmplitude = 0.8f;
    [Tooltip("振動の最小強度")]
    [Range(0f, 1f)]
    public float minVibrationAmplitude = 0.2f;
    [Tooltip("振動の最大継続時間（秒）")]
    public float maxVibrationDuration = 0.1f;
    [Tooltip("振動の最小継続時間（秒）")]
    public float minVibrationDuration = 0.05f;

    [Header("Interaction SDK 設定")]
    [Tooltip("親オブジェクトにアタッチされているHandGrabInteractable")]
    public HandGrabInteractable interactableObject;

    [Header("追従設定")]
    [Tooltip("追従する親オブジェクト（paddle1など）のTransform")]
    public Transform targetToFollow;

    // --- 内部変数 ---
    private IInteractableView interactable;
    private HandGrabInteractor grabbingInteractor = null;
    private readonly Vector3 effectWaitPosition = new Vector3(0, -30, 0);
    private Coroutine returnEffectCoroutine;

    void Awake()
    {
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
    }

    private void HandleInteractorViewRemoved(IInteractorView interactorView)
    {
        if ((object)interactorView == grabbingInteractor)
        {
            grabbingInteractor = null;
        }
    }

    /// <summary>
    /// 強度を指定して全てのフィードバックを再生するメソッド
    /// </summary>
    /// <param name="intensity">フィードバックの強度 (0.0 to 1.0)</param>
    /// <param name="hitPosition">エフェクトを再生するワールド座標</param>
    public void ProvideFeedback(float intensity, Vector3 hitPosition)
    {
        // ★★★ 修正点: 強度に応じてエフェクト表示時間を計算 ★★★
        float effectDuration = Mathf.Lerp(minEffectVisibleDuration, maxEffectVisibleDuration, intensity);

        PlayHitSound();
        PlayHitEffect(hitPosition, effectDuration); // 計算した時間を渡す
        ProvideHapticFeedback(intensity);
    }

    private void ProvideHapticFeedback(float intensity)
    {
        if (grabbingInteractor != null && grabbingInteractor.Hand != null)
        {
            float amplitude = Mathf.Lerp(minVibrationAmplitude, maxVibrationAmplitude, intensity);
            float duration = Mathf.Lerp(minVibrationDuration, maxVibrationDuration, intensity);

            OVRInput.Controller controllerToVibrate = (grabbingInteractor.Hand.Handedness == Handedness.Left)
                ? OVRInput.Controller.LTouch
                : OVRInput.Controller.RTouch;
            
            StartCoroutine(VibrateForDuration(controllerToVibrate, amplitude, duration));
        }
    }

    private IEnumerator VibrateForDuration(OVRInput.Controller controller, float amplitude, float duration)
    {
        OVRInput.SetControllerVibration(vibrationFrequency, amplitude, controller);
        yield return new WaitForSeconds(duration);
        OVRInput.SetControllerVibration(0, 0, controller);
    }

    private void PlayHitSound()
    {
        if (audioSource != null && hitSound != null)
        {
            audioSource.PlayOneShot(hitSound);
        }
    }

    // ★★★ 修正点: 引数で表示時間を受け取るように変更 ★★★
    private void PlayHitEffect(Vector3 position, float duration)
    {
        if (hitEffect == null) return;

        if (returnEffectCoroutine != null)
        {
            StopCoroutine(returnEffectCoroutine);
        }

        hitEffect.transform.position = position;
        returnEffectCoroutine = StartCoroutine(ReturnEffectToWaitPosition(duration));
    }

    // ★★★ 修正点: 引数で表示時間を受け取るように変更 ★★★
    private IEnumerator ReturnEffectToWaitPosition(float duration)
    {
        yield return new WaitForSeconds(duration);
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
