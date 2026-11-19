// RBmRouterClass.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* out of line in the exe */
extern template INT TArray<FPathNodeInfo>::AddItem(const FPathNodeInfo& Item);

// @baa 0x0161bbb0
/* Appends a node at a position (no owner). */
void URBMRouterPath::AddNode_Pos(FVector NewPathNode)
{
	FPathNodeInfo NewNode;
	NewNode.pos = NewPathNode;
	NewNode.Owner = NULL;
	NewNode.bIsRPathNode = FALSE;
	PathNodes.AddItem(NewNode);
}

// @baa 0x0161bc90
/* Inserts a node at a position (no owner) before node Index. */
void URBMRouterPath::InsertNode_Pos(FVector NewPathNode, INT Index)
{
	FPathNodeInfo NewNode;
	NewNode.pos = NewPathNode;
	NewNode.Owner = NULL;
	NewNode.bIsRPathNode = FALSE;
	PathNodes.InsertItem(NewNode, Index);
}
