using UnityEngine;
using UnityEngine.UI;

public class HighScore : MonoBehaviour
{
    public Text text;

    private int highScore;
    
    void Start()
    {
        highScore = PlayerPrefs.GetInt("highscore");
        text.text = "High Score: " + highScore;
    }

    void Update(){}
}
