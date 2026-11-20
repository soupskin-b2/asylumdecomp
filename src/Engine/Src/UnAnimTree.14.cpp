// UnAnimTree.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c7f120
void UAnimNodeSlot::PlayCustomAnimByDuration(FName AnimName, FLOAT Duration, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride)
{
	if (AnimName == NAME_None || Duration <= 0.f)
	{
		return;
	}

	UAnimSequence* AnimSeq = ((USkeletalMeshComponent*)SkelComponent)->FindAnimSequence(AnimName);
	if (AnimSeq)
	{
		// the play rate that makes the animation last Duration
		FLOAT NewRate = AnimSeq->SequenceLength / Duration;
		if (AnimSeq->RateScale > 0.f)
		{
			NewRate /= AnimSeq->RateScale;
		}

		PlayCustomAnim(AnimName, NewRate, BlendInTime, BlendOutTime, bLooping, bOverride);
	}
}

// @baa 0x00c49770
/* UnMath.h's UnwindHeading (missing from the kit), out of line here: the angle brought back to [-PI, PI]. */
FLOAT UnwindHeading(FLOAT A)
{
	while (A > PI)
	{
		A -= ((FLOAT)PI * 2.0f);
	}

	while (A < -PI)
	{
		A += ((FLOAT)PI * 2.0f);
	}

	return A;
}

/* UAnimNode::FillWithRefPose (static) isn't declared in Classes.h. */
struct UAnimNode_ : public UAnimNode
{
	static void FillWithRefPose(TArray<FBoneAtom>& OutAtoms, const TArray<BYTE>& DesiredBones, const TArray<FMeshBone>& RefSkel);
};

// @baa 0x00c52d40
void UAnimNode_::FillWithRefPose(TArray<FBoneAtom>& OutAtoms, const TArray<BYTE>& DesiredBones, const TArray<FMeshBone>& RefSkel)
{
#line 174 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(OutAtoms.Num() == RefSkel.Num());

	// the reference pose of each bone we want
	for (INT i = 0; i < DesiredBones.Num(); i++)
	{
		const INT BoneIndex = DesiredBones(i);
		const FMeshBone& RefBone = RefSkel(BoneIndex);
		FBoneAtom& Atom = OutAtoms(BoneIndex);
		Atom.Rotation = RefBone.BonePos.Orientation;
		Atom.Translation = RefBone.BonePos.Position;
		Atom.Scale = 1.f;
	}
}

#line 90 "candidate.cpp"

// @baa 0x00c5eb80
/* The second copy of the reference pose fill in UnAnimTree.cpp (a file-level helper used by
 * UAnimNode::GetBoneAtoms 00c5ecc0; same body as the static UAnimNode::FillWithRefPose at line 174). */
void FillWithRefPose(TArray<FBoneAtom>& OutAtoms, const TArray<BYTE>& DesiredBones, const TArray<FMeshBone>& RefSkel)
{
#line 191 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(OutAtoms.Num() == RefSkel.Num());

	// the reference pose of each bone we want
	for (INT i = 0; i < DesiredBones.Num(); i++)
	{
		const INT BoneIndex = DesiredBones(i);
		const FMeshBone& RefBone = RefSkel(BoneIndex);
		FBoneAtom& Atom = OutAtoms(BoneIndex);
		Atom.Rotation = RefBone.BonePos.Orientation;
		Atom.Translation = RefBone.BonePos.Position;
		Atom.Scale = 1.f;
	}
}

#line 112 "candidate.cpp"
