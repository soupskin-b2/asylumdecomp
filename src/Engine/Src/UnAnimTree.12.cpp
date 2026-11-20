// UnAnimTree.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appFree/appRealloc out of line, so ~TArray, Reserve and AddItem inline */
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include <new.h>

// @baa 0x00c5ed80
void UAnimNode::GetNodesByClass(TArray<UAnimNode*>& Nodes, UClass* BaseClass)
{
	// every node below this one
	TArray<UAnimNode*> AllNodes;
	sub_00c4b530(AllNodes);

	Nodes.Reserve(AllNodes.Num());

	// keep those of the class (or all of them without one)
	for (INT i = 0; i < AllNodes.Num(); i++)
	{
		if (ObjectIsA(AllNodes(i), BaseClass))
		{
			Nodes.AddItem(AllNodes(i));
		}
	}
}

// @baa 0x00c7a3d0
void UAnimNode::GetAnimSeqNodes(TArray<UAnimNodeSequence*>& Nodes, FName InSynchGroupName)
{
	// every node below this one
	TArray<UAnimNode*> TmpNodes;
	sub_00c4b530(TmpNodes);

	Nodes.Reserve(TmpNodes.Num());

	// keep the sequence nodes (of the synch group, if given)
	for (INT i = 0; i < TmpNodes.Num(); i++)
	{
		UAnimNodeSequence* SeqNode = Cast<UAnimNodeSequence>(TmpNodes(i));
		if (SeqNode && (InSynchGroupName == NAME_None || InSynchGroupName == SeqNode->SynchGroupName))
		{
			Nodes.AddItem(SeqNode);
		}
	}
}
