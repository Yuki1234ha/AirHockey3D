using UnityEngine;

/// <summary>
/// このコンポーネントがアタッチされたオブジェクトのY座標と、指定された基本回転を維持します。
/// Rigidbodyコンポーネントが必要です。
/// </summary>
[RequireComponent(typeof(Rigidbody))]
public class KeepHorizontal : MonoBehaviour
{
    [Tooltip("オブジェクトが水平であると見なす基本のオイラー角。Z軸が上のモデルの場合、(-90, 0, 0) などに設定します。")]
    public Vector3 baseRotationEuler = new Vector3(-90, 0, 0);

    // 固定したいY座標
    private float fixedPositionY;
    
    // オブジェクトのRigidbody
    private Rigidbody rb;

    void Start()
    {
        // 起動時のY座標を保存
        fixedPositionY = transform.position.y;
        rb = GetComponent<Rigidbody>();
        
        // Y軸の位置、X,Z軸の回転を固定
        // スクリプトで回転を制御するため、Rigidbodyの回転制約は外すか、Y軸のみにしても良い
        rb.constraints = RigidbodyConstraints.FreezePositionY;
    }

    // 物理演算の更新タイミングで呼ばれる
    [System.Obsolete]
    void FixedUpdate()
    {
        // --- 位置の強制固定 ---
        Vector3 currentPosition = rb.position;
        if (currentPosition.y != fixedPositionY)
        {
            currentPosition.y = fixedPositionY;
            rb.position = currentPosition;
        }
        
        // Y軸方向の速度を強制的にゼロにする
        Vector3 currentVelocity = rb.velocity;
        if (currentVelocity.y != 0f)
        {
            currentVelocity.y = 0;
            rb.velocity = currentVelocity;
        }

        // --- 回転の強制固定 ---
        // 現在のY軸周りの回転角度を取得
        float currentYRotation = rb.rotation.eulerAngles.y;

        // 基本の回転に、現在のY軸回転を適用して、最終的な目標回転を生成
        Quaternion targetRotation = Quaternion.Euler(baseRotationEuler.x, currentYRotation, baseRotationEuler.z);

        // 回転を目標値に設定
        if (rb.rotation != targetRotation)
        {
            rb.rotation = targetRotation;
        }

        // X軸とZ軸周りの回転する力（角速度）も強制的にゼロにする
        // ワールド座標系での角速度を取得し、Y軸成分以外をゼロにする
        Vector3 currentAngularVelocity = rb.angularVelocity;
        if (currentAngularVelocity.x != 0f || currentAngularVelocity.z != 0f)
        {
            rb.angularVelocity = new Vector3(0, currentAngularVelocity.y, 0);
        }
    }
}
