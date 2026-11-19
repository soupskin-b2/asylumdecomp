// UnInterpolationCurveEd.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00cf4840
FLOAT UInterpTrackFloatBase::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= FloatTrack.Points.Num())
    {
        return 0.f;
    }
    return FloatTrack.Points(KeyIndex).InVal;
}

#line 35 "candidate.cpp"

// @baa 0x00cf4e00
FLOAT UInterpTrackVectorBase::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
    {
        return 0.f;
    }
    return VectorTrack.Points(KeyIndex).InVal;
}

// @baa 0x00cf50c0
FLOAT UInterpTrackEvent::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= EventTrack.Num())
    {
        return 0.f;
    }
    return EventTrack(KeyIndex).Time;
}

// @baa 0x00cf5550
FLOAT UInterpTrackDirector::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= CutTrack.Num())
    {
        return 0.f;
    }
    return CutTrack(KeyIndex).Time;
}

// @baa 0x00cf5ed0
FLOAT UInterpTrackSound::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= Sounds.Num())
    {
        return 0.f;
    }
    return Sounds(KeyIndex).Time;
}

// @baa 0x00cf5b10
FLOAT UInterpTrackAnimControl::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= AnimSeqs.Num())
    {
        return 0.f;
    }
    return AnimSeqs(KeyIndex).StartTime;
}

// @baa 0x00cf6540
FLOAT UInterpTrackFaceFX::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= FaceFXSeqs.Num())
    {
        return 0.f;
    }
    return FaceFXSeqs(KeyIndex).StartTime;
}

// @baa 0x00cf6ed0
FLOAT UInterpTrackVisibility::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= VisibilityTrack.Num())
    {
        return 0.f;
    }
    return VisibilityTrack(KeyIndex).Time;
}

// @baa 0x00d2af40
void UInterpTrackVectorBase::UpgradeInterpMethod()
{
    if (UsingLegacyInterpMethod())
        VectorTrack.UpgradeInterpMethod();
}
