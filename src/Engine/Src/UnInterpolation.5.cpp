// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

#define BIG_NUMBER (3.4e+38f)
// @baa 0x00cf4500
/* Snaps to the closest position key not in IgnoreKeys; FALSE when there is none. */
UBOOL UInterpTrackMove::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
#line 3235 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
    check((PosTrack.Points.Num() == EulerTrack.Points.Num()) && (PosTrack.Points.Num() == LookupTrack.Points.Num()));

    if (PosTrack.Points.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < PosTrack.Points.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(PosTrack.Points(i).InVal - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = PosTrack.Points(i).InVal;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

#line 62 "candidate.cpp"
