using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Linq;
using TMPro;

public class GameManager : MonoBehaviour
{
   public Question[] questions;
   private static List<Question> unansweredQuestions;
   private Question currentQuestion;
   private int questionIndex = 0;

   [SerializeField]
   private Text factText;

   [SerializeField]
   private Text aAnswerText;

   [SerializeField]
   private Text bAnswerText;

   [SerializeField]
   private TextMeshProUGUI aButtonText;

   [SerializeField]
   private TextMeshProUGUI bButtonText;
   
   [SerializeField]
   private float timeBetweenQuestions;

   [SerializeField]
   private Animator animator;

   [SerializeField]
   private Animator doorAnimator;
   [SerializeField] private AudioSource doorOpenAudioSource = null;
   [SerializeField] private float doorOpenDelay = 0;

   private static bool answeredWrong = false;
   private static bool endGame = false;
   

   void Start()
   {
      if (unansweredQuestions == null || unansweredQuestions.Count == 0)
      {
        unansweredQuestions = questions.ToList<Question>();
      }

      SetCurrentQuestion();
   }
   
   public void SetCurrentQuestion() 
   {
        currentQuestion = unansweredQuestions[questionIndex];
        factText.text = currentQuestion.fact;
        StartCoroutine(TypeSentence(factText.text));

        aButtonText.text = currentQuestion.firstAnswer;
        bButtonText.text = currentQuestion.secondAnswer;
        if (!currentQuestion.quizStart && !currentQuestion.quizEnd)
        {
            if (currentQuestion.firstIsTrue)
            {
                bAnswerText.text = "CORRECT";
                aAnswerText.text = "WRONG";
            }
            else
            {
                bAnswerText.text = "WRONG";
                aAnswerText.text = "CORRECT";
            }
        }
        else if (currentQuestion.quizStart)
        {
            aAnswerText.text = "OK! Let's start!";
            bAnswerText.text = "OK! Let's start!";
            answeredWrong = false;
        }
        else
        {
            EndGame();
        }
        
         questionIndex++;
   } 
   
   IEnumerator TransitionToNextQuestion()
   {
        if (currentQuestion.quizEnd)
        {
           EndGame(); 
        }
        unansweredQuestions.Remove(currentQuestion);
        
        yield return new WaitForSeconds(timeBetweenQuestions);

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
   }

    IEnumerator TypeSentence(string sentence)
    {
        factText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            factText.text += letter;
            yield return null;
        }
    }

   public void UserSelectA()
   {
        animator.SetTrigger("SelectA");
        if(bAnswerText.text == "WRONG")
        {
            answeredWrong = true;
        }
        
        if (!endGame)
        {
            StartCoroutine(TransitionToNextQuestion());    
        }
    }

    public void UserSelectB()
    {
        animator.SetTrigger("SelectB");
        if(aAnswerText.text == "WRONG")
        {
            answeredWrong = true;
        }
        if (!endGame)
        {
            StartCoroutine(TransitionToNextQuestion());    
        }
        
    }

   public void EndGame()
   {
         if(!answeredWrong) 
        {
            doorAnimator.Play("QuizDoorOpen", 0, 0.0f);
            doorOpenAudioSource.PlayDelayed(doorOpenDelay);
            endGame = true;
        }
   }
}
