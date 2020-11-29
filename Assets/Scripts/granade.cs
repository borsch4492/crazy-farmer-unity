using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class granade : MonoBehaviour
{
    [Header("Gameobject")]
    public GameObject granade_prefab;
    public GameObject obj_slider;
    public GameObject obj_slider2;
    [Header("Tile")]
    public Tilemap ground;
    public TileBase ice_tile;
    public TileBase grass_tile;
    [Header("Slider")]
    public Slider slider;
    public Slider slider2;
    [Header("Image")]
    public Image image;
    public Image granade_img;
    [Header("Other")]
    public Transform player;
    public GranadeManager manager;

    private float granade_x, granade_y;
    private bool isDeploy = false;
    private bool second = false;
    private Color red = new Color(255, 0, 0, 255);
    private Color yellow = new Color(255, 255, 0, 255);
    private float currentValue = 0f;
    private float currentValue2 = 0f;
    private const float maxValue = 10f;
    private const float maxValue2 = 1f;
    private const float maxValue3 = 4f;

    void Start()
    {
        obj_slider.SetActive(false);
        slider.maxValue = maxValue;
        slider.value = currentValue;

        obj_slider2.SetActive(false);
        slider2.maxValue = maxValue2;
        slider2.value = currentValue2;
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.JoystickButton0))
        {
            deploy();
        }

        if (currentValue > 0)
        {
            obj_slider.SetActive(true);
            currentValue -= Time.deltaTime;
            granade_img.fillAmount = 1 - (currentValue / maxValue);
        }
        else
        {
            obj_slider.SetActive(false);
            obj_slider2.SetActive(false);
        }

        if (isDeploy)
        {
            if (currentValue2 > 0)
            {
                currentValue2 -= Time.deltaTime;
                obj_slider2.SetActive(true);
            }
            else
            {
                if (second == false)
                {
                    currentValue2 = maxValue3;
                    image.color = yellow;
                    slider2.maxValue = maxValue3;
                }
                else
                {
                    obj_slider2.SetActive(false);
                }

                second = true;
            }
        }

        if (!second)
        {
            slider2.value = maxValue2 - currentValue2;
        }
        else
        {
            slider2.value = currentValue2;
        }

        slider.value = currentValue;
    }

    public void deploy()
    {
        if (currentValue <= 0)
        {
            isDeploy = true;
            second = false;
            slider2.maxValue = maxValue2;
            image.color = red;

            currentValue = maxValue;
            currentValue2 = maxValue2;

            Instantiate(granade_prefab, player.position, new Quaternion());
            //manager.dropGranade();

            granade_x = player.position.x;
            granade_y = player.position.y;

            obj_slider.SetActive(true);
            obj_slider2.SetActive(true);
        }
    }
}
