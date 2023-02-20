using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogueManager : MonoBehaviour
{
    public TextMeshProUGUI firstPuzzleText;
    public TextMeshProUGUI secondPuzzleText;
    private TextMeshProUGUI text;
    private Queue<string> sentences;
    
    public static string puzzle;
    void Start()
    {
        sentences = new Queue<string>();    
    }

    public void StartDialogue(Dialogue dialogue, string puzzleName)
    {
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
            return;
        }
        string sentence = sentences.Dequeue();
        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentence));

        Invoke("DisplayNextSentence", 5);
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

        text.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            text.text += letter;
            yield return null;
        }
    }

}
