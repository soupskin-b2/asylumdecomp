// UnAnimPlay.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct UAnimNodeSequence_ : public UAnimNodeSequence
{
	UBOOL ShouldKeepCachedResult();
};

// @baa 0x00c4ad70
/* The cached pose may only be reused while the mesh isn't being rendered, the node skips ticks at zero
 * weight, and nothing extracts root motion from the animation. */
UBOOL UAnimNodeSequence_::ShouldKeepCachedResult()
{
	if (SkelComponent->bRecentlyRendered || !bSkipTickWhenZeroWeight)
	{
		return FALSE;
	}

	const UBOOL bRootBoneMotion = RootBoneOption[0] != RBA_Default || RootBoneOption[1] != RBA_Default || RootBoneOption[2] != RBA_Default;
	const UBOOL bRootRotation = RootRotationOption[0] != RRO_Default || RootRotationOption[1] != RRO_Default || RootRotationOption[2] != RRO_Default;
	return !bRootBoneMotion && !bRootRotation;
}

struct UAnimNodeSequence__00c5e220 : public UAnimNodeSequence
{
	UBOOL ShouldKeepCachedResult();
	void ClearCachedResult();
};

/* Kit gap (Array.h): this build's TArray::Reset() is just 'DestructItems(0, ArrayNum); ArrayNum = 0;'; the
 * kit's Reset(NewSize) adds an Empty branch (flagged on 00c5e520). */
template<class T> struct TArrayReset : public TArray<T>
{
	void Reset() { this->ArrayNum = 0; }
};

/* The cached pose may only be reused while the mesh isn't being rendered, the node skips ticks at zero
 * weight, and nothing extracts root motion from the animation. */
UBOOL UAnimNodeSequence__00c5e220::ShouldKeepCachedResult()
{
	if (SkelComponent->bRecentlyRendered || !bSkipTickWhenZeroWeight)
	{
		return FALSE;
	}

	const UBOOL bRootBoneMotion = RootBoneOption[0] != RBA_Default || RootBoneOption[1] != RBA_Default || RootBoneOption[2] != RBA_Default;
	const UBOOL bRootRotation = RootRotationOption[0] != RRO_Default || RootRotationOption[1] != RRO_Default || RootRotationOption[2] != RRO_Default;
	return !bRootBoneMotion && !bRootRotation;
}

// @baa 0x00c5e220
/* Drops the cached pose unless it may be kept. */
void UAnimNodeSequence__00c5e220::ClearCachedResult()
{
	if (CachedBoneAtoms.Num() > 0 && !ShouldKeepCachedResult())
	{
		((TArrayReset<FBoneAtom>&)CachedBoneAtoms).Reset();
	}
}

/* AActor::eventOnAnimPlay (out of line here, 00c49e40) isn't declared. */
struct AActor_ : public AActor
{
	void sub_00c49e40(UAnimNodeSequence* SeqNode);		/* eventOnAnimPlay */
};

// @baa 0x00c52af0
/* Starts the animation from StartTime. */
void UAnimNodeSequence::PlayAnim(UBOOL bLoop, FLOAT InRate, FLOAT StartTime)
{
	CurrentTime = StartTime;
	PreviousTime = StartTime;
	Rate = InRate;
	bLooping = bLoop;
	bPlaying = TRUE;

	// Playing an animation takes the mesh out of its reference pose.
	if (bForceRefposeWhenNotPlaying && SkelComponent->bForceRefpose)
	{
		SkelComponent->sub_0090eaa0(FALSE);		/* SetForceRefPose */
	}

	if (bCauseActorAnimPlay && SkelComponent->Owner)
	{
		((AActor_*)SkelComponent->Owner)->sub_00c49e40(this);
	}

	if (CameraAnim && !bLooping)
	{
		sub_00c4fee0();					/* StartCameraAnim */
	}
}

extern FName g_026c4190;
	/* ENGINE_OnAnimPlay */
struct AActor__00c49e40 : public AActor
{
	void eventOnAnimPlay(UAnimNodeSequence* SeqNode);
};

// @baa 0x00c49e40
/* The OnAnimPlay script event's generated glue (EngineClasses.h). */
void AActor__00c49e40::eventOnAnimPlay(UAnimNodeSequence* SeqNode)
{
	struct Actor_eventOnAnimPlay_Parms
	{
		UAnimNodeSequence* SeqNode;
	};
	Actor_eventOnAnimPlay_Parms Parms;
	Parms.SeqNode = SeqNode;
	ProcessEvent(FindFunctionChecked(g_026c4190), &Parms);
}

struct UAnimNodeSequence__00c4af30 : public UAnimNodeSequence
{
	void StopCameraAnim();
};

// @baa 0x00c4af30
/* Stops the camera animation started with this node's animation and lets it release itself. */
void UAnimNodeSequence__00c4af30::StopCameraAnim()
{
	if (ActiveCameraAnimInstance)
	{
		ActiveCameraAnimInstance->sub_007880c0(TRUE);		/* Stop(bImmediate) */
		ActiveCameraAnimInstance->bAutoReleaseWhenFinished = TRUE;
		ActiveCameraAnimInstance = NULL;
	}
}

struct UAnimNode_ : public UAnimNode
{
	UBOOL IsChildOf(UAnimNode* Node);
};

// @baa 0x00c53070
/* Whether Node is this node or one of its ancestors in the tree. */
UBOOL UAnimNode_::IsChildOf(UAnimNode* Node)
{
	if (!Node)
	{
		return FALSE;
	}

	if (this == Node)
	{
		return TRUE;
	}

	for (INT i = 0; i < ParentNodes.Num(); i++)
	{
		if (((UAnimNode_*)ParentNodes(i))->IsChildOf(Node))
		{
			return TRUE;
		}
	}

	return FALSE;
}

// @baa 0x00c4af10
// @baa 0x00c4af10
void UAnimNodeSequence::vf_12c()
{
	SetAnim(AnimSeqName);
}
