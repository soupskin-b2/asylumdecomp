// UnAnimTree.cpp: 20 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c64770
/* Nodes without a slider show no value text. */
FString UAnimNode::GetSliderDrawValue(INT SliderIndex)
{
    return FString(TEXT(""));
}

// @baa 0x00c53e60
/* Stopping a blend stops every child animation. */
void UAnimNodeBlendBase::StopAnim()
{
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i).Anim)
        {
            Children(i).Anim->StopAnim();
        }
    }
}

// @baa 0x00c53d80
/* Playing a blend plays every child animation with the same settings. */
void UAnimNodeBlendBase::PlayAnim(UBOOL bLoop, FLOAT Rate, FLOAT StartTime)
{
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i).Anim)
        {
            Children(i).Anim->PlayAnim(bLoop, Rate, StartTime);
        }
    }
}

// @baa 0x00c53d10
/* UE3's UAnimNodeBlendBase::OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime): pass the
 * notification up to every parent. */
void UAnimNodeBlendBase::OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime)
{
    for (INT i = 0; i < ParentNodes.Num(); i++)
    {
        ParentNodes(i)->OnChildAnimEnd(Child, PlayedTime, ExcessTime);
    }
}

// @baa 0x00c535b0
/* UAnimNodeBlendBase slot 0x134 (kit vf_134, UE3 TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)): while relevant,
 * accumulate each connected child's total weight. */
void UAnimNodeBlendBase::vf_134(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    if (bRelevant)
    {
        const INT NumChildren = Children.Num();
        for (INT i = 0; i < NumChildren; i++)
        {
            if (Children(i).Anim)
            {
                SetChildrenTotalWeightAccumulator(i);
            }
        }
    }
}

/* FName's comparison (UnName.h); the kit's FName has none. */
// @baa 0x00c7df80
/* Plays DefaultAnimSeqName when the active child has no animation yet. */
void UAnimNodeCrossfader::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	Super::InitAnim(MeshComp, Parent);

	UAnimNodeSequence* ActiveChild = sub_00c7a590();	/* GetActiveChild */
	if (ActiveChild && ActiveChild->AnimSeqName == FName(NAME_None))
	{
		SetAnim(DefaultAnimSeqName);
	}
}

/* Kit gap: UAnimNodeBlendPerBone::BuildWeightList isn't declared in Classes.h. */

// @baa 0x00c60e20
void UAnimNodeBlendPerBone::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	Super::InitAnim(MeshComp, Parent);
	((UAnimNodeBlendPerBone*)this)->BuildWeightList();
}

/* Kit gaps: USkeletalMeshComponent::BuildComposePriorityList and UAnimTree::InitTreeSynchGroups aren't declared
 * in Classes.h. */

// @baa 0x00c7e0c0
void UAnimTree::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	Super::InitAnim(MeshComp, Parent);
	if (MeshComp)
	{
		((USkeletalMeshComponent*)MeshComp)->sub_0092c310(PriorityList);
	}
	((UAnimTree*)this)->InitTreeSynchGroups();
}

/* Kit gap: UAnimNodeSynch::UpdateAnimSeqNodes isn't declared in Classes.h. */

// @baa 0x00c7ed60
void UAnimNodeSynch::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	((UAnimNodeSynch*)this)->UpdateAnimSeqNodes();
	Super::InitAnim(MeshComp, Parent);
}

extern FName g_026c4f90;
	/* ENGINE_OnInit */
/* Kit gap: the OnInit event's generated glue (EngineClasses.h) isn't declared; inlined here. */
struct UAnimNode_ : public UAnimNode
{
	FORCEINLINE void eventOnInit()
	{
		ProcessEvent(FindFunctionChecked(g_026c4f90), NULL);
	}
};

// @baa 0x00c4b4f0
void UAnimNode::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	SkelComponent = MeshComp;
	((UAnimNode_*)this)->eventOnInit();
}

/* Kit gap: UAnimNodeAimOffset::UpdateListOfRequiredBones isn't declared in Classes.h. */

// @baa 0x00c69940
void UAnimNodeAimOffset::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	Super::InitAnim(MeshComp, Parent);
	((UAnimNodeAimOffset*)this)->UpdateListOfRequiredBones();
}

extern FName g_026c4610;
	/* ENGINE_OnBecomeRelevant */
/* Kit gap: the OnBecomeRelevant event's generated glue (EngineClasses.h) isn't declared; inlined here. */
struct UAnimNode__00c4b620 : public UAnimNode
{
	FORCEINLINE void eventOnBecomeRelevant()
	{
		ProcessEvent(FindFunctionChecked(g_026c4610), NULL);
	}
};

// @baa 0x00c4b620
/* OnBecomeRelevant (vtable 0x150): tells script, then forgets the last channel so the next tick picks one. */
void UAnimNodeBlendBySpeed::vf_150()
{
	((UAnimNode__00c4b620*)this)->eventOnBecomeRelevant();
	LastChannel = INDEX_NONE;
}

extern FName g_026c42a8;
	/* ENGINE_OnCeaseRelevant */
/* Kit gap: the OnCeaseRelevant event's generated glue (EngineClasses.h) isn't declared; inlined here. */
struct UAnimNode__00c53520 : public UAnimNode
{
	FORCEINLINE void eventOnCeaseRelevant()
	{
		ProcessEvent(FindFunctionChecked(g_026c42a8), NULL);
	}
};

// @baa 0x00c53520
/* OnCeaseRelevant (vtable 0x154): clears the children's total weights, then tells script. */
void UAnimNodeBlendBase::vf_154()
{
	for (INT i = 0; i < Children.Num(); i++)
	{
		Children(i).TotalWeight = 0.f;
	}
	((UAnimNode__00c53520*)this)->eventOnCeaseRelevant();
}

// @baa 0x00c7f1b0
/* The animation playing on the slot's current custom-animation node (sub_00c7ccb0 is UE3's GetCustomAnimNodeSeq). */
FName UAnimNodeSlot::GetPlayedAnimation()
{
	UAnimNodeSequence* SeqNode = sub_00c7ccb0();
	if (SeqNode)
	{
		return SeqNode->AnimSeqName;
	}
	return NAME_None;
}

// @baa 0x00c55a30
void UAnimNodeBlendMultiBone::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	Super::InitAnim(MeshComp, Parent);

	// set up the per-bone weights the script configured
	for (INT i = 0; i < BlendTargetList.Num(); i++)
	{
		if (BlendTargetList(i).InitTargetStartBone != FName(NAME_None))
		{
			SetTargetStartBone(i, BlendTargetList(i).InitTargetStartBone, BlendTargetList(i).InitPerBoneIncrease);
		}
	}
}

// @baa 0x00c558b0
/* The first child (the source pose) takes this node's whole weight; the others, their share of it. Each child's
 * node accumulates the weight it gets. */
void UAnimNodeBlendMultiBone::SetChildrenTotalWeightAccumulator(const INT Index)
{
	if (Index == 0)
	{
		Children(Index).TotalWeight = NodeTotalWeight;
		Children(Index).Anim->TotalWeightAccumulator += NodeTotalWeight;
	}
	else
	{
		Children(Index).TotalWeight = Children(Index).Weight * NodeTotalWeight;
		Children(Index).Anim->TotalWeightAccumulator += Children(Index).TotalWeight;
	}
}

// @baa 0x00c54140
/* The first child (the source pose) takes this node's whole weight; the others, their share of it. Each child's
 * node accumulates the weight it gets. */
void UAnimNodeBlendPerBone::SetChildrenTotalWeightAccumulator(const INT Index)
{
	if (Index == 0)
	{
		Children(Index).TotalWeight = NodeTotalWeight;
		Children(Index).Anim->TotalWeightAccumulator += NodeTotalWeight;
	}
	else
	{
		Children(Index).TotalWeight = Children(Index).Weight * NodeTotalWeight;
		Children(Index).Anim->TotalWeightAccumulator += Children(Index).TotalWeight;
	}
}

// @baa 0x00c56fc0
void UAnimNodeAdditiveBlending::SetChildrenTotalWeightAccumulator(const INT Index)
{
	if (Index == 0)
	{
		// the base animation always takes the node's whole weight
		Children(Index).TotalWeight = NodeTotalWeight;
		Children(Index).Anim->TotalWeightAccumulator += NodeTotalWeight;
	}
	else
	{
		// the additive ones are weighted as usual
		Children(Index).TotalWeight = Children(Index).Weight * NodeTotalWeight;
		Children(Index).Anim->TotalWeightAccumulator += Children(Index).TotalWeight;
	}
}

/* Callees the kit doesn't declare (all out of line here). */

struct FRandomAnimInfoArray : public TArray<FRandomAnimInfo>
{
	INT sub_00c50760(INT Count);			/* AddZeroed */
	void sub_00c57400(INT Index, INT Count);	/* Remove */
};

/* UAnimNodeRandom's override of UAnimNode::InitAnim (vtable 0x128, declared only as vf_128). */

// @baa 0x00c7ed80
void UAnimNodeRandom::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	sub_00c60e40(MeshComp, Parent);

	// keep RandomInfo in sync with the children
	if (RandomInfo.Num() != Children.Num())
	{
		const INT Diff = Children.Num() - RandomInfo.Num();
		if (Diff > 0)
		{
			((FRandomAnimInfoArray&)RandomInfo).sub_00c50760(Diff);
		}
		else
		{
			((FRandomAnimInfoArray&)RandomInfo).sub_00c57400(RandomInfo.Num() + Diff, -Diff);
		}
	}

	// leave a valid child that is still playing (or holding a still frame) alone
	if (ActiveChildIndex >= 0 && ActiveChildIndex < Children.Num() &&
		Children(ActiveChildIndex).Anim &&
		PlayingSeqNode &&
		((UAnimNode*)PlayingSeqNode)->sub_00c53070(Children(ActiveChildIndex).Anim))
	{
		const FRandomAnimInfo& Info = RandomInfo(ActiveChildIndex);
		if (PlayingSeqNode->bPlaying || Info.bStillFrame)
		{
			return;
		}
	}
	sub_00c7c270(0.f, 0.f);
}

// @baa 0x00c4bba0
/* Ends the custom animation's play state, remembering the blend-out time to use. */
void UAnimNodePlayCustomAnim::sub_00c4bba0(FLOAT BlendOutTime)
{
	if (bIsPlayingCustomAnim)
	{
		bIsPlayingCustomAnim = FALSE;
		CustomPendingBlendOutTime = BlendOutTime;
	}
}
