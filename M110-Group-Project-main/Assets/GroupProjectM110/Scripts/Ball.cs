using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
   void OnTriggerEnter(Collider other)
   {
        if (other.CompareTag("Ring"))
        {
            gameObject.SetActive(false);
        }
   }
}
