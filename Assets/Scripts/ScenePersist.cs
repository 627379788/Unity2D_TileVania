using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScenePersist : MonoBehaviour
{
    void Awake() {
        int numPersistSessions = FindObjectsOfType<ScenePersist>().Length;
        if(numPersistSessions > 1) {
            Destroy(gameObject);
        }else {
            DontDestroyOnLoad(gameObject);
        }
    }

    public void DestroyScenePersist(){
        Destroy(gameObject);
    }
}
 