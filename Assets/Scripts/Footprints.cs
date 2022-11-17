using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Footprints that follow the player.
public class Footprints : MonoBehaviour
{
    // The player object.
    public GameObject player;

    // The player's last position.
    private Vector3 lastPosition;

    // The player's current position.
    private Vector3 currentPosition;

    // Number of footprints to keep.
    public int maxFootprints = 10;

    // The list of footprints.
    private List<GameObject> footprints;
    private bool isPlayerCreated = false;


    // Start is called before the first frame update
    void Start()
    {
        // Initialize the list of footprints.
        footprints = new List<GameObject>();



    }

    public void CreatedPlayer()
    {
        // Get the player's current position.
        currentPosition = player.transform.position;

        // Set the player's last position to the current position.
        lastPosition = currentPosition;
        isPlayerCreated = true;
    }
    public void NewPoint()
    {
        foreach (GameObject footprint in footprints)
        {
            Destroy(footprint);
        }
    }
    private bool leftFoot = true;

    // Update is called once per frame
    void Update()
    {
        if (player != null && isPlayerCreated)
        {

            // Get the player's current position.
            currentPosition = player.transform.position;

            // If the player has moved at least 0.5 units (estimated step size) since the last frame, create a new footprint.
            if (Vector3.Distance(currentPosition, lastPosition) > 0.5f)
            {
                // Create a new footprint.
                GameObject footprint = GameObject.CreatePrimitive(PrimitiveType.Cube);

                // Set the footprint's position to the player's current position, but with a y offset of -0.5.
                footprint.transform.position = new Vector3(currentPosition.x, currentPosition.y + 0.02f, currentPosition.z);

                // Alternate between having the footprint be slightly to the left or right of the player's trajectory.
                Vector3 trajectory = currentPosition - lastPosition;
                if (leftFoot)
                {
                    footprint.transform.position += new Vector3(trajectory.z, 0, -trajectory.x) * 0.1f;
                }
                else
                {
                    footprint.transform.position += new Vector3(-trajectory.z, 0, trajectory.x) * 0.1f;
                }
                leftFoot = !leftFoot;

                // Set the footprint's scale.
                footprint.transform.localScale = new Vector3(0.3f, 0.01f, 0.3f);

                // Set the footprint's color.
                footprint.GetComponent<Renderer>().material.color = Color.black;

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
                lastPosition = currentPosition;
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