// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap, with UE3's definition (UnName.h): FName has no comparison operators. */
inline UBOOL operator==(const FName& A, EName N) { return A.Index == N && A.Number == 0; }

/* UAnimNodePlayCustomAnim::PlayAnimByDuration isn't declared in Classes.h. */
struct UAnimNodePlayCustomAnim_ : public UAnimNodePlayCustomAnim
{
	FLOAT sub_00c7c940(FName AnimName, FLOAT Rate, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride);	/* PlayAnim */
	void PlayAnimByDuration(FName AnimName, FLOAT Duration, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride);
};

// @baa 0x00c7ca70
void UAnimNodePlayCustomAnim_::PlayAnimByDuration(FName AnimName, FLOAT Duration, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride)
{
	if (AnimName == NAME_None || Duration <= 0.f)
	{
		return;
	}

	UAnimSequence* AnimSeq = ((USkeletalMeshComponent*)SkelComponent)->FindAnimSequence(AnimName);
	if (AnimSeq)
	{
		// the play rate that makes the animation last Duration
		const FLOAT NewRate = AnimSeq->SequenceLength / Duration;
		sub_00c7c940(AnimName, NewRate, BlendInTime, BlendOutTime, bLooping, bOverride);
	}
}

/* UAnimNodeAimOffset::GetCurrentProfile isn't declared in Classes.h. */

// @baa 0x00c55cc0
FAimOffsetProfile* UAnimNodeAimOffset::GetCurrentProfile()
{
	FAimOffsetProfile* Profile = NULL;

	// a node made from a template uses the template's profiles
	if (TemplateNode)
	{
		if (CurrentProfileIndex < TemplateNode->Profiles.Num())
		{
			Profile = &TemplateNode->Profiles(CurrentProfileIndex);
		}
	}
	else if (CurrentProfileIndex < Profiles.Num())
	{
		Profile = &Profiles(CurrentProfileIndex);
	}

	return Profile;
}

#line 86 "candidate.cpp"

struct FQuat_ : public FQuat
{
	static const FQuat Identity;			/* 025d6800 */
};

/* TArray<FAimComponent>::Insert is out of line (0x00c4bfa0). */
struct FAimComponentArray : public TArray<FAimComponent>
{
	void InsertZeroed(INT Index, INT Count)
	{
		Insert(Index, Count);
		appMemzero((BYTE*)GetTypedData() + Index * sizeof(FAimComponent), Count * sizeof(FAimComponent));
	}
};

/* Callees Classes.h doesn't declare. */

/* UAnimNodeAimOffset::GetComponentIdxFromBoneIdx isn't declared in Classes.h. */

// @baa 0x00c623d0
INT UAnimNodeAimOffset::GetComponentIdxFromBoneIdx(INT BoneIndex, UBOOL bCreateIfNotFound)
{
	if (BoneIndex == INDEX_NONE)
	{
		return INDEX_NONE;
	}

	FAimOffsetProfile* P = GetCurrentProfile();
	if (!P)
	{
		return INDEX_NONE;
	}

	// already set up
	if (BoneIndex < BoneToAimCpnt.Num() && BoneToAimCpnt(BoneIndex) != INDEX_NONE)
	{
		return BoneToAimCpnt(BoneIndex);
	}

	if (bCreateIfNotFound)
	{
		const FName BoneName = SkelComponent->SkeletalMesh->RefSkeleton(BoneIndex).Name;
		if (BoneName == NAME_None)
		{
			return INDEX_NONE;
		}

		// the components are kept in bone order: insert before the first bone below this one
		INT InsertIndex = INDEX_NONE;
		for (INT i = 0; i < P->AimComponents.Num() && InsertIndex == INDEX_NONE; i++)
		{
			const INT AimBoneIndex = SkelComponent->SkeletalMesh->MatchRefBone(P->AimComponents(i).BoneName);
			if (AimBoneIndex != INDEX_NONE && AimBoneIndex > BoneIndex)
			{
				InsertIndex = i;
			}
		}

		if (InsertIndex == INDEX_NONE)
		{
			InsertIndex = P->AimComponents.Num();
		}

		P->AimComponents.InsertZeroed(InsertIndex, 1);
		P->AimComponents(InsertIndex).BoneName = BoneName;

		// no rotation in any direction yet
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_LEFTUP, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_CENTERUP, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_RIGHTUP, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_LEFTCENTER, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_CENTERCENTER, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_RIGHTCENTER, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_LEFTDOWN, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_CENTERDOWN, FQuat_::Identity);
		SetBoneAimQuaternion(InsertIndex, ANIMAIM_RIGHTDOWN, FQuat_::Identity);

		UpdateListOfRequiredBones();
		return InsertIndex;
	}

	return INDEX_NONE;
}
