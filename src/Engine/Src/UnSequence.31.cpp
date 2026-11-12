// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"

/* UnMaterial.h EMaterialUsage values this uses. */
#define MATUSAGE_SkeletalMesh 0
#define MATUSAGE_MorphTargets 14
// @baa 0x008c0880
/* UE3's USeqAct_SetMaterial::PostEditChange(UProperty* PropertyThatChanged): when a skeletal mesh actor is targeted,
 * make sure the new material is compiled for skeletal meshes (and morph targets if the mesh uses them). */
void USeqAct_SetMaterial::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);

    for (INT Idx = 0; Idx < Targets.Num(); Idx++)
    {
        UObject* Target = Targets(Idx);
        if (Target != NULL && ObjectIsA(Target, ASkeletalMeshActor::StaticClass()))
        {
            ASkeletalMeshActor* SkelMeshActor = (ASkeletalMeshActor*)Target;
            NewMaterial->CheckMaterialUsage(MATUSAGE_SkeletalMesh);
            if (SkelMeshActor->SkeletalMeshComponent != NULL && SkelMeshActor->SkeletalMeshComponent->ActiveMorphs.Num() > 0)
            {
                NewMaterial->CheckMaterialUsage(MATUSAGE_MorphTargets);
            }
            break;
        }
    }
}

/* Unnamed in the kit: USeqAct_ParticleEventGenerator::HandleEnableInputs() (0x008bc130) and UE3's
 * UParticleSystemComponent::ReportEventKismet(...) (0x00b5ef40). */
struct USeqAct_ParticleEventGenerator_ : public USeqAct_ParticleEventGenerator
{
    void HandleEnableInputs();
};

struct UParticleSystemComponent_ : public UParticleSystemComponent
{
    void sub_00b5ef40(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InDirection, FVector& InVelocity,
        UBOOL bUsePSysCompLocation, FVector& InNormal);
};

// @baa 0x008bee30
/* UE3's USeqAct_ParticleEventGenerator::UpdateOp(FLOAT DeltaTime): while enabled, send every event name to the
 * particle system of each targeted emitter. */
UBOOL USeqAct_ParticleEventGenerator::UpdateOp(FLOAT DeltaTime)
{
    ((USeqAct_ParticleEventGenerator_*)this)->HandleEnableInputs();

    if (bEnabled && Targets.Num() > 0 && EventNames.Num() > 0)
    {
        for (INT TargetIdx = 0; TargetIdx < Targets.Num(); TargetIdx++)
        {
            AEmitter* EmitterActor = Cast<AEmitter>(Targets(TargetIdx));
            if (EmitterActor != NULL && EmitterActor->ParticleSystemComponent != NULL)
            {
                for (INT NameIdx = 0; NameIdx < EventNames.Num(); NameIdx++)
                {
                    FName EventName = EventNames(NameIdx);
                    ((UParticleSystemComponent_*)EmitterActor->ParticleSystemComponent)->sub_00b5ef40(EventName, EventTime,
                        EventLocation, EventDirection, EventVelocity, bUseEmitterLocation, EventNormal);
                }
            }
        }
    }
    return TRUE;
}
