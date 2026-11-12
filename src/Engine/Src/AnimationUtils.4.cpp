// AnimationUtils.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FBoneAtom's constructor and memberwise operator= (UnSkeletalMesh.h), not in the kit. */
struct FBoneAtom_
{
	FQuat Rotation;
	FVector Translation;
	FLOAT Scale;

	FBoneAtom_(const FQuat& InRotation, const FVector& InTranslation, FLOAT InScale)
	:	Rotation(InRotation)
	,	Translation(InTranslation)
	,	Scale(InScale)
	{}

	FBoneAtom_& operator=(const FBoneAtom_& Other)
	{
		Rotation = Other.Rotation;
		Translation = Other.Translation;
		Scale = Other.Scale;
		return *this;
	}
};

/* Callees Classes.h doesn't declare. */


/* FAnimationUtils (AnimationUtils.h) isn't in the kit. */
class FAnimationUtils
{
public:
	static void BuildPoseFromRawData(TArray<FBoneAtom>& OutAtoms, UAnimSequence* AnimSeq, const TArray<BYTE>& RequiredBones, USkeletalMesh* SkelMesh, FLOAT Time, UBOOL bLooping);
};

// @baa 0x00bfddb0
/* The local pose of the required bones at Time, from the sequence's raw (uncompressed) keys; bones
 * without a track keep the mesh's reference pose. */
void FAnimationUtils::BuildPoseFromRawData(TArray<FBoneAtom>& OutAtoms, UAnimSequence* AnimSeq, const TArray<BYTE>& RequiredBones, USkeletalMesh* SkelMesh, FLOAT Time, UBOOL bLooping)
{
	UAnimSet* AnimSet = ((UAnimSequence*)AnimSeq)->sub_009411e0();
	const INT AnimLinkupIndex = ((UAnimSet*)AnimSet)->sub_0092b080(SkelMesh);
#line 192 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationUtils.cpp"
	check(AnimLinkupIndex != INDEX_NONE);
	check(AnimLinkupIndex < AnimSet->LinkupCache.Num());

	const FAnimSetMeshLinkup& AnimLinkup = AnimSet->LinkupCache(AnimLinkupIndex);
	const TArray<FMeshBone>& RefSkel = SkelMesh->RefSkeleton;
#line 197 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationUtils.cpp"
	check(AnimLinkup.BoneToTrackTable.Num() == RefSkel.Num());

	for (INT i = 0; i < RequiredBones.Num(); i++)
	{
		const INT BoneIndex = RequiredBones(i);
		const INT TrackIndex = AnimLinkup.BoneToTrackTable(BoneIndex);

		if (TrackIndex == INDEX_NONE)
		{
			// no track: the reference pose
			(FBoneAtom_&)OutAtoms(BoneIndex) = FBoneAtom_(RefSkel(BoneIndex).Orientation, RefSkel(BoneIndex).Position, 1.f);
		}
		else
		{
			((UAnimSequence*)AnimSeq)->sub_00917b80(OutAtoms(BoneIndex), TrackIndex, Time, bLooping, TRUE);
		}

		// the tracks store the conjugate of every rotation but the root's
		if (BoneIndex > 0)
		{
			OutAtoms(BoneIndex).Rotation.W *= -1.0f;
		}
	}
}

#line 87 "candidate.cpp"
