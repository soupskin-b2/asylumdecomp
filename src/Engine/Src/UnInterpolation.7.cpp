// UnInterpolation.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* UnObjBas.h CastChecked<T> (a Cast that fails loudly): out of line in this build, so only declared here. */
template<class T> T* CastChecked(UObject* Src);
/* UE3's inline UObject::GetOuter() and UInterpGroupInst::GetGroupActor() (the kit lacks both). */
inline UObject* GetOuterOf(const UObject* Object) { return Object->Outer; }

inline AActor* GetGroupActorOf(UInterpGroupInst* GrInst)
{
    if (GrInst->GroupActor == NULL || GrInst->GroupActor->bDeleteMe)
    {
        return NULL;
    }
    return GrInst->GroupActor;
}

// @baa 0x00d16230
/* UInterpTrackInstFloatParticleParam slot 0x110 (kit vf_110, UE3 RestoreActorState(UInterpTrack* Track)): put the
 * saved value back into the emitter's particle parameter. */
void UInterpTrackInstFloatParticleParam::RestoreActorState(UInterpTrack* Track)
{
    UInterpTrackFloatParticleParam* ParamTrack = CastChecked<UInterpTrackFloatParticleParam>(Track);
    AEmitter* Emitter = Cast<AEmitter>(GetGroupActorOf(CastChecked<UInterpGroupInst>(GetOuterOf(this))));
    if (Emitter != NULL)
    {
        Emitter->ParticleSystemComponent->SetFloatParameter(ParamTrack->ParamName, ResetFloat);
    }
}

// @baa 0x00d10d80
/* UInterpTrackInstParticleReplay slot 0x110 (kit vf_110, UE3 RestoreActorState(UInterpTrack* Track)): take the
 * emitter's particle system out of replay mode (PRS_Disabled, clip and frame 0). */
void UInterpTrackInstParticleReplay::RestoreActorState(UInterpTrack* Track)
{
    AActor* Actor = GetGroupActorOf(CastChecked<UInterpGroupInst>(GetOuterOf(this)));
    if (Actor != NULL)
    {
        AEmitter* Emitter = Cast<AEmitter>(Actor);
        if (Emitter != NULL && Emitter->ParticleSystemComponent != NULL)
        {
            Emitter->ParticleSystemComponent->ReplayState = 0;
            Emitter->ParticleSystemComponent->ReplayClipIDNumber = 0;
            Emitter->ParticleSystemComponent->ReplayFrameIndex = 0;
        }
    }
}

// @baa 0x00d14fe0
/* UE3's UInterpTrackInstSoundFade::InitTrackInst(UInterpTrack* Track): with ResetVolume, remember the player camera's
 * current sound fade. */
void UInterpTrackInstSoundFade::InitTrackInst(UInterpTrack* Track)
{
    UInterpTrackSoundFade* SoundFadeTrack = CastChecked<UInterpTrackSoundFade>(Track);
    if (SoundFadeTrack->ResetVolume)
    {
        APlayerController* PC = Cast<APlayerController>(CastChecked<UInterpGroupInst>(GetOuterOf(this))->GroupActor);
        if (PC != NULL && PC->PlayerCamera != NULL)
        {
            storedSoundFade = PC->PlayerCamera->SoundFadeAmount;
        }
    }
}

// @baa 0x00d15030
/* UInterpTrackInstSoundFade slot 0x118 (kit vf_118, UE3 TermTrackInst(UInterpTrack* Track)): with ResetVolume, give the
 * player camera back the sound fade saved at init. */
void UInterpTrackInstSoundFade::vf_118(UInterpTrack* Track)
{
    UInterpTrackSoundFade* SoundFadeTrack = CastChecked<UInterpTrackSoundFade>(Track);
    if (SoundFadeTrack->ResetVolume)
    {
        APlayerController* PC = Cast<APlayerController>(CastChecked<UInterpGroupInst>(GetOuterOf(this))->GroupActor);
        if (PC != NULL && PC->PlayerCamera != NULL && !PC->PlayerCamera->bDeleteMe)
        {
            PC->PlayerCamera->SoundFadeAmount = storedSoundFade;
        }
    }
}

// @baa 0x00d16310
/* UInterpTrackInstFloatMaterialParam slot 0x110 (kit vf_110, UE3 RestoreActorState(UInterpTrack* Track)): put the
 * saved scalar back on the material instance actor's material. */
void UInterpTrackInstFloatMaterialParam::RestoreActorState(UInterpTrack* Track)
{
    UInterpTrackFloatMaterialParam* ParamTrack = CastChecked<UInterpTrackFloatMaterialParam>(Track);
    AMaterialInstanceActor* MatInstActor = Cast<AMaterialInstanceActor>(GetGroupActorOf(CastChecked<UInterpGroupInst>(GetOuterOf(this))));
    if (MatInstActor != NULL && MatInstActor->MatInst != NULL)
    {
        MatInstActor->MatInst->SetScalarParameterValue(ParamTrack->ParamName, ResetFloat);
    }
}

// @baa 0x00d10830
/* UInterpTrackInstColorScale slot 0x118 (kit vf_118, UE3 TermTrackInst(UInterpTrack* Track)): turn colour scaling off
 * on the player camera and reset the scale. */
void UInterpTrackInstColorScale::vf_118(UInterpTrack* Track)
{
    APlayerController* PC = Cast<APlayerController>(CastChecked<UInterpGroupInst>(GetOuterOf(this))->GroupActor);
    if (PC != NULL && PC->PlayerCamera != NULL && !PC->PlayerCamera->bDeleteMe)
    {
        PC->PlayerCamera->bEnableColorScaling = FALSE;
        PC->PlayerCamera->ColorScale = FVector(1.f, 1.f, 1.f);
    }
}

// @baa 0x00d16440
/* UInterpTrackInstVectorMaterialParam slot 0x110 (kit vf_110, UE3 RestoreActorState(UInterpTrack* Track)): put the
 * saved vector (alpha 1) back on the material instance actor's material. */
void UInterpTrackInstVectorMaterialParam::RestoreActorState(UInterpTrack* Track)
{
    UInterpTrackVectorMaterialParam* ParamTrack = CastChecked<UInterpTrackVectorMaterialParam>(Track);
    AMaterialInstanceActor* MatInstActor = Cast<AMaterialInstanceActor>(GetGroupActorOf(CastChecked<UInterpGroupInst>(GetOuterOf(this))));
    if (MatInstActor != NULL && MatInstActor->MatInst != NULL)
    {
        FLinearColor ResetColor;
        ResetColor.R = ResetVector.X;
        ResetColor.G = ResetVector.Y;
        ResetColor.B = ResetVector.Z;
        ResetColor.A = 1.f;
        MatInstActor->MatInst->SetVectorParameterValue(ParamTrack->ParamName, ResetColor);
    }
}

// @baa 0x00d06e20
/* UInterpCurveEdSetup::GetCurveEdInterfacePointer (static): the curve-editor interface of an entry's
 * curve object, which may be a float or vector distribution or an interp track. */
FCurveEdInterface* sub_00d06e20(const FCurveEdEntry& Entry)
{
	UDistributionFloat* FloatDist = Cast<UDistributionFloat>(Entry.CurveObject);
	if (FloatDist)
	{
		return FloatDist;
	}

	UDistributionVector* VectorDist = Cast<UDistributionVector>(Entry.CurveObject);
	if (VectorDist)
	{
		return VectorDist;
	}

	UInterpTrack* InterpTrack = Cast<UInterpTrack>(Entry.CurveObject);
	if (InterpTrack)
	{
		return InterpTrack;
	}

	return NULL;
}

extern template APlayerController* Cast<APlayerController>(UObject* Src);
/* Unnamed in the kit: UE3's UInterpTrackSoundFade::GetSoundFadeAmountAtTime(FLOAT Time). */
struct UInterpTrackSoundFade_ : public UInterpTrackSoundFade
{
    FLOAT sub_00cfbe50(FLOAT Time);
};

// @baa 0x00d0fcf0
/* UE3's UInterpTrackSoundFade::UpdateTrack (kit slot vf_13c): set the player camera's sound fade from the curve. */
void UInterpTrackSoundFade::vf_13c(FLOAT NewPosition, UInterpTrackInst* TrInst, UBOOL bJump)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(GetOuterOf(TrInst));
    APlayerController* PC = Cast<APlayerController>(GetGroupActorOf(GrInst));
    if (PC && PC->PlayerCamera && !PC->PlayerCamera->bDeleteMe)
    {
        PC->PlayerCamera->SoundFadeAmount = ((UInterpTrackSoundFade_*)this)->sub_00cfbe50(NewPosition);
    }
}

/* UInterpTrackFade::GetFadeAmountAtTime isn't declared in the kit. */
struct UInterpTrackFade_ : public UInterpTrackFade
{
    FLOAT GetFadeAmountAtTime(FLOAT Time); /* 0x00cfbd70 */
};

// @baa 0x00d0fc60
/* UE3's UInterpTrackFade::UpdateTrack (kit slot vf_13c): drive the player camera's fade from the curve (not when jumping). */
void UInterpTrackFade::vf_13c(FLOAT NewPosition, UInterpTrackInst* TrInst, UBOOL bJump)
{
    if (!bJump)
    {
        UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(GetOuterOf(TrInst));
        APlayerController* PC = Cast<APlayerController>(GetGroupActorOf(GrInst));
        if (PC && PC->PlayerCamera && !PC->PlayerCamera->bDeleteMe)
        {
            PC->PlayerCamera->bEnableFading = TRUE;
            PC->PlayerCamera->FadeAmount = ((UInterpTrackFade_*)this)->GetFadeAmountAtTime(NewPosition);
            PC->PlayerCamera->FadeTimeRemaining = 0.0f;
        }
    }
}
