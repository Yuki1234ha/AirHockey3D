// MotionDataLogger.cs
// パックをヒットした瞬間の運動情報と、そのショットの結果、
// そしてヒット時のトリガー半径を追跡してCSVファイルに記録します。

using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

// このスクリプトはSphereColliderを持つオブジェクトにアタッチされることを想定
[RequireComponent(typeof(SphereCollider))]
public class MotionDataLogger : MonoBehaviour
{
    // このスクリプトの唯一のインスタンスを保持（Goal.csからアクセスするため）
    public static MotionDataLogger Instance { get; private set; }

    [Header("ロギング設定")]
    [Tooltip("ログを保存するファイル名")]
    public string fileName = "motion_data_with_results.csv";
    [Tooltip("記録する間隔（秒）。0にすると毎ヒット記録します。")]
    public float loggingInterval = 0f;

    [Header("Interaction SDK 設定")]
    [Tooltip("親オブジェクトにアタッチされているHandGrabInteractable")]
    public HandGrabInteractable interactableObject;

    // --- 内部変数 ---
    private IInteractableView interactable;
    private HandGrabInteractor grabbingInteractor = null;
    private string filePath;
    private StreamWriter writer;
    private float lastLogTime = 0f;
    private SphereCollider triggerCollider; // ★★★ トリガーの半径を取得するための変数

    // ヒット情報を一時的に保持するための内部クラス
    private class HitData
    {
        public float Timestamp;
        public string Handedness;
        public float TriggerRadius; // ★★★ 半径を記録するフィールドを追加
        public Vector3 Position;
        public Quaternion Rotation;
        public Vector3 Velocity;
        public Vector3 AngularVelocity;
        public string Result;
    }

    // 「どのパック」が「どのヒット情報」で打たれたかを追跡する辞書
    private Dictionary<int, HitData> _inFlightShots = new Dictionary<int, HitData>();


    void Awake()
    {
        // Singleton パターン
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;

        // ★★★ 自身のSphereColliderへの参照を取得 ★★★
        triggerCollider = GetComponent<SphereCollider>();

        interactable = interactableObject != null ? interactableObject : GetComponentInParent<HandGrabInteractable>();
        if (interactable == null)
        {
            Debug.LogError("HandGrabInteractableコンポーネントが見つかりません！", this);
            this.enabled = false;
            return;
        }

        // ファイルパスの準備と書き込み開始
        string dataPath = Path.Combine(Application.dataPath, "Data");
        if (!Directory.Exists(dataPath))
        {
            Directory.CreateDirectory(dataPath);
        }
        filePath = Path.Combine(dataPath, fileName);
        OpenFileForWriting();
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

    void OnTriggerEnter(Collider other)
    {
        if (grabbingInteractor == null || Time.time < lastLogTime + loggingInterval)
        {
            return;
        }

        if (other.CompareTag("Puck"))
        {
            int puckInstanceID = other.gameObject.GetInstanceID();

            if (_inFlightShots.ContainsKey(puckInstanceID))
            {
                RecordHitResult(puckInstanceID, "NoGoal");
            }

            // ★★★ 新しいヒット情報（半径を含む）を一時的に記憶 ★★★
            CreateNewHitData(puckInstanceID);
            lastLogTime = Time.time;
        }
    }

    void CreateNewHitData(int puckInstanceID)
    {
        IHand hand = grabbingInteractor.Hand;
        if (hand == null) return;

        OVRInput.Controller controller = (hand.Handedness == Handedness.Left)
            ? OVRInput.Controller.LTouch
            : OVRInput.Controller.RTouch;

        HitData newHit = new HitData
        {
            Timestamp = Time.time,
            Handedness = hand.Handedness.ToString(),
            TriggerRadius = triggerCollider.radius, // ★★★ ヒットした瞬間の半径を記録
            Position = OVRInput.GetLocalControllerPosition(controller),
            Rotation = OVRInput.GetLocalControllerRotation(controller),
            Velocity = OVRInput.GetLocalControllerVelocity(controller),
            AngularVelocity = OVRInput.GetLocalControllerAngularVelocity(controller),
            Result = "InProgress"
        };

        _inFlightShots[puckInstanceID] = newHit;
    }

    // Goal.csから呼び出される公開メソッド
    public void RecordHitResult(int puckInstanceID, string result)
    {
        if (_inFlightShots.TryGetValue(puckInstanceID, out HitData hitData))
        {
            hitData.Result = result;
            WriteDataToFile(hitData);
            _inFlightShots.Remove(puckInstanceID);
        }
    }

    void WriteDataToFile(HitData data)
    {
        if (writer == null) return;

        // ★★★ CSVの1行を更新 ★★★
        string line = string.Format("{0},{1},{2},{3},{4},{5},{6},{7},{8},{9},{10},{11},{12},{13},{14},{15}",
            data.Timestamp, data.Handedness, data.TriggerRadius, // 半径を追加
            data.Position.x, data.Position.y, data.Position.z,
            data.Rotation.x, data.Rotation.y, data.Rotation.z, data.Rotation.w,
            data.Velocity.x, data.Velocity.y, data.Velocity.z,
            data.AngularVelocity.x, data.AngularVelocity.y, data.AngularVelocity.z,
            data.Result
        );
        writer.WriteLine(line);
        Debug.Log($"<color=cyan>Motion data with result '{data.Result}' and radius '{data.TriggerRadius}' logged.</color>");
    }


    void OpenFileForWriting()
    {
        bool fileExists = File.Exists(filePath);
        writer = new StreamWriter(filePath, true, Encoding.UTF8);

        if (!fileExists)
        {
            // ★★★ ヘッダーを更新 ★★★
            string header = "Timestamp,Hand,TriggerRadius,PosX,PosY,PosZ,RotX,RotY,RotZ,RotW,VelX,VelY,VelZ,AngVelX,AngVelY,AngVelZ,Result";
            writer.WriteLine(header);
        }
    }

    void OnApplicationQuit()
    {
        foreach (var shot in _inFlightShots.Values)
        {
            shot.Result = "NoGoal";
            WriteDataToFile(shot);
        }

        if (writer != null)
        {
            writer.Close();
            writer = null;
            Debug.Log($"CSV file saved at: {filePath}");
        }
    }
}

