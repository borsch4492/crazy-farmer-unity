using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Tilemaps;
using System.Diagnostics;

public class mapGenerator : MonoBehaviour
{
    [Header("Tile")]
    public Tilemap walls;
    public Tilemap ground;
    public TileBase[] wall_tiles;
    public TileBase[] ground_tiles;
    [Header("Text")]
    public Text input;
    public Text output;
    [Header("Other")]
    public GameObject pumkin_prefab;

    private int di;
    private bool first = true;
    private int seconds = System.Int32.Parse(System.DateTime.Now.ToString("ss"));
    private int AstarPath_UpdateCount;

    void Start()
    {
        for (int c = 0; c < 5; c++)
        {
            randomSwamp(Random.Range(0, 20), Random.Range(0, -20));
        }

        randomRiver();
        randomWay();

        for (int c = 0; c < 5; c++)
        {
            randomPumpkin();
        }
        clearSpawn();
        //AstarPath.active.Scan();
    }

    void Update()
    {
        if(AstarPath_UpdateCount < 3)
        {
            AstarPath.active.Scan();
        }
        AstarPath_UpdateCount--;
    }


    public void randomPumpkin()
    {
        int x = Random.Range(0, 20);
        int y = Random.Range(-1, -21);

        while (true)
        {
            if (walls.GetTile(new Vector3Int(x, y, -1)) == null)
            {
                break;
            }
            x = Random.Range(0, 20);
            y = Random.Range(-1, -21);
            print(walls.GetTile(new Vector3Int(x, y, -1)));
        }

        Instantiate(pumkin_prefab, new Vector3(x, y, -2), new Quaternion());
    }

    public void randomSwamp(int x, int y)
    {
        x -= 1;
        y -= 1;
        walls.SetTile(walls.WorldToCell(new Vector3(x, y, 0)), wall_tiles[0]);
        walls.SetTile(walls.WorldToCell(new Vector3(x + 1, y, 0)), wall_tiles[0]);
        walls.SetTile(walls.WorldToCell(new Vector3(x, y + 1, 0)), wall_tiles[0]);
        walls.SetTile(walls.WorldToCell(new Vector3(x + 1, y + 1, 0)), wall_tiles[0]);
    }

    void randomRiver()
    {
        di = Random.Range(0, 2);
        if (di == 0)
        {
            addRandomHRiver();
        }
        else
        {
            addRandomVRiver();
        }
    }

    void addRandomHRiver()
    {
        int ry = Random.Range(-5, -20 + 1 + 5);
        for (int x = 0; x < 20; x++)
        {
            walls.SetTile(walls.WorldToCell(new Vector3(x, ry, 0)), wall_tiles[1]);
        }
    }

    void addRandomVRiver()
    {
        int rx = Random.Range(5, 20 - 1 - 5);
        for (int y = -1; y > -21; y--)
        {
            walls.SetTile(walls.WorldToCell(new Vector3(rx, y, 0)), wall_tiles[1]);
        }
    }

    void randomWay()
    {
        if (di == 1)
        {
            addRandomHWay();
        }
        else
        {
            addRandomVWay();
        }
    }

    void addRandomHWay()
    {
        int ry = Random.Range(-5, -20 + 1 + 5);
        for (int x = 0; x < 20; x++)
        {
            walls.SetTile(walls.WorldToCell(new Vector3(x, ry, 0)), null);
            ground.SetTile(ground.WorldToCell(new Vector3(x, ry, 0)), ground_tiles[2]);
        }
    }

    void addRandomVWay()
    {
        int rx = Random.Range(5, 20 - 1 - 5);
        for (int y = -1; y > -21; y--)
        {
            walls.SetTile(walls.WorldToCell(new Vector3(rx, y, 0)), null);
            ground.SetTile(ground.WorldToCell(new Vector3(rx, y, 0)), ground_tiles[2]);
        }
    }

    public void generateMap(bool isRandom)
    {
        // if (!first)
        // {
        if (!isRandom)
        {
            int inp = int.Parse(input.text);
            Random.InitState(inp);
            output.text = "Seed: " + inp;
        }
        else
        {
            Random.InitState(System.Int32.Parse(System.DateTime.Now.Millisecond.ToString()));
            int r = Mathf.RoundToInt(Random.Range(-999999999, 999999999));
            Random.InitState(r);
            output.text = "Seed: " + r;
        }
        // }first = false;

        for (int x = 0; x < 20; x++)
        {
            for (int y = 0; y > -21; y--)
            {
                walls.SetTile(walls.WorldToCell(new Vector3(x, y, 0)), null);
                ground.SetTile(ground.WorldToCell(new Vector3(x, y, 0)), ground_tiles[0]);
            }
        }
        for (int c = 0; c < 5; c++)
        {
            Destroy(GameObject.FindGameObjectsWithTag("pumpkin")[c]);
        }

        for (int c = 0; c < 5; c++)
        {
            randomSwamp(Random.Range(0, 20), Random.Range(0, -20));
        }
        randomRiver();
        randomWay();
        for (int c = 0; c < 5; c++)
        {
            randomPumpkin();
        }
    }
    
    void clearSpawn()
    {
        walls.SetTile(walls.WorldToCell(new Vector3(0, -1, 0)), null);
        walls.SetTile(walls.WorldToCell(new Vector3(0, -2, 0)), null);
        walls.SetTile(walls.WorldToCell(new Vector3(1, -1, 0)), null);
        walls.SetTile(walls.WorldToCell(new Vector3(1, -2, 0)), null);
    }
}
