// UnInterpolationCurveEd.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

#define BIG_NUMBER (3.4e+38f) /* UnMath.h */
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
            FLOAT Dist = appAbs(((TArrayAt_<FEventTrackKey>&)EventTrack).At(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = ((TArrayAt_<FEventTrackKey>&)EventTrack).At(i).Time;
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
            FLOAT Dist = appAbs(((TArrayAt_<FDirectorTrackCut>&)CutTrack).At(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = ((TArrayAt_<FDirectorTrackCut>&)CutTrack).At(i).Time;
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
            FLOAT Dist = appAbs(((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(i).InVal - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(i).InVal;
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
            FLOAT Dist = appAbs(((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(i).InVal - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(i).InVal;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}
