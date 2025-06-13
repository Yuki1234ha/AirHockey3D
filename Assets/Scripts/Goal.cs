// Goal.cs
// ゴール判定を行います。
// 各ゴールエリアに設置したTrigger Colliderを持つGameObjectにアタッチしてください。

using UnityEngine;

public class Goal : MonoBehaviour
{
    // このゴールがどちらのゴールかを示す
    // Unityエディタで設定します（例："PlayerGoal", "AIGoal"）
    public string goalName;

    // Triggerに他のColliderが入った時に呼ばれる
    private void OnTriggerEnter(Collider other)
    {
        // 入ってきたのがパックかどうかをタグで判別
        if (other.CompareTag("Puck"))
        {
            Debug.Log($"<color=blue>Goal {goalName}");
            // GameManagerにゴールを通知
            GameManager.Instance.GoalScored(goalName);
        }
    }
}

