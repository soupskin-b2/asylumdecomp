// Engine_0900000.cpp: 2 functions
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
