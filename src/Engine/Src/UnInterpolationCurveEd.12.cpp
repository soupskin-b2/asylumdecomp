// UnInterpolationCurveEd.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"
#include "ue3/Classes.h"


// @baa 0x00cfbf30
FLOAT UInterpTrackSlomo::sub_00cfbf30(FLOAT Time)
{
    FLOAT Slomo = ((FInterpCurveFloat&)FloatTrack).Eval(Time, 0.f, NULL);
    Slomo = Max(Slomo, 0.1f);
    return Slomo;
}


// @baa 0x00cfbe50
FLOAT UInterpTrackSoundFade::sub_00cfbe50(FLOAT Time)
{
    FLOAT SoundFade = ((FInterpCurveFloat&)FloatTrack).Eval(Time, 0.f, NULL);
    SoundFade = Clamp(SoundFade, 0.f, 1.f);
    return SoundFade;
}
