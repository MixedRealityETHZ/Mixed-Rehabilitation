using Microsoft.MixedReality.Toolkit;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class TargetSelector : MonoBehaviour
{
    // Display to position where the user looks at
    GameObject sphere;
    MeshRenderer meshRenderer;
    Renderer renderer;
    // Array of the last 50 positions
    readonly Vector3[] positions = new Vector3[50];
    // Index of the current position
    int index = 0;
    // The current mean position
    Vector3 meanPosition = Vector3.zero;
    // The current variance
    float variance = 0;
    // Time since small variance was detected
    public float timeSinceSmallVariance = 0;
    // Minimum time to confirm a target
    public float minTimeToConfirm = 2;
    // Has drawn a line to the target
    bool hasDrawnLine = false;
    
    [SerializeField] private VisualCuesManager visualCuesManager;


    // Start is called before the first frame update
    void Start()
    {
        sphere = gameObject;
        CoreServices.InputSystem.EyeGazeProvider.Enabled = true;
        if (visualCuesManager == null)
        {
            visualCuesManager = GameObject.Find("PathManager").GetComponent<VisualCuesManager>();
        }
        meshRenderer = sphere.GetComponent<MeshRenderer>();
        renderer = sphere.GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (CueManager.Instance.targetAutomaticSelection)
        {
            if (!meshRenderer.enabled)
            {
                meshRenderer.enabled = true;
            }
            UpdateTarget();
            
        }
        else if (meshRenderer.enabled)
        {
            meshRenderer.enabled = false;
        }
        
    }
    public void VoiceCommandCalculateTarget()
    {
        if (CueManager.Instance.areCuesEnabled && !CueManager.Instance.targetAutomaticSelection)
        {
            RaycastHit raycastHit;
            if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.TransformDirection(Vector3.forward), out raycastHit, Mathf.Infinity))
            {
                visualCuesManager.NewPoint(raycastHit.point);
            }
        }

    }
    void UpdateTarget()
    {

        Vector3 hitPosition = CoreServices.InputSystem.EyeGazeProvider.HitPosition;

        // Update the current position
        positions[index++] = hitPosition;
        index %= positions.Length;

        // Update the mean position
        meanPosition = Vector3.zero;
        for (int i = 0; i < positions.Length; i++)
        {
            meanPosition += positions[i];

        }
        meanPosition /= positions.Length;

        // Update the variance
        variance = 0;
        for (int i = 0; i < positions.Length; i++)
        {
            variance += (positions[i] - meanPosition).sqrMagnitude;
        }
        variance /= positions.Length;

        // Update the sphere
        sphere.transform.position = meanPosition;

        // Update the color
        if (variance < 0.01f)
        {
            timeSinceSmallVariance += Time.deltaTime;
            if (timeSinceSmallVariance > minTimeToConfirm)
            {
                Debug.Log("blue");
                renderer.material.color = Color.blue;
                if (!hasDrawnLine)
                {
                    visualCuesManager.NewPoint(meanPosition);
                    hasDrawnLine = true;
                }
            }
            else
            {
                renderer.material.color = Color.yellow;
            }
        }
        else
        {
            timeSinceSmallVariance = 0;
            hasDrawnLine = false;
            sphere.GetComponent<Renderer>().material.color = Color.red;
        }
        /*// Check if eye gaze is available
        if (!CoreServices.InputSystem.EyeGazeProvider.IsEyeTrackingDataValid)
            sphere.GetComponent<Renderer>().material.color = Color.gray;
        */
        // if enabled, set color to red
        /*
        if (CoreServices.InputSystem.EyeGazeProvider.IsEyeTrackingEnabled)
            sphere.GetComponent<Renderer>().material.color = Color.red;
        else
            sphere.GetComponent<Renderer>().material.color = Color.blue;

        if (CoreServices.InputSystem.EyeGazeProvider.IsEyeCalibrationValid != null)
        {
            if (CoreServices.InputSystem.EyeGazeProvider.IsEyeCalibrationValid.Value)
                sphere.GetComponent<Renderer>().material.color = Color.green;
            else
                sphere.GetComponent<Renderer>().material.color = Color.yellow;
        }*/

        /*RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit, 100))
        {
            sphere.transform.position = hit.point + Vector3.left;
            Debug.Log("Hit " + hit.transform.name);
        }*/

    }

}
