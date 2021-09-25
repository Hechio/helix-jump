using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public BallController target;
    private float offset;

    private void Awake()
    {
        offset = transform.position.y - target.transform.position.y;
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //camera follow ball
        Vector3 curPos = transform.position;
        curPos.y = target.transform.position.y + offset;
        transform.position = curPos;
    }
}
