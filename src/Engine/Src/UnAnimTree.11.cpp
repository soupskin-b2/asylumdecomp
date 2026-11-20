// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Out-of-line code Classes.h doesn't declare. */
struct FAnimNodeArray : public TArray<UAnimNode*>
{
	~FAnimNodeArray();					/* 00920d10, TArray<UAnimNode*>::~TArray */
};

/* Cast<UAnimNodeSynch> is the out-of-line instantiation at 00c7f910. */
extern template UAnimNodeSynch* Cast<UAnimNodeSynch>(UObject* Src);

// @baa 0x00c803f0
void UAnimNodeSlot::AddToSynchGroup(FName GroupName)
{
	UAnimNodeSequence* SeqNode = GetCustomAnimNodeSeq();

	// nothing to do without a custom animation, or if it's already in that group
	if (!SeqNode || SeqNode->SynchGroupName == GroupName)
	{
		return;
	}

	// find the tree's synch node the first time
	if (!SynchNode)
	{
		FAnimNodeArray Nodes;
		SkelComponent->Animations->sub_00c4b530(Nodes);
		for (INT i = 0; i < Nodes.Num(); i++)
		{
			SynchNode = Cast<UAnimNodeSynch>(Nodes(i));
			if (SynchNode)
			{
				break;
			}
		}
	}

	if (SynchNode)
	{
		// leave the old group
		if (SeqNode->SynchGroupName != NAME_None)
		{
			((UAnimNodeSynch*)SynchNode)->RemoveNodeFromGroup(SeqNode, SeqNode->SynchGroupName);
		}

		// and join the new one
		if (GroupName != NAME_None)
		{
			((UAnimNodeSynch*)SynchNode)->AddNodeToGroup(SeqNode, GroupName);
		}
	}
}
