// BmGame_1560000.cpp (part 4 of 4): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x0156f4e0
undefined4 UObject::sub_0156f4e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01563930
{
    INT V;
    INT A, B, C;
    C_01563930* sub_01563930(INT P);
};

// @baa 0x01563930
C_01563930* C_01563930::sub_01563930(INT P)
{
    A = 0;
    B = 0;
    C = 0;
    return this;
}

struct C_01563940
{
    INT V;
    INT A, B, C;
    C_01563940* sub_01563940(INT P);
};

// @baa 0x01563940
C_01563940* C_01563940::sub_01563940(INT P)
{
    A = 0;
    B = 0;
    C = 0;
    return this;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
	/* UE3's TArray::InsertZeroed (missing from the kit) */
	void InsertZeroed(INT Index, INT Count = 1)
	{
		this->Insert(Index, Count);
		appMemzero(this->GetTypedData() + Index, Count * sizeof(T));
	}
};

/* Kit gap: FBoneAtom's member-wise operator= (UnSkeletalMesh.h). */
struct FBoneAtom_ : public FBoneAtom
{
	FORCEINLINE FBoneAtom_& operator=(const FBoneAtom& Other)
	{
		Rotation = Other.Rotation;
		Translation = Other.Translation;
		Scale = Other.Scale;
		return *this;
	}
};

// @baa 0x0156d990
/* Slot 0x19c (unnamed in the kit): snapshots the mesh's current local bone atoms. */
void URAnimNode_AnimCapture::vf_19c(USkeletalMeshComponent* SkelComp)
{
	const INT NumAtoms = SkelComp->LocalAtoms.Num();
	if (SavedAtoms.Num() != NumAtoms)
	{
		SavedAtoms.Remove(0, SavedAtoms.Num());
		((TArrayAt_<FBoneAtom>&)SavedAtoms).InsertZeroed(0, NumAtoms);
	}
	for (INT i = 0; i < NumAtoms; i++)
	{
		((TArrayAt_<FBoneAtom_>&)SavedAtoms).At(i) = ((TArrayAt_<FBoneAtom>&)SkelComp->LocalAtoms).At(i);
	}
}

#line 100 "candidate.cpp"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt__0156d880 : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

/* Kit gap: UAnimNode::FillWithRefPose (UnAnimTree.cpp, 0x00c5eb80) isn't declared. */
struct UAnimNode_ : public UAnimNode
{
	static void FillWithRefPose(TArray<FBoneAtom>& OutAtoms, const TArray<BYTE>& DesiredBones, const TArray<FMeshBone>& RefSkel);
};

// @baa 0x0156d880
/* The reference pose, overlaid with the captured atoms while the mesh has an owner. */
void URAnimNode_AnimCapture::GetBoneAtoms(TArray<FBoneAtom>& Atoms, const TArray<BYTE>& DesiredBones, FBoneAtom& RootMotionDelta, INT& bHasRootMotion)
{
	UAnimNode_::FillWithRefPose(Atoms, DesiredBones, SkelComponent->SkeletalMesh->RefSkeleton);
	if (SkelComponent->Owner)
	{
		for (INT i = 0; i < SavedAtoms.Num() && i < Atoms.Num(); i++)
		{
			((TArrayAt__0156d880<FBoneAtom_>&)Atoms).At(i) = ((TArrayAt__0156d880<FBoneAtom>&)SavedAtoms).At(i);
		}
	}
}

#line 135 "candidate.cpp"
