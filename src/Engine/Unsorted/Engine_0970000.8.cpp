// Engine_0970000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

/* TArray<FInfluenceIndexPair> with its out-of-line destructor (0x00958330) */
struct FInfluenceIndexPairArray : public TArray<FInfluenceIndexPair>
{
    ~FInfluenceIndexPairArray();
};

/* TArray<TArray<FInfluenceIndexPair> >::Empty (Array.h), out of line here */
struct FInfluenceIndexPairArrays : public TArray<FInfluenceIndexPairArray>
{
    void Empty(INT Slack);
};

// @baa 0x00975cb0
void FInfluenceIndexPairArrays::Empty(INT Slack)
{
    // DestructItems(0, ArrayNum)
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FInfluenceIndexPairArray();
    }
    ArrayNum = 0;
    if (ArrayMax != Slack)
    {
        ArrayMax = Slack;
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FInfluenceIndexPairArray));
    }
}
