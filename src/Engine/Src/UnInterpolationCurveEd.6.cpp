// UnInterpolationCurveEd.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d0b740
UBOOL UInterpTrackSound::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* FInterpCurve<FVector> (UnMath.h): AddPoint and AutoSetTangents out of line in the exe (007bb100, 007bb200) */

// @baa 0x00cfc5e0
INT UInterpTrackColorScale::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = VectorTrack.AddPoint(Time, FVector(1.f, 1.f, 1.f));
    VectorTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    VectorTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

#line 49 "candidate.cpp"

// @baa 0x00cfc990
INT UInterpTrackAudioMaster::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = VectorTrack.AddPoint(Time, FVector(1.f, 1.f, 0.f));
    VectorTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    VectorTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfc550
INT UInterpTrackVectorMaterialParam::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = VectorTrack.AddPoint(Time, FVector(0.f));
    VectorTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    VectorTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfc450
INT UInterpTrackFloatParticleParam::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = FloatTrack.AddPoint(Time, 0.f);
    FloatTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    FloatTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfc4d0
INT UInterpTrackFloatMaterialParam::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = FloatTrack.AddPoint(Time, 0.f);
    FloatTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    FloatTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}
