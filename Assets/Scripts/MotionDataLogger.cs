// MotionDataLogger.cs
// パックをヒットした瞬間の運動情報と、そのショットの結果、
// そしてアシストの有無を追跡してCSVファイルに記録します。

using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

public class MotionDataLogger : MonoBehaviour
{
    // このスクリプトの唯一のインスタンスを保持（他スクリプトからアクセスするため）
    public static MotionDataLogger Instance { get; private set; }

    [Header("ロギング設定")]
    [Tooltip("ログを保存するファイル名")]
    public string fileName = "motion_data_final.csv";

    // --- 内部変数 ---
    private string filePath;
    private StreamWriter writer;
    private Dictionary<int, HitData> _inFlightShots = new Dictionary<int, HitData>();

    // ヒット情報を一時的に保持するための内部クラス
    private class HitData
    {
        public float Timestamp;
        public string Handedness;
        public float TriggerRadius;
        public bool WasAssisted; // ★★★ アシストの有無を記録するフラグ
        public Vector3 Position;
        public Quaternion Rotation;
        public Vector3 Velocity;
        public Vector3 AngularVelocity;
        public string Result;
    }

    void Awake()
    {
        // Singleton パターン
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;

        // ファイルパスの準備と書き込み開始
        string dataPath = Path.Combine(Application.dataPath, "Data");
        if (!Directory.Exists(dataPath))
        {
            Directory.CreateDirectory(dataPath);
        }
        filePath = Path.Combine(dataPath, fileName);
        OpenFileForWriting();
    }

    // ★★★ 他のスクリプトから呼び出すための公開メソッド ★★★
    public void LogHit(Collider puckCollider, SphereCollider triggerCollider, HandGrabInteractor interactor, bool wasAssisted)
    {
        if (puckCollider == null || triggerCollider == null || interactor == null) return;

        int puckInstanceID = puckCollider.gameObject.GetInstanceID();

        // 結果が出ていない前のショットを「ゴールなし」として記録
        if (_inFlightShots.ContainsKey(puckInstanceID))
        {
            RecordHitResult(puckInstanceID, "NoGoal");
        }

        // 今回の新しいヒット情報を一時的に記憶
        CreateNewHitData(puckInstanceID, triggerCollider.radius, interactor, wasAssisted);
    }

    void CreateNewHitData(int puckInstanceID, float triggerRadius, HandGrabInteractor interactor, bool wasAssisted)
    {
        IHand hand = interactor.Hand;
        if (hand == null) return;

        OVRInput.Controller controller = (hand.Handedness == Handedness.Left)
            ? OVRInput.Controller.LTouch
            : OVRInput.Controller.RTouch;

        HitData newHit = new HitData
        {
            Timestamp = Time.time,
            Handedness = hand.Handedness.ToString(),
            TriggerRadius = triggerRadius,
            WasAssisted = wasAssisted, // ★★★ アシスト情報を記録
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

        // wasAssistedを1(true)または0(false)に変換
        int assistedFlag = data.WasAssisted ? 1 : 0;

        string line = string.Format("{0},{1},{2},{3},{4},{5},{6},{7},{8},{9},{10},{11},{12},{13},{14},{15},{16}",
            data.Timestamp, data.Handedness, data.TriggerRadius, assistedFlag, // ★★★ WasAssisted列を追加
            data.Position.x, data.Position.y, data.Position.z,
            data.Rotation.x, data.Rotation.y, data.Rotation.z, data.Rotation.w,
            data.Velocity.x, data.Velocity.y, data.Velocity.z,
            data.AngularVelocity.x, data.AngularVelocity.y, data.AngularVelocity.z,
            data.Result
        );
        writer.WriteLine(line);
        Debug.Log($"<color=cyan>Motion data with result '{data.Result}', radius '{data.TriggerRadius}', Assisted: {data.WasAssisted} logged.</color>");
    }

    void OpenFileForWriting()
    {
        bool fileExists = File.Exists(filePath);
        writer = new StreamWriter(filePath, true, Encoding.UTF8);

        if (!fileExists)
        {
            // ★★★ ヘッダーを更新 ★★★
            string header = "Timestamp,Hand,TriggerRadius,WasAssisted,PosX,PosY,PosZ,RotX,RotY,RotZ,RotW,VelX,VelY,VelZ,AngVelX,AngVelY,AngVelZ,Result";
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
            Debug.Log($"<color=green>Motion data logging completed. Data saved to: {filePath}</color>");
        }
    }
}