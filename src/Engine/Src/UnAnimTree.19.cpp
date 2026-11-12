// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap, with UE3's definition (UnName.h): FName has no comparison operators. */
inline UBOOL operator==(const FName& A, EName N) { return A.Index == N && A.Number == 0; }

/* Callees Classes.h doesn't declare. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	UAnimSequence* sub_0091d860(FName AnimSeqName);		/* FindAnimSequence */
};

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

	UAnimSequence* AnimSeq = ((USkeletalMeshComponent_*)SkelComponent)->sub_0091d860(AnimName);
	if (AnimSeq)
	{
		// the play rate that makes the animation last Duration
		const FLOAT NewRate = AnimSeq->SequenceLength / Duration;
		sub_00c7c940(AnimName, NewRate, BlendInTime, BlendOutTime, bLooping, bOverride);
	}
}
