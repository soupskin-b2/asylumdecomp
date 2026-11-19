// Engine_0900000.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0090f0a0
void USkeletalMeshComponent::execUnHideBone(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BoneIndex);
	P_FINISH;
	this->UnHideBone(BoneIndex);
}

// @baa 0x0090f100
void USkeletalMeshComponent::execIsBoneHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BoneIndex);
	P_FINISH;
	*(UBOOL*)Result = this->IsBoneHidden(BoneIndex);
}

// @baa 0x0090ed60
void USkeletalMeshComponent::execSetForceRefPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewForceRefPose);
	P_FINISH;
	bForceRefpose = bNewForceRefPose;
	((USkeletalMeshComponent*)this)->BeginDeferredReattach();
}

extern FName g_026c45a4;
	/* AttachCloneToActor */

// @baa 0x0090d370
/* RB_ForceComponent.AttachCloneToActor script event: the generated glue, out of line here. */
void URB_ForceComponent::eventAttachCloneToActor(class AActor* NewOwner)
{
	struct RB_ForceComponent_eventAttachCloneToActor_Parms
	{
		class AActor* NewOwner;
	} Parms;
	Parms.NewOwner = NewOwner;
	ProcessEvent(FindFunctionChecked(g_026c45a4), &Parms);
}

// @baa 0x0090ecd0
void USkeletalMeshComponent::execGetSocketBoneName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InSocketName);
    P_FINISH;
    *(FName*)Result = this->GetSocketBoneName(InSocketName);
}

// @baa 0x0090f000
void USkeletalMeshComponent::execHideBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(BoneIndex);
    P_GET_UBOOL(bTermBodiesBelow);
    P_FINISH;
    this->HideBone(BoneIndex, bTermBodiesBelow);
}

// @baa 0x0090ede0
void USkeletalMeshComponent::execFindAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InNodeName);
	P_FINISH;
	*(UAnimNode**)Result = Animations ? Animations->FindAnimNode(InNodeName) : NULL;
}

// @baa 0x0090ee70
void USkeletalMeshComponent::execFindConstraintIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ConstraintName);
	P_FINISH;
	*(INT*)Result = PhysicsAsset ? PhysicsAsset->FindConstraintIndex(ConstraintName) : INDEX_NONE;
}

// @baa 0x0090ef00
void USkeletalMeshComponent::execFindConstraintBoneName(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ConstraintIndex);
	P_FINISH;
	*(FName*)Result = PhysicsAsset ? PhysicsAsset->FindConstraintBoneName(ConstraintIndex) : FName(NAME_None);
}

extern FName g_026c4a10;
	/* ENGINE_GetFaceFXAudioComponent */

// @baa 0x0090ae80
/* The script event's generated glue (EngineClasses.h), out of line here. */
class UAudioComponent* AActor::eventGetFaceFXAudioComponent()
{
	struct Actor_eventGetFaceFXAudioComponent_Parms
	{
		class UAudioComponent* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026c4a10), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c3ea8;
	/* ENGINE_PlayParticleEffect */

// @baa 0x0090b470
/* The script event's generated glue (EngineClasses.h), out of line here. */
void USkeletalMeshComponent::eventPlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	struct SkeletalMeshComponent_eventPlayParticleEffect_Parms
	{
		class UAnimNotify_PlayParticleEffect* AnimNotifyData;
	} Parms;
	Parms.AnimNotifyData = AnimNotifyData;
	ProcessEvent(FindFunctionChecked(g_026c3ea8), &Parms);
}
