// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x0085d480
/* Unnamed in the kit (0x0085d480): the cover slot a FCoverReference points at, or NULL when its link isn't loaded or
 * the index is out of range. */
FCoverSlot* sub_0085d480(FCoverReference& Ref)
{
    FCoverSlot* Slot = NULL;
    ACoverLink* Link = Cast<ACoverLink>(Ref.Actor);
    if (Link != NULL && Ref.SlotIdx >= 0 && Ref.SlotIdx < Link->Slots.Num())
    {
        Slot = &Link->Slots(Ref.SlotIdx);
    }
    return Slot;
}

#line 42 "candidate.cpp"
