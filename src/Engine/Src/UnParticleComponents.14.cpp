// UnParticleComponents.cpp: 4 functions
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
