// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

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

// @baa 0x0085d480
/* Unnamed in the kit (0x0085d480): the cover slot a FCoverReference points at, or NULL when its link isn't loaded or
 * the index is out of range. */
FCoverSlot* sub_0085d480(FCoverReference& Ref)
{
    FCoverSlot* Slot = NULL;
    ACoverLink* Link = Cast<ACoverLink>(Ref.Actor);
    if (Link != NULL && Ref.SlotIdx >= 0 && Ref.SlotIdx < Link->Slots.Num())
    {
        Slot = &((TArrayAt_<FCoverSlot>&)Link->Slots).At(Ref.SlotIdx);
    }
    return Slot;
}

#line 42 "candidate.cpp"
