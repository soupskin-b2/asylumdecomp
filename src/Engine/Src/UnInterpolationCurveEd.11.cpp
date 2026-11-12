// UnInterpolationCurveEd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FInterpCurve<FVector>::AutoSetTangents (0x007bb200) isn't declared. */
struct FInterpCurveVector_ : public FInterpCurveVector
{
    void AutoSetTangents(FLOAT Tension); /* 0x007bb200 */
};

// @baa 0x00cfb7a0
/* Removes a key and recomputes the curve's automatic tangents. */
void UInterpTrackVectorBase::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
    {
        return;
    }
    VectorTrack.Points.Remove(KeyIndex);
    ((FInterpCurveVector_&)VectorTrack).AutoSetTangents(CurveTension);
}
