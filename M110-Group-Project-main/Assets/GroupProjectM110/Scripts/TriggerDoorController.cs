using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerDoorController : MonoBehaviour
{
    public static List<string> microchips = new List<string> 
    {
        "microchip1" , "microchip2", "microchip3", "microchip4"
    };
    private string chipName, meshName;
    private GameObject top, bottom, left, right;
    private Material topMaterial, bottomMaterial, leftMaterial, rightMaterial;
    private int frameNumber, result;
    private string temp;
    [SerializeField] private Animator myDoor = null;
    [Header("Audio")]
    [SerializeField] private AudioSource doorOpenAudioSource = null;
    [SerializeField] private float openDelay = 0;
    public static bool doorOpened = false;
    private static int counter = 0;
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Microchip"))
        {
            chipName = other.gameObject.name;
            meshName = gameObject.name;
            temp = meshName.Substring(meshName.Length - 1);

            if (int.TryParse(temp, out result))
            {
                frameNumber = int.Parse(temp);    
            } 
            else
            {
                Debug.Log("PROBLEM WITH CAST (frame): " + result);
            }
            
            if ((meshName == "and_chip_mesh_2" || meshName == "and_chip_mesh_1") 
                && microchips.Contains(chipName))
            {
                counter++;
                changeColor("Frame" + frameNumber);
                if (counter == 2)
                {
                    myDoor.Play("DoorOpen", 0, 0.0f);
                    doorOpenAudioSource.PlayDelayed(openDelay);
                }
                microchips.Remove(chipName);
                gameObject.SetActive(false);
            }


            else if ((meshName == "or_chip_mesh_1" || meshName == "or_chip_mesh_2")
            && microchips.Contains(chipName)) 
            {
                changeColor("Frame" + frameNumber);
                myDoor.Play("OrDoorOpen", 0, 0.0f);
                doorOpenAudioSource.PlayDelayed(openDelay);
                microchips.Remove(chipName);
                gameObject.SetActive(false);
            }
        }
        
    }

    void changeColor(string frame)
    {
        Debug.Log("Frame: " + frame);
        top = GameObject.Find(frame + "/top");
        bottom = GameObject.Find(frame + "/bottom");
        left = GameObject.Find(frame + "/left");
        right = GameObject.Find(frame + "/right");

        Debug.Log("top: " + top);
        topMaterial = top.GetComponent<Renderer>().material;
        bottomMaterial = bottom.GetComponent<Renderer>().material;
        leftMaterial = left.GetComponent<Renderer>().material;
        rightMaterial = right.GetComponent<Renderer>().material;
        Debug.Log("topMaterial: " + topMaterial);

        topMaterial.color = Color.green;
        bottomMaterial.color = Color.green;
        leftMaterial.color = Color.green;
        rightMaterial.color = Color.green;

        Debug.Log("topMaterial color: " + topMaterial.color);
    }
}
