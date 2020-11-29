using UnityEngine;
using UnityEngine.SceneManagement;

public class scene_change : MonoBehaviour
{
    public GameObject dark;
    public GameObject mainMenu;
    public pumpkin_colider pumpkin_col;
    public bool isStop = false;

    void Start()
    {
        Time.timeScale = 1;
        mainMenu.SetActive(false);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) || Input.GetKeyDown(KeyCode.JoystickButton1)) Stop();
        if (Input.GetKeyDown(KeyCode.R) || Input.GetKeyDown(KeyCode.JoystickButton3)) loadScene("game");
    }


    public void loadScene(string name)
    {
        SceneManager.LoadScene(name);
    }
    public void loadScene(int number)
    {
        SceneManager.LoadScene(number);
    }

    public void Exit()
    {
        Application.Quit();
    }

    public void Stop()
    {
        isStop = !isStop;
        if (isStop)
        {
            Time.timeScale = 0;
            Seconds.timer.Stop();
            mainMenu.SetActive(true);
            dark.SetActive(true);
        }
        else
        {
            Time.timeScale = 1;
            if (pumpkin_col.isGetPumpkin)
            {
                Seconds.timer.Start();
            }
            mainMenu.SetActive(false);
            dark.SetActive(false);
        }
    }
}
