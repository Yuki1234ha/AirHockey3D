// VRSceneInitializer.cs
// VRシステムのトラッキングが安定するまで待機し、
// その後、指定されたゲームオブジェクトを有効化してゲームを開始するスクリプト。

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class VRSceneInitializer : MonoBehaviour
{
    [Header("起動設定")]
    [Tooltip("VRの準備が整った後にアクティブにするオブジェクトのリスト")]
    public List<GameObject> objectsToActivate;

    [Tooltip("トラッキングが安定したと判断するまでの待機時間（秒）")]
    public float stabilizationDelay = 0.5f;

    [System.Obsolete]
    void Start()
    {
        // 起動時に監視コルーチンを開始
        StartCoroutine(InitializationRoutine());
    }

    /// <summary>
    /// VRシステムの初期化とトラッキングの安定を待つためのコルーチン
    /// </summary>
    [System.Obsolete]
    private IEnumerator InitializationRoutine()
    {
        Debug.Log("<color=yellow>[Initializer]</color> VRシステムの準備を待っています...");

        // 起動対象のオブジェクトが誤ってアクティブになっていたら、非アクティブにする
        foreach (var obj in objectsToActivate)
        {
            if (obj != null && obj.activeSelf)
            {
                obj.SetActive(false);
            }
        }

        // OVRManagerがHMDを認識するまで待機
        while (!OVRManager.isHmdPresent)
        {
            Debug.Log("<color=yellow>[Initializer]</color> HMDが接続されていません。待機中...");
            yield return null; // 1フレーム待つ
        }
        Debug.Log("<color=green>[Initializer]</color> HMDを認識しました。");

        // ★★★★★ 修正点 ★★★★★
        // トラッキング開始の判定を、より確実な「ユーザーがヘッドセットを装着したか」で判定します。
        // これにより、トラッカーの座標が0のままでも正しく判定できます。
        OVRManager ovrManagerInstance = FindObjectOfType<OVRManager>();
        if (ovrManagerInstance == null)
        {
            Debug.LogError("<color=red>[Initializer]</color> OVRManagerインスタンスが見つかりません。シーンにOVRManagerを追加してください。");
            yield break;
        }
        while (!ovrManagerInstance.isUserPresent)
        {
            Debug.Log("<color=yellow>[Initializer]</color> ユーザーの装着を待っています...");
            yield return null; // 1フレーム待つ
        }
        Debug.Log("<color=green>[Initializer]</color> ユーザーがヘッドセットを装着しました。トラッキングは有効です。");

        // 念のため、さらに短い時間待機してトラッキングを安定させる
        yield return new WaitForSeconds(stabilizationDelay);

        Debug.Log("<color=lime>[Initializer]</color> システム安定。ゲームオブジェクトを起動します。");

        // 登録された全てのオブジェクトをアクティブにする
        foreach (var obj in objectsToActivate)
        {
            if (obj != null)
            {
                obj.SetActive(true);
            }
        }
        OVRManager.display.RecenterPose();
        Debug.Log("<color=cyan>[Initializer]</color> プレイヤーの視点を強制的にリセンターしました。");



        // この初期化用オブジェクトは役目を終えたので、自身を破棄する
        Destroy(gameObject);
    }
}
