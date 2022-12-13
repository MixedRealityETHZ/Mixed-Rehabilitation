using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Callibrator : MonoBehaviour
{
    [SerializeField] private SampleMenu sampleMenu;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void FinishedCallibration()
    {
        //show the menu of the voice commnds
        sampleMenu.Show();
    }


}
