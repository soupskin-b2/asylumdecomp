// UnNavigationPoint.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00859ce0
/* TArray<FCoverSlot>::~TArray (FCoverSlot's implicit destructor is out of line in the exe, 00857fa0) */
template TArray<FCoverSlot>::~TArray();

struct FCoverSlotArray : public TArray<FCoverSlot> {
    INT sub_00859eb0(const FCoverSlot& Item); // AddItem
};

// @baa 0x00859eb0
INT FCoverSlotArray::sub_00859eb0(const FCoverSlot& Item)
{
    const INT Index = Add(1);
    // FCoverSlot's implicit copy constructor is out of line in the exe (00859980)
    ::new(GetTypedData() + Index) FCoverSlot(Item);
    return Index;
}

// @baa 0x00859e20
/* TArray<FCoverSlot>::Empty */
template void TArray<FCoverSlot>::Empty(INT Slack);

#line 68 "candidate.cpp"
