using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;

public class CueManager : MonoBehaviour
{

    [SerializeField] private SoundManager soundManager;
    [SerializeField] private VisualCuesManager visualCuesManager;

    [SerializeField] private SceneUnderstandingLabeler sceneUnderstandingLabeler;
    [SerializeField] private SceneUnderstandingManager sceneUnderstandingManager;

    public bool areCuesEnabled = true;
    public bool isFreezed = true;// value not changed
    public float timeBetweenSteps = 5f;

    private static CueManager m_instance;
    public static CueManager Instance
    {
        get
        {
            return m_instance;
        }
    }
    private void Awake()
    {
        if (m_instance == null)
        {
            m_instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
   
    // Start is called before the first frame update
    public void NewPointVoiceCommand()
    {
        visualCuesManager.NewPoint();
    }

    public void enableCues()
    {
        areCuesEnabled = true;
        SoundManager.Instance.PlaySoundOn();
    }
    public void disableCues()
    {
        areCuesEnabled = false;
        SoundManager.Instance.PlaySoundOff();
    }

    public void UserHasFreezed() {
        isFreezed = true;
    }
    public void UserFinishedFreezing()
    {
        isFreezed = false;
    }
    public void DisableDisplayingSceneRoom()
    {
        sceneUnderstandingManager.mixedRehabilittion_DisplayMeshes = false;
        sceneUnderstandingLabeler.DisplayTextLabels = false;
    }
    public void EnableDisplayingSceneRoom()
    {
        sceneUnderstandingManager.mixedRehabilittion_DisplayMeshes = true;
        sceneUnderstandingLabeler.DisplayTextLabels = true;
    }
}