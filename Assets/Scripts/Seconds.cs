using UnityEngine;
using UnityEngine.UI;
using System.Diagnostics;


public class Seconds : MonoBehaviour
{
    public Text Secundomer;
    public static Stopwatch timer;
    public GameObject cristmass_hat;
    public SpriteRenderer pumpkin;
    public Sprite sprite;
    public Sprite sprite2;
    public pumpkin_colider colider;

    private int month = System.Int32.Parse(System.DateTime.Now.ToString("MM"));

    void Start()
    {
        timer = new Stopwatch();
        cristmass_hat.SetActive(false);
        if (month == 12 || month == 1)
        {
            cristmass_hat.SetActive(true);
            pumpkin.sprite = sprite;
        }
        else
        {
            pumpkin.sprite = sprite2;
        }
    }
    void Update()
    {
        string txt = timer.Elapsed.ToString().Substring(0, timer.Elapsed.ToString().Length - 3);
        if (colider.isGetPumpkin)
        {
            Secundomer.text = txt.Remove(0, 3);
            Secundomer.fontSize = 14;
        }else
        {
            Secundomer.text = "Подбери тыкву";
            Secundomer.fontSize = 9;
        }
    }
}
