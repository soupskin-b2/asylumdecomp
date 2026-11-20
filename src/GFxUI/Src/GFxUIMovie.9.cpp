// GFxUIMovie.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"
#include "ue3/GFx.h"

// @baa 0x00e44fe0
void UGFxMovie::SetTimingMode(BYTE Mode)
{
    TimingMode = Mode;
    if (((FGFxMovie*)pMovie.Dummy))
    {
        ((FGFxMovie*)pMovie.Dummy)->TimingMode = Mode;
        ((FGFxMovie*)pMovie.Dummy)->LastTime = (Mode == TM_Real) ? GWorld->GetRealTimeSeconds() : GWorld->GetTimeSeconds();
    }
}
