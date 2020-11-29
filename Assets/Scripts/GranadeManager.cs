using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GranadeManager : MonoBehaviour
{
    public Transform player_transform;
    public GameObject granade_prefab;
    public GameObject boom_prefab;
    public Tilemap ground;

    private GameObject granade;

    void Start()
    {
        
    }

    void Update()
    {
        //Instantiate(granade_prefab, player_transform.position, new Quaternion());
        granade = GameObject.FindGameObjectWithTag("Granade");
        granade.GetComponent<Granade_timer>().ground = ground;
    }

    public void dropGranade()
    {
        Instantiate(granade_prefab, player_transform.position, new Quaternion());
        granade = GameObject.FindGameObjectWithTag("Granade");
        granade.GetComponent<Granade_timer>().ground = ground;
    }
}
