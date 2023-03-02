using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CodeManager : MonoBehaviour
{
    // private static int counter = 0;
    public static List<bool> triggerCheck = new List<bool> 
    {
        false, false, false, false, false, false, false, false, false, false, false 
    };

    public static bool triggeredOnce = false;
    [SerializeField] private Animator myDoor = null;
    public static bool doorOpened = false;
    private GameObject top, bottom, left, right;
    
    private Material topMaterial, bottomMaterial, leftMaterial, rightMaterial;
    private string frame, otherName, frameName;
    private int otherNameNumber, frameNameNumber;
    private string temp;

    [Header("Audio")]
    [SerializeField] private AudioSource doorOpenAudioSource = null;
    [SerializeField] private AudioSource correctCodeAudioSource = null;
    [SerializeField] private float doorOpenDelay = 0;


    void OnTriggerEnter(Collider other)
    {

        otherName = other.gameObject.name;
        frameName = gameObject.name;

        temp = otherName.Substring(otherName.Length - 2);
        int result;
        if (int.TryParse(temp, out result))
        {
            
            otherNameNumber = int.Parse(temp); 
        } else 
        {
            Debug.Log("PROBLEM WITH CAST (other): " + result);
        }
        
        
        temp = frameName.Substring(frameName.Length - 2);
    
        if (int.TryParse(temp, out result))
        {
            
            frameNameNumber = int.Parse(temp);    
        } else
        {
             Debug.Log("PROBLEM WITH CAST (frame): " + result);
        }


        if (frameNameNumber == otherNameNumber)
        {
            frame = "Frame" + temp;
            correctAnswer(frame, otherNameNumber);
            triggerCheck[otherNameNumber - 1] = true;
        }
    
        
        if (!doorOpened && !triggerCheck.Contains(false))
        {
            myDoor.Play("CodeDoorOpen", 0, 0.0f);
            doorOpenAudioSource.PlayDelayed(doorOpenDelay);
            doorOpened = true;
        }
    }

    void correctAnswer(string frame, int number)
    {
        top = GameObject.Find(frame + "/top");
        bottom = GameObject.Find(frame + "/bottom");
        left = GameObject.Find(frame + "/left");
        right = GameObject.Find(frame + "/right");

        topMaterial = top.GetComponent<Renderer>().material;
        bottomMaterial = bottom.GetComponent<Renderer>().material;
        leftMaterial = left.GetComponent<Renderer>().material;
        rightMaterial = right.GetComponent<Renderer>().material;

        topMaterial.color = Color.green;
        bottomMaterial.color = Color.green;
        leftMaterial.color = Color.green;
        rightMaterial.color = Color.green;

        if (!triggerCheck[number - 1])
        {
            correctCodeAudioSource.PlayDelayed(doorOpenDelay);
        }
        
    }
}
