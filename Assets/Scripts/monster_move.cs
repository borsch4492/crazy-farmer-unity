using UnityEngine;
using UnityEngine.Tilemaps;
using Pathfinding;

public class monster_move : MonoBehaviour
{
    public Rigidbody2D rb_player;
    public Transform tr_player;
    public AIPath aiPath;
    public TileBase ice_tile;
    public Tilemap ground;

    private Rigidbody2D rb;
    private Vector2 move;
    private float angle;
    private Vector3 dir;
    
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        move = rb_player.position - rb.position;
        move = move.normalized;
        dir = tr_player.position - transform.position;
        angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;

        if (ground.GetTile(new Vector3Int(Mathf.RoundToInt(rb.position.x), Mathf.RoundToInt(rb.position.y), 0)) == ice_tile)
        {
            aiPath.enabled = false;
        }
        else
        {
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            aiPath.enabled = true;
        }
    }


    public void setMonsterSpeed(float speed)
    {
        aiPath.maxSpeed = speed;
    }
}

