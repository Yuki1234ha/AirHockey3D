// PlanarFollower.cs
// 指定したターゲットオブジェクトのXZ平面上の動きに追従し、Y軸の高さを固定するためのスクリプト。
// VRにおける物理オブジェクトの安定した操作を実現します。
// ★★★ 衝突時に追従を一時停止する機能を追加 ★★★

using UnityEngine;
using System.Collections; // Coroutinesのために必要

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
    private bool isFollowingEnabled = true; // 追従が有効かどうかのフラグ

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
        // 追従が無効化されている場合や、ターゲットがない場合は何もしない
        if (!isFollowingEnabled || target == null)
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

    // --- 他のスクリプトから追従を制御するための公開メソッド ---

    /// <summary>
    /// 指定した時間だけ、オブジェクトの追従を一時停止します。
    /// </summary>
    /// <param name="duration">停止する時間（秒）</param>
    [System.Obsolete]
    public void PauseFollowing(float duration)
    {
        // 既に停止中の場合は、新しく停止処理を開始しない
        if (!isFollowingEnabled) return;

        StartCoroutine(PauseCoroutine(duration));
    }

    [System.Obsolete]
    private IEnumerator PauseCoroutine(float duration)
    {
        isFollowingEnabled = false;
        // Rigidbodyの速度をゼロにして、その場でピタッと停止させる
        selfRigidbody.velocity = Vector3.zero;
        selfRigidbody.angularVelocity = Vector3.zero;

        // 指定された時間待機
        yield return new WaitForSeconds(duration);

        // 追従を再開
        isFollowingEnabled = true;
    }
}
