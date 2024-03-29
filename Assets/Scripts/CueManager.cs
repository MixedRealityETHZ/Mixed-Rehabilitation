using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;
using TMPro;
using UnityEditor;

public class CueManager : MonoBehaviour
{

    [SerializeField] private SoundManager soundManager;
    [SerializeField] private VisualCuesManager visualCuesManager;
    [SerializeField] private TargetSelector targetSelector;
    [SerializeField] private Calibration calibration;

    [SerializeField] private SceneUnderstandingLabeler sceneUnderstandingLabeler;
    [SerializeField] private SceneUnderstandingManager sceneUnderstandingManager;
    [SerializeField] private Footprints footprints;
    [SerializeField] private TextMeshPro textIndicator;
    [SerializeField] private SpriteRenderer circleIndicator;
    [SerializeField] private SampleMenu sampleMenu;
    [SerializeField] private GameObject welcomeMenu;
    [SerializeField] private GameObject checkCalibrationMenu;
    [SerializeField] private GameObject correctCheckCalibration;
    [SerializeField] private GameObject incorrectCheckCalibrationMenu;
    [SerializeField] private GameObject calibrationMenu;
    [SerializeField] private GameObject textUseTxtValues;
    [SerializeField] private TextMeshPro averageSpeedCheckMenu;
    [SerializeField] private TextMeshPro averageStepLengthCheckMenu;

    [SerializeField] private TextMeshPro StoredSpeedWelcomeMenu;
    [SerializeField] private TextMeshPro StoredStepLegthWelcomeMenu;

    [SerializeField] private TextMeshPro calibrationCountdownText;
    private bool hasStartedCalibration = false;
    private bool isCalibrating = false;
    private bool validCalibration = true;
    private bool hasFoundTxt = false;
    private int secondsCountDown = 10;

    public bool areCuesEnabled = true;
    public bool isFreezed = true;// value not changed
    public float averageTimeBetweenSteps = 5f;
    public float averageStride = 0.0f;
    public float averageStepWidth = 0.0f;
    public float averageWalkingSpeed = 2f;

    public bool targetAutomaticSelection = true;
    private bool firstLoadFinished ;
    private bool hasFinishedSearch = false;

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
    private void Start()
    {
        firstLoadFinished = true;
        sampleMenu.Hide();
        checkCalibrationMenu.SetActive(false);
        disableCues();
        sceneUnderstandingManager.mixedRehabilittion_DisplayMeshes = false;
        circleIndicator.color = Color.white;
    }
    public void FinishedTxtSearch(bool txtFound)
    {
        Debug.Log("FinishedTxtSearch");
        Debug.Log("The txt was found: " + txtFound);
        hasFinishedSearch = true;
        hasFoundTxt = txtFound;
        
        StartCoroutine(DelayedShowWelcomeMenu(hasFoundTxt));
        
    }
    
    public void firstOnLoadFinished()
    {
        Debug.Log("Finish on load");
        if (firstLoadFinished)
        {
            Debug.Log("firstOnLoadFinished");
            DisableDisplayingSceneRoom();
            firstLoadFinished = false;

           
        }
    }

    IEnumerator DelayedShowWelcomeMenu(bool txtFound)
    {
        yield return new WaitForSeconds(0.1f);
        Debug.Log("Show welcome menu");

        textIndicator.text = "Welcome";
        if (txtFound)
        {
            StoredSpeedWelcomeMenu.text = "Stored walking speed: " + calibration.averageWalkingSpeed.ToString("F2") + " m/s";
            StoredStepLegthWelcomeMenu.text = "Stored step legth: " + calibration.averageStride.ToString("F2") + " m";
        }
        else
        {
            textUseTxtValues.SetActive(false);
        }
        welcomeMenu.SetActive(true);
        //Move the  menu to the correct position
        //welcomeMenu.transform.position = Camera.main.transform.position + (Camera.main.transform.forward * 0.75f);
        //Visuals forward vector is reversed, do a look from Camera to visuals to fix it.
        //welcomeMenu.transform.rotation = Quaternion.LookRotation(welcomeMenu.transform.position - Camera.main.transform.position);


    }

    public void NewPointHeadTraking(Vector3 target)
    {
        visualCuesManager.NewPoint(target);
    }
    
    
    public void enableCues()
    {
        areCuesEnabled = true;
        
        SoundManager.Instance.PlaySoundOn();
        circleIndicator.color = Color.green;
        textIndicator.text = "Cues On";

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
    }

    public void UserHasFreezed() {
        isFreezed = true;
        // Show line, footprints, target cross and target sphere
        footprints.ShowFootprintsAndLine();
        visualCuesManager.lineRenderer.enabled = true;
        targetSelector.ShowTargetCrossAndSphere();
    }
    public void UserHasUnfreezed()
    {
        isFreezed = false;
        // Hide line, footprints, target cross and target sphere
        footprints.HideFootprintsAndLine();
        visualCuesManager.lineRenderer.enabled = false;
        targetSelector.HideTargetCrossAndSphere();
    }
    public void DisableDisplayingSceneRoom()
    {
        sceneUnderstandingManager.mixedRehabilittion_DisplayMeshes = false;
        UpdateScene();
    }

    
    public void EnableDisplayingSceneRoom()
    {
        sceneUnderstandingManager.mixedRehabilittion_DisplayMeshes = true;
        UpdateScene();
    }

    private async void UpdateScene()
    {
        await sceneUnderstandingManager.DisplayDataAsync();
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
        Debug.Log("Entered StartCalibration");
        if (!isCalibrating)
        {
            checkCalibrationMenu.SetActive(false);
            calibrationMenu.SetActive(true);
            Debug.Log(" StartCalibration ");
            welcomeMenu.SetActive(false);
            //Call calibration();
            textIndicator.text = "Calibrating";
            circleIndicator.color = Color.green;
            StartCoroutine(calibration.CalibrateCoroutine());
            StartCoroutine(Chronometer10());
            hasStartedCalibration = true;
            isCalibrating = true;
        }
        
    }
    
    public IEnumerator Chronometer10()
    {
        if (secondsCountDown>=0)
        {
            calibrationCountdownText.text = secondsCountDown.ToString();
            yield return new WaitForSeconds(1);
            secondsCountDown--;
            StartCoroutine(Chronometer10());
        }
        else
        {
            secondsCountDown = 10;
            StopCoroutine(Chronometer10());
        }
    }
    public void CheckCalibration(bool _validCalibration)
    {
        isCalibrating = false;
        validCalibration = _validCalibration;
        Debug.Log("Finished calibration. Let user check if it is correct.");
        if (_validCalibration)
        {
            correctCheckCalibration.SetActive(true);
            incorrectCheckCalibrationMenu.SetActive(false);
            averageSpeedCheckMenu.text = "Average walking speed: " + calibration.averageWalkingSpeed.ToString("F2") + " m/s";
            averageStepLengthCheckMenu.text = "Average step length: " + calibration.averageStride.ToString("F2") + " m";
        }
        else
        {
            correctCheckCalibration.SetActive(false);
            incorrectCheckCalibrationMenu.SetActive(true);
        }
        checkCalibrationMenu.SetActive(true);
        calibrationMenu.SetActive(false);
        textIndicator.text = "Finished";
        circleIndicator.color = Color.white;
    }

    public void SkipCalibration()
    {
        
        if (!hasStartedCalibration)
        {
            Debug.Log("Skip calibration");
            welcomeMenu.SetActive(false);
            FinishedCalibration();
        }
    }
    public void ContinueVoiceInput() 
    {
        if (hasStartedCalibration)
        {
            FinishedCalibration();
        }
    }
    public void FinishedCalibration()
    {
        if(hasStartedCalibration && !validCalibration)
        {
            return;
        }
        if (!isCalibrating)
        {
            Debug.Log("Finished Calibration");
            checkCalibrationMenu.SetActive(false);
            
            averageStepWidth = calibration.averageStepWidth;
            averageStride = calibration.averageStride;
            averageTimeBetweenSteps = calibration.averageTimeBetweenSteps;
            averageWalkingSpeed = calibration.averageWalkingSpeed;

            footprints.stepWidth = averageStepWidth;
            footprints.stepLength = averageStride;
            
            StartCoroutine(DelayedDisableVoiceInputs());
        }
        
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
        InputAction skipAction = new InputAction();
        InputAction continueAction = new InputAction();

        //remove Calibration inputs
        foreach (InputAction ia in sampleMenu.suInput.inputActions)
        {
            if (ia.Phrase == "Calibrate")
            {
                startCalibrationAction = ia;
            }
            else if (ia.Phrase == "Skip")
            {
                skipAction = ia;
            }
            else if (ia.Phrase == "Continue")
            {
                continueAction = ia;
            }
        }
        if (startCalibrationAction != null)
        {
            sampleMenu.suInput.inputActions.Remove(startCalibrationAction);
        }
        if (skipAction != null)
        {
            sampleMenu.suInput.inputActions.Remove(skipAction);
        }
        if (continueAction != null)
        {
            sampleMenu.suInput.inputActions.Remove(continueAction);
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
        StartCoroutine(delayedTurnOnCues());
        //show the menu of the voice commnds
        sampleMenu.Show();
    }
    IEnumerator delayedTurnOnCues()
    {
        yield return new WaitForSeconds(8f);
        
        CueManager.Instance.enableCues();
    }

    
}