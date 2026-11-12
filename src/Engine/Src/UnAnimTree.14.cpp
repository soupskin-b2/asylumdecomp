// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps, with UE3's definitions (UnName.h): FName has no EName and no comparison operators. */
enum EName_ { NAME_None_ = 0 };

inline UBOOL operator==(const FName& A, EName_ N) { return A.Index == N && A.Number == 0; }

/* Callees Classes.h doesn't declare. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	UAnimSequence* sub_0091d860(FName AnimSeqName);		/* FindAnimSequence */
};

/* UAnimNodeSlot::PlayCustomAnimByDuration isn't declared in Classes.h. */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	FLOAT sub_00c7ef60(FName AnimName, FLOAT Rate, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride);	/* PlayCustomAnim */
	void PlayCustomAnimByDuration(FName AnimName, FLOAT Duration, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride);
};

// @baa 0x00c7f120
void UAnimNodeSlot_::PlayCustomAnimByDuration(FName AnimName, FLOAT Duration, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride)
{
	if (AnimName == NAME_None_ || Duration <= 0.f)
	{
		return;
	}

	UAnimSequence* AnimSeq = ((USkeletalMeshComponent_*)SkelComponent)->sub_0091d860(AnimName);
	if (AnimSeq)
	{
		// the play rate that makes the animation last Duration
		FLOAT NewRate = AnimSeq->SequenceLength / Duration;
		if (AnimSeq->RateScale > 0.f)
		{
			NewRate /= AnimSeq->RateScale;
		}

		sub_00c7ef60(AnimName, NewRate, BlendInTime, BlendOutTime, bLooping, bOverride);
	}
}
