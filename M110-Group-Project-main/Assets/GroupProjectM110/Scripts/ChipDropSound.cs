using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChipDropSound : MonoBehaviour
{
[SerializeField] private AudioSource dropSound = null;

void OnCollisionEnter(Collision col)
{
    if (col.relativeVelocity.magnitude > 1)
    {
        dropSound.Play();
    }
}

}
