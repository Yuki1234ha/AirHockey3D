// VRAirHockeyMallet.cs
// OVRGrabbableを継承し、その基本挙動をオーバーライドすることで、
// 掴んでいる間も物理法則が働き続ける、リアルな打撃を実現する最終解決策。

using UnityEngine;

// OVRGrabbableを継承した、独自のGrabbableコンポーネントを作成
public class VRAirHockeyMallet : OVRGrabbable
{
    private Rigidbody selfRigidbody;
    private FixedJoint joint;

    // このスクリプト独自の初期化処理
    protected override void Start()
    {
        // 親クラスの初期化処理を呼び出す
        base.Start();
        selfRigidbody = GetComponent<Rigidbody>();
        // 衝突検知の精度を最高に設定
        selfRigidbody.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
    }

    /// <summary>
    /// マレットが手に掴まれた瞬間に呼び出されるメソッドをオーバーライド
    /// </summary>
    public override void GrabBegin(OVRGrabber hand, Collider grabPoint)
    {
        // ★★★★★ 最重要ポイント ★★★★★
        // 親クラスのGrabBegin()は呼び出さない。
        // これにより、`isKinematic = true` にされるのを防ぎ、物理的な挙動を維持する。
        
        // 代わりに、親クラスが担当していた最低限の処理（誰に掴まれたかの記録）を自前で行う
        m_grabbedBy = hand;
        m_grabbedCollider = grabPoint;

        // 掴んだ手(OVRGrabber)のRigidbodyを取得
        Rigidbody handRigidbody = hand.GetComponent<Rigidbody>();
        if (handRigidbody == null)
        {
            Debug.LogError("掴む側の手(OVRGrabber)にRigidbodyコンポーネントがありません！", hand);
            return;
        }

        // --- 物理的な連結を作成 ---
        // 掴んでいる間、マレットは手のRigidbodyに物理的に固定される
        joint = gameObject.AddComponent<FixedJoint>();
        joint.connectedBody = handRigidbody;
    }

    /// <summary>
    /// マレットが手から離された瞬間に呼び出されるメソッドをオーバーライド
    /// </summary>
    [System.Obsolete]
    public override void GrabEnd(Vector3 linearVelocity, Vector3 angularVelocity)
    {
        // --- 物理的な連結を解除 ---
        if (joint != null)
        {
            Destroy(joint);
            joint = null;
        }

        // ★★★ 親クラスのGrabEnd()を呼び出す前に、マレットの速度をリセット ★★★
        // これにより、手を離したときにマレットが吹っ飛んでいくのを防ぐ
        selfRigidbody.velocity = Vector3.zero;
        selfRigidbody.angularVelocity = Vector3.zero;

        // 親クラスのGrabEndを呼び出して、標準の離す処理（m_grabbedByのクリアなど）を完了させる
        base.GrabEnd(Vector3.zero, Vector3.zero);
    }
}

