using UnityEngine;
using UnityEngine.Tilemaps;

public class player_move : MonoBehaviour
{
    public float speed = 15f;
    public Joystick joystick;
    public TileBase ice_tile;
    public Tilemap ground;
    public scene_change load;

    private Rigidbody2D rb;
    private float angle;
    private float moveX;
    private float moveY;
    private Death_Colider death;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        death = GetComponent<Death_Colider>();
    }

    void Update()
    {
        if (ground.GetTile(new Vector3Int(Mathf.RoundToInt(rb.position.x), Mathf.RoundToInt(rb.position.y), 0)) != ice_tile)
        {
            moveX = Input.GetAxis("Horizontal");
            moveY = Input.GetAxis("Vertical");

            if (joystick.Horizontal != 0 || joystick.Vertical != 0)
            {
                moveY = joystick.Vertical;
                moveX = joystick.Horizontal;
            }

            angle = 360f - (Mathf.Atan2(moveX, moveY) * Mathf.Rad2Deg) + 90f;
            rb.MovePosition(rb.position + Vector2.up * moveY * speed * Time.deltaTime + Vector2.right * moveX * speed * Time.deltaTime);

            if (moveX != 0 || moveY != 0)
            {
                transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            }
        }
    }
}
