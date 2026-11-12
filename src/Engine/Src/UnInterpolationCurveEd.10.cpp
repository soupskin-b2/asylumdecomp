// UnInterpolationCurveEd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* FInterpCurve<FLOAT>::Eval (006eb030, out of line); the kit's FInterpCurveFloat doesn't declare it. */

struct UInterpTrackFade_ : public UInterpTrackFade
{
    FLOAT GetFadeAmountAtTime(FLOAT Time);
};

// @baa 0x00cfbd70
/* UInterpTrackFade::GetFadeAmountAtTime (UE3 UnInterpolation.cpp; not declared in the kit). */
FLOAT UInterpTrackFade_::GetFadeAmountAtTime(FLOAT Time)
{
    FLOAT FadeAmount = ((FInterpCurveFloat&)FloatTrack).Eval(Time, 0.f);
    FadeAmount = Clamp(FadeAmount, 0.f, 1.f);
    return FadeAmount;
}
