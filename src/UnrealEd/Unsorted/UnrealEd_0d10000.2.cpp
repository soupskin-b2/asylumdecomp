// UnrealEd_0d10000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* UnObjBas.h CastChecked<T> (a Cast that fails loudly): out of line in this build, so only declared here. */
template<class T> T* CastChecked(UObject* Src);
extern template AEmitter* Cast<AEmitter>(UObject* Src);
extern template ALensFlareSource* Cast<ALensFlareSource>(UObject* Src);
extern template ALight* Cast<ALight>(UObject* Src);
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

// @baa 0x00d10550
/* Remember whether the toggled actor (emitter, lens flare, light, or anything else) starts out active. */
void UInterpTrackInstToggle::InitTrackInst(UInterpTrack* Track)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(GetOuterOf(this));
    AActor* Actor = GetGroupActorOf(GrInst);
    AEmitter* EmitterActor = Cast<AEmitter>(Actor);
    ALensFlareSource* LensFlareActor = Cast<ALensFlareSource>(Actor);
    ALight* LightActor = Cast<ALight>(Actor);

    bSavedActiveState = FALSE;
    if (EmitterActor)
    {
        bSavedActiveState = EmitterActor->bCurrentlyActive;
    }
    else if (LensFlareActor && LensFlareActor->LensFlareComp)
    {
        bSavedActiveState = LensFlareActor->LensFlareComp->bIsActive;
    }
    else if (LightActor)
    {
        bSavedActiveState = LightActor->LightComponent->bEnabled;
    }
    else if (Actor)
    {
        bSavedActiveState = Actor->bHiddenEd;
    }
}

// @baa 0x00d10350
/* UE3's UInterpTrackFloatParticleParam::UpdateTrack (kit slot vf_13c): set the emitter's float parameter from the curve. */
void UInterpTrackFloatParticleParam::vf_13c(FLOAT NewPosition, UInterpTrackInst* TrInst, UBOOL bJump)
{
	UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(TrInst->GetOuter());
	AEmitter* Emitter = Cast<AEmitter>(GetGroupActorOf(GrInst));
	if (Emitter)
	{
		FLOAT NewFloatValue = FloatTrack.Eval(NewPosition, 0.f);
		Emitter->ParticleSystemComponent->SetFloatParameter(ParamName, NewFloatValue);
	}
}
