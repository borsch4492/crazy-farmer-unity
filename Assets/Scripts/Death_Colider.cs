using UnityEngine;
using UnityEngine.UI;

public class Death_Colider : MonoBehaviour
{
    public bool isDead;
    public GameObject obj;
    public GameObject obj2;
    public GameObject obj3;
    public Text text;
    public TypeWriterEffect type;

    private string[] frazes = 
    {
        "Хоть бы постарался >:(",
        "Прекрасно, это был сарказм)",
        "Ха, не получилосьы",
        "А я на тебя и не ставил))) [̲̅$̲̅(̲̅5̲̅)̲̅$̲̅]",
        "...",
        "Шта? ◉_◉",
        "Спасибо, досвидания ─=≡Σ( ͡° ͜ʖ ͡°)",
        "¯/_(ツ)_/¯",
        "Не старайся, все равно не выйдет",
        "Предсказуемо",
        "Лучшего я и не ждал...",
        "ъ̴̻̬̲̼̱̂̏̀̐у̸̱̮̻̭͓̫̭̫͈͗̀͆̉͊̒̽͒͐ъ̴͔̝̙̲͍̯̭̟̒̀̓̈́?",
        "Хорошо выходит! ( ͡~ ͜ʖ ͡°)",
        "Продолжай в том-же духе (╭☞ ͡°ᨎ ͡°)╭☞",
        "Fatality!",
        "Kvakazyabra wins!",
        "へ‿(ツ)‿ㄏ",
        "Лечу к твоей мамаше ─=≡Σ(´•  ³ •`)",
        "Срака не подгорела?"
    };
    private string fraze;

    void Start() 
    {
        int r = Random.Range(0, frazes.Length+1);
        text.text = frazes[r];
        //type.fullText = fraze;
    }

    void Update()
    {
        obj.SetActive(isDead);
        obj2.SetActive(isDead);
        obj3.SetActive(isDead);

        if (isDead) Time.timeScale = 0;
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "monster")
        {
            isDead = true;
            Time.timeScale = 0;
            Seconds.timer.Stop();
            type.textType();
        }
    }
}