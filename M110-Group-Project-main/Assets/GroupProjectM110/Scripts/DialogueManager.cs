using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogueManager : MonoBehaviour
{
    public TextMeshProUGUI firstPuzzleText;
    public TextMeshProUGUI secondPuzzleText;
    public TextMeshProUGUI FourthPuzzleText;
    public TextMeshProUGUI firstContinueText;
    public TextMeshProUGUI secondContinueText;
    public TextMeshProUGUI fourthContinueText;
    
    private TextMeshProUGUI text;
    public static Dialogue dialogueTriggered;
    public static string puzzleTriggered;
    
    private Queue<string> sentences;
    public static string puzzle, continueButtonText;
    void Start()
    {
       sentences = new Queue<string>();   
       
       continueButtonText = "Press button to continue >>";
       firstContinueText.text = continueButtonText;
       secondContinueText.text = continueButtonText;
       fourthContinueText.text = continueButtonText; 
    }

    public void StartDialogue(Dialogue dialogue, string puzzleName)
    {
       dialogueTriggered = dialogue;
       puzzleTriggered = puzzleName;
       sentences.Clear();
       puzzle = puzzleName; 
       foreach (string sentence in dialogue.sentences)
       {
            sentences.Enqueue(sentence);
       }

       DisplayNextSentence();
    }

    public void DisplayNextSentence()
    {
        if (sentences.Count == 0)
        {
            //  continueText.text = "Press button to continue >>";
            sentences.Clear();
            puzzle = puzzleTriggered; 
            foreach (string sentencee in dialogueTriggered.sentences)
            {
                sentences.Enqueue(sentencee);
            }
        }
        string sentence = sentences.Dequeue();
        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentence));
    }

    IEnumerator TypeSentence(string sentence)
    {
        if (puzzle == "logic") 
        {
            text = firstPuzzleText;
        }
        else if(puzzle == "rgb")
        {
            text = secondPuzzleText;
        } 
        else if(puzzle == "code")
        {
            text = FourthPuzzleText;
        }

        text.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            text.text += letter;
            yield return null;
        }
    }

}
