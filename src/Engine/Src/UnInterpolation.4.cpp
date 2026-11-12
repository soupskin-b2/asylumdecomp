// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00cf0440
/* A track with no keys has an empty time range. */
void UInterpTrack::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    StartTime = 0.f;
    EndTime = 0.f;
}
