using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Footprints that follow the player.
public class Footprints : MonoBehaviour
{
    // The player object.
    public GameObject player;

    // The player's last position.
    private Vector3 lastPositionFootprint;
    private Vector3 lastPositionLine;
    
    // The player's current position.
    private Vector3 currentPosition;

    // Number of footprints to keep.
    public int maxFootprints = 10;

    // Right Footprint prefab
    public GameObject rightFootprintPrefab;
    
    // Left Footprint prefab
    public GameObject leftFootprintPrefab;

    // The list of footprints.
    private List<GameObject> footprints;
    private bool isPlayerCreated = false;
    public LineRenderer lineRenderer;
    
    // Gait parameters 
    public float stepLength = 0.2f;
    public float stepWidth = 0.4f;
    private bool isFirstFootprint = true;


    // Start is called before the first frame update
    void Start()
    {
        // Initialize the list of footprints.
        footprints = new List<GameObject>();
        
        //lineRenderer.alignment = LineAlignment.Local;

    }

    public void CreatedPlayer(GameObject _player)
    {
        player = _player;
        // Get the player's current position.
        currentPosition = player.transform.position;

        // Set the last position to the current position.
        lastPositionFootprint = currentPosition;
        isPlayerCreated = true;
    }
    public void NewPoint()
    {
        //Delete line
        lineRenderer.positionCount=0;
        //Delete footprints
        foreach (GameObject footprint in footprints)
        {
            Destroy(footprint);
        }
        isFirstFootprint = true;
    }
    private bool leftFoot = true;

    // Update is called once per frame
    void Update()
    {
        if (player != null && isPlayerCreated && player.transform.position != Camera.main.transform.position)
        {
            //if user deviates from the line renderer 0.5m call newPoint()
            
            
            
            

            // Get the player's current position.
            currentPosition = player.transform.position;
            if (isFirstFootprint)
            {
                isFirstFootprint = false;
                lastPositionFootprint = currentPosition;
            }
            // PRINT LINE
            // If the player has moved more than 0.05 units since the last update add a new point to the linerenderer.
            if (Vector3.Distance(currentPosition, lastPositionLine) > 0.05f)
            {
                // Add a new point to the linerenderer.
                lineRenderer.positionCount++;
                lineRenderer.SetPosition(lineRenderer.positionCount - 1, currentPosition);

                // Set the last position to the current position.
                lastPositionLine = currentPosition;
            }

            // PRINT FOOTPRINTS If the player has moved at least 0.5 units (estimated step size) since the last frame, create a new footprint.
            if (Vector3.Distance(currentPosition, lastPositionFootprint) > stepLength)
            {
                GameObject footprint = null;    
                // Create a new footprint.
                if (leftFoot)
                {
                    footprint = GameObject.Instantiate(leftFootprintPrefab);         
                }
                else
                {
                    footprint = GameObject.Instantiate(rightFootprintPrefab);
                }

                // Set the footprint's position to the player's current position, but with a y offset of -0.5.
                footprint.transform.position = new Vector3(currentPosition.x, currentPosition.y + 0.0001f, currentPosition.z);

                // Alternate between having the footprint be 0.5f to the left or right of the player's trajectory.
                
                Vector3 trajectory = currentPosition - lastPositionFootprint;
                float angle = Mathf.Atan2(trajectory.z, trajectory.x);// * Mathf.Rad2Deg;

            


                if (leftFoot)
                {
                    footprint.transform.position += new Vector3(-(stepWidth/2)*Mathf.Sin(angle), 0, (stepWidth / 2) * Mathf.Cos(angle));
                    //footprint.transform.position += new Vector3(trajectory.z, 0, -trajectory.x) * 0.1f;
                }
                else
                {
                    footprint.transform.position += new Vector3((stepWidth / 2) * Mathf.Sin(angle), 0, -(stepWidth / 2) * Mathf.Cos(angle));
                    //footprint.transform.position += new Vector3(-trajectory.z, 0, trajectory.x) * 0.1f;
                }
                leftFoot = !leftFoot;

                // Set the footprint's scale.
                //footprint.transform.localScale = new Vector3(0.3f, 0.01f, 0.3f);

                //Set the footprint's rotation.
                // calculate the rotation from 0 to the current position
                //footprint.transform.rotation = Quaternion.LookRotation(currentPosition);
                //angle between two vectors
                
                //float rotationAngle = Vector3.Angle(new Vector3(1, 0, 0), currentPosition);
                footprint.transform.rotation = Quaternion.Euler(0, -angle * Mathf.Rad2Deg+90, 0);
                //footprint.transform.Rotate(currentPosition);

                // Set the footprint's color.
                //footprint.GetComponent<Renderer>().material.color = Color.black;

                // Add the footprint to the list of footprints.
                footprints.Add(footprint);

                // If the list of footprints is longer than the maximum number of footprints, remove the oldest footprint.
                if (footprints.Count > maxFootprints)
                {
                    // Remove the oldest footprint.
                    Destroy(footprints[0]);

                    // Remove the oldest footprint from the list of footprints.
                    footprints.RemoveAt(0);
                }

                // Set the player's last position to the current position.
                lastPositionFootprint = currentPosition;
            }
        }  

        
    }

    // Destroy all footprints when the game ends.
    void OnDestroy()
    {
        // Destroy all footprints.
        foreach (GameObject footprint in footprints)
        {
            Destroy(footprint);
        }
    }
}