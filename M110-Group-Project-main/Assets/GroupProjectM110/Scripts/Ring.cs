using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Ring : MonoBehaviour
{
    [SerializeField] private Animator rightDoor = null;
    [SerializeField] private Animator wrongDoor = null;
    [Header("Audio")]
    [SerializeField] private AudioSource rightDoorOpenAudioSource = null;
    [SerializeField] private float doorOpenDelay = 0;

    // public GameObject obj;
    public static List<string> rgbColors = new List<string>(3)
    {
        "RedRing",
        "GreenRing",
        "BlueRing"
    };
    public static int counter = 0;
    public static int rgbCounter = 0;
    public static bool doorOpened = false;
    public static List<string> copyRgbColors = rgbColors.ToList();
    void OnTriggerEnter(Collider other)
    {
        
        if (other.CompareTag("ball"))
        {  
        //  coinSound.PlayDelayed(soundDelay);
          counter++;
          if (counter < 3)
          {
            if (copyRgbColors.Contains(gameObject.name))
            {
                copyRgbColors.Remove(gameObject.name);    
            }
          }
          else 
          {
            if (copyRgbColors.Contains(gameObject.name) && copyRgbColors.Count() == 1)
            {
                //door opens
                rightDoor.Play("RGBDoorOpen", 0, 0.0f);
                rightDoorOpenAudioSource.PlayDelayed(doorOpenDelay);
            }
            else if (!doorOpened)
            {
                wrongDoor.Play("wrongRGBDoorOpen", 0, 0.0f);
                rightDoorOpenAudioSource.PlayDelayed(doorOpenDelay);
                doorOpened = true;
            }

            copyRgbColors = rgbColors.ToList();
            counter = 0;
          }
        }
    }
}

