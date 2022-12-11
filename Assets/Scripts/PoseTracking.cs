using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class PoseTracking : MonoBehaviour
{

    public GameObject mainCamera;

    private Vector3 cameraPose;
    private StreamWriter writer;
    private bool record = false;
    
    // Start is called before the first frame update
    void Start()
    {
        CreateNewFile();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        cameraPose = mainCamera.transform.position;
        if (record)
            WritePoseToFile(cameraPose);
    }
    
    private void WritePoseToFile(Vector3 cameraPose)
    {
        writer.WriteLine(cameraPose.x + ";" + cameraPose.y + ";" + cameraPose.z);
    }
    
    // create new file and write header
    public void CreateNewFile()
    {
        string timestamp = DateTime.Now.ToString().Replace("/", "_").Replace(":", "_");
        // create new folder gaitData
        if (!Directory.Exists("gaitData"))
            Directory.CreateDirectory("gaitData");
        string filePath = "gaitData/MySaveData" + timestamp + ".txt";
        Debug.Log(filePath);
        writer = new StreamWriter(filePath, true);
        writer.WriteLine("X_position;Y_position;Z_position");
    }
    public void StartRecording()
    {
        record = true;
        SoundManager.Instance.PlaySoundOn();
    }

    public void SaveNCreateNewFile()
    {
        record = false;
        writer.Close();
        CreateNewFile();
        SoundManager.Instance.PlaySoundOff();
    }

    public void Quit()
    {
        writer.Close();
        SoundManager.Instance.PlaySoundOn();
        SoundManager.Instance.PlaySoundOff();
        Application.Quit();
    }
}