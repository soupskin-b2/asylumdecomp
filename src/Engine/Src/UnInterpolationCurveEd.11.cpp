// UnInterpolationCurveEd.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00cfb7a0
/* Removes a key and recomputes the curve's automatic tangents. */
void UInterpTrackVectorBase::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
    {
        return;
    }
    VectorTrack.Points.Remove(KeyIndex);
    ((FInterpCurveVector&)VectorTrack).AutoSetTangents(CurveTension);
}

// @baa 0x00cfbaf0
/* UE3's UInterpTrackEvent::RemoveKeyframe(INT KeyIndex): drop the event key when the index is valid. */
void UInterpTrackEvent::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < EventTrack.Num())
    {
        EventTrack.Remove(KeyIndex);
    }
}

// @baa 0x00cfbcd0
/* UE3's UInterpTrackDirector::RemoveKeyframe(INT KeyIndex): drop the director cut when the index is valid. */
void UInterpTrackDirector::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < CutTrack.Num())
    {
        CutTrack.Remove(KeyIndex);
    }
}

// @baa 0x00cfcca0
/* UE3's UInterpTrackVisibility::RemoveKeyframe(INT KeyIndex): drop the visibility key when the index is valid. */
void UInterpTrackVisibility::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < VisibilityTrack.Num())
    {
        VisibilityTrack.Remove(KeyIndex);
    }
}

// @baa 0x00cfc1a0
/* UE3's UInterpTrackAnimControl::RemoveKeyframe(INT KeyIndex): drop the animation sequence key when the index is valid. */
void UInterpTrackAnimControl::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < AnimSeqs.Num())
    {
        AnimSeqs.Remove(KeyIndex);
    }
}

// @baa 0x00cfc3c0
/* UE3's UInterpTrackSound::RemoveKeyframe(INT KeyIndex): drop the sound key when the index is valid. */
void UInterpTrackSound::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < Sounds.Num())
    {
        Sounds.Remove(KeyIndex);
    }
}

// @baa 0x00cfb430
/* UE3's UInterpTrackFloatBase::RemoveKeyframe(INT KeyIndex): drop the curve point when the index is valid and rebuild
 * the automatic tangents (FInterpCurveFloat::AutoSetTangents, kit sub_007b96a0). */
void UInterpTrackFloatBase::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < FloatTrack.Points.Num())
    {
        FloatTrack.Points.Remove(KeyIndex);
        FloatTrack.sub_007b96a0(CurveTension);
    }
}

/* Unnamed in the kit: UE3's FInterpCurveVector::Eval(const FLOAT InVal, const FVector& Default, INT* PtIdx). */
struct FInterpCurveVector__00cfc680 : public FInterpCurveVector
{
    FVector sub_006eb670(FLOAT InVal, const FVector& Default, INT* PtIdx);
};

/* Unnamed in the kit: UE3's UInterpTrackColorScale::GetColorScaleAtTime(FLOAT Time), unscaled by default. */
struct UInterpTrackColorScale_ : public UInterpTrackColorScale
{
    FVector sub_00cfc680(FLOAT Time);
};

// @baa 0x00cfc680
FVector UInterpTrackColorScale_::sub_00cfc680(FLOAT Time)
{
    return ((FInterpCurveVector__00cfc680&)VectorTrack).sub_006eb670(Time, FVector(1.f, 1.f, 1.f), NULL);
}

/* Unnamed in the kit: UE3's UFaceFXAsset::MountFaceFXAnimSet(UFaceFXAnimSet* AnimSet). */

// @baa 0x00cf6dd0
/* UE3's UInterpTrackFaceFX::PostEditChange(UProperty* PropertyThatChanged): mount every anim set on the cached asset. */
void UInterpTrackFaceFX::PostEditChange(UProperty* PropertyThatChanged)
{
    if (CachedActorFXAsset != NULL)
    {
        for (INT i = 0; i < FaceFXAnimSets.Num(); i++)
        {
            UFaceFXAnimSet* Set = FaceFXAnimSets(i);
            if (Set != NULL)
            {
                CachedActorFXAsset->sub_00bf70e0(Set);
            }
        }
    }
}

// @baa 0x00cf5990
/* UE3's UInterpTrackAnimControl::PostLoad(): fix up keys saved with a (near) zero play rate. */
void UInterpTrackAnimControl::PostLoad()
{
    Super::PostLoad();

    for (INT i = 0; i < AnimSeqs.Num(); i++)
    {
        if (AnimSeqs(i).AnimPlayRate < 0.001f)
        {
            AnimSeqs(i).AnimPlayRate = 1.f;
        }
    }
}

/* Unnamed in the kit: UE3's UInterpTrackSound::GetSoundTrackKeyAtPosition(FLOAT InPosition): the last key starting
 * before InPosition (the first key if none does). */
struct UInterpTrackSound_ : public UInterpTrackSound
{
    FSoundTrackKey& sub_00cf63a0(FLOAT InPosition);
};

// @baa 0x00cf63a0
FSoundTrackKey& UInterpTrackSound_::sub_00cf63a0(FLOAT InPosition)
{
    INT SoundIndex;
    for (SoundIndex = -1; SoundIndex < Sounds.Num() - 1 && Sounds(SoundIndex + 1).Time < InPosition; SoundIndex++);
    if (SoundIndex == -1)
    {
        SoundIndex = 0;
    }
    return Sounds(SoundIndex);
}

/* Unnamed in the kit (0x005a9fc0): FString::Printf with one FLOAT argument (non-variadic wrapper; this build's
 * typed Printf overload, which forwards to the variadic 0x00637b60). */
struct FString_ : public FString
{
    static FString sub_005a9fc0(const TCHAR* Fmt, FLOAT Arg);
};

// @baa 0x00cfa870
/* UInterpData slot 0x194 (kit vf_194, UE3's GetValueStr()): "Matinee Data (<length>s)". */
FString UInterpData::vf_194()
{
    return FString_::sub_005a9fc0(TEXT("Matinee Data (%3.1fs)"), InterpLength);
}
