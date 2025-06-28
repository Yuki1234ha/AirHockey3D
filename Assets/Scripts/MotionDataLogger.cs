// MotionDataLogger.cs (改訂版)
// 「アシストヒット」と「ただの接触」を明確に区別して記録する。
// ゴール判定の追跡はアシストヒットのみを対象とする。

using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Input;

public class MotionDataLogger : MonoBehaviour
{
    public static MotionDataLogger Instance { get; private set; }

    [Header("ロギング設定")]
    [Tooltip("ログを保存するファイル名")]
    public string fileName = "motion_data_final.csv";

    private string filePath;
    private StreamWriter writer;
    private Dictionary<int, HitData> _inProgressAssistedShots = new Dictionary<int, HitData>();

    private class HitData
    {
        public float Timestamp;
        public string Handedness;
        public float TriggerRadius;
        public bool WasAssisted;
        public Vector3 Position;
        public Quaternion Rotation;
        public Vector3 Velocity;
        public Vector3 AngularVelocity;
        public string Result;
    }

    void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        InitializeFile();
    }

    // ★★★ アシストがない、ただの接触を記録するメソッド ★★★
    public void LogNonAssistedTouch(SphereCollider triggerCollider, HandGrabInteractor interactor)
    {
        if (triggerCollider == null || interactor == null) return;
        
        HitData touchData = CreateBaseHitData(triggerCollider.radius, interactor, false);
        touchData.Result = "Touch"; // 結果を「Touch」として即時確定
        WriteDataToFile(touchData);
    }

    // ★★★ アシストがあるヒットを記録し、結果追跡を開始するメソッド ★★★
    public void LogAssistedHit(Collider puckCollider, SphereCollider triggerCollider, HandGrabInteractor interactor)
    {
        if (puckCollider == null || triggerCollider == null || interactor == null) return;

        int puckInstanceID = puckCollider.gameObject.GetInstanceID();

        // もし、このパックで追跡中のアシストショットが既にあれば、それは「NoGoal」として先に記録する
        if (_inProgressAssistedShots.ContainsKey(puckInstanceID))
        {
            FinalizeInProgressShot(puckInstanceID, "NoGoal");
        }

        // 今回の新しいアシストヒット情報を「InProgress」として追跡リストに追加
        HitData newHit = CreateBaseHitData(triggerCollider.radius, interactor, true);
        newHit.Result = "InProgress";
        _inProgressAssistedShots[puckInstanceID] = newHit;
    }

    // ★★★ ゴールやリセット時に、追跡中のショットの結果を確定させるメソッド ★★★
    public void FinalizeInProgressShot(int puckInstanceID, string result)
    {
        if (_inProgressAssistedShots.TryGetValue(puckInstanceID, out HitData hitData))
        {
            hitData.Result = result;
            WriteDataToFile(hitData);
            _inProgressAssistedShots.Remove(puckInstanceID); // 処理が完了したのでリストから削除
        }
    }

    private HitData CreateBaseHitData(float triggerRadius, HandGrabInteractor interactor, bool wasAssisted)
    {
        IHand hand = interactor.Hand;
        OVRInput.Controller controller = (hand.Handedness == Handedness.Left) ? OVRInput.Controller.LTouch : OVRInput.Controller.RTouch;
        return new HitData
        {
            Timestamp = Time.time,
            Handedness = hand.Handedness.ToString(),
            TriggerRadius = triggerRadius,
            WasAssisted = wasAssisted,
            Position = OVRInput.GetLocalControllerPosition(controller),
            Rotation = OVRInput.GetLocalControllerRotation(controller),
            Velocity = OVRInput.GetLocalControllerVelocity(controller),
            AngularVelocity = OVRInput.GetLocalControllerAngularVelocity(controller)
        };
    }

    private void WriteDataToFile(HitData data)
    {
        if (writer == null) return;
        int assistedFlag = data.WasAssisted ? 1 : 0;
        string line = string.Format("{0},{1},{2},{3},{4},{5},{6},{7},{8},{9},{10},{11},{12},{13},{14},{15},{16}",
            data.Timestamp, data.Handedness, data.TriggerRadius, assistedFlag,
            data.Position.x, data.Position.y, data.Position.z, data.Rotation.x, data.Rotation.y, data.Rotation.z, data.Rotation.w,
            data.Velocity.x, data.Velocity.y, data.Velocity.z, data.AngularVelocity.x, data.AngularVelocity.y, data.AngularVelocity.z,
            data.Result);
        writer.WriteLine(line);
        Debug.Log($"<color=cyan>Data Logged: Result='{data.Result}', Assisted='{data.WasAssisted}'</color>");
    }

    private void InitializeFile()
    {
        string dataPath = Path.Combine(Application.dataPath, "Data");
        if (!Directory.Exists(dataPath)) Directory.CreateDirectory(dataPath);
        filePath = Path.Combine(dataPath, fileName);
        bool fileExists = File.Exists(filePath);
        writer = new StreamWriter(filePath, true, Encoding.UTF8);
        if (!fileExists)
        {
            string header = "Timestamp,Hand,TriggerRadius,WasAssisted,PosX,PosY,PosZ,RotX,RotY,RotZ,RotW,VelX,VelY,VelZ,AngVelX,AngVelY,AngVelZ,Result";
            writer.WriteLine(header);
        }
    }

    void OnApplicationQuit()
    {
        foreach (var key in _inProgressAssistedShots.Keys)
        {
            FinalizeInProgressShot(key, "NoGoal_Quit");
        }
        if (writer != null) writer.Close();
    }
}
