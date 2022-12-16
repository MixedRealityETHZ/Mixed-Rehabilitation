using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using InputAction = Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction;

public class Callibrator : MonoBehaviour
{
    [SerializeField] private SampleMenu sampleMenu;
    [SerializeField] private GameObject welcomeMenu;
    [SerializeField] private TextMeshPro textIndicator;
    [SerializeField] private SpriteRenderer circleIndicator;
    // Start is called before the first frame update
    void Start()
    {
        //disable some voice commands: on, off... OR create them in finished callibration
    }
    
   
}
