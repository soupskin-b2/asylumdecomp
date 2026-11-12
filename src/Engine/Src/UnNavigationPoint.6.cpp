// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* placement new as UE3 declares it (UnTemplate.h); the exe keeps the matching delete out of line (00401890) */
inline void* operator new(size_t Size, void* Mem) { return Mem; }

void operator delete(void* Ptr, void* Mem);
/* FCoverSlot's (implicit) copy constructor, out of line in the exe (00859980) */
struct FCoverSlot_ : public FCoverSlot {
    FCoverSlot_(const FCoverSlot& Other);
};

struct FCoverSlotArray : public TArray<FCoverSlot> {
    INT sub_00859eb0(const FCoverSlot& Item); // AddItem
};

// @baa 0x00859eb0
INT FCoverSlotArray::sub_00859eb0(const FCoverSlot& Item)
{
    const INT Index = Add(1);
    ::new(GetTypedData() + Index) FCoverSlot_(Item);
    return Index;
}
