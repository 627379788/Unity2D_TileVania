using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinControl : MonoBehaviour
{
    [SerializeField] AudioClip audioClip;
    [SerializeField] int pointsForCoinPickUp = 100;
    void OnTriggerEnter2D(Collider2D other) {
        if (other.tag == "Player") { 

            Destroy(gameObject);
            AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position);
            FindObjectOfType<GameSession>().TakeUpCoin(pointsForCoinPickUp);
        }
    }
}
