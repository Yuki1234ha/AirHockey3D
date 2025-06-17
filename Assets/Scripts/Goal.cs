// Goal.cs
// ゴール判定と、パックの位置リセットを行います。
// 各ゴールエリアに設置したTrigger Colliderを持つGameObjectにアタッチしてください。

using UnityEngine;

public class Goal : MonoBehaviour
{
    // このゴールがどちらのゴールかを示す
    // Unityエディタで設定します（例："PlayerGoal", "AIGoal"）
    public string goalName;

    // ★★★ パックのリセット先となる位置情報 ★★★
    // Unityエディタで、フィールド中央などに配置した空のGameObjectをアサインしてください。
    [Tooltip("ゴール後にパックをリセットする位置")]
    public Transform puckResetPoint;

    private void Start()
    {
        // puckResetPointが設定されていない場合に警告を出す
        if (puckResetPoint == null)
        {
            Debug.LogWarning($"[Goal: {gameObject.name}] puckResetPointが設定されていません。パックはリセットされません。");
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
            // この行が不要な場合や、GameManagerがない場合はコメントアウトしてください。
            if (GameManager.Instance != null)
            {
                GameManager.Instance.GoalScored(goalName);
            }

            // ★★★ パックをリセットする処理を追加 ★★★
            if (puckResetPoint != null)
            {
                // パックのRigidbodyコンポーネントを取得
                Rigidbody puckRigidbody = other.GetComponent<Rigidbody>();
                if (puckRigidbody != null)
                {
                    // パックの速度と回転を完全に停止させる
                    puckRigidbody.velocity = Vector3.zero;
                    puckRigidbody.angularVelocity = Vector3.zero;
                }

                // パックの位置をリセットポイントに移動させる
                other.transform.position = puckResetPoint.position;

                Debug.Log("<color=green>Puck has been reset.</color>");
            }
        }
    }
}
