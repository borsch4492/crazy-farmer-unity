using UnityEngine;
using UnityEngine.Tilemaps;

public class Granade_timer : MonoBehaviour
{
    public TileBase grass_tile;
    public TileBase ice_tile;
    public Tilemap ground;
    public GameObject boom_effect_prefab;

    private const float cooldown = 1;
    private const float ice_cooldown = 5;
    private float time = 0;
    private float ice_time = 0;
    private bool isBoom = false;
    private float granade_x;
    private float granade_y;
    private float[] delay_time;
    private float[] rand_ice_cooldown;
    private bool one = false;

    void Start(){}

    void Update()
    {
        if (time < cooldown)
        {
            time += Time.deltaTime;
        }
        else if (time >= cooldown && !isBoom)
        {
            granade_x = transform.position.x;
            granade_y = transform.position.y;

            ground.SetTile(ground.WorldToCell(new Vector3(granade_x, granade_y, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 1f, granade_y, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x - 1f, granade_y, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x, granade_y + 1f, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x, granade_y - 1f, 0)), ice_tile);
            
            Instantiate(boom_effect_prefab, new Vector3(granade_x, granade_y, -3), new Quaternion());
            transform.position = new Vector3(granade_x - 100f, granade_y, 0f);
            isBoom = true;
        }
        
        if (ice_time < ice_cooldown)
        {
            ice_time += Time.deltaTime;
        }
        else if (ice_time >= ice_cooldown && isBoom && !one)
        {
            ground.SetTile(ground.WorldToCell(new Vector3(transform.position.x + 100f, granade_y, 0)), grass_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(transform.position.x + 100f + 1f, granade_y, 0)), grass_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(transform.position.x + 100f - 1f, granade_y, 0)), grass_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(transform.position.x + 100f, granade_y + 1f, 0)), grass_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(transform.position.x + 100f, granade_y - 1f, 0)), grass_tile);
            one = true;
        }
    }

    // IEnumerator Fade()
    // {
    // }
}
