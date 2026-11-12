// UnAnimPlay.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00c4ff80
/* vf_188 is GetNormalizedPosition (flagged): how far through the animation the node is, from 0 to 1. */
FLOAT UAnimNodeSequence::GetNormalizedPosition()
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
void UAnimNodeSequence::SetPosition(FLOAT NewTime, UBOOL bFireNotifies)
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
FLOAT UAnimNodeSequence::FindGroupPosition(FLOAT GroupRelativePosition)
{
	FLOAT Position = appFmod(GroupRelativePosition + SynchPosOffset, 1.f);
	if (Position < 0.f)
	{
		Position += 1.f;
	}
	return Position;
}

/* Kit gaps: FName's operator!= (out of line here, 0053f4c0) and two UAnimNodeSequence methods
 * (00c4ad70, which says whether the cached bone atoms are still wanted, and IssueNotifies 00c52860) aren't declared. */
struct FName_ : public FName
{
	UBOOL operator!=(const FName& Other) const;
};

struct UAnimNodeSequence__00c5e2f0 : public UAnimNodeSequence
{
	UBOOL CanUseCachedBoneAtoms();
	void IssueNotifies(FLOAT DeltaTime);
};

/* Whether the cached bone atoms can be kept: only for an unrendered mesh, a node that skips ticking at zero
 * weight, and no root motion extraction. */
UBOOL UAnimNodeSequence__00c5e2f0::CanUseCachedBoneAtoms()
{
	if (!SkelComponent->bRecentlyRendered && bSkipTickWhenZeroWeight)
	{
		const UBOOL bExtractsRootTranslation = RootBoneOption[0] || RootBoneOption[1] || RootBoneOption[2];
		const UBOOL bExtractsRootRotation = RootRotationOption[0] || RootRotationOption[1] || RootRotationOption[2];
		if (!bExtractsRootTranslation && !bExtractsRootRotation)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x00c5e2f0
/* AdvanceBy: moves the play position by MoveDelta, firing notifies on the way, and handles reaching either end
 * (wrap when looping, else stop and call OnAnimEnd with the time played and the excess). */
void UAnimNodeSequence::sub_00c5e2f0(FLOAT MoveDelta, FLOAT DeltaSeconds, UBOOL bFireNotifies)
{
	if (AnimSeq == NULL || MoveDelta == 0.f || DeltaSeconds == 0.f)
	{
		return;
	}

	if (AnimSeq->NumFrames > 1 && CachedBoneAtoms.Num() > 0 && !((UAnimNodeSequence__00c5e2f0*)this)->CanUseCachedBoneAtoms())
	{
		CachedBoneAtoms.Reset();
	}

	if (bFireNotifies && MoveDelta > 0.f)
	{
		const UBOOL bIsSynchronized = ((const FName_&)SynchGroupName) != FName(NAME_None) && bRelevant;
		const UBOOL bAboveWeightThreshold = NodeTotalWeight > NotifyWeightThreshold;
		const UBOOL bShouldIssueNotifies = !bNoNotifies && (bIsSynchronized || bAboveWeightThreshold);
		if (bShouldIssueNotifies)
		{
			((UAnimNodeSequence__00c5e2f0*)this)->IssueNotifies(MoveDelta);

			// A notify may have changed the animation.
			if (AnimSeq == NULL)
			{
				return;
			}
		}
	}

	CurrentTime += MoveDelta;
	const FLOAT AnimLength = AnimSeq->SequenceLength;

	if (CurrentTime > AnimLength)
	{
		if (bLooping)
		{
			CurrentTime = appFmod(CurrentTime, AnimLength);
		}
		else
		{
			const FLOAT PlayRate = MoveDelta / DeltaSeconds;
			const FLOAT ExcessTime = (CurrentTime - AnimSeq->SequenceLength) / PlayRate;
			CurrentTime = AnimSeq->SequenceLength;
			StopAnim();
			OnAnimEnd(DeltaSeconds - ExcessTime, ExcessTime);
		}
	}
	else if (CurrentTime < 0.f)
	{
		if (bLooping)
		{
			CurrentTime = appFmod(CurrentTime, AnimLength);
			if (CurrentTime < 0.f)
			{
				CurrentTime += AnimSeq->SequenceLength;
			}
		}
		else
		{
			const FLOAT ExcessTime = CurrentTime / appAbs(MoveDelta / DeltaSeconds);
			CurrentTime = 0.f;
			StopAnim();
			OnAnimEnd(DeltaSeconds + ExcessTime, ExcessTime);
		}
	}
}

// @baa 0x00c4ffe0
/* UAnimNodeSequence slot 0x198 (kit vf_198, UE3 GetTimeLeft()): the play time left at the current global play rate. */
FLOAT UAnimNodeSequence::vf_198()
{
    if (AnimSeq)
    {
        const FLOAT Rate = vf_190();
        if (Rate > 0.f)
        {
            return Max(AnimSeq->SequenceLength - CurrentTime, 0.f) / Rate;
        }
    }
    return 0.f;
}
