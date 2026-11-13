// UnInterpolationCurveEd.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

// @baa 0x00cf4840
FLOAT UInterpTrackFloatBase::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= FloatTrack.Points.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(KeyIndex).InVal;
}

#line 35 "candidate.cpp"

// @baa 0x00cf4e00
FLOAT UInterpTrackVectorBase::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(KeyIndex).InVal;
}

// @baa 0x00cf50c0
FLOAT UInterpTrackEvent::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= EventTrack.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FEventTrackKey>&)EventTrack).At(KeyIndex).Time;
}

// @baa 0x00cf5550
FLOAT UInterpTrackDirector::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= CutTrack.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FDirectorTrackCut>&)CutTrack).At(KeyIndex).Time;
}

// @baa 0x00cf5ed0
FLOAT UInterpTrackSound::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= Sounds.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FSoundTrackKey>&)Sounds).At(KeyIndex).Time;
}

// @baa 0x00cf5b10
FLOAT UInterpTrackAnimControl::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= AnimSeqs.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FAnimControlTrackKey>&)AnimSeqs).At(KeyIndex).StartTime;
}

// @baa 0x00cf6540
FLOAT UInterpTrackFaceFX::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= FaceFXSeqs.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FFaceFXTrackKey>&)FaceFXSeqs).At(KeyIndex).StartTime;
}

// @baa 0x00cf6ed0
FLOAT UInterpTrackVisibility::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= VisibilityTrack.Num())
    {
        return 0.f;
    }
    return ((TArrayAt_<FVisibilityTrackKey>&)VisibilityTrack).At(KeyIndex).Time;
}

// @baa 0x00d2af40
void UInterpTrackVectorBase::UpgradeInterpMethod()
{
    if (UsingLegacyInterpMethod())
        VectorTrack.UpgradeInterpMethod();
}
