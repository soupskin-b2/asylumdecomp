// UnInterpolation.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* TArray::Insert / InsertZeroed as this build's Array.h has them: both return void
 * (the kit's Insert returns the index, which changes register allocation). */
template<typename T>
class TArrayInsert : public TArray<T> {
public:
    using TArray<T>::ArrayNum;
    using TArray<T>::ArrayMax;
    using TArray<T>::AllocatorInstance;
    void Insert(INT Index, INT Count = 1);
};

template<typename T>
void TArrayInsert<T>::Insert(INT Index, INT Count)
{
#line 794 BAA_ARRAY_FILE
    check(Count>=0);
    check(ArrayNum>=0);
    check(ArrayMax>=ArrayNum);
    check(Index>=0);
    check(Index<=ArrayNum);
    const INT OldNum = ArrayNum;
    if ((ArrayNum += Count) > ArrayMax)
    {
        ArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(T));
        AllocatorInstance.ResizeAllocation(OldNum, ArrayMax, sizeof(T));
    }
    appMemmove((BYTE*)AllocatorInstance.GetAllocation() + (Index + Count) * sizeof(T),
               (BYTE*)AllocatorInstance.GetAllocation() + (Index) * sizeof(T),
               (OldNum - Index) * sizeof(T));
}

// @baa 0x00cebb60
/* 0x18-byte elements: FDirectorTrackCut */
template class TArrayInsert<FDirectorTrackCut>;

#line 44 "candidate.cpp"

// @baa 0x00cec2e0
/* 0x10-byte elements: FSoundTrackKey (type inferred from the element size) */
template class TArrayInsert<FSoundTrackKey>;

// @baa 0x00cebe90
/* 0x1c-byte elements: FAnimControlTrackKey (type inferred from the element size) */
template class TArrayInsert<FAnimControlTrackKey>;

// @baa 0x00cec970
/* 0x1c-byte elements: FFaceFXTrackKey (type inferred from the element size) */
template class TArrayInsert<FFaceFXTrackKey>;
