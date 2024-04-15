using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMovement : MonoBehaviour
{
    // x轴移动速度倍率
    [SerializeField] float moveHorizontalPower = 10f;
    // y轴移动速度倍率
    [SerializeField] float moveVerticalPower = 5f;
    [SerializeField] float climbSpeed = 5f;
    [SerializeField] Vector2 DeathKick = new Vector2(10f, 10f);
    [SerializeField] GameObject bullet;
    [SerializeField] Transform gunTransform;
    Vector2 inputMovementPosition;
    Rigidbody2D playerRigidbody;
    Animator myAnimator;
    CapsuleCollider2D myBodyCollider;
    BoxCollider2D myFootCollider;
    float gravityScaleAtStart;
    bool isAlive = true;
    

    void Start()
    {
        playerRigidbody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();
        myBodyCollider = GetComponent<CapsuleCollider2D>();
        myFootCollider = GetComponent<BoxCollider2D>();
        gravityScaleAtStart = playerRigidbody.gravityScale;
    }

    void Update()
    {
        if(!isAlive) return;
        Run();
        ChangePlayerHorizontalDirection();
        ClimbLadder();
        Die();
    }
    void ChangePlayerHorizontalDirection() {
        bool characterTurnMarkers = Mathf.Abs(playerRigidbody.velocity.x) > Mathf.Epsilon;
        if(characterTurnMarkers) {
            transform.localScale = new Vector2(Mathf.Sign(playerRigidbody.velocity.x), 1f);
        }
    }
    void Run() {
        Vector2 velocity = new Vector2(inputMovementPosition.x * moveHorizontalPower, playerRigidbody.velocity.y);
        bool isRunningFlag = Mathf.Abs(playerRigidbody.velocity.x) > Mathf.Epsilon;
        playerRigidbody.velocity = velocity;
        myAnimator.SetBool("isRunning", isRunningFlag);
    } 
    void OnFire(InputValue value) {
        if(!isAlive) return;
        Instantiate(bullet, gunTransform.position, transform.rotation);
    }
    void OnMove(InputValue value) {
        if(!isAlive) return;
        inputMovementPosition = value.Get<Vector2>();
        Debug.Log("PlayerMovement:" + inputMovementPosition);
    }
    void OnJump(InputValue value) {
        // 判断当前接触的图层是否是设置图层
        if(!isAlive) return;
        if(!myFootCollider.IsTouchingLayers(LayerMask.GetMask("Ground"))) return;
        if(value.isPressed){
            playerRigidbody.velocity += new Vector2(0f, moveVerticalPower);
        }
    }
    void ClimbLadder() {
        // 判断当前接触的图层是否是设置图层
        if(!myFootCollider.IsTouchingLayers(LayerMask.GetMask("Climbing"))) {
            playerRigidbody.gravityScale = gravityScaleAtStart;
            myAnimator.SetBool("isClimbing", false);
            return;
        }
        Vector2 climbVelocity = new Vector2(playerRigidbody.velocity.x, inputMovementPosition.y * climbSpeed);
        playerRigidbody.velocity = climbVelocity;
        playerRigidbody.gravityScale = 0f;
        
        bool playHasVerticalSpeed = Mathf.Abs(playerRigidbody.velocity.y) > Mathf.Epsilon;
        myAnimator.SetBool("isClimbing", playHasVerticalSpeed);
    }
    void Die(){
        if(myBodyCollider.IsTouchingLayers(LayerMask.GetMask("Goober", "Hazards"))) {
            isAlive = false;
            myAnimator.SetTrigger("Dying");
            playerRigidbody.velocity = DeathKick;
            FindObjectOfType<GameSession>().ProcessPlayerDeath();
        }
    }
}
