using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger : MonoBehaviour
{
   public Dialogue dialogue;
   void OnTriggerEnter(Collider col)
   {
      if (col.CompareTag("Player"))
      {
         TriggerDialogue();
      }
   }

   public void TriggerDialogue()
   {
      FindObjectOfType<DialogueManager>().StartDialogue(dialogue);
   }
}
