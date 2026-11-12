// BmGame_0900000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0090eb10
void USkeletalMeshComponent::execSetEnableClothSimulation(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnable);
	P_FINISH;
	SetEnableClothSimulation(bInEnable);
}

struct USkeletalMesh_ : public USkeletalMesh
{
    USkeletalMeshSocket* sub_00951be0(FName N);
};

// @baa 0x0090ebb0
void USkeletalMeshComponent::execGetSocketByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InSocketName);
    P_FINISH;
    USkeletalMeshSocket* S = NULL;
    if (SkeletalMesh != NULL)
        S = ((USkeletalMesh_*)SkeletalMesh)->sub_00951be0(InSocketName);
    *(USkeletalMeshSocket**)Result = S;
}

/* Kit gap: USkeletalMesh::MatchRefBone and BoneIsChildOf (UnSkeletalMesh.cpp) aren't declared. */
struct USkeletalMesh__0090e9c0 : public USkeletalMesh
{
	INT sub_00976be0(FName BoneName);	/* MatchRefBone */
	UBOOL BoneIsChildOf(INT ChildBoneIndex, INT ParentBoneIndex) const;	/* 0x00d49ed0 */
};

// @baa 0x0090e9c0
void USkeletalMeshComponent::execBoneIsChildOf(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BoneName);
	P_GET_NAME(ParentBoneName);
	P_FINISH;
	*(UBOOL*)Result = FALSE;
	if (SkeletalMesh)
	{
		INT BoneIndex = ((USkeletalMesh__0090e9c0*)SkeletalMesh)->sub_00976be0(BoneName);
		if (BoneIndex == INDEX_NONE)
		{
			return;
		}
		INT ParentBoneIndex = ((USkeletalMesh__0090e9c0*)SkeletalMesh)->sub_00976be0(ParentBoneName);
		if (ParentBoneIndex == INDEX_NONE)
		{
			return;
		}
		*(UBOOL*)Result = ((USkeletalMesh__0090e9c0*)SkeletalMesh)->BoneIsChildOf(BoneIndex, ParentBoneIndex);
	}
}
