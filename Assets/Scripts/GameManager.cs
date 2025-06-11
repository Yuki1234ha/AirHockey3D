using UnityEngine;
using UnityEngine.UI; // UIを使う場合は必要
using UnityEngine.SceneManagement; // シーンをリロードする場合に必要

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public GameObject puck; // UnityエディタからパックのGameObjectをアタッチ

    public Text playerScoreText; // プレイヤーのスコア表示用UI
    public Text aiScoreText;     // AIのスコア表示用UI

    private int playerScore;
    private int aiScore;

    private Vector3 puckInitialPosition; // パックの初期位置

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    void Start()
    {
        // ゲーム開始時にパックの初期位置を保存
        if (puck != null)
        {
            puckInitialPosition = puck.transform.position;
        }
        UpdateScoreUI();
    }

    // ゴールが決まった時にGoal.csから呼ばれるメソッド
    public void GoalScored(string goalName)
    {
        if (goalName == "PlayerGoal") // AIのゴール（プレイヤー側のゴールに入った）
        {
            aiScore++;
            Debug.Log("AI scored! Score is Player: " + playerScore + ", AI: " + aiScore);
        }
        else if (goalName == "AIGoal") // プレイヤーのゴール
        {
            playerScore++;
            Debug.Log("Player scored! Score is Player: " + playerScore + ", AI: " + aiScore);
        }

        UpdateScoreUI();
        ResetPuck();
    }

    // スコアUIを更新する
    void UpdateScoreUI()
    {
        if (playerScoreText != null)
        {
            playerScoreText.text = "Player: " + playerScore;
        }
        if (aiScoreText != null)
        {
            aiScoreText.text = "AI: " + aiScore;
        }
    }

    // パックを初期位置に戻す
    public void ResetPuck()
    {
        if (puck != null)
        {
            puck.transform.position = puckInitialPosition;
            Rigidbody puckRb = puck.GetComponent<Rigidbody>();
            if (puckRb != null)
            {
                puckRb.linearVelocity = Vector3.zero;
                puckRb.angularVelocity = Vector3.zero;
            }
        }
    }
}