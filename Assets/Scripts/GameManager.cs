using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class GameManager : MonoBehaviour
{

    public int best;
    public int score;
    public int currentStage = 0;

    public static GameManager singleton;

    private void Awake()
    {
        Advertisement.Initialize("4381049");
        if (singleton == null)
        {
            singleton = this;
        }else if(singleton != this)
        {
            Destroy(gameObject);
        }

        best = PlayerPrefs.GetInt("Highscore");
    }
    public void NextLevel()
    {
        if(currentStage == 2)
        {
            currentStage = 0;
        }
        else
        {
            currentStage++;
        }
       
        
        FindObjectOfType<BallController>().ResetBall();
        FindObjectOfType<HelixController>().LoadStage(currentStage);
        Debug.Log("next level started");
    }
    public void RestartLevel()
    {
        Debug.Log("Game Over");
        //todo show ads
        // android 4381049 ios 4381048
        ShowAdd();
        singleton.score = 0;
        FindObjectOfType<BallController>().ResetBall();
        //Reload the stage
        FindObjectOfType<HelixController>().LoadStage(currentStage);
    }
    private void ShowAdd()
    {
        if (Advertisement.isInitialized || Advertisement.IsReady())
        { // If the ads are ready to be shown
            Advertisement.Show(); // Show the default ad placement
        }
    }

    public void AddScore(int scoreToAdd)
    {
        score += scoreToAdd;
        if(score > best)
        {
            best = score;
            // store highscore/ best in Playerprefs
            PlayerPrefs.SetInt("Highscore", score);
        }
    }
}
