// PlanarFollower.cs
// 指定したターゲットオブジェクトのXZ平面上の動きに追従し、Y軸の高さを固定するためのスクリプト。
// VRにおける物理オブジェクトの安定した操作を実現します。

using UnityEngine;

public class PlanarFollower : MonoBehaviour
{
    [Header("追従設定")]
    [Tooltip("追従する対象のTransform（VRで掴むマレットなど）を設定します")]
    public Transform target;
    private float fixedYPosition;

    [Tooltip("動きの滑らかさ。値が小さいほど滑らかに（遅れて）追従します。0に近いと追従しません。")]
    [Range(0.01f, 1.0f)]
    public float smoothSpeed = 0.5f;

    private Rigidbody selfRigidbody;

    void Awake()
    {
        // 物理的な動きを制御するため、自身のRigidbodyへの参照を取得します
        selfRigidbody = GetComponent<Rigidbody>();
        if (selfRigidbody == null)
        {
            Debug.LogError("このスクリプトはRigidbodyコンポーネントを必要とします。", this);
            this.enabled = false;
        }
        fixedYPosition = selfRigidbody.position.y;
    }

    /// <summary>
    /// FixedUpdateは、物理演算の前に固定フレームレートで実行されます。
    /// Rigidbodyの位置を制御するのに最も適しています。
    /// </summary>
    void FixedUpdate()
    {
        // 追従対象が設定されていなければ、何もしない
        if (target == null)
        {
            return;
        }

        // 1. 目標となる位置を計算します。
        //    ターゲットのX, Z座標と、このスクリプトで設定した固定のY座標を使います。
        Vector3 targetPosition = new Vector3(target.position.x, fixedYPosition, target.position.z);

        // 2. 現在位置から目標位置へ、滑らかに補間した新しい位置を計算します (Lerp)。
        Vector3 smoothedPosition = Vector3.Lerp(selfRigidbody.position, targetPosition, smoothSpeed);

        // 3. Rigidbodyの位置を、直接テレポートさせるのではなく、MovePositionを使って動かします。
        //    これにより、他の物理オブジェクトとの衝突が正しく計算されます。
        selfRigidbody.MovePosition(smoothedPosition);

        // 4. 回転も追従させる場合は、以下の行のコメントを解除します。
        // Quaternion smoothedRotation = Quaternion.Lerp(selfRigidbody.rotation, target.rotation, smoothSpeed);
        // selfRigidbody.MoveRotation(smoothedRotation);
    }
}