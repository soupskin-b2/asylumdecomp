// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Empty */
#include "ue3/Classes.h"

/* The names here are hardcoded indices (twist and helper bones; their EName identifiers aren't known).
 * TArray<INT>::AddItem is out of line here (00545f40). */
struct FIntArray : public TArray<INT>
{
	INT sub_00545f40(const INT& Item);	/* AddItem */
};


// @baa 0x0092bd20
/* (The kit's FName is a plain aggregate, so the FName(EName) temporaries are written as { Index, 0 }.)
 * The bones a child mesh copying its parent's pose (ParentAnimComponentMode 1) has to fix up itself. */
void FParentTwistBoneFixers::Init(USkeletalMeshComponent* SkelComp)
{
	BoneIndices.Empty();

	if (SkelComp->ParentAnimComponent && SkelComp->ParentAnimComponentMode == 1)
	{
		FName BoneNames[10] =
		{
			FName(NAME_Bip01_LUpArmTwist), FName(NAME_Bip01_LUpArmTwist1), FName(NAME_Bip01_LUpArmTwist2), FName(NAME_Bip01_L_Foretwist), FName(NAME_Bip01_L_Foretwist1),
			FName(NAME_Bip01_RUpArmTwist), FName(NAME_Bip01_RUpArmTwist1), FName(NAME_Bip01_RUpArmTwist2), FName(NAME_Bip01_R_Foretwist), FName(NAME_Bip01_R_Foretwist1)
		};

		for (INT i = 0; i < 10; i++)
		{
			const INT BoneIndex = SkelComp->MatchRefBone(BoneNames[i]);
			if (BoneIndex != INDEX_NONE)
			{
				((FIntArray&)BoneIndices).sub_00545f40(BoneIndex);
			}
		}
	}
}
