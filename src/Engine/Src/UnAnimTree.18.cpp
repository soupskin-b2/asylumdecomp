// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appFree out of line, so the local array's destructor inlines */
#include "ue3/Classes.h"

/* The kit's FName has no comparison operators (UnName.h). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

inline UBOOL operator==(const FName& A, EName N) { return A.Index == N && A.Number == 0; }

/* UAnimTree's morph node lookups aren't declared in Classes.h. */
struct UAnimTree_ : public UAnimTree
{
	void sub_00c61690(TArray<UMorphNodeBase*>& OutNodes);	/* GetMorphNodes */
	UMorphNodeBase* FindMorphNode(FName InNodeName);
};

// @baa 0x00c61880
UMorphNodeBase* UAnimTree_::FindMorphNode(FName InNodeName)
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
