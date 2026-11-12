// Engine_0900000.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void sub_00a14870(INT);
};

// @baa 0x0090f0a0
void USkeletalMeshComponent::execUnHideBone(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BoneIndex);
	P_FINISH;
	((USkeletalMeshComponent_*)this)->sub_00a14870(BoneIndex);
}

struct USkeletalMeshComponent__0090f100 : public USkeletalMeshComponent
{
	UBOOL sub_00a14920(INT);
};

// @baa 0x0090f100
void USkeletalMeshComponent::execIsBoneHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BoneIndex);
	P_FINISH;
	*(UBOOL*)Result = ((USkeletalMeshComponent__0090f100*)this)->sub_00a14920(BoneIndex);
}

struct USkeletalMeshComponent__0090ed60 : public USkeletalMeshComponent
{
	void sub_00765d00();
};

// @baa 0x0090ed60
void USkeletalMeshComponent::execSetForceRefPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewForceRefPose);
	P_FINISH;
	bForceRefpose = bNewForceRefPose;
	((USkeletalMeshComponent__0090ed60*)this)->sub_00765d00();
}

extern FName g_026c45a4;
	/* AttachCloneToActor */
struct URB_ForceComponent_ : public URB_ForceComponent
{
	void eventAttachCloneToActor(class AActor* NewOwner);
};

// @baa 0x0090d370
/* RB_ForceComponent.AttachCloneToActor script event: the generated glue, out of line here. */
void URB_ForceComponent_::eventAttachCloneToActor(class AActor* NewOwner)
{
	struct RB_ForceComponent_eventAttachCloneToActor_Parms
	{
		class AActor* NewOwner;
	} Parms;
	Parms.NewOwner = NewOwner;
	ProcessEvent(FindFunctionChecked(g_026c45a4), &Parms);
}

/* USkeletalMeshComponent::GetSocketBoneName (0x90ec40) isn't declared in the kit. */
struct USkeletalMeshComponent__0090ecd0 : public USkeletalMeshComponent
{
    FName GetSocketBoneName(FName InSocketName);
};

// @baa 0x0090ecd0
void USkeletalMeshComponent::execGetSocketBoneName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InSocketName);
    P_FINISH;
    *(FName*)Result = ((USkeletalMeshComponent__0090ecd0*)this)->GetSocketBoneName(InSocketName);
}

/* USkeletalMeshComponent::HideBone (0xa1c8f0) isn't declared in the kit. */
struct USkeletalMeshComponent__0090f000 : public USkeletalMeshComponent
{
    void HideBone(INT BoneIndex, UBOOL bTermBodiesBelow);
};

// @baa 0x0090f000
void USkeletalMeshComponent::execHideBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(BoneIndex);
    P_GET_UBOOL(bTermBodiesBelow);
    P_FINISH;
    ((USkeletalMeshComponent__0090f000*)this)->HideBone(BoneIndex, bTermBodiesBelow);
}

// @baa 0x0090ede0
void USkeletalMeshComponent::execFindAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InNodeName);
	P_FINISH;
	*(UAnimNode**)Result = Animations ? Animations->FindAnimNode(InNodeName) : NULL;
}

/* Kit gap: UPhysicsAsset::FindConstraintIndex (UnPhysAsset.cpp) isn't declared. */
struct UPhysicsAsset_ : public UPhysicsAsset
{
	INT FindConstraintIndex(FName ConstraintName);	/* 0x00a09910 */
};

// @baa 0x0090ee70
void USkeletalMeshComponent::execFindConstraintIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ConstraintName);
	P_FINISH;
	*(INT*)Result = PhysicsAsset ? ((UPhysicsAsset_*)PhysicsAsset)->FindConstraintIndex(ConstraintName) : INDEX_NONE;
}

/* Kit gap: UPhysicsAsset::FindConstraintBoneName (UnPhysAsset.cpp) isn't declared. */
struct UPhysicsAsset__0090ef00 : public UPhysicsAsset
{
	FName FindConstraintBoneName(INT ConstraintIndex);	/* 0x00a099c0 */
};

// @baa 0x0090ef00
void USkeletalMeshComponent::execFindConstraintBoneName(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ConstraintIndex);
	P_FINISH;
	*(FName*)Result = PhysicsAsset ? ((UPhysicsAsset__0090ef00*)PhysicsAsset)->FindConstraintBoneName(ConstraintIndex) : FName(NAME_None);
}

extern FName g_026c4a10;
	/* ENGINE_GetFaceFXAudioComponent */
struct AActor_ : public AActor
{
	class UAudioComponent* eventGetFaceFXAudioComponent();
};

// @baa 0x0090ae80
/* The script event's generated glue (EngineClasses.h), out of line here. */
class UAudioComponent* AActor_::eventGetFaceFXAudioComponent()
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
struct USkeletalMeshComponent__0090b470 : public USkeletalMeshComponent
{
	void eventPlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData);
};

// @baa 0x0090b470
/* The script event's generated glue (EngineClasses.h), out of line here. */
void USkeletalMeshComponent__0090b470::eventPlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	struct SkeletalMeshComponent_eventPlayParticleEffect_Parms
	{
		class UAnimNotify_PlayParticleEffect* AnimNotifyData;
	} Parms;
	Parms.AnimNotifyData = AnimNotifyData;
	ProcessEvent(FindFunctionChecked(g_026c3ea8), &Parms);
}
