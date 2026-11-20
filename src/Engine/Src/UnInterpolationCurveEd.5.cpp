// UnInterpolationCurveEd.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

// @baa 0x00cf5270
UBOOL UInterpTrackEvent::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (EventTrack.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < EventTrack.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(EventTrack(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = EventTrack(i).Time;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

#line 57 "candidate.cpp"

// @baa 0x00cf5730
UBOOL UInterpTrackDirector::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (CutTrack.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < CutTrack.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(CutTrack(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = CutTrack(i).Time;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

// @baa 0x00cf48a0
UBOOL UInterpTrackFloatBase::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (FloatTrack.Points.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < FloatTrack.Points.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(FloatTrack.Points(i).InVal - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = FloatTrack.Points(i).InVal;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

// @baa 0x00cf4e60
UBOOL UInterpTrackVectorBase::GetClosestSnapPosition(FLOAT InPosition, TArray<INT>& IgnoreKeys, FLOAT& OutPosition)
{
    if (VectorTrack.Points.Num() == 0)
    {
        return FALSE;
    }

    UBOOL bFoundSnap = FALSE;
    FLOAT ClosestSnap = 0.f;
    FLOAT ClosestDist = BIG_NUMBER;
    for (INT i = 0; i < VectorTrack.Points.Num(); i++)
    {
        if (!IgnoreKeys.ContainsItem(i))
        {
            FLOAT Dist = appAbs(VectorTrack.Points(i).InVal - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = VectorTrack.Points(i).InVal;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}
