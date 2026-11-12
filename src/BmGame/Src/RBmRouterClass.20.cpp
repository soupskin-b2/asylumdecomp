// RBmRouterClass.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* Kit gap: TArray::AddItem isn't declared (Array.h); this file calls TArray<FPathNodeInfo>::AddItem out of line. */
template<class T> struct TArrayAddItem_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x0161bbf0
/* Appends a node at an actor's location, owned by it. */
INT URBMRouterPath::AddNode_Actor(class AActor* NewPathNode)
{
	FPathNodeInfo NewNode;
	NewNode.pos = NewPathNode->Location;
	NewNode.Owner = NewPathNode;
	if (ObjectIsA(NewPathNode, ARPathNode::StaticClass()))
	{
		NewNode.bIsRPathNode = TRUE;
	}
	else
	{
		NewNode.bIsRPathNode = FALSE;
	}
	return ((TArrayAddItem_<FPathNodeInfo>&)PathNodes).AddItem(NewNode);
}

/* Kit gap: TArray::InsertItem isn't declared (Array.h). */
template<class T> struct TArrayInsertItem_ : public TArray<T>
{
	FORCEINLINE INT InsertItem(const T& Item, INT Index)
	{
		this->Insert(Index, 1);
		new(this->GetTypedData() + Index) T(Item);
		return Index;
	}
};

// @baa 0x0161bcf0
/* Inserts a node at an actor's location, owned by it, before node Index. */
void URBMRouterPath::InsertNode_Actor(class AActor* NewPathNode, INT Index)
{
	FPathNodeInfo NewNode;
	NewNode.pos = NewPathNode->Location;
	NewNode.Owner = NewPathNode;
	if (ObjectIsA(NewPathNode, ARPathNode::StaticClass()))
	{
		NewNode.bIsRPathNode = TRUE;
	}
	else
	{
		NewNode.bIsRPathNode = FALSE;
	}
	((TArrayInsertItem_<FPathNodeInfo>&)PathNodes).InsertItem(NewNode, Index);
}
