// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalRender.h"

// @baa 0x00964e50
/* TArray::Remove (Array.h), out of line here */
void FSkeletalMeshObjectCPUSkin::FDecalVertexFactoryInfoArray::Remove(INT Index, INT Count)
{
#line 829 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
    check(Index>=0);
    check(Index<=ArrayNum);
    check(Index+Count<=ArrayNum);

    // DestructItems(Index, Count)
    for (INT i = Index; i < Index + Count; i++)
    {
        (&(*this)(i))->~FDecalVertexFactoryInfo();
    }

    const INT NumToMove = ArrayNum - Index - Count;
    if (NumToMove)
    {
        appMemmove((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FDecalVertexFactoryInfo),
                   (BYTE*)AllocatorInstance.GetAllocation() + (Index + Count) * sizeof(FDecalVertexFactoryInfo),
                   NumToMove * sizeof(FDecalVertexFactoryInfo));
    }
    ArrayNum -= Count;
    const INT NewArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(FDecalVertexFactoryInfo));
    if (NewArrayMax != ArrayMax)
    {
        ArrayMax = NewArrayMax;
        AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(FDecalVertexFactoryInfo));
    }
}

#line 153 "candidate.cpp"
