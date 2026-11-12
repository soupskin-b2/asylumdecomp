// UnInterpolationCurveEd.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"
#include "ue3/Classes.h"

/* Unnamed in the kit: UE3's FInterpCurveFloat::Eval(const FLOAT InVal, const FLOAT& Default, INT* PtIdx). */
struct FInterpCurveFloat_ : public FInterpCurveFloat
{
    FLOAT sub_006eb030(FLOAT InVal, const FLOAT& Default, INT* PtIdx);
};

/* Unnamed in the kit: UE3's UInterpTrackSlomo::GetSlomoFactorAtTime(FLOAT Time), never below 0.1. */
struct UInterpTrackSlomo_ : public UInterpTrackSlomo
{
    FLOAT sub_00cfbf30(FLOAT Time);
};

// @baa 0x00cfbf30
FLOAT UInterpTrackSlomo_::sub_00cfbf30(FLOAT Time)
{
    FLOAT Slomo = ((FInterpCurveFloat_&)FloatTrack).sub_006eb030(Time, 0.f, NULL);
    Slomo = Max(Slomo, 0.1f);
    return Slomo;
}

/* Unnamed in the kit: UE3's UInterpTrackSoundFade::GetSoundFadeAmountAtTime(FLOAT Time), clamped to 0..1. */
struct UInterpTrackSoundFade_ : public UInterpTrackSoundFade
{
    FLOAT sub_00cfbe50(FLOAT Time);
};

// @baa 0x00cfbe50
FLOAT UInterpTrackSoundFade_::sub_00cfbe50(FLOAT Time)
{
    FLOAT SoundFade = ((FInterpCurveFloat_&)FloatTrack).sub_006eb030(Time, 0.f, NULL);
    SoundFade = Clamp(SoundFade, 0.f, 1.f);
    return SoundFade;
}
