// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add, Empty and Shrink */
#include "ue3/Classes.h"
#include <new.h>

/* Kit gaps: FName has no operator!= (UnName.h), and Core.h's EName lacks the names used here, hardcoded
 * indices (twist and helper bones; their EName identifiers aren't known). TArray has no AddItem or
 * Shrink (Array.h). The game inlines AddItem here; VC8 only does so in this big function when it's
 * FORCEINLINE (flagged for the header). */
inline UBOOL operator!=(const FName& A, const FName& B) { return A.Index != B.Index || A.Number != B.Number; }

template<class T> struct TArrayHelpers : public TArray<T>
{
	FORCEINLINE INT AddItem(const T& Item)
	{
		const INT Index = Add(1);
		new(GetTypedData() + Index) T(Item);
		return Index;
	}
	void Shrink()
	{
		if (ArrayMax != ArrayNum)
		{
			ArrayMax = ArrayNum;
			AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(T));
		}
	}
};

struct USkeletalMesh_ : public USkeletalMesh
{
	INT sub_00976be0(FName BoneName);	/* MatchRefBone */
};

/* USkeletalMeshComponent::MatchRefBone (UnSkeletalMesh.h), inline. */
inline INT MatchRefBone(USkeletalMeshComponent* SkelComp, FName BoneName)
{
	INT BoneIndex = INDEX_NONE;
	const FName None(NAME_None);
	if (BoneName != None && SkelComp->SkeletalMesh)
	{
		BoneIndex = ((USkeletalMesh_*)SkelComp->SkeletalMesh)->sub_00976be0(BoneName);
	}
	return BoneIndex;
}

/* UE3's FName has a constructor from a hardcoded name (FName(EName N) : Index(N), Number(0)), which this
 * build calls straight into the argument slots; the kit's FName is an aggregate, so the helper's
 * parameters use this stand-in (same layout). */
struct FNameE
{
	INT Index;
	INT Number;
	FNameE(INT N) : Index(N), Number(0) {}
	FNameE(const FNameE& Other) : Index(Other.Index), Number(Other.Number) {}
};

/* Adds a fixer for a base/twist bone pair if the mesh has both bones (0092b980). */
void AddTwistBoneFixer(USkeletalMeshComponent* SkelComp, FNameE BaseBoneName, FNameE TwistBoneName, TArray<FTwistBoneFixer>& Fixers);
struct FTwistBoneFixers_ : public FTwistBoneFixers
{
	void Init(USkeletalMeshComponent* SkelComp);
};

// @baa 0x0092ba00
/* Finds the arm and leg twist bones (meshes that copy a parent's pose have none of their own) and the
 * bones that follow them. */
void FTwistBoneFixers_::Init(USkeletalMeshComponent* SkelComp)
{
	Ok = FALSE;
	Fixers.Empty();
	DependentBoneIndices.Empty();

	if (!SkelComp->ParentAnimComponent)
	{
		AddTwistBoneFixer(SkelComp, FNameE(0x622), FNameE(0x623), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x626), FNameE(0x627), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x64c), FNameE(0x64d), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x649), FNameE(0x64a), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x636), FNameE(0x637), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x63a), FNameE(0x63b), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x654), FNameE(0x655), Fixers);
		AddTwistBoneFixer(SkelComp, FNameE(0x651), FNameE(0x652), Fixers);

		Ok = Fixers.Num() > 0;

		if (Ok)
		{
			FName BoneNames[10] =
			{
				FName((EName)0x624), FName((EName)0x625), FName((EName)0x628), FName((EName)0x64b), FName((EName)0x64e),
				FName((EName)0x638), FName((EName)0x639), FName((EName)0x63c), FName((EName)0x653), FName((EName)0x656)
			};

			for (INT i = 0; i < 10; i++)
			{
				const INT BoneIndex = MatchRefBone(SkelComp, BoneNames[i]);
				if (BoneIndex != INDEX_NONE)
				{
					((TArrayHelpers<BYTE>&)DependentBoneIndices).AddItem(BoneIndex);
				}
			}

			((TArrayHelpers<FTwistBoneFixer>&)Fixers).Shrink();
			((TArrayHelpers<BYTE>&)DependentBoneIndices).Shrink();
		}
	}
}
