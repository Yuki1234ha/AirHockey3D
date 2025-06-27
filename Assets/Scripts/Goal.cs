// Goal.cs (ロガー連携版)
// ゴール判定を行い、MotionDataLoggerにその結果を通知します。

using UnityEngine;
using System.Collections;

public class Goal : MonoBehaviour
{
    // このゴールがどちらのゴールかをInspectorで設定するためのenum
    public enum GoalType { PlayerGoal, OpponentGoal }

    [Header("ゴール設定")]
    [Tooltip("このゴールがどちらのサイドのゴールか")]
    public GoalType typeOfGoal;

    [Header("パックのリセットと打ち出し設定")]
    [Tooltip("パックが出現する中心点")]
    public Transform puckResetPoint;

    [Tooltip("打ち出しのターゲットとなる相手のゴール")]
    public Transform opponentGoal;

    [Tooltip("パックを打ち出す際の強さ（速度）")]
    public float launchForce = 10f;

    [Tooltip("リセット後、打ち出すまでの待機時間（秒）")]
    public float launchDelay = 1.0f;

    [Tooltip("パックが出現する中心点からの半径")]
    public float spawnRadius = 1.0f;

    [Header("壁の設定")]
    [Tooltip("左の壁のX座標")]
    public float wallXLeft = -2.595f;
    [Tooltip("右の壁のX座標")]
    public float wallXRight = 2.595f;


    // Triggerに他のColliderが入った時に呼ばれる
    [System.Obsolete]
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Puck"))
        {
            // --- ★★★ ロガーへの通知機能 ★★★ ---
            // MotionDataLoggerのインスタンスが存在する場合
            if (MotionDataLogger.Instance != null)
            {
                // パックのIDと、このゴールの種類（"PlayerGoal" または "OpponentGoal"）を渡して結果を記録
                int puckInstanceID = other.gameObject.GetInstanceID();
                MotionDataLogger.Instance.RecordHitResult(puckInstanceID, typeOfGoal.ToString());
            }

            // GameManagerへの通知など（既存の機能）
            if (GameManager.Instance != null)
            {
                 // goalNameの代わりにtypeOfGoal.ToString()を使うと統一できます
                GameManager.Instance.GoalScored(typeOfGoal.ToString());
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
        
        puckRigidbody.velocity = Vector3.zero;
        puckRigidbody.angularVelocity = Vector3.zero;

        float randomAngle = Random.Range(0f, 360f);
        Vector3 spawnOffset = new Vector3(Mathf.Cos(randomAngle * Mathf.Deg2Rad), 0, Mathf.Sin(randomAngle * Mathf.Deg2Rad)) * spawnRadius;
        Vector3 spawnPosition = puckResetPoint.position + spawnOffset;
        puckRigidbody.transform.position = spawnPosition;
        puckRigidbody.transform.rotation = Quaternion.identity;
        
        yield return new WaitForSeconds(launchDelay);

        bool useRightWall = (Random.value > 0.5f);
        float wallX = useRightWall ? wallXRight : wallXLeft;

        Vector3 opponentGoalPos = opponentGoal.position;
        Vector3 virtualGoalPos = new Vector3(wallX + (wallX - opponentGoalPos.x), opponentGoalPos.y, opponentGoalPos.z);
        virtualGoalPos.y = 0;

        Vector3 launchDirection = (virtualGoalPos - spawnPosition).normalized;
        launchDirection.y = 0;

        puckRigidbody.velocity = launchDirection.normalized * launchForce;
    }
}
