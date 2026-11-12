// UnAnimPlay.cpp (part 2 of 2): 12 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c907c0
void UAnimNodeSequence::execSetPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewTime);
    P_GET_UBOOL(bFireNotifies);
    P_FINISH;

    SetPosition(NewTime, bFireNotifies);
}

// @baa 0x00c90450
void UAnimNodeSequence::execStopAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopAnim();
}

// @baa 0x00c909d0
void UAnimNodeSequenceBlendByAim::execCheckAnimsUpToDate( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CheckAnimsUpToDate();
}

// @baa 0x00c90860
void UAnimNodeSequence::execGetNormalizedPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetNormalizedPosition();
}

// @baa 0x00c90910
void UAnimNodeSequence::execGetGlobalPlayRate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_190();
}

// @baa 0x00c90950
void UAnimNodeSequence::execGetAnimPlaybackLength(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_194();
}

// @baa 0x00c90990
void UAnimNodeSequence::execGetTimeLeft(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_198();
}

// @baa 0x00c90740
// @baa 0x00c90740
void UAnimNodeSequence::execSetAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Sequence);
    P_FINISH;
    SetAnim(Sequence);
}

// @baa 0x00c908a0
void UAnimNodeSequence::execFindNormalizedPositionFromGroupRelativePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(GroupRelativePosition);
	P_FINISH;
	*(FLOAT*)Result = FindGroupPosition(GroupRelativePosition);
}

// @baa 0x00c90360
void UAnimNodeSequence::execPlayAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(bLoop, FALSE);
    P_GET_FLOAT_OPTX(InRate, 1.f);
    P_GET_FLOAT_OPTX(StartTime, 0.f);
    P_FINISH;
    PlayAnim(bLoop, InRate, StartTime);
}

extern FName g_026c4f90;
	/* ENGINE_OnInit */
/* Kit gap: the OnInit event's generated glue (EngineClasses.h) isn't declared. */
struct UAnimNode_ : public UAnimNode
{
	FORCEINLINE void eventOnInit()
	{
		ProcessEvent(FindFunctionChecked(g_026c4f90), NULL);
	}
};

// @baa 0x00c4d1e0
void UAnimNodeSequence::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	/* Super::InitAnim (UAnimNode::InitAnim, 0x00c4b4f0), inlined: same source file in the original. */
	SkelComponent = MeshComp;
	((UAnimNode_*)this)->eventOnInit();

	SetAnim(AnimSeqName);

	/* A camera anim left playing from before is stopped and let go. */
	if (ActiveCameraAnimInstance)
	{
		ActiveCameraAnimInstance->sub_007880c0(TRUE);	/* Stop(bImmediate) */
		ActiveCameraAnimInstance->bAutoReleaseWhenFinished = TRUE;
		ActiveCameraAnimInstance = NULL;
	}
}

extern FName g_026c4644;
	/* ENGINE_OnAnimEnd */
struct AActor_ : public AActor
{
	/* the script event's generated glue (EngineClasses.h) */
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, FLOAT PlayedTime, FLOAT ExcessTime)
	{
		struct Actor_eventOnAnimEnd_Parms
		{
			class UAnimNodeSequence* SeqNode;
			FLOAT PlayedTime;
			FLOAT ExcessTime;
		} Parms;
		Parms.SeqNode = SeqNode;
		Parms.PlayedTime = PlayedTime;
		Parms.ExcessTime = ExcessTime;
		ProcessEvent(FindFunctionChecked(g_026c4644), &Parms);
	}
};

// @baa 0x00c52610
void UAnimNodeSequence::OnAnimEnd(FLOAT PlayedTime, FLOAT ExcessTime)
{
	// tell the parent blend nodes
	for (INT i = 0; i < ParentNodes.Num(); i++)
	{
		ParentNodes(i)->OnChildAnimEnd(this, PlayedTime, ExcessTime);
	}

	if (bForceRefposeWhenNotPlaying && !SkelComponent->bForceRefpose)
	{
		SkelComponent->sub_0090eaa0(TRUE);
	}

	// notify the owning actor
	if (bCauseActorAnimEnd && SkelComponent->Owner)
	{
		((AActor_*)SkelComponent->Owner)->eventOnAnimEnd(this, PlayedTime, ExcessTime);
	}
}
