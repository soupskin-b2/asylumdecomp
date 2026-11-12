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

// sub_007bb890 operates on a curve-like struct (TArray header + flag byte at +0xc).
// It iterates elements of size 0x2c (FInterpCurvePointVector), setting the
// per-element InterpMode byte from 1/5 to 3, then clears the flag.
struct S_007bb890 {
    void* Points; // 0x0
    int   Count;  // 0x4
    int   Cap;    // 0x8
    BYTE  bFlag;  // 0xc
    void  sub_007bb890();
};

// The calling object has a vtable at +0x0 (slot 0x44 used as a dirty check),
// and the curve subobject at +0x20.
struct UInterpTrackVectorBase_ {
    virtual int V0()    = 0;
    virtual int V1()    = 0;
    virtual int V2()    = 0;
    virtual int V3()    = 0;
    virtual int V4()    = 0;
    virtual int V5()    = 0;
    virtual int V6()    = 0;
    virtual int V7()    = 0;
    virtual int V8()    = 0;
    virtual int V9()    = 0;
    virtual int V10()   = 0;
    virtual int V11()   = 0;
    virtual int V12()   = 0;
    virtual int V13()   = 0;
    virtual int V14()   = 0;
    virtual int V15()   = 0;
    virtual int V16()   = 0;
    virtual int IsDirty() = 0; // slot 0x44

    // UObject base fields at 0x04..0x1f (4 dwords)
    int f04, f08, f0c, f10, f14, f18, f1c;

    S_007bb890 Curve; // +0x20

    void sub_00d2af40();
};

// @baa 0x00d2af40
void UInterpTrackVectorBase_::sub_00d2af40()
{
    if (IsDirty())
        Curve.sub_007bb890();
}
