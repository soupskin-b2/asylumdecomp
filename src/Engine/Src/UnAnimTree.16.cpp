// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

// @baa 0x00c50670
/* TArray<FRandomAnimInfo>::operator() (UAnimNodeRandom::RandomInfo). */
template FRandomAnimInfo& TArray<FRandomAnimInfo>::operator()(INT);

#define ZERO_ANIMWEIGHT_THRESH (0.00001f)
// @baa 0x00c62f70
void UAnimNodeSlot::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	UAnimNodeBlendBase::InitAnim(MeshComp, Parent);

	// one target weight per child, all on the first one
	if (TargetWeight.Num() != Children.Num())
	{
		TargetWeight.Empty();
		TargetWeight.AddZeroed(Children.Num());
		if (TargetWeight.Num() > 0)
		{
			TargetWeight(0) = 1.f;
		}
	}

	UpdateWeightsForAdditiveAnimations();

	// no weight at all: snap to the target child
	if (((UAnimNodeBlendBase*)this)->GetChildWeightTotal() <= ZERO_ANIMWEIGHT_THRESH)
	{
		SetActiveChild(TargetChildIndex, 0.f);
	}

	SynchNode = NULL;
}


// @baa 0x00c5ef30
UAnimNode* UAnimNode::FindAnimNode(FName InNodeName)
{
	// every node from this one down
	TArray<UAnimNode*> Nodes;
	sub_00c4b530(Nodes);

	for (INT i = 0; i < Nodes.Num(); i++)
	{
		if (Nodes(i)->NodeName == InNodeName)
		{
			return Nodes(i);
		}
	}

	return NULL;
}
