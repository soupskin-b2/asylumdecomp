// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

struct ACoverLink_ : public ACoverLink
{
    FLOAT GetSlotHeight(INT SlotIdx); /* 0x008417e0 */
};

// @baa 0x008417e0
/* ACoverLink::GetSlotHeight (UE3 UnNavigationPoint.cpp; not declared in the kit). */
FLOAT ACoverLink_::GetSlotHeight(INT SlotIdx)
{
    if (SlotIdx >= 0 && SlotIdx < Slots.Num())
    {
        switch (((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).CoverType)
        {
        case CT_MidLevel:
            return MidHeight;
        default:
            return StandHeight;
        }
    }
    return 0.f;
}

#line 48 "candidate.cpp"
