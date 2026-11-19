// UnInterpolationCurveEd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

#define BIG_NUMBER (3.4e+38f) /* UnMath.h */
// @baa 0x00cf7050
UBOOL UInterpTrackVisibility::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (VisibilityTrack.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < VisibilityTrack.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(VisibilityTrack(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = VisibilityTrack(i).Time;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

#line 57 "candidate.cpp"
