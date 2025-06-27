// CourtStallResetter.cs
// パックがコート内の特定エリアに長時間滞在した場合に、
// ゲームをリセットして、自動的にパックを打ち出す機能。
// Z座標の正負でコートを判定するため、Trigger Colliderは不要です。

using UnityEngine;
using System.Collections;

public class CourtStallResetter : MonoBehaviour
{
    // 監視するコートのサイドを指定するためのenum
    public enum CourtSide { Player, AI }

    [Header("監視設定")]
    [Tooltip("このスクリプトが監視するコートのサイド")]
    public CourtSide sideToMonitor;
    [Tooltip("監視対象のパックオブジェクト")]
    public Rigidbody puckRigidbody;
    [Tooltip("パックがこのエリアに滞在できる最大時間（秒）")]
    public float maxStallTime = 5.0f;

    [Header("リセットと打ち出し設定")]
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
    [Tooltip("左の壁のX座標（パックの半径を考慮した値）")]
    public float wallXLeft = -2.595f;
    [Tooltip("右の壁のX座標（パックの半径を考慮した値）")]
    public float wallXRight = 2.595f;

    // --- 内部変数 ---
    private float timeInZone = 0f;
    private bool isResetting = false; // 複数回のリセットが同時に走るのを防ぐフラグ

    private void Start()
    {
        // 必須項目が設定されていない場合に警告を出す
        if (puckRigidbody == null)
        {
            Debug.LogError("Puck Rigidbody が Inspector で設定されていません！", this);
            this.enabled = false;
            return;
        }
        if (puckResetPoint == null || opponentGoal == null)
        {
            Debug.LogError("Puck Reset Point または Opponent Goal が設定されていません！", this);
            this.enabled = false;
        }
    }

    // 毎フレーム状態を監視
    private void Update()
    {
        // パックが存在しない、またはリセット処理中の場合は何もしない
        if (puckRigidbody == null || isResetting)
        {
            return;
        }

        bool isPuckOnMonitoredSide = false;

        // 設定に応じて、パックが監視対象のサイドにいるかZ座標で判断
        // PlayerサイドはZ > 0、AIサイドはZ < 0と仮定
        if (sideToMonitor == CourtSide.Player && puckRigidbody.position.z > 0)
        {
            isPuckOnMonitoredSide = true;
        }
        else if (sideToMonitor == CourtSide.AI && puckRigidbody.position.z < 0)
        {
            isPuckOnMonitoredSide = true;
        }

        // パックが監視対象のサイドにいる場合
        if (isPuckOnMonitoredSide)
        {
            // 滞在時間を加算
            timeInZone += Time.deltaTime;

            // 滞在時間が最大時間を超えたらリセット処理を開始
            if (timeInZone >= maxStallTime)
            {
                Debug.Log($"<color=orange>Puck has stalled in {sideToMonitor} side. Resetting...</color>");
                StartCoroutine(ResetAndLaunchPuck());
            }
        }
        else
        {
            // パックが監視対象のサイドから出たら、タイマーをリセット
            timeInZone = 0f;
        }
    }

    // パックをリセットし、壁で1反射する軌道で打ち出すコルーチン
    private IEnumerator ResetAndLaunchPuck()
    {
        isResetting = true;
        timeInZone = 0f;

        // --- 1. パックを停止させ、ランダムな位置にリセット ---
        puckRigidbody.linearVelocity = Vector3.zero;
        puckRigidbody.angularVelocity = Vector3.zero;

        float randomAngle = Random.Range(0f, 360f);
        Vector3 spawnOffset = new Vector3(Mathf.Cos(randomAngle * Mathf.Deg2Rad), 0, Mathf.Sin(randomAngle * Mathf.Deg2Rad)) * spawnRadius;
        Vector3 spawnPosition = puckResetPoint.position + spawnOffset;
        puckRigidbody.transform.position = spawnPosition;
        puckRigidbody.transform.rotation = Quaternion.identity;
        Debug.Log("<color=green>Puck has been reset to a random position due to stall.</color>");

        // --- 2. 一定時間待機 ---
        yield return new WaitForSeconds(launchDelay);

        // --- 3. 1回反射する軌道を計算して打ち出す ---
        bool useRightWall = (Random.value > 0.5f);
        float wallX = useRightWall ? wallXRight : wallXLeft;

        Vector3 opponentGoalPos = opponentGoal.position;
        Vector3 virtualGoalPos = new Vector3(wallX + (wallX - opponentGoalPos.x), opponentGoalPos.y, opponentGoalPos.z);
        virtualGoalPos.y = 0;

        Vector3 launchDirection = (virtualGoalPos - spawnPosition).normalized;
        launchDirection.y = 0;

        puckRigidbody.linearVelocity = launchDirection.normalized * launchForce;

        Debug.Log($"<color=purple>Puck launched after stall towards {(useRightWall ? "Right" : "Left")} wall.</color>");

        // リセット処理が完了したらフラグを戻す
        isResetting = false;
    }
}
