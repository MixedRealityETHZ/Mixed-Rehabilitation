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
    public LineRenderer lineRenderer;
    private bool isDeviated;
    private NavMeshPath straightPath;
    public float maximumDeviationDistance = 1;
    private float deviationCheckerChronometer = 0.0f;
    public float deviationCheckerFreqSecs = 1f;
    public bool navMeshAgentHasPath=false;
    private bool WaitAndCheckIfPathCreated = false;
    public float distanceToLine = 0.0f;
    public Vector3 currentTarget;
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
                //DrawStraightPath(straightPath);
                WaitAndCheckIfPathCreated = false;
            }
        }
    }

    /// <summary>
    /// Called in SampleInputManagerScript through the inspector
    /// </summary>
    public void NewPoint(Vector3 target)
    {
        if (target != null)
        {
            currentTarget = target;
            CreateVisualCues(target);
        }        
    }
    void CreateVisualCues(Vector3 target)
    {
        if(target != null)
        {
            if (navMeshAgentInstance == null)
            {
                CreateNavMeshAgent();
            }
            footprintsScript.NewPoint();
            MoveAgent(target);
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
        navMeshAgentInstanceComponent.SetDestination(nextPosition);
        navMeshAgentInstanceComponent.isStopped = false;
        WaitAndCheckIfPathCreated = true;
    }
    public void DrawStraightPath(NavMeshPath path)
    {
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
                CreateVisualCues(currentTarget);
            }
        }
    }

    public void DestroyStraightPath()
    {
        if (lineRenderer != null)
        {
            lineRenderer.positionCount = 0;
        }
    }

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