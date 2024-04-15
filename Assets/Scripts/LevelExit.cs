using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelExit : MonoBehaviour
{
    [SerializeField] float delayTime = 1f;
    void OnTriggerEnter2D(Collider2D other) {
        if (other.tag == "Player") {
            StartCoroutine(LoadNextLevel());
        }
    }
    IEnumerator LoadNextLevel() {
        yield return new WaitForSecondsRealtime(delayTime);
        int currentLevel = SceneManager.GetActiveScene().buildIndex;
        int nextLevel = currentLevel == SceneManager.sceneCountInBuildSettings ? 0 : currentLevel + 1;
        FindObjectOfType<ScenePersist>().DestroyScenePersist();
        SceneManager.LoadScene(nextLevel);
    }
}
