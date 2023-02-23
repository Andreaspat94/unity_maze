using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuizTrigger : MonoBehaviour
{
   private static bool triggerOnce = false;
   void OnTriggerEnter(Collider other)
   {
        if (other.CompareTag("Player") && !triggerOnce)
        {
            TriggerQuiz();
            triggerOnce = true;
        }
   }

   public void TriggerQuiz()
   {
     FindObjectOfType<GameManager>().SetCurrentQuestion();
   }
}
