using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerDoorController : MonoBehaviour
{
    [SerializeField] private Animator myDoor = null;
    [SerializeField] private bool openTrigger = false;
    [Header("Audio")]
    [SerializeField] private AudioSource doorOpenAudioSource = null;
    [SerializeField] private float openDelay = 0;
    
    private int counter = 0;
    void OnTriggerEnter(Collider other)
    {
        if (openTrigger && other.CompareTag("Microchip"))
        {
            counter++;
            if (counter == 2 && gameObject.name == "and_chip_mesh")
            {
                myDoor.Play("DoorOpen", 0, 0.0f);
                doorOpenAudioSource.PlayDelayed(openDelay);
                gameObject.SetActive(false);
            }
            else if (gameObject.name == "or_chip_mesh") 
            {
                myDoor.Play("OrDoorOpen", 0, 0.0f);
                doorOpenAudioSource.PlayDelayed(openDelay);
                gameObject.SetActive(false);
            }
        }
    }
}
