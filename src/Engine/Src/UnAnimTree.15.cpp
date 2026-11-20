// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add's reallocation */
#include "ue3/Classes.h"
#include <new.h>

/* TArray<UAnimNodeSequence*>::AddUniqueItem (UE3 Array.h); the kit's TArray has neither AddItem nor
 * AddUniqueItem, so this instance is written on a helper subclass. */
struct FAnimSeqArray : public TArray<UAnimNodeSequence*>
{
	INT AddItem(UAnimNodeSequence* const& Item)
	{
		const INT Index = Add(1);
		new(GetTypedData() + Index) UAnimNodeSequence*(Item);
		return Index;
	}
	INT AddUniqueItem(UAnimNodeSequence* const& Item);
};

// @baa 0x00c50850
INT FAnimSeqArray::AddUniqueItem(UAnimNodeSequence* const& Item)
{
	for (INT Index = 0; Index < ArrayNum; Index++)
	{
		if ((*this)(Index) == Item)
		{
			return Index;
		}
	}
	return AddItem(Item);
}

/* TArray<USkelControlBase*>::AddUniqueItem (UE3 Array.h); the kit's TArray has neither AddItem nor
 * AddUniqueItem, so this instance is written on a helper subclass. */
struct FSkelControlArray : public TArray<USkelControlBase*>
{
	INT AddItem(USkelControlBase* const& Item)
	{
		const INT Index = Add(1);
		new(GetTypedData() + Index) USkelControlBase*(Item);
		return Index;
	}
	INT AddUniqueItem(USkelControlBase* const& Item);
};

// @baa 0x00c50b30
INT FSkelControlArray::AddUniqueItem(USkelControlBase* const& Item)
{
	for (INT Index = 0; Index < ArrayNum; Index++)
	{
		if ((*this)(Index) == Item)
		{
			return Index;
		}
	}
	return AddItem(Item);
}

/* Callees Classes.h doesn't declare. */
struct FIntArray : public TArray<INT>
{
	INT sub_00540c80(INT Count);			/* Add, out of line here */
};

// @baa 0x00c62170
void UAnimNodeAimOffset::UpdateListOfRequiredBones()
{
	RequiredBones.Reset();
	BoneToAimCpnt.Reset();

	FAimOffsetProfile* P = GetCurrentProfile();
	if (!P || !SkelComponent)
	{
		return;
	}

	const USkeletalMesh* SkelMesh = SkelComponent->SkeletalMesh;
	if (!SkelMesh)
	{
		return;
	}

	// which aim component (if any) moves each bone
	const INT NumBones = SkelMesh->RefSkeleton.Num();
	((FIntArray&)BoneToAimCpnt).sub_00540c80(NumBones);
	for (INT i = 0; i < NumBones; i++)
	{
		INT AimCompIndex = INDEX_NONE;
		for (INT j = 0; j < P->AimComponents.Num(); j++)
		{
			if (P->AimComponents(j).BoneName == SkelMesh->RefSkeleton(i).Name)
			{
				AimCompIndex = j;
				break;
			}
		}

		BoneToAimCpnt(i) = AimCompIndex;
		if (AimCompIndex != INDEX_NONE)
		{
			RequiredBones.AddItem((BYTE)i);
		}
	}

	// the parents of the bones we change must be there too
	UAnimNode::sub_00c52e80(RequiredBones, SkelComponent->SkeletalMesh);
}
