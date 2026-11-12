// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* one index pair of a LOD's influence data (UnSkeletalMesh.h; names assumed). Not in the kit. */
struct FInfluenceIndexPair
{
    INT First;
    INT Second;
};

// @baa 0x009500b0
/* Array.h's placement new into a TArray, instantiated out of line for the influence pairs */
template void* operator new(size_t Size, TArray<FInfluenceIndexPair>& Array);
