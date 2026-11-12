// FMODAudioDevice.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00e70d10
/* Converts a linear volume (0..1) to the attenuation in decibels FMOD takes (-100 = silent).
 * The original's name isn't known. */
FLOAT VolumeToDecibels(FLOAT Volume)
{
    if (Volume <= 0.0f)
    {
        return -100.0f;
    }
    if (Volume >= 1.0f)
    {
        return 0.0f;
    }
    return -(log10f(Volume) * -20.0f);
}
