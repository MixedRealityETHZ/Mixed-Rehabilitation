using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    
    private static SoundManager m_instance;

    [SerializeField] private AudioSource m_onSound;
    [SerializeField] private AudioSource m_offSound;




    // Start is called before the first frame update
    public static SoundManager Instance
    {
        get
        {
            return m_instance;
        }
    }

    private void Awake()
    {
        if (m_instance == null)
        {
            m_instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public void PlaySoundOn()
    {
        m_onSound.Play();
    }
    public void PlaySoundOff()
    {
        m_offSound.Play();
    }
    
}
