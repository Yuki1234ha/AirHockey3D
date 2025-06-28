// Goal.cs (改訂版)
// ゴール判定を行い、パックのリセット前に追跡中のショットがあれば
// それを確定させてから、MotionDataLoggerにゴール結果を通知する。

using UnityEngine;
using System.Collections;

public class Goal : MonoBehaviour
{
    public enum GoalType { PlayerGoal, OpponentGoal }
    [Header("ゴール設定")]
    public GoalType typeOfGoal;
    [Header("パックのリセットと打ち出し設定")]
    public Transform puckResetPoint;
    public Transform opponentGoal;
    public float launchForce = 10f;
    public float launchDelay = 1.0f;
    public float spawnRadius = 1.0f;
    [Header("壁の設定")]
    public float wallXLeft = -2.595f;
    public float wallXRight = 2.595f;

    [System.Obsolete]
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Puck"))
        {
            // ★★★ ロガーにゴール結果を通知 ★★★
            if (MotionDataLogger.Instance != null)
            {
                int puckInstanceID = other.gameObject.GetInstanceID();
                // このゴールが最終結果であることを通知
                MotionDataLogger.Instance.FinalizeInProgressShot(puckInstanceID, typeOfGoal.ToString());
            }
            
            // パックのリセットと打ち出し処理を開始
            if (puckResetPoint != null && opponentGoal != null)
            {
                StartCoroutine(ResetAndLaunchPuckWithBankShot(other.GetComponent<Rigidbody>()));
            }
        }
    }

    [System.Obsolete]
    private IEnumerator ResetAndLaunchPuckWithBankShot(Rigidbody puckRigidbody)
    {
        if (puckRigidbody == null) yield break;
        
        // ★★★ パックを動かす直前に、追跡中のショットがあれば「NoGoal」として確定させる ★★★
        // ゴールに入らずにリセットされるケース（StallResetterなど）を想定
        if (MotionDataLogger.Instance != null)
        {
            // このリセットがゴールによるものではない場合、前のショットはNoGoalだったことになる
            MotionDataLogger.Instance.FinalizeInProgressShot(puckRigidbody.gameObject.GetInstanceID(), "NoGoal_Reset");
        }
        
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