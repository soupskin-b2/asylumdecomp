// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

struct ACoverLink_ : public ACoverLink {
    void sub_0084e9a0();
};

// @baa 0x0084e9a0
/* clears every slot's exposed fire links */
void ACoverLink_::sub_0084e9a0()
{
    for (INT SlotIdx = 0; SlotIdx < Slots.Num(); SlotIdx++)
    {
        FCoverSlot& Slot = ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx);
        Slot.ExposedFireLinks.Empty();
    }
}

#line 42 "candidate.cpp"
