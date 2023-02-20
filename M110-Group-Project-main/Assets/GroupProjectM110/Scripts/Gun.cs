using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{
    public Rigidbody Ball;
    public float velocity = 50;
    [SerializeField] private AudioSource gunShot = null;
    [SerializeField] private float openDelay = 0;
    bool fire = false;

    void Start()
    {
    
    }

    void Update()
    {
        float triggerLeft = OVRInput.Get(OVRInput.RawAxis1D.LIndexTrigger);
        float triggerRight = OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger);
        //float secondaryTriggerRight = OVRInput.Get(OVRInput.Axis1D.SecondaryIndexTrigger);

        if (triggerRight > 0.9f && fire == false)
        {
            gunShot.PlayDelayed(openDelay);
            fire = true;
            Rigidbody clone = Instantiate(Ball, transform.position, transform.rotation) as Rigidbody;
            clone.velocity = transform.TransformDirection(new Vector3(0, 0, velocity));
            Destroy(clone.gameObject, 3);
        }

        if (fire == true && triggerRight < 0.1f)
        {
            fire = false;
        }
    }
}
