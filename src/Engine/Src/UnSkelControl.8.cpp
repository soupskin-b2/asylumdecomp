// UnSkelControl.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FVector *= (UnMath.h); the kit's FVector has no operators */

// @baa 0x0090c710
/* the unit vector along a SkelControl axis, negated if bInvert */
FVector GetAxisVector(BYTE InAxis, UBOOL bInvert)
{
    FVector AxisVec;
    if (InAxis == AXIS_X)
    {
        AxisVec = FVector(1.f, 0.f, 0.f);
    }
    else if (InAxis == AXIS_Y)
    {
        AxisVec = FVector(0.f, 1.f, 0.f);
    }
    else
    {
        AxisVec = FVector(0.f, 0.f, 1.f);
    }

    if (bInvert)
    {
        (FVector&)AxisVec *= -1.f;
    }
    return AxisVec;
}
