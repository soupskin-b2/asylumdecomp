// UnInterpolation.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"
#include "ue3/Array.h"
#include "ue3/Classes.h"

/* UnMath.h constant the kit lacks. */
#define BIG_NUMBER (3.4e+38f)
// @baa 0x00cf4c00
/* UE3's UInterpTrackToggle::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition):
 * the key time nearest InPosition, skipping IgnoreKeys; FALSE if there is none. */
UBOOL UInterpTrackToggle::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (ToggleTrack.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < ToggleTrack.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(ToggleTrack(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = ToggleTrack(i).Time;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

// @baa 0x00cf7400
/* UE3's UInterpTrackParticleReplay::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition):
 * the key time nearest InPosition, skipping IgnoreKeys; FALSE if there is none. */
UBOOL UInterpTrackParticleReplay::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (TrackKeys.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < TrackKeys.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(TrackKeys(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = TrackKeys(i).Time;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}
