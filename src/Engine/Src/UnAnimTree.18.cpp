// UnAnimTree.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appFree out of line, so the local array's destructor inlines */
#include "ue3/Classes.h"

/* The kit's FName has no comparison operators (UnName.h). */
inline UBOOL operator==(const FName& A, EName N) { return A.Index == N && A.Number == 0; }

/* UAnimTree's morph node lookups aren't declared in Classes.h. */

// @baa 0x00c61880
UMorphNodeBase* UAnimTree::FindMorphNode(FName InNodeName)
{
	if (InNodeName == NAME_None)
	{
		return NULL;
	}

	// every morph node of the tree
	TArray<UMorphNodeBase*> Nodes;
	sub_00c61690(Nodes);

	for (INT i = 0; i < Nodes.Num(); i++)
	{
		if (Nodes(i)->NodeName == InNodeName)
		{
			return Nodes(i);
		}
	}

	return NULL;
}

// @baa 0x00c76b70
/* TArray<FAimOffsetProfile>'s destructor, instantiated for UAnimNodeAimOffset's Profiles. */
template TArray<FAimOffsetProfile>::~TArray();
