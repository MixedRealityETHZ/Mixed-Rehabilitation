using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using UnityEngine;

/// <summary>
/// This class is used to calibrate the stride and the step width using the head height of the user.
/// </summary>
public class Calibration : MonoBehaviour
{
    private bool _isCalibrated = false;
    private string calibrationText = "Calibrate";
    private string filePath;
    public string CALIBRATION_DIR = "";
    public const string CALIBRATION_FILE_NAME = "calibration.txt";
    
    private int lastHeadPositionIndex = 0;
    private const int movingAverageWindowSize = 9;
    private const int sampleSize = 500; // 500 samples correspond to 10 seconds of data
    private Vector3[] lastHeadPositions = new Vector3[sampleSize + movingAverageWindowSize - 1];
    private Vector3[] movingAverageHeadPositions = new Vector3[sampleSize];
    private float[] times = new float[sampleSize + movingAverageWindowSize - 1];

    public float averageTimeBetweenSteps = 0.0f;
    public float averageStepWidth = 0.0f;
    public float averageStride = 0.0f;
    public float averageWalkingSpeed = 1.25f;

    public bool isCalibrated
    {
        get
        {
            return _isCalibrated;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        CALIBRATION_DIR = Application.persistentDataPath + "/calibrationData/";
        filePath = CALIBRATION_DIR + "/" + CALIBRATION_FILE_NAME;
        try
        {
            if (!Directory.Exists(CALIBRATION_DIR))
                Directory.CreateDirectory(CALIBRATION_DIR);

            if (File.Exists(filePath))
            {
                string[] lines = File.ReadAllLines(filePath);
                if (lines.Length > 0)
                {
                    string[] values = lines[0].Split(',');
                    if (values.Length == 4)
                    {
                        averageTimeBetweenSteps = float.Parse(values[0]);
                        averageStepWidth = float.Parse(values[1]);
                        averageStride = float.Parse(values[2]);
                        averageWalkingSpeed = float.Parse(values[3]);
                        _isCalibrated = true;
                        calibrationText = "Calibrated";
                        Debug.Log("Already calibrated with stride: " + averageStride + ", step width: " + averageStepWidth + "and walking speed: " + averageWalkingSpeed);
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.Log("Error while reading calibration file: " + e.Message);
        }

        CueManager.Instance.ShowWelcomeMenu(_isCalibrated);

        // TestFunctions();

    }

    void TestFunctions()
    {
        // Read the test data from the file in the downloads folder
        string dataPath = "C:/Users/phili/Downloads/MySaveData12_12_2022 10_30_30.txt";
        string[] lines = System.IO.File.ReadAllLines(dataPath);
        for (int i = 1; i < lines.Length; i++)
        {
            string[] line = lines[i].Split(';');
            float x = float.Parse(line[0].Replace(',', '.'));
            float y = float.Parse(line[1].Replace(',', '.'));
            float z = float.Parse(line[2].Replace(',', '.'));
            Vector3 headPosition = new Vector3(x, y, z);

            // Save the head position
            lastHeadPositions[lastHeadPositionIndex] = headPosition;
            lastHeadPositionIndex++;

            // If the last head position index is equal to the length of the array, we want to reset it to 0
            if (lastHeadPositionIndex == lastHeadPositions.Length)
            {
                lastHeadPositionIndex = 0;
            }
        }
        
        // Print
        Calibrate();
    }

    void UpdateMovingAverage()  
    {
        for (int i = 0; i < movingAverageHeadPositions.Length; i++)
        {
            movingAverageHeadPositions[i] = Vector3.zero;
            for (int j = 0; j < movingAverageWindowSize; j++)
            {
                int idx = (i + j + lastHeadPositionIndex + 1) % lastHeadPositions.Length;
                movingAverageHeadPositions[i] += lastHeadPositions[idx];
            }
            movingAverageHeadPositions[i] /= movingAverageWindowSize;
        }
    }

    (List<int>, List<int>) GetLocalMaxMinIndices()
    {
        UpdateMovingAverage();  
        List<int> localMaximaIndices = new List<int>();
        List<int> localMinimaIndices = new List<int>();
        float hightestDiffMaxMin = 0.0f;
        int i;
        for (i = 1; i < movingAverageHeadPositions.Length - 1; i++)
        {
            if (movingAverageHeadPositions[i].y < movingAverageHeadPositions[i + 1].y && movingAverageHeadPositions[i].y < movingAverageHeadPositions[i - 1].y)
            {
                localMinimaIndices.Add(i);
                if (localMaximaIndices.Count > 0)
                {
                    int maxIdx = localMaximaIndices[^1];
                    float diff = movingAverageHeadPositions[maxIdx].y - movingAverageHeadPositions[i].y;
                    if (diff > hightestDiffMaxMin)
                    {
                        hightestDiffMaxMin = diff;
                    }
                }
            }
            else if (movingAverageHeadPositions[i].y > movingAverageHeadPositions[i + 1].y && movingAverageHeadPositions[i].y > movingAverageHeadPositions[i - 1].y)
            {
                localMaximaIndices.Add(i);
                if (localMinimaIndices.Count > 0)
                {
                    int minIdx = localMinimaIndices[^1];
                    float diff = movingAverageHeadPositions[i].y - movingAverageHeadPositions[minIdx].y;
                    if (diff > hightestDiffMaxMin)
                    {
                        hightestDiffMaxMin = diff;
                    }
                }
            }
        }

        // Remove all local maxima and minima that are not high enough (at least XX% of the highest difference between a local maxima and a local minima)
        i = 0; // i is the index in localMaximaIndices, j is the index in localMinimaIndices
        int j = 0;
        while (i < localMaximaIndices.Count && j < localMinimaIndices.Count)
        {
            float diff = (movingAverageHeadPositions[localMaximaIndices[i]].y - movingAverageHeadPositions[localMinimaIndices[j]].y);
            bool isLowerThanXXPercent = diff < hightestDiffMaxMin * 0.3f;
            int maxIdx = localMaximaIndices[i];
            int minIdx = localMinimaIndices[j];

            if (isLowerThanXXPercent)
            {
                if (maxIdx < minIdx)
                {
                    localMaximaIndices.RemoveAt(i);
                }
                else
                {
                    localMinimaIndices.RemoveAt(j);
                }
            }
            else
            {
                if (maxIdx < minIdx)
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
        }

        // Since we worked on the moving average instead of the acutal samples, we need to shift the indices back accoringly
        // Map each value to its original index in lastHeadPositions
        for (i = 0; i < localMaximaIndices.Count; i++)
        {
            localMaximaIndices[i] = (localMaximaIndices[i] + lastHeadPositionIndex + 1 + movingAverageWindowSize / 2) % lastHeadPositions.Length;
        }
        for (i = 0; i < localMinimaIndices.Count; i++)
        {
            localMinimaIndices[i] = (localMinimaIndices[i] + lastHeadPositionIndex + 1 + movingAverageWindowSize / 2) % lastHeadPositions.Length;
        }

        // Also remove first and last value from both lists
        if (localMaximaIndices.Count > 1)
        {
            localMaximaIndices.RemoveAt(0);
            localMaximaIndices.RemoveAt(localMaximaIndices.Count - 1);
        }
        if (localMinimaIndices.Count > 1)
        {
            localMinimaIndices.RemoveAt(0);
            localMinimaIndices.RemoveAt(localMinimaIndices.Count - 1);
        }

        // Return the two lists
        return (localMaximaIndices, localMinimaIndices);
    }

    /// <summary>
    /// Calibrates the headset by calculating the average of the last 10 seconds of head movement
    /// </summary>
    /// <returns>Average stride, average step width and average walking speed</returns>
    (float stride, float width, float velocity) Calibrate()
    {
        /* We want to track the head height of the user. If the user is not calibrated, we want to show a button to calibrate the user.
        * We use the head height to calculate the stride and the step width. When the height is at a local maximum, we know that the user's
        * legs are side by side, and when the height is at a local minimum, we know that the user is taking a step.
        * 
        * As long as the user is not calibrated, we want to continuously check whether the user is walking. We do this by checking whether
        * the time between two local maximas is greater than a certain threshold. If this is the case, we ASSUME that the user is walking.
        * 
        * The Hololens might give inaccurate values for the head position, so if there are multiple local maxima or minima close to each other,
        * we want to only take the highest local maximum and the lowest local minimum.
        * 
        * Once we're sure that the user has been walking for the last few seconds, i.e. at least 5 valid local maxima and minima have been found, we calculate the following:
        * - The average time between steps
        * - The average step width
        * - The average stride
        */

        // Get the local maxima and minima
        List<int> localMaximaIndices, localMinimaIndices;
        (localMaximaIndices, localMinimaIndices) = GetLocalMaxMinIndices();

        Debug.Log("Local maxima: " + localMaximaIndices.Count + ", local minima: " + localMinimaIndices.Count);

        // If there are not enough local maxima and minima, we can't calibrate yet
        // Check, if there are at least 5 local minima and maxima following each other,
        // where the time between two local maxima is always greater than a 0.5s and smaller than 1.3s

        // If there are at least 5 local maxima and minima, we want to calculate the average time between steps, the average step width and the average stride
        if (localMaximaIndices.Count >= 5)
        {
            // Calculate the average time between steps
            averageTimeBetweenSteps = 0.0f;
            for (int i = 0; i < localMaximaIndices.Count - 1; i++)
            {
                averageTimeBetweenSteps += times[localMaximaIndices[i + 1]] - times[localMaximaIndices[i]];
            }
            averageTimeBetweenSteps /= localMaximaIndices.Count - 1;

            // Calculate the average step width
            averageStepWidth = 0.0f;
            for (int i = 0; i < localMaximaIndices.Count - 2; i++)
            {
                Vector3 current = lastHeadPositions[localMaximaIndices[i]];
                Vector3 next = lastHeadPositions[localMaximaIndices[i + 1]];
                Vector3 nextNext = lastHeadPositions[localMaximaIndices[i + 2]];

                Vector3 currentToNext = next - current;
                Vector3 currentToNextnext = nextNext - current;
                float length = currentToNextnext.magnitude;
                Vector3 normalizedLineDirection = currentToNextnext;
                if (length > .000001f)
                    normalizedLineDirection /= length;

                float dot = Vector3.Dot(normalizedLineDirection, currentToNext);
                dot = Mathf.Clamp(dot, 0.0F, length);

                Vector3 closestPoint = current + normalizedLineDirection * dot;
                float distance = (closestPoint - next).magnitude;

                averageStepWidth += distance;
            }
            averageStepWidth /= localMaximaIndices.Count - 2;

            // Calculate the average stride
            averageStride = 0.0f;
            for (int i = 0; i < localMaximaIndices.Count - 2; i++)
            {
                Vector3 current = lastHeadPositions[localMaximaIndices[i]];
                Vector3 nextNext = lastHeadPositions[localMaximaIndices[i + 2]];


                float distance = (new Vector2(current.x, current.z) - new Vector2(nextNext.x, nextNext.z)).magnitude / 2.0f;
                Debug.Log("Stride: " + distance);
                Debug.Log("x1: " + current.x + ", z1: " + current.z + ", x2: " + nextNext.x + ", z2: " + nextNext.z);

                averageStride += distance;
            }
            averageStride /= localMaximaIndices.Count - 2;

            // Calculate the average walking speed
            float totalDistanceWalked = 0.0f;
            float totalTime = 0.0f;
            for (int i = 0; i < localMaximaIndices.Count - 1; i++)
            {
                Vector3 current = lastHeadPositions[localMaximaIndices[i]];
                Vector3 next = lastHeadPositions[localMaximaIndices[i + 1]];

                float distance = (new Vector2(current.x, current.z) - new Vector2(next.x, next.z)).magnitude;
                float time = times[localMaximaIndices[i + 1]] - times[localMaximaIndices[i]];

                totalDistanceWalked += distance;
                totalTime += time;
            }
            averageWalkingSpeed = totalDistanceWalked / totalTime;

            // Save the calibration data
            string calibrationData = averageTimeBetweenSteps + "," + averageStepWidth + "," + averageStride + "," + averageWalkingSpeed;
            System.IO.File.WriteAllText(filePath, calibrationData);

            // Set the calibration text
            calibrationText = "Calibrated: " + calibrationData;
            Debug.Log(calibrationText);
            
            // Set the isCalibrated variable to true
            _isCalibrated = true;

            return (averageStride, averageStepWidth, averageWalkingSpeed);
        } else
        {
            Debug.Log("Not enough local maxima and minima. Local maxima: " + localMaximaIndices.Count + ", local minima: " + localMinimaIndices.Count);
            return (0, 0, 0);
        }
    }

    /// <summary>
    /// Wait for the user to walk for a few seconds and then calculate the average time between steps, the average step width and the average stride
    /// </summary>
    public IEnumerator CalibrateCoroutine()
    {
        // Reset the calibration data
        averageTimeBetweenSteps = 0.0f;
        averageStepWidth = 0.0f;
        averageStride = 0.0f;
        averageWalkingSpeed = 0.0f;

        // Reset the calibration text
        calibrationText = "Calibrating...";

        // Reset the isCalibrated variable
        _isCalibrated = false;
        
        // Wait for the user to walk for a few seconds
        yield return new WaitForSeconds(10.0f);

        // Calculate the average time between steps, the average step width and the average stride
        Calibrate();

        CueManager.Instance.CheckCalibration(_isCalibrated);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        // Get the head position
        Vector3 headPosition = Camera.main.transform.position;
        float currentTime = Time.time;

        // Save the head position and the time
        lastHeadPositions[lastHeadPositionIndex] = headPosition;
        times[lastHeadPositionIndex] = currentTime;
        lastHeadPositionIndex++;

        // If the last head position index is equal to the length of the array, we want to reset it to 0
        if (lastHeadPositionIndex == lastHeadPositions.Length)
        {
            lastHeadPositionIndex = 0;
        }
    }
}
