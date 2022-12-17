using Microsoft.MixedReality.Toolkit;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class TargetSelector : MonoBehaviour
{
    // Display to position where the user looks at
    GameObject plane;
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
    // User is looking at a target if the variance is below this value
    public float maxVarianceToConfirm = 0.2f;
    // Prevent updating target if it's too close to the head
    public float minDistanceToHead = 2.5f;
    // Has drawn a line to the target
    bool hasDrawnLine = false;

    [SerializeField] private VisualCuesManager visualCuesManager;
    public GameObject targetSymbol;


    // Start is called before the first frame update
    void Start()
    {
        plane = gameObject;
        if (visualCuesManager == null)
        {
            visualCuesManager = GameObject.Find("PathManager").GetComponent<VisualCuesManager>();
        }
        meshRenderer = plane.GetComponent<MeshRenderer>();
        renderer = plane.GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (CueManager.Instance.areCuesEnabled)
        {
            if (!meshRenderer.enabled)
            {
                meshRenderer.enabled = true;
            }
            if (CueManager.Instance.targetAutomaticSelection)
            {
                UpdateTargetCalculation();
            }
            else
            {
                UpdateTargetPosition();
            }
        }
        else
        {
            if (meshRenderer.enabled)
            {
                meshRenderer.enabled = false;
            }
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
    void UpdateTargetPosition()
    {
        Vector3 hitPosition = Vector3.zero;
        RaycastHit raycastHit;
        if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.TransformDirection(Vector3.forward), out raycastHit, Mathf.Infinity))
        {
            hitPosition = raycastHit.point;


            // Update the current position
            positions[index++] = hitPosition;
            index %= positions.Length;

            // Update the mean position
            meanPosition = Vector3.zero;
            for (int i = 0; i < positions.Length; i++)
            {
                Debug.Log(positions.Length);
                meanPosition += positions[i];
            }
            meanPosition /= positions.Length;

            // Update the sphere
            plane.transform.position = meanPosition;
            //sphere.transform.position = hitPosition;
            // Show target symbol 1 meter in front of the user
            Vector3 targetSymbolPosition = Camera.main.transform.position + 3 * (hitPosition - Camera.main.transform.position).normalized;
            targetSymbol.transform.position = targetSymbolPosition;
            // Rotate the sphere so it's prependicular to the gaze
            targetSymbol.transform.rotation = Quaternion.LookRotation(3 * (hitPosition - Camera.main.transform.position).normalized, Vector3.up);
        }
    }
    void UpdateTargetCalculation()
    {

        Vector3 hitPosition = Vector3.zero;
        RaycastHit raycastHit;
        if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.TransformDirection(Vector3.forward), out raycastHit, Mathf.Infinity))
        {
            hitPosition = raycastHit.point;


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

            // Show target symbol 3 meter in front of the user
            // if the distance between the target symbol and the camera is less than 2.5 meters
            // then the target symbol will be placed 2.5 meters in front of the camera
            Vector3 gazeDirection = (hitPosition - Camera.main.transform.position).normalized;
            if (Vector3.Distance(Camera.main.transform.position, hitPosition) > 3)
            {
                Vector3 targetSymbolPosition = Camera.main.transform.position + 3 * gazeDirection;
                targetSymbol.transform.position = targetSymbolPosition;
                plane.transform.position = targetSymbolPosition + 0.1f * gazeDirection;
            }
            else
            {
                targetSymbol.transform.position = hitPosition - 0.1f * gazeDirection;
                plane.transform.position = hitPosition - 0.05f * gazeDirection;
            }
            // Rotate target symbol so it's prependicular to the gaze
            targetSymbol.transform.rotation = Quaternion.LookRotation(3 * gazeDirection, Vector3.up);
            // Rotate tge plane so it's prependicular to the gaze
            // The normal of the target symbol was in z-axis, but the normal of the plane is in y-axis
            // Therefore, the plane needs to be rotated 90 degrees around the x-axis
            plane.transform.rotation = Quaternion.LookRotation(3 * gazeDirection, Vector3.up) * Quaternion.Euler(-90, 0, 0);





            // Update the color
            if (variance < maxVarianceToConfirm)
            {
                timeSinceSmallVariance += Time.deltaTime;
                if (timeSinceSmallVariance > minTimeToConfirm && (meanPosition - Camera.main.transform.position).magnitude > minDistanceToHead)
                {
                    renderer.material.color = new Color(0, 0, 1, 0.5f);
                    if (!hasDrawnLine)
                    {
                        visualCuesManager.NewPoint(meanPosition);
                        hasDrawnLine = true;
                    }
                }
                else
                {
                    renderer.material.color = new Color(1, 1, 0, 0.5f);
                }
            }
            else
            {
                timeSinceSmallVariance = 0;
                hasDrawnLine = false;
                renderer.material.color = new Color(1, 0, 0, 0.5f);
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

    public void ShowTargetCrossAndSphere()
    {
        targetSymbol.SetActive(true);
        plane.SetActive(true);
    }

    public void HideTargetCrossAndSphere()
    {
        targetSymbol.SetActive(false);
        plane.SetActive(false);
    }
}