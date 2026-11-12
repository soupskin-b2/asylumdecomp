// UnInterpolationCurveEd.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d0b740
bool UInterpTrackSound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

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

/* FInterpCurve<FVector> (UnMath.h): AddPoint and AutoSetTangents out of line in the exe (007bb100, 007bb200) */

// @baa 0x00cfc5e0
INT UInterpTrackColorScale::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveVector&)VectorTrack).AddPoint(Time, FVector(1.f, 1.f, 1.f));
    ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveVector&)VectorTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

#line 49 "candidate.cpp"

// @baa 0x00cfc990
INT UInterpTrackAudioMaster::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveVector&)VectorTrack).AddPoint(Time, FVector(1.f, 1.f, 0.f));
    ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveVector&)VectorTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfc550
INT UInterpTrackVectorMaterialParam::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveVector&)VectorTrack).AddPoint(Time, FVector(0.f));
    ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveVector&)VectorTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

/* FInterpCurve<FLOAT> (UnMath.h): AddPoint out of line in the exe (007b95b0), AutoSetTangents is the kit's sub_007b96a0 */
struct FInterpCurveFloat_ : public FInterpCurveFloat
{
    void AutoSetTangents(FLOAT Tension) { sub_007b96a0(Tension); }
};

// @baa 0x00cfc450
INT UInterpTrackFloatParticleParam::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveFloat_&)FloatTrack).AddPoint(Time, 0.f);
    ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveFloat_&)FloatTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfc4d0
INT UInterpTrackFloatMaterialParam::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveFloat_&)FloatTrack).AddPoint(Time, 0.f);
    ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveFloat_&)FloatTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}
