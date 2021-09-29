using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour
{
    private bool ignoreNextCollision;
    public Rigidbody rb;
    public float impulseForce = 3f;
    private Vector3 startPos;
    public int perfecrPass = 0;
    public bool isSupperSpeedActive;
    public AudioSource audioSource;
    // Start is called before the first frame update
    void Start()
    {
        startPos = transform.position;
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (ignoreNextCollision)
            return;

        if (isSupperSpeedActive)
        {
            if (!collision.transform.GetComponent<Goal>())
            {
                Destroy(collision.transform.parent.gameObject, 0.3f);
                Debug.Log("Destroying platform");
            }
        }
        else
        {
            //Adding reset level via death part, - initiallizes when deathpart is hit
            DeathPart deathPart = collision.transform.GetComponent<DeathPart>();
            if (deathPart)
            {
                deathPart.HitDeathPart();
            }
        }

        audioSource.Play();
        rb.velocity = Vector3.zero;
        rb.AddForce(Vector3.up * impulseForce, ForceMode.Impulse);
        ignoreNextCollision = true;
        Invoke("AllowCollision", .2f);

        perfecrPass = 0;
    }

    private void Update()
    {
        if(perfecrPass >=3 && !isSupperSpeedActive)
        {
            isSupperSpeedActive = true;
            rb.AddForce(Vector3.down * 10, ForceMode.Impulse);
        }
        else
        {
            isSupperSpeedActive = false;
        }
    }

    private void AllowCollision()
    {
        ignoreNextCollision = false;
    }

   public void ResetBall()
    {
        perfecrPass = 0;
        transform.position = startPos;
    }
}
