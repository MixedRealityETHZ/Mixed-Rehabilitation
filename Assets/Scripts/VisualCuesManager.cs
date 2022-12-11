using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;
using UnityEngine.AI;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
//using System.Numerics;
//Unity
using UnityEngine.Events;

using Microsoft.MixedReality.OpenXR;
using UnityEditor;



public class VisualCuesManager : MonoBehaviour, IMixedRealityPointerHandler
{
    public GameObject path;
    public List<GameObject> wayPoints;
    public List<GameObject> connectionLines;
    public GameObject navMeshAgentRef;
    public GameObject navMeshAgentInstance;
    private NavMeshAgent navMeshAgentInstanceComponent;
    private GameObject parentGo;
    private int nextPointInt;
    public Footprints footprintsScript;
    private RaycastHit raycastHit;
    public LineRenderer lineRenderer;
    private bool isDeviated;
    private NavMeshPath straightPath;
    public float maximumDeviationDistance = 1;
    private float deviationCheckerChronometer = 0.0f;
    public float deviationCheckerFreqSecs = 1f;
    public bool navMeshAgentHasPath=false;
    private bool WaitAndCheckIfPathCreated = false;
    public float distanceToLine = 0.0f;
    //public NavMeshPathStatus m_pathStatus;
    //public Vector3 m_destination;
    //public bool m_isStopped;
    //public NavMeshPath m_path;

    private void OnEnable()
    {
        //CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
    }

    private void OnDisable()
    {
        //CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
    }
    // Start is called before the first frame update
    void Start()
    {
        straightPath = new NavMeshPath();
        //set enablecues to true

    }
    void Update()
    {

        if (CueManager.Instance.areCuesEnabled)
        {
            deviationCheckerChronometer += Time.deltaTime;
            if (deviationCheckerChronometer > deviationCheckerFreqSecs)
            {
                CalculateDeviation();
                deviationCheckerChronometer = 0;
            }
        }
        if (navMeshAgentInstanceComponent)
        navMeshAgentHasPath = navMeshAgentInstanceComponent.hasPath;

        if (WaitAndCheckIfPathCreated)
        {
            if (!navMeshAgentInstanceComponent.pathPending)
            {
                straightPath = navMeshAgentInstanceComponent.path;
                DrawStraightPath(straightPath);
                WaitAndCheckIfPathCreated = false;
            }
        }
    }
    /*
    public void NewPoint()
    {
        if (navMeshAgentInstance == null)
        {
            CreateNavMeshAgent();
        }
        MoveAgent();
        nextPointInt++;
        footprintsScript.NewPoint();
    }*/

    /// <summary>
    /// Called in SampleInputManagerScript through the inspector
    /// </summary>

    

    public void NewPoint()
    {
        if (CueManager.Instance.areCuesEnabled)
        {
            if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.TransformDirection(Vector3.forward), out raycastHit, Mathf.Infinity))
            {
                if (navMeshAgentInstance == null)
                {
                    CreateNavMeshAgent();
                }
                footprintsScript.NewPoint();
                MoveAgent(raycastHit.point);
            }
        }
    }

    void CreateNavMeshAgent()
    {
        Debug.Log("Enter in CreateNavMeshAgent");
        if (navMeshAgentRef == null)
        {
            return;
        }

        if (navMeshAgentInstance == null)
        {
            navMeshAgentInstance = Instantiate<GameObject>(navMeshAgentRef, Camera.main.transform.position, Quaternion.identity);
            navMeshAgentInstanceComponent = navMeshAgentInstance.GetComponent<NavMeshAgent>();
            navMeshAgentInstance.GetComponent<MeshRenderer>().enabled = false;
            navMeshAgentInstanceComponent.baseOffset = 0;
        }
        
        footprintsScript.CreatedPlayer(navMeshAgentInstance);
    }
    public void MoveAgent(Vector3 nextPosition)
    {
        
        navMeshAgentInstanceComponent.Warp(Camera.main.transform.position);
        //Calculate straight path
        //navMeshAgentInstanceComponent.CalculatePath(nextPosition, straightPath);
        //DrawStraightPath(straightPath);
        //SetDestination+move
        navMeshAgentInstanceComponent.SetDestination(nextPosition);
        navMeshAgentInstanceComponent.isStopped = false;
        WaitAndCheckIfPathCreated = true;


        /*bool hasFoundPath = navMeshAgentInstanceComponent.CalculatePath(navDestination, m_path);
        Debug.Log("status: " + m_path.status);
        Debug.Log("hasFound path: " + hasFoundPath);
        if (hasFoundPath)
        {
            navMeshAgentInstanceComponent.SetPath(m_path);
            navMeshAgentInstanceComponent.isStopped = false;
        }*/


    }
    public void DrawStraightPath(NavMeshPath path)
    {
        Debug.Log(path.corners.Length);
        lineRenderer.positionCount = path.corners.Length;
        lineRenderer.SetPositions(path.corners);
    }
   
    public void CalculateDeviation()
    {
        
        Vector3 userXZPosition = Camera.main.transform.position;
        userXZPosition.y = 0;
        float distanceToClosestLine =  100.0f;
        if (straightPath.corners.Length >= 2)
        {
            for (int i = 0; i < straightPath.corners.Length - 1; i++)
            {

                //calculate distance between userXZPosition and a line
                distanceToLine = DistanceCalculator.DistancePointLine(userXZPosition, new Vector3(straightPath.corners[i].x, 0, straightPath.corners[i].z), new Vector3(straightPath.corners[i + 1].x, 0, straightPath.corners[i + 1].z));

                //float distanceToLine = HandleUtility.DistancePointLine(userXZPosition, new Vector3(straightPath.corners[i].x, 0, straightPath.corners[i].z), new Vector3 (straightPath.corners[i + 1].x, 0, straightPath.corners[i + 1].z));
                if (distanceToLine < distanceToClosestLine)
                {
                    distanceToClosestLine = distanceToLine;
                }
                
            }
           
            if (distanceToClosestLine > maximumDeviationDistance)
            {
                Debug.Log("Deviated from Trajectory");
                NewPoint();
            }
        }
        else
        {
        }
                // calcular distancia minima
        //si la distancia minima es mayor que un valor - deviated true

        /*if (Vector3.Distance(navMeshAgentInstance.transform.position, point) > 1.5f)
        {
            isDeviated = true;
            return;
        }
    }
    {
        if (Vector3.Distance(point, navMeshAgentInstance.transform.position) > 1.5f)
        {
            isDeviated = true;
            break;
        }*/

    }
    /*
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        var result = eventData.Pointer.Result;
        var hitPosition = result.Details.Point;
        //UnityEngine.Debug.Log("")
        // Check if hitting spatial mapping layer
        if (result.CurrentPointerTarget?.layer == 31)
        {
            GameObject cornerSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            cornerSphere.transform.parent = path.transform;
            cornerSphere.transform.position = hitPosition;
            cornerSphere.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            cornerSphere.GetComponent<Renderer>().material.color = new Color(0, 1, 0, 1);
            wayPoints.Add(cornerSphere);
            //if (wayPoints.Count > 1)
            //{
            //    GameObject line = DrawLine(wayPoints[^2].transform.position, wayPoints[^1].transform.position, Color.green, path);
            //    connectionLines.Add(line);
            //}
        }
    }
    private void initPath()
    {
        path = new GameObject("SpatialMeshPath");
        if (parentGo != null)
        {
            path.transform.parent = parentGo.transform;
        }
        else
        {
            path.transform.parent = GameObject.Find("MixedRealitySceneContent").transform;
        }
    }
    public static GameObject DrawLine(Vector3 start, Vector3 end, Color color, GameObject parentGo)
    {
        GameObject line = new GameObject("PathConnection");
        line.transform.parent = parentGo.transform;
        var lineRenderer = line.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Standard"));
        lineRenderer.positionCount = 2;
        lineRenderer.startWidth = 0.01f;
        lineRenderer.endWidth = 0.01f;
        lineRenderer.SetPosition(0, start);
        lineRenderer.SetPosition(1, end);
        line.GetComponent<Renderer>().material.color = color;
        return line;

    }

    public GameObject VisualizePath(Vector3[] path, GameObject parentGo)
    {
        GameObject importedPath = new GameObject("SpatialMeshPath");
        importedPath.transform.parent = parentGo.transform;

        for (int i = 0; i < path.Length; i++)
        {
            GameObject cornerSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            cornerSphere.transform.parent = importedPath.transform;
            cornerSphere.transform.position = path[i];
            cornerSphere.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            cornerSphere.GetComponent<Renderer>().material.color = Color.blue;
            if (i > 0)
            {
                DrawLine(path[i - 1], path[i], Color.blue, importedPath);
            }
        }
        return importedPath;
    }
    
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        var result = eventData.Pointer.Result;
        var hitPosition = result.Details.Point;
        //UnityEngine.Debug.Log("")
        // Check if hitting spatial mapping layer
        if (result.CurrentPointerTarget?.layer == 31)
        {
            GameObject cornerSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            cornerSphere.transform.parent = path.transform;
            cornerSphere.transform.position = hitPosition;
            cornerSphere.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            cornerSphere.GetComponent<Renderer>().material.color = new Color(0, 1, 0, 1);
            wayPoints.Add(cornerSphere);
            //if (wayPoints.Count > 1)
            //{
            //    GameObject line = DrawLine(wayPoints[^2].transform.position, wayPoints[^1].transform.position, Color.green, path);
            //    connectionLines.Add(line);
            //}
        }
    }*/
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    { }

    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerDragged(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerUp(MixedRealityPointerEventData eventData)
    {
    }
}
public static class DistanceCalculator
{
    public static Vector3 ProjectPointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd)
    {
        Vector3 relativePoint = point - lineStart;
        Vector3 lineDirection = lineEnd - lineStart;
        float length = lineDirection.magnitude;
        Vector3 normalizedLineDirection = lineDirection;
        if (length > .000001f)
            normalizedLineDirection /= length;

        float dot = Vector3.Dot(normalizedLineDirection, relativePoint);
        dot = Mathf.Clamp(dot, 0.0F, length);

        return lineStart + normalizedLineDirection * dot;
    }

    public static float DistancePointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd)
    {
        return Vector3.Magnitude(ProjectPointLine(point, lineStart, lineEnd) - point);
    }
}