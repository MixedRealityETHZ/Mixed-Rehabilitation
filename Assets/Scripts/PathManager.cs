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



public class PathManager : MonoBehaviour, IMixedRealityPointerHandler
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
    private bool areCuesOn = true; // non implemented
    
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
    
    public void enableCues(){
        areCuesOn = true;
        SoundManager.Instance.PlaySoundOn();
    }
    public void disableCues()
    {
        areCuesOn = false;
        SoundManager.Instance.PlaySoundOff();
    }

        public void NewPointVoiceCommand()
    {
        if (areCuesOn)
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
        navMeshAgentInstanceComponent.SetDestination(nextPosition);
        navMeshAgentInstanceComponent.isStopped = false;

        /*bool hasFoundPath = navMeshAgentInstanceComponent.CalculatePath(navDestination, m_path);
        Debug.Log("status: " + m_path.status);
        Debug.Log("hasFound path: " + hasFoundPath);
        if (hasFoundPath)
        {
            navMeshAgentInstanceComponent.SetPath(m_path);
            navMeshAgentInstanceComponent.isStopped = false;
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
    */
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