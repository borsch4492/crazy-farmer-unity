using UnityEngine;

public class Cursor : MonoBehaviour
{
    public Transform Player;
    public Transform Monster;
    public Renderer Monster_renderer;

    private float angle;
    private Vector3 dir;

    void Start() { }

    void Update()
    {
        dir = Player.position - Monster.position;
        angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.AngleAxis(angle + 180, Vector3.forward);

        if (!Monster_renderer.isVisible || Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.JoystickButton2)) transform.position = Player.position;
        else transform.position = new Vector3(-100, -100);
    }
}
