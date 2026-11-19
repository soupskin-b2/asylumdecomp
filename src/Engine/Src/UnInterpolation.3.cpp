// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00cf4a80
FLOAT UInterpTrackToggle::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= ToggleTrack.Num())
    {
        return 0.f;
    }
    return ToggleTrack(KeyIndex).Time;
}

#line 35 "candidate.cpp"
