using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameSession : MonoBehaviour
{
    [SerializeField] int playerLives = 3;
    int score = 0;
    [SerializeField] TextMeshProUGUI liveTextMesh;
    [SerializeField] TextMeshProUGUI scroeTextMesh;
    // 点击播放按钮执行
    void Awake() {
        int numGameSessions = FindObjectsOfType<GameSession>().Length;
        if(numGameSessions > 1) {
            Destroy(gameObject);
        }else {
            DontDestroyOnLoad(gameObject);
        }
    }
    void Start(){
        liveTextMesh.text = playerLives.ToString();
        scroeTextMesh.text = score.ToString();
    }
    public void ProcessPlayerDeath() {
        if(playerLives > 1) {
            TakeLife();
        }else {
            ResetGameSession();
        }
    }
    void TakeLife() {
        playerLives--;
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex);
        liveTextMesh.text = playerLives.ToString();
    }
    void ResetGameSession() {
        Destroy(gameObject);
        FindObjectOfType<ScenePersist>().DestroyScenePersist();
        SceneManager.LoadScene(0);
    }
    public void TakeUpCoin(int x) {
        score += x;
        scroeTextMesh.text = score.ToString();
    }
}
