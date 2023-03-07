using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerDoorController : MonoBehaviour
{
    [SerializeField] private Animator myDoor = null;
    public static bool openAndDoor = false;
    public static bool openOrDoor = false;
    [Header("Audio")]
    [SerializeField] private AudioSource doorOpenAudioSource = null;
    [SerializeField] private float openDelay = 0;

    private int counter = 0;
    void OnTriggerEnter(Collider col)
        {
        if (col.CompareTag("Microchip"))
        {
            counter++;
            if (counter == 2 && gameObject.name == "and_chip_mesh" && !openAndDoor)
            {
                myDoor.Play("DoorOpen", 0, 0.0f);
                doorOpenAudioSource.PlayDelayed(openDelay);
                gameObject.SetActive(false);
                openAndDoor = true;
            }
            else if (gameObject.name == "or_chip_mesh" && !openOrDoor) 
            {
                myDoor.Play("OrDoorOpen", 0, 0.0f);
                doorOpenAudioSource.PlayDelayed(openDelay);
                gameObject.SetActive(false);
                openOrDoor = true;
            }
        }
    }
}
