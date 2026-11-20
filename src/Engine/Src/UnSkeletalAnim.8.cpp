// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add, Empty and Shrink */
#include "ue3/Classes.h"
#include <new.h>

/* The bone names here are hardcoded EName indices (twist and helper bones; their EName identifiers aren't
 * known). The game inlines TArray::AddItem in this big function, which VC8 only does when it's FORCEINLINE
 * (Array.h's is plain inline), so the copy here is FORCEINLINE; Shrink is Array.h's. */
template<class T> struct TArrayHelpers : public TArray<T>
{
	FORCEINLINE INT AddItem(const T& Item)
	{
		const INT Index = Add(1);
		new(GetTypedData() + Index) T(Item);
		return Index;
	}
};

/* An FName built from an EName straight into the argument slots: the original builds the by-value
 * arguments in place, which VC8 only does for a type with a user-declared copy constructor. Classes.h's FName
 * has none (giving it one changes code elsewhere), so the helper's parameters use this same-layout stand-in. */
struct FNameE
{
	INT Index;
	INT Number;
	FNameE(INT N) : Index(N), Number(0) {}
	FNameE(const FNameE& Other) : Index(Other.Index), Number(Other.Number) {}
};

/* Adds a fixer for a base/twist bone pair if the mesh has both bones (0092b980). */
void AddTwistBoneFixer(USkeletalMeshComponent* SkelComp, FNameE BaseBoneName, FNameE TwistBoneName, TArray<FTwistBoneFixer>& Fixers);

// @baa 0x0092ba00
/* Finds the arm and leg twist bones (meshes that copy a parent's pose have none of their own) and the
 * bones that follow them. */
void FTwistBoneFixers::Init(USkeletalMeshComponent* SkelComp)
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
				FName(NAME_Bip01_LUpArmTwist1), FName(NAME_Bip01_LUpArmTwist2), FName(NAME_Bip01_L_Foretwist1), FName(NAME_Bip01_LThighTwist1), FName(NAME_Bip01_LCalfTwist1),
				FName(NAME_Bip01_RUpArmTwist1), FName(NAME_Bip01_RUpArmTwist2), FName(NAME_Bip01_R_Foretwist1), FName(NAME_Bip01_RThighTwist1), FName(NAME_Bip01_RCalfTwist1)
			};

			for (INT i = 0; i < 10; i++)
			{
				const INT BoneIndex = SkelComp->MatchRefBone(BoneNames[i]);
				if (BoneIndex != INDEX_NONE)
				{
					((TArrayHelpers<BYTE>&)DependentBoneIndices).AddItem(BoneIndex);
				}
			}

			Fixers.Shrink();
			DependentBoneIndices.Shrink();
		}
	}
}
