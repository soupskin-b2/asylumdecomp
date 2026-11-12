// RBmRouterClass.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap: TArray::AddItem isn't declared (Array.h); this file calls TArray<FPathNodeInfo>::AddItem out of line. */
template<class T> struct TArrayAddItem_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x0161bbb0
/* Appends a node at a position (no owner). */
void URBMRouterPath::AddNode_Pos(FVector NewPathNode)
{
	FPathNodeInfo NewNode;
	NewNode.pos = NewPathNode;
	NewNode.Owner = NULL;
	NewNode.bIsRPathNode = FALSE;
	((TArrayAddItem_<FPathNodeInfo>&)PathNodes).AddItem(NewNode);
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

// @baa 0x0161bc90
/* Inserts a node at a position (no owner) before node Index. */
void URBMRouterPath::InsertNode_Pos(FVector NewPathNode, INT Index)
{
	FPathNodeInfo NewNode;
	NewNode.pos = NewPathNode;
	NewNode.Owner = NULL;
	NewNode.bIsRPathNode = FALSE;
	((TArrayInsertItem_<FPathNodeInfo>&)PathNodes).InsertItem(NewNode, Index);
}
