using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundCuesManager : MonoBehaviour
{
    private float soundCueChronometer = 0;
    

    private void Update()
    {
        if (CueManager.Instance.areCuesEnabled && CueManager.Instance.isFreezed)
        {
            soundCueChronometer += Time.deltaTime;
            if (soundCueChronometer > CueManager.Instance.timeBetweenSteps)
            {
                SoundManager.Instance.PlaySoundCue();
                soundCueChronometer = 0;
            }
            
        }
    }
    // Start is called before the first frame update
    
}
