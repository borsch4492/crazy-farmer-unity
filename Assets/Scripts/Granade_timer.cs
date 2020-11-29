using UnityEngine;
using UnityEngine.Tilemaps;
using System.Collections;

public class Granade_timer : MonoBehaviour
{
    public TileBase grass_tile;
    public TileBase ice_tile;
    public Tilemap ground;
    public GameObject boom_effect_prefab;
    public player_move player;

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

    void Start()
    {
        granade_x = transform.position.x;
        granade_y = transform.position.y;
        ground = player.ground;
    }

    void Update()
    {
        if (time < cooldown)
        {
            time += Time.deltaTime;
            print(1);
        }
        else if (time >= cooldown && !isBoom)
        {
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x, granade_y, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 1f, granade_y, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x - 1f, granade_y, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x, granade_y + 1f, 0)), ice_tile);
            ground.SetTile(ground.WorldToCell(new Vector3(granade_x, granade_y - 1f, 0)), ice_tile);

            Instantiate(boom_effect_prefab, new Vector3(granade_x, granade_y, -3), new Quaternion());
            transform.position = new Vector3(granade_x - 100f, granade_y, 0f);
            isBoom = true;
            print("boom");
        }
        if (isBoom)
        {
            StartCoroutine(unFreeze());
            one = true;
            print("shhhh");
        }
    }
    IEnumerator unFreeze()
    {
        yield return new WaitForSeconds(ice_cooldown);
        print(2);
        yield return new WaitForSeconds(Random.Range(-1f, 1f));
        ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 100f, granade_y, 0)), grass_tile);
        yield return new WaitForSeconds(Random.Range(-1f, 1f));
        ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 100f + 1f, granade_y, 0)), grass_tile);
        yield return new WaitForSeconds(Random.Range(-1f, 1f));
        ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 100f - 1f, granade_y, 0)), grass_tile);
        yield return new WaitForSeconds(Random.Range(-1f, 1f));
        ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 100f, granade_y + 1f, 0)), grass_tile);
        yield return new WaitForSeconds(Random.Range(-1f, 1f));
        ground.SetTile(ground.WorldToCell(new Vector3(granade_x + 100f, granade_y - 1f, 0)), grass_tile);
    }
}
