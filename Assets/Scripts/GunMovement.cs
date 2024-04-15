using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunMovement : MonoBehaviour
{
    Rigidbody2D myRigibody;
    [SerializeField] float bulletSpeed = 10f;

    PlayerMovement player;
    float xSpeed;

    void Start()
    {
        player = FindObjectOfType<PlayerMovement>();
        myRigibody = GetComponent<Rigidbody2D>();
        xSpeed = player.transform.localScale.x * bulletSpeed;
        // 创建一个新的旋转，保持 x 和 y 轴不变，只改变 z 轴
        // 将新的旋转应用于对象
        transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y, Mathf.Sign(player.transform.localScale.x) * 90);;
        // 获取当前的旋转
    }
    void Update()
    {
        myRigibody.velocity = new Vector2(xSpeed, 0f);
    }
    void OnTriggerEnter2D(Collider2D other) {
        if(other.tag == "Enemy") {
            Destroy(other.gameObject);
        }
        Destroy(gameObject);

    }
    void OnCollisionEnter2D(Collision2D other) {
        Destroy(gameObject);
    }
}
