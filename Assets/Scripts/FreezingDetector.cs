using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreezingDetector : MonoBehaviour
{
    public bool isFreezing = false;
    private float averageWalkingSpeed
    {
        get
        {
            return CueManager.Instance.averageWalkingSpeed;
        }
    }
    public float currentWalkingSpeed = 0;
    private Vector3[] lastPositions = new Vector3[25];
    private float[] lastTimes = new float[25];
    private int index = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        lastPositions[index] = Camera.main.transform.position;
        lastTimes[index] = Time.time;
        index++;
        if (index >= lastPositions.Length)
        {
            index = 0;
        }

        float distance = 0;
        float time = 0;
        for (int i = 0; i < lastPositions.Length - 1; i++)
        {
            int idx = (index + i) % lastPositions.Length;
            int idxNext = (index + i + 1) % lastPositions.Length;
            distance += Vector3.Distance(lastPositions[idx], lastPositions[idxNext]);
            time += lastTimes[idxNext] - lastTimes[idx];
        }
        currentWalkingSpeed = distance / time;

        if (currentWalkingSpeed < 0.3 * averageWalkingSpeed) // instead of `0.3 * averageWalkingSpeed`, use something like `averageWalkingSpeed - x * stdDev` in the future
        {
            isFreezing = true;
            CueManager.Instance.UserHasFreezed();
        }
        else if (currentWalkingSpeed > 0.7 * averageWalkingSpeed)
        {
            isFreezing = false;
            CueManager.Instance.UserHasUnfreezed();
        }
    }
}
