// Engine_0900000.cpp: 7 functions
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
