// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

// @baa 0x00c50670
/* TArray<FRandomAnimInfo>::operator() (UAnimNodeRandom::RandomInfo). */
template FRandomAnimInfo& TArray<FRandomAnimInfo>::operator()(INT);

#define ZERO_ANIMWEIGHT_THRESH (0.00001f)
/* Kit gap, with UE3's definition (Array.h): TArray has no AddZeroed. */
template<class T> inline INT AddZeroed(TArray<T>& Array, INT Count)
{
	const INT Index = Array.Add(Count);
	appMemzero(Array.GetTypedData() + Index, Count * sizeof(T));
	return Index;
}

/* Callees Classes.h doesn't declare by name. */
struct UAnimNodeBlendBase_ : public UAnimNodeBlendBase
{
	void sub_00c53100(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent);	/* InitAnim */
	FLOAT sub_00c53c40();							/* GetChildWeightTotal */
};

/* UAnimNodeSlot's InitAnim override (UAnimNode vtable 0x128, declared only as vf_128). */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	void sub_00c56870();							/* UpdateWeightsForAdditiveAnimations */
	void sub_00c56ca0(INT ChildIndex, FLOAT BlendTime);			/* SetActiveChild */
	void InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent);
};

// @baa 0x00c62f70
void UAnimNodeSlot_::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	((UAnimNodeBlendBase_*)this)->sub_00c53100(MeshComp, Parent);

	// one target weight per child, all on the first one
	if (TargetWeight.Num() != Children.Num())
	{
		TargetWeight.Empty();
		AddZeroed(TargetWeight, Children.Num());
		if (TargetWeight.Num() > 0)
		{
			TargetWeight(0) = 1.f;
		}
	}

	sub_00c56870();

	// no weight at all: snap to the target child
	if (((UAnimNodeBlendBase_*)this)->sub_00c53c40() <= ZERO_ANIMWEIGHT_THRESH)
	{
		sub_00c56ca0(TargetChildIndex, 0.f);
	}

	SynchNode = NULL;
}

/* The kit's FName has no comparison operators (UnName.h). */
/* UAnimNode's node lookups aren't declared in Classes.h. */
struct UAnimNode_ : public UAnimNode
{
	void sub_00c4b530(TArray<UAnimNode*>& Nodes);		/* GetNodes */
	UAnimNode* FindAnimNode(FName InNodeName);
};

// @baa 0x00c5ef30
UAnimNode* UAnimNode_::FindAnimNode(FName InNodeName)
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
