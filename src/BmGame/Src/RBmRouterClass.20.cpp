// RBmRouterClass.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* out of line in the exe */
extern template INT TArray<FPathNodeInfo>::AddItem(const FPathNodeInfo& Item);

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
	return PathNodes.AddItem(NewNode);
}

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
	PathNodes.InsertItem(NewNode, Index);
}
