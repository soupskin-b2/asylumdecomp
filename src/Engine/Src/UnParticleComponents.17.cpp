// UnParticleComponents.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
// @baa 0x00b5ead0
/* UE3's UParticleSystemComponent::GetColorParameter(FName InName, FColor& OutColor): the color of the instance
 * parameter of that name. */
UBOOL UParticleSystemComponent::GetColorParameter(FName InName, FColor& OutColor)
{
    if (InName == NAME_None)
    {
        return FALSE;
    }
    for (INT i = 0; i < InstanceParameters.Num(); i++)
    {
        FParticleSysParam& Param = InstanceParameters(i);
        if (Param.Name == InName && Param.ParamType == PSPT_Color)
        {
            OutColor = Param.Color;
            return TRUE;
        }
    }
    return FALSE;
}

/* Unnamed in the kit: the PSPT_VectorArray counterpart of GetVectorParameter (a game addition; CommonGameEffectClasses
 * calls it): the VectorArray pointer of the instance parameter InName, or NULL (FPointer is an INT in the kit). */

// @baa 0x00b5ecb0
INT UParticleSystemComponent::sub_00b5ecb0(FName InName)
{
    if (InName == NAME_None)
    {
        return 0;
    }
    for (INT i = 0; i < InstanceParameters.Num(); i++)
    {
        FParticleSysParam& Param = InstanceParameters(i);
        if (Param.Name == InName && Param.ParamType == PSPT_VectorArray)
        {
            return Param.VectorArray.Dummy;
        }
    }
    return 0;
}

// @baa 0x00f209e0
void UParticleSystemFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UParticleSystem::StaticClass();
	bCreateNew = TRUE;
	bEditAfterNew = TRUE;
	Description = TEXT("ParticleSystem");
}

// @baa 0x00b518c0
/* Slot 0x180 (unnamed in the kit; called for actors spawned at run time): emitters that update late move their component to
 * the post-update tick group. */
void AEmitter::Spawned()
{
	Super::Spawned();
	if (ParticleSystemComponent && bPostUpdateTickGroup)
	{
		ParticleSystemComponent->SetTickGroup(TG_PostUpdateWork);
	}
}

// @baa 0x00b518f0
/* Slot 0x1d8 (unnamed in the kit): emitters that update late move their component to
 * the post-update tick group. */
void AEmitter::PostBeginPlay()
{
	Super::PostBeginPlay();
	if (ParticleSystemComponent && bPostUpdateTickGroup)
	{
		ParticleSystemComponent->SetTickGroup(TG_PostUpdateWork);
	}
}

// @baa 0x00b5c640
/* Slot 0x114 (unnamed in the kit): the distance of LOD level LODLevel, or -1 past the last one. */
FLOAT UParticleSystem::GetLODDistance(INT LODLevel)
{
	if (LODLevel >= LODDistances.Num())
	{
		return -1.f;
	}
	return LODDistances(LODLevel);
}

#line 123 "candidate.cpp"
