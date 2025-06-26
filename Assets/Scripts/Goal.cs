// Goal.cs
// ゴール判定と、パックの位置リセット、そして壁で1回反射して相手ゴールに入る軌道での自動打ち出しを行います。
// 各ゴールエリアに設置したTrigger Colliderを持つGameObjectにアタッチしてください。

using UnityEngine;
using System.Collections; // コルーチンを使用するために必要

public class Goal : MonoBehaviour
{
    [Header("ゴール設定")]
    [Tooltip("このゴールがどちらのゴールかを示す名前（例: \"PlayerGoal\", \"AIGoal\"）")]
    public string goalName;

    [Header("パックのリセットと打ち出し設定")]
    [Tooltip("パックが出現する中心点")]
    public Transform puckResetPoint;

    [Tooltip("打ち出しのターゲットとなる相手のゴール")]
    public Transform opponentGoal;

    [Tooltip("パックを打ち出す際の強さ（速度）")]
    public float launchForce = 20f;

    [Tooltip("リセット後、打ち出すまでの待機時間（秒）")]
    public float launchDelay = 1.0f;

    [Tooltip("パックが出現する中心点からの半径")]
    public float spawnRadius = 1.0f;

    [Header("壁の設定")]
    [Tooltip("左の壁のX座標")]
    public float wallXLeft = -3.0f;
    [Tooltip("右の壁のX座標")]
    public float wallXRight = 3.0f;


    private void Start()
    {
        // 必須項目が設定されていない場合に警告を出す
        if (puckResetPoint == null)
        {
            Debug.LogWarning($"[Goal: {gameObject.name}] puckResetPointが設定されていません。パックはリセットされません。");
        }
        if (opponentGoal == null)
        {
            Debug.LogWarning($"[Goal: {gameObject.name}] opponentGoalが設定されていません。パックは打ち出されません。");
        }
    }

    // Triggerに他のColliderが入った時に呼ばれる
    [System.Obsolete]
    private void OnTriggerEnter(Collider other)
    {
        // 入ってきたのがパックかどうかをタグで判別
        if (other.CompareTag("Puck"))
        {
            Debug.Log($"<color=blue>Goal in {goalName}!</color>");
            
            // GameManagerにゴールを通知
            if (GameManager.Instance != null)
            {
                GameManager.Instance.GoalScored(goalName);
            }

            // パックのリセットと打ち出し処理を開始
            if (puckResetPoint != null && opponentGoal != null)
            {
                StartCoroutine(ResetAndLaunchPuckWithBankShot(other.GetComponent<Rigidbody>()));
            }
        }
    }

    // パックをリセットし、壁で1反射する軌道で打ち出すコルーチン
    [System.Obsolete]
    private IEnumerator ResetAndLaunchPuckWithBankShot(Rigidbody puckRigidbody)
    {
        if (puckRigidbody == null) yield break;

        // --- 1. パックを停止させ、ランダムな位置にリセット ---
        puckRigidbody.velocity = Vector3.zero;
        puckRigidbody.angularVelocity = Vector3.zero;

        // ResetPointの周り、半径spawnRadiusの円周上にランダムな出現位置を計算
        float randomAngle = Random.Range(0f, 360f);
        Vector3 spawnOffset = new Vector3(Mathf.Cos(randomAngle * Mathf.Deg2Rad), 0, Mathf.Sin(randomAngle * Mathf.Deg2Rad)) * spawnRadius;
        Vector3 spawnPosition = puckResetPoint.position + spawnOffset;
        puckRigidbody.transform.position = spawnPosition;
        puckRigidbody.transform.rotation = Quaternion.identity;
        Debug.Log("<color=green>Puck has been reset to a random position.</color>");

        // --- 2. 一定時間待機 ---
        yield return new WaitForSeconds(launchDelay);

        // --- 3. 1回反射する軌道を計算して打ち出す ---
        
        // 左右の壁どちらを狙うかランダムに決定
        bool useRightWall = (Random.value > 0.5f);
        float wallX = useRightWall ? wallXRight : wallXLeft;

        // 「仮想のゴール」を使って反射点を計算するテクニック
        // 1. 壁の向こう側にある、鏡写しの仮想ゴール位置を計算
        Vector3 opponentGoalPos = opponentGoal.position;
        Vector3 virtualGoalPos = new Vector3(wallX + (wallX - opponentGoalPos.x), opponentGoalPos.y, opponentGoalPos.z);
        virtualGoalPos.y = 0; // Y軸は無視

        // 2. 出現位置から仮想ゴールへ向かう方向が、壁に反射して本当のゴールへ向かう方向になる
        Vector3 launchDirection = (virtualGoalPos - spawnPosition).normalized;
        
        // Y軸方向の速度は0にする
        launchDirection.y = 0;

        // パックに力を加えて打ち出す
        puckRigidbody.velocity = launchDirection.normalized * launchForce;
        
        Debug.Log($"<color=purple>Puck launched for a bank shot off the {(useRightWall ? "Right" : "Left")} wall.</color>");
    }
}
