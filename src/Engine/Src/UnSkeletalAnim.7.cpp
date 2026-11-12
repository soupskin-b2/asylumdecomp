// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Empty */
#include "ue3/Classes.h"

/* Kit gaps (UnName.h): FName has no constructor from a hardcoded name (EName), nor operator!=. The names
 * here are hardcoded indices (twist and helper bones; their EName identifiers aren't known).
 * TArray<INT>::AddItem is out of line here (00545f40). */
struct FName_ : public FName
{
	FName_(INT N) { Index = N; Number = 0; }
};

inline UBOOL operator!=(const FName& A, const FName& B) { return A.Index != B.Index || A.Number != B.Number; }

#define NAME_None	FName_(0)
struct FIntArray : public TArray<INT>
{
	INT sub_00545f40(const INT& Item);	/* AddItem */
};

struct USkeletalMesh_ : public USkeletalMesh
{
	INT sub_00976be0(FName BoneName);	/* MatchRefBone */
};

/* USkeletalMeshComponent::MatchRefBone (UnSkeletalMesh.h), inline. */
inline INT MatchRefBone(USkeletalMeshComponent* SkelComp, FName BoneName)
{
	INT BoneIndex = INDEX_NONE;
	if (BoneName != NAME_None && SkelComp->SkeletalMesh)
	{
		BoneIndex = ((USkeletalMesh_*)SkelComp->SkeletalMesh)->sub_00976be0(BoneName);
	}
	return BoneIndex;
}

struct FParentTwistBoneFixers_ : public FParentTwistBoneFixers
{
	void Init(USkeletalMeshComponent* SkelComp);
};

// @baa 0x0092bd20
/* (The kit's FName is a plain aggregate, so the FName(EName) temporaries are written as { Index, 0 }.)
 * The bones a child mesh copying its parent's pose (ParentAnimComponentMode 1) has to fix up itself. */
void FParentTwistBoneFixers_::Init(USkeletalMeshComponent* SkelComp)
{
	BoneIndices.Empty();

	if (SkelComp->ParentAnimComponent && SkelComp->ParentAnimComponentMode == 1)
	{
		FName BoneNames[10] =
		{
			FName((EName)0x623), FName((EName)0x624), FName((EName)0x625), FName((EName)0x627), FName((EName)0x628),
			FName((EName)0x637), FName((EName)0x638), FName((EName)0x639), FName((EName)0x63b), FName((EName)0x63c)
		};

		for (INT i = 0; i < 10; i++)
		{
			const INT BoneIndex = MatchRefBone(SkelComp, BoneNames[i]);
			if (BoneIndex != INDEX_NONE)
			{
				((FIntArray&)BoneIndices).sub_00545f40(BoneIndex);
			}
		}
	}
}
