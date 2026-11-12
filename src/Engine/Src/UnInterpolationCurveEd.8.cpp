// UnInterpolationCurveEd.cpp: 1 function
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
            FLOAT Dist = appAbs(((TArrayAt_<FVisibilityTrackKey>&)VisibilityTrack).At(i).Time - InPosition);
            if (Dist < ClosestDist)
            {
                ClosestSnap = ((TArrayAt_<FVisibilityTrackKey>&)VisibilityTrack).At(i).Time;
                ClosestDist = Dist;
                bFoundSnap = TRUE;
            }
        }
    }

    OutPosition = ClosestSnap;
    return bFoundSnap;
}

#line 57 "candidate.cpp"
