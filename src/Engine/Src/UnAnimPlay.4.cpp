// UnAnimPlay.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00c4ff80
/* GetNormalizedPosition: How far through the animation the node is, from 0 to 1. */
FLOAT UAnimNodeSequence::GetNormalizedPosition()
{
	if (AnimSeq && AnimSeq->SequenceLength > 0.f)
	{
		return Clamp<FLOAT>(CurrentTime / AnimSeq->SequenceLength, 0.f, 1.f);
	}

	return 0.f;
}

/* Inlined here: ClearCachedResult (0x00c5e220); Classes.h declares the out-of-line copy. */
struct UAnimNodeSequence_ : public UAnimNodeSequence
{
	FORCEINLINE void ClearCachedResult()
	{
		if (CachedBoneAtoms.Num() > 0 && !ShouldKeepCachedResult())
		{
			CachedBoneAtoms.Reset();
		}
	}
};

// @baa 0x00c5e5b0
/* SetPosition: Jumps to NewTime, firing the notifies passed over if bFireNotifies. */
void UAnimNodeSequence::SetPosition(FLOAT NewTime, UBOOL bFireNotifies)
{
	const FLOAT AnimLength = AnimSeq ? AnimSeq->SequenceLength : 0.f;
	NewTime = Clamp<FLOAT>(NewTime, 0.f, AnimLength + KINDA_SMALL_NUMBER);

	// Fire the notifies between the current and the new position.
	const FLOAT MoveDelta = NewTime - CurrentTime;
	if (bFireNotifies && MoveDelta > 0.f && !bNoNotifies && NodeTotalWeight >= NotifyWeightThreshold)
	{
		IssueNotifies(MoveDelta);
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
/* FindGroupPosition: The node's position, from 0 to 1, for a relative position in its
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

/* FName's operator!= kept out of line here (0x0053f4c0); Classes.h's is the inline one. */
struct FName_ : public FName
{
	UBOOL operator!=(const FName& Other) const;
};

/* UAnimNodeSequence::ShouldKeepCachedResult (0x00c4ad70, matched in UnAnimPlay.3.cpp) is defined in this file
 * too: AdvanceBy below was compiled with it in the same file (UnAnimPlay.cpp), which steers its registers.
 * Whether the cached bone atoms can be kept: only for an unrendered mesh, a node that skips ticking at zero
 * weight, and no root motion extraction. */
UBOOL UAnimNodeSequence::ShouldKeepCachedResult()
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
void UAnimNodeSequence::AdvanceBy(FLOAT MoveDelta, FLOAT DeltaSeconds, UBOOL bFireNotifies)
{
	if (AnimSeq == NULL || MoveDelta == 0.f || DeltaSeconds == 0.f)
	{
		return;
	}

	if (AnimSeq->NumFrames > 1 && CachedBoneAtoms.Num() > 0 && !this->ShouldKeepCachedResult())
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
			this->IssueNotifies(MoveDelta);

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
/* UAnimNodeSequence slot 0x198 (UE3 GetTimeLeft()): the play time left at the current global play rate. */
FLOAT UAnimNodeSequence::GetTimeLeft()
{
    if (AnimSeq)
    {
        const FLOAT Rate = GetGlobalPlayRate();
        if (Rate > 0.f)
        {
            return Max(AnimSeq->SequenceLength - CurrentTime, 0.f) / Rate;
        }
    }
    return 0.f;
}
