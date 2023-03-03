using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinalDoorOpen : MonoBehaviour
{
    [SerializeField] private Animator myDoor = null;
    public static bool doorOpened = false;
    [Header("Audio")]
    [SerializeField] private AudioSource doorOpenAudioSource = null;
    [SerializeField] private float doorOpenDelay = 0;
    
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (!doorOpened)
            {
                myDoor.Play("FinalDoorOpen", 0, 0.0f);
                doorOpenAudioSource.PlayDelayed(doorOpenDelay);
                doorOpened = true;
            }
        }
    }

}
