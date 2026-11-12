// UnParticleComponents.cpp: 19 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AEmitter_ : public AEmitter
{
    /* SetTemplate (UnParticleComponents.cpp); Classes.h doesn't declare it. */
    void sub_00b65bf0(UParticleSystem* NewTemplate, UBOOL bDestroyOnFinish);
};

// @baa 0x00b65c90
void AEmitter::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UParticleSystem, NewTemplate);
    P_GET_UBOOL_OPTX(bDestroyOnFinish, FALSE);
    P_FINISH;
    ((AEmitter_*)this)->sub_00b65bf0(NewTemplate, bDestroyOnFinish);
}

// @baa 0x00c9e1a0
void UParticleSystemComponent::execGetActorParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_OBJECT_REF(AActor, OutActor);
    P_FINISH;
    *(UBOOL*)Result = GetActorParameter(InName, OutActor);
}

// @baa 0x00c9e250
void UParticleSystemComponent::execGetMaterialParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_OBJECT_REF(UMaterialInterface, OutMaterial);
    P_FINISH;
    *(UBOOL*)Result = GetMaterialParameter(InName, OutMaterial);
}

// @baa 0x00c9e0e0
void UParticleSystemComponent::execGetColorParameter(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InName);
	P_GET_STRUCT_REF(FColor, OutColor);
	P_FINISH;
	*(UBOOL*)Result = GetColorParameter(InName, OutColor);
}

// @baa 0x00c9cfe0
void UParticleSystemComponent::execSetKillOnDeactivate(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_UBOOL(bKill);
	P_FINISH;
	SetKillOnDeactivate(EmitterIndex, bKill);
}

// @baa 0x00c9d080
void UParticleSystemComponent::execSetKillOnCompleted(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_UBOOL(bKill);
	P_FINISH;
	SetKillOnCompleted(EmitterIndex, bKill);
}

// @baa 0x00c9d260
void UParticleSystemComponent::execSetBeamTessellationFactor(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_FLOAT(NewFactor);
	P_FINISH;
	SetBeamTessellationFactor(EmitterIndex, NewFactor);
}

// @baa 0x00c9d3a0
void UParticleSystemComponent::execSetBeamDistance(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_FLOAT(Distance);
	P_FINISH;
	SetBeamDistance(EmitterIndex, Distance);
}

// @baa 0x00c9df60
void UParticleSystemComponent::execGetFloatParameter(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InName);
	P_GET_FLOAT_REF(OutFloat);
	P_FINISH;
	*(UBOOL*)Result = GetFloatParameter(InName, OutFloat);
}

// @baa 0x00c9d1d0
/* Script native SetBeamType(int EmitterIndex, int NewMethod): forwards to the virtual. */
void UParticleSystemComponent::execSetBeamType(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(EmitterIndex);
    P_GET_INT(NewMethod);
    P_FINISH;
    SetBeamType(EmitterIndex, NewMethod);
}

// @baa 0x00c9cce0
void UParticleSystem::execSetLODDistance(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(LODLevel);
	P_GET_FLOAT(InDistance);
	P_FINISH;
	*(UBOOL*)Result = SetLODDistance(LODLevel, InDistance);
}

// @baa 0x00c9d510
void UParticleSystemComponent::execSetBeamSourceActor(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_OBJECT(AActor, NewActor);
	P_FINISH;
	SetBeamSourceActor(EmitterIndex, NewActor);
}

// @baa 0x00c9d670
void UParticleSystemComponent::execSetBeamSourceStrength(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_FLOAT(NewStrength);
	P_GET_INT(SourceIndex);
	P_FINISH;
	SetBeamSourceStrength(EmitterIndex, NewStrength, SourceIndex);
}

// @baa 0x00c9d440
void UParticleSystemComponent::execSetBeamSourcePoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_VECTOR(NewPoint);
	P_GET_INT(SourceIndex);
	P_FINISH;
	SetBeamSourcePoint(EmitterIndex, NewPoint, SourceIndex);
}

// @baa 0x00c9d810
void UParticleSystemComponent::execSetBeamTargetActor(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_OBJECT(AActor, NewActor);
	P_FINISH;
	SetBeamTargetActor(EmitterIndex, NewActor);
}

// @baa 0x00c9d970
void UParticleSystemComponent::execSetBeamTargetStrength(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_FLOAT(NewStrength);
	P_GET_INT(SourceIndex);
	P_FINISH;
	SetBeamTargetStrength(EmitterIndex, NewStrength, SourceIndex);
}

// @baa 0x00c9d5a0
void UParticleSystemComponent::execSetBeamSourceTangent(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_VECTOR(NewPoint);
	P_GET_INT(SourceIndex);
	P_FINISH;
	SetBeamSourceTangent(EmitterIndex, NewPoint, SourceIndex);
}

// @baa 0x00c9d740
void UParticleSystemComponent::execSetBeamTargetPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_VECTOR(NewPoint);
	P_GET_INT(SourceIndex);
	P_FINISH;
	SetBeamTargetPoint(EmitterIndex, NewPoint, SourceIndex);
}

// @baa 0x00c9d8a0
void UParticleSystemComponent::execSetBeamTargetTangent(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_GET_VECTOR(NewPoint);
	P_GET_INT(SourceIndex);
	P_FINISH;
	SetBeamTargetTangent(EmitterIndex, NewPoint, SourceIndex);
}
