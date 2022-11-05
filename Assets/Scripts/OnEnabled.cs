using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnEnabled : MonoBehaviour
{
    public PathManager pathManager;

    // Start is called before the first frame update
    void OnEnable()
    {
        pathManager.NewPoint();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
