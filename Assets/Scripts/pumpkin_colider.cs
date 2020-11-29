using UnityEngine;
using UnityEngine.UI;

public class pumpkin_colider : MonoBehaviour
{
    [Header("Text")]
    public Text score_text;
    public Text highScore_text;
    public Text time_text;
    [Header("GameObject")]
    public GameObject mapGenerator;
    public GameObject monster_move;
    public GameObject slider_obj;
    [Header("Int")]
    public int score = 0;
    public int highScore = 0;
    [Header("Other")]
    public string pumpkin_tag = "pumpkin";
    public float speed = 0;
    public bool isGetPumpkin = false;
    public Slider slider;

    private float s = 0;
    private float del = 10;
    private float c;

    void Start()
    {
        highScore = PlayerPrefs.GetInt("highscore");
        PlayerPrefs.Save();
    }

    void Update()
    {
        if (isGetPumpkin)
        {
            s = s + Time.deltaTime * (speed / del);//Mathf.RoundToInt(speed / del);
            if (s >= 1)
            {
                score += 1;//Mathf.RoundToInt(speed / 5);
                s = 0;
            }
        }

        if (score > highScore)
        {
            highScore = score;
            PlayerPrefs.SetInt("highscore", highScore);
            PlayerPrefs.Save();
        }

        slider_obj.SetActive(isGetPumpkin && highScore != score);

        slider.maxValue = highScore;
        slider.value = score;

        highScore_text.text = "High Score: " + highScore;
        score_text.text = "Score: " + score;
        time_text.text = "Time*: " + (speed / del); // + Mathf.RoundToInt(speed / del);
    }


    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.tag == pumpkin_tag)
        {
            Destroy(other.gameObject);
            mapGenerator.GetComponent<mapGenerator>().randomPumpkin();
            score += 10;
            speed += 0.5f;
            Seconds.timer.Start();
            monster_move.GetComponent<monster_move>().setMonsterSpeed(speed);
            isGetPumpkin = true;
        }
    }
}
