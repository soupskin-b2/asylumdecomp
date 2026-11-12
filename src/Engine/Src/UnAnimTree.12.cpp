// UnAnimTree.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appFree/appRealloc out of line, so ~TArray, Reserve and AddItem inline */
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include <new.h>

/* Kit gaps, with UE3's definitions (Array.h): TArray has no Reserve and no AddItem. */
template<class T> inline void Reserve(TArray<T>& Array, INT Number)
{
	if (Number > Array.ArrayMax)
	{
		Array.ArrayMax = Number;
		Array.AllocatorInstance.ResizeAllocation(Array.ArrayNum, Array.ArrayMax, sizeof(T));
	}
}

template<class T> inline INT AddItem(TArray<T>& Array, const T& Item)
{
	const INT Index = Array.Add(1);
	new(Array.GetTypedData() + Index) T(Item);
	return Index;
}

/* UAnimNode::GetNodes and GetNodesByClass aren't declared in Classes.h. */
struct UAnimNode_ : public UAnimNode
{
	void GetNodesByClass(TArray<UAnimNode*>& Nodes, UClass* BaseClass);
};

// @baa 0x00c5ed80
void UAnimNode_::GetNodesByClass(TArray<UAnimNode*>& Nodes, UClass* BaseClass)
{
	// every node below this one
	TArray<UAnimNode*> AllNodes;
	sub_00c4b530(AllNodes);

	Reserve(Nodes, AllNodes.Num());

	// keep those of the class (or all of them without one)
	for (INT i = 0; i < AllNodes.Num(); i++)
	{
		if (ObjectIsA(AllNodes(i), BaseClass))
		{
			AddItem(Nodes, AllNodes(i));
		}
	}
}

inline UBOOL operator==(const FName& A, EName N) { return A.Index == N && A.Number == 0; }

/* UAnimNode::GetAnimSeqNodes isn't declared in Classes.h. */
struct UAnimNode__00c7a3d0 : public UAnimNode
{
	void GetAnimSeqNodes(TArray<UAnimNodeSequence*>& Nodes, FName InSynchGroupName);
};

// @baa 0x00c7a3d0
void UAnimNode__00c7a3d0::GetAnimSeqNodes(TArray<UAnimNodeSequence*>& Nodes, FName InSynchGroupName)
{
	// every node below this one
	TArray<UAnimNode*> TmpNodes;
	sub_00c4b530(TmpNodes);

	Reserve(Nodes, TmpNodes.Num());

	// keep the sequence nodes (of the synch group, if given)
	for (INT i = 0; i < TmpNodes.Num(); i++)
	{
		UAnimNodeSequence* SeqNode = Cast<UAnimNodeSequence>(TmpNodes(i));
		if (SeqNode && (InSynchGroupName == NAME_None || InSynchGroupName == SeqNode->SynchGroupName))
		{
			AddItem(Nodes, SeqNode);
		}
	}
}
