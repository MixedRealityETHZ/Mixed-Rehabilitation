using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;
using TMPro;

public class CueManager : MonoBehaviour
{

    [SerializeField] private SoundManager soundManager;
    [SerializeField] private VisualCuesManager visualCuesManager;
    [SerializeField] private SceneUnderstandingLabeler sceneUnderstandingLabeler;
    [SerializeField] private SceneUnderstandingManager sceneUnderstandingManager;
    [SerializeField] private Footprints footprints;
    [SerializeField] private TextMeshPro textIndicator;
    [SerializeField] private SpriteRenderer circleIndicator;
    [SerializeField] private SampleMenu sampleMenu;
    [SerializeField] private GameObject welcomeMenu;

    public bool areCuesEnabled = true;
    public bool isFreezed = true;// value not changed
    public float timeBetweenSteps = 5f;

    public bool targetAutomaticSelection = true;

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
    private void Start()
    {
        ShowWelcomeMenu();
    }
    public void NewPointHeadTraking(Vector3 target)
    {
        visualCuesManager.NewPoint(target);
    }
    public void ShowWelcomeMenu()
    {
        welcomeMenu.SetActive(true);
        //Move the welcome menu to the correct position
        welcomeMenu.transform.position = Camera.main.transform.position + (Camera.main.transform.forward * 0.75f);
        //Visuals foward vector is reversed, do a look from Camera to visuals to fix it.
        welcomeMenu.transform.rotation = Quaternion.LookRotation(welcomeMenu.transform.position - Camera.main.transform.position);
    }

    public void HideWelcomeMenu()
    {
        welcomeMenu.SetActive(false);
        disableCues();
    }

    public void enableCues()
    {
        areCuesEnabled = true;
        
        SoundManager.Instance.PlaySoundOn();
        circleIndicator.color = Color.green;
        textIndicator.text = "Cues On";
        sceneUnderstandingManager.DisplayDataAsync();

    }
    public void disableCues()
    {
        areCuesEnabled = false;
        SoundManager.Instance.PlaySoundOff();
        footprints.DestroyFootprints();
        footprints.DestroyPath();
        visualCuesManager.DestroyStraightPath();
        circleIndicator.color = Color.red;
        textIndicator.text = "Cues Off";
        sceneUnderstandingManager.DisplayDataAsync();
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
    public void ShowHelpMenu()
    {
        sampleMenu.Show();

    }
    public void CloseHelpMenu()
    {
        sampleMenu.Hide();
    }
    public void StartCalibration()
    {
        Debug.Log(" StartCalibration ");
        HideWelcomeMenu();
        //Call calibration();
        textIndicator.text = "Calibrating";
        circleIndicator.color = Color.green;
    }
    
    public void FinishedCalibration()
    {
        Debug.Log("FinishedCalibration");
        StartCoroutine(DelayedDisableVoiceInputs());
        
    }

    IEnumerator DelayedDisableVoiceInputs()
    {
        yield return new WaitForSeconds(0.1f);

        sampleMenu.suInput.DisableInput();
        StartCoroutine(DelayedUpdateVoiceCommands());

    }
    IEnumerator DelayedUpdateVoiceCommands()
    {
        yield return new WaitForSeconds(0.2f);
        InputAction startCalibrationAction = new InputAction();
        InputAction finishCalibrationAction = new InputAction();
        
        //remove Calibration inputs
        foreach (InputAction ia in sampleMenu.suInput.inputActions)
        {
            if (ia.Phrase == "Calibrate")
            {
                startCalibrationAction = ia;
            }
            else if (ia.Phrase == "Start")
            {
                finishCalibrationAction = ia;
            }
        }
        if (startCalibrationAction != null)
        {
            sampleMenu.suInput.inputActions.Remove(startCalibrationAction);
        }
        if (finishCalibrationAction != null)
        {
            sampleMenu.suInput.inputActions.Remove(finishCalibrationAction);
        }
        //Add Help, Close, On, Off, Show, Hide inputs
        sampleMenu.suInput.inputActions.Add(InputAction.Create("On", KeyCode.N, "Enable cues", enableCues));
        sampleMenu.suInput.inputActions.Add(InputAction.Create("Off", KeyCode.F, "Disable cues", disableCues));
        sampleMenu.suInput.inputActions.Add(InputAction.Create("Show", KeyCode.S, "Show the scene understanding scene", EnableDisplayingSceneRoom));
        sampleMenu.suInput.inputActions.Add(InputAction.Create("Hide", KeyCode.H, "Hide the scene understanding scene", DisableDisplayingSceneRoom));
        sampleMenu.suInput.inputActions.Add(InputAction.Create("Help", KeyCode.E, "Show the instructions menu", ShowHelpMenu));
        sampleMenu.suInput.inputActions.Add(InputAction.Create("Close", KeyCode.C, "Close the instructions menu", CloseHelpMenu));


        //update the inputs
        sampleMenu.suInput.EnableInput();
        //show the menu of the voice commnds
        sampleMenu.Show();
        Debug.Log("continue");
        CueManager.Instance.enableCues();

    }
}