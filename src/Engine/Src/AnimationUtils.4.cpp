// AnimationUtils.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Callees Classes.h doesn't declare. */

// @baa 0x00bfddb0
/* The local pose of the required bones at Time, from the sequence's raw (uncompressed) keys; bones
 * without a track keep the mesh's reference pose. */
void FAnimationUtils::BuildPoseFromRawData(TArray<FBoneAtom>& OutAtoms, UAnimSequence* AnimSeq, const TArray<BYTE>& RequiredBones, USkeletalMesh* SkelMesh, FLOAT Time, UBOOL bLooping)
{
	UAnimSet* AnimSet = AnimSeq->sub_009411e0();
	const INT AnimLinkupIndex = AnimSet->GetMeshLinkupIndex(SkelMesh);
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
			(FBoneAtom&)OutAtoms(BoneIndex) = FBoneAtom(RefSkel(BoneIndex).BonePos.Orientation, RefSkel(BoneIndex).BonePos.Position, 1.f);
		}
		else
		{
			AnimSeq->sub_00917b80(OutAtoms(BoneIndex), TrackIndex, Time, bLooping, TRUE);
		}

		// the tracks store the conjugate of every rotation but the root's
		if (BoneIndex > 0)
		{
			OutAtoms(BoneIndex).Rotation.W *= -1.0f;
		}
	}
}

#line 87 "candidate.cpp"
