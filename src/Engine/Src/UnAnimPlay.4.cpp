// UnAnimPlay.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00c4ff80
/* vf_188 is GetNormalizedPosition (flagged): how far through the animation the node is, from 0 to 1. */
FLOAT UAnimNodeSequence::vf_188()
{
	if (AnimSeq && AnimSeq->SequenceLength > 0.f)
	{
		return Clamp<FLOAT>(CurrentTime / AnimSeq->SequenceLength, 0.f, 1.f);
	}

	return 0.f;
}

#define KINDA_SMALL_NUMBER	(1.e-4)
/* Kit gaps: UAnimNodeSequence::IssueNotifies (00c52860) and ShouldKeepCachedResult (00c4ad70) aren't
 * declared; TArray::Reset() is the simple 'ArrayNum = 0' form in this build (flagged on 00c5e520). */
template<class T> struct TArrayReset : public TArray<T>
{
	void Reset() { this->ArrayNum = 0; }
};

struct UAnimNodeSequence_ : public UAnimNodeSequence
{
	void sub_00c52860(FLOAT DeltaTime);			/* IssueNotifies */
	UBOOL sub_00c4ad70();					/* ShouldKeepCachedResult */

	/* ClearCachedResult (00c5e220), inline here. */
	void ClearCachedResult()
	{
		if (CachedBoneAtoms.Num() > 0 && !sub_00c4ad70())
		{
			((TArrayReset<FBoneAtom>&)CachedBoneAtoms).Reset();
		}
	}
};

// @baa 0x00c5e5b0
/* vf_160 is SetPosition (flagged): jumps to NewTime, firing the notifies passed over if bFireNotifies. */
void UAnimNodeSequence::vf_160(FLOAT NewTime, UBOOL bFireNotifies)
{
	const FLOAT AnimLength = AnimSeq ? AnimSeq->SequenceLength : 0.f;
	NewTime = Clamp<FLOAT>(NewTime, 0.f, AnimLength + KINDA_SMALL_NUMBER);

	// Fire the notifies between the current and the new position.
	const FLOAT MoveDelta = NewTime - CurrentTime;
	if (bFireNotifies && MoveDelta > 0.f && !bNoNotifies && NodeTotalWeight >= NotifyWeightThreshold)
	{
		((UAnimNodeSequence_*)this)->sub_00c52860(MoveDelta);
	}

	CurrentTime = NewTime;
	if (!bFireNotifies)
	{
		PreviousTime = NewTime;
	}

	// The pose changes unless the animation is a single frame.
	if (!AnimSeq || AnimSeq->NumFrames > 1)
	{
		((UAnimNodeSequence_*)this)->ClearCachedResult();
	}
}

// @baa 0x00c4af60
/* vf_18c is FindGroupPosition (flagged): the node's position, from 0 to 1, for a relative position in its
 * synch group, shifted by SynchPosOffset and wrapped. */
FLOAT UAnimNodeSequence::vf_18c(FLOAT GroupRelativePosition)
{
	FLOAT Position = appFmod(GroupRelativePosition + SynchPosOffset, 1.f);
	if (Position < 0.f)
	{
		Position += 1.f;
	}
	return Position;
}
