// UnWorld.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Implement.h"
#include "ue3/AppMath.h"
#include <string.h>

/* TArray::RemoveSwap (Array.h 860), instantiated for a pointer array used by UWorld. */
template<typename T>
class TArraySwap : public TArray<T> {
public:
    using TArray<T>::ArrayNum;
    using TArray<T>::ArrayMax;
    using TArray<T>::AllocatorInstance;
    void RemoveSwap(INT Index, INT Count = 1);
};

template<typename T>
void TArraySwap<T>::RemoveSwap(INT Index, INT Count)
{
#line 860 BAA_ARRAY_FILE
    check(Index>=0);
    check(Index<=ArrayNum);
    check(Index+Count<=ArrayNum);
    this->DestructItems(Index, Count);
    const INT NumElementsInHole = Count;
    const INT NumElementsAfterHole = ArrayNum - (Index + Count);
    const INT NumElementsToMoveIntoHole = Min(NumElementsInHole, NumElementsAfterHole);
    if (NumElementsToMoveIntoHole) {
        memcpy((BYTE*)AllocatorInstance.GetAllocation() + (Index) * sizeof(T),
                   (BYTE*)AllocatorInstance.GetAllocation() + (ArrayNum - NumElementsToMoveIntoHole) * sizeof(T),
                   NumElementsToMoveIntoHole * sizeof(T));
    }
    ArrayNum -= Count;
    const INT NewArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(T));
    if (NewArrayMax != ArrayMax) {
        ArrayMax = NewArrayMax;
        AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(T));
    }
}

// @baa 0x009b6cc0
template class TArraySwap<UObject*>;

#line 47 "candidate.cpp"
