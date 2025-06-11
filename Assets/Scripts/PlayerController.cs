using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Camera mainCamera; // メインカメラをアタッチ
    public Rigidbody rb;      // マレットのRigidbodyをアタッチ

    // マレットの移動可能範囲
    public float minX = -4.5f;
    public float maxX = 4.5f;
    public float minZ = -9.0f;
    public float maxZ = -0.5f; // センターラインを超えないように

    private float fixedY; // マレットのY座標（高さ）を固定

    void Start()
    {
        if (rb == null)
        {
            rb = GetComponent<Rigidbody>();
        }
        // マウスカーソルを非表示にする（お好みで）
        // Cursor.visible = false;
        
        // 開始時のY座標を保存
        fixedY = transform.position.y;
    }

    void FixedUpdate()
    {
        // スクリーン上のマウス位置をワールド座標に変換
        Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            // マウスの位置にマレットを移動させる
            Vector3 targetPosition = new Vector3(hit.point.x, fixedY, hit.point.z);

            // 移動範囲を制限
            targetPosition.x = Mathf.Clamp(targetPosition.x, minX, maxX);
            targetPosition.z = Mathf.Clamp(targetPosition.z, minZ, maxZ);

            // Rigidbodyを使って物理的に正しい挙動で移動
            rb.MovePosition(targetPosition);
        }
    }
}