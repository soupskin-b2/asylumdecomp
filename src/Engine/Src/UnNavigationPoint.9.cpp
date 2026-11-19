// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"


// @baa 0x0084e9a0
/* clears every slot's exposed fire links */
void ACoverLink::sub_0084e9a0()
{
    for (INT SlotIdx = 0; SlotIdx < Slots.Num(); SlotIdx++)
    {
        FCoverSlot& Slot = Slots(SlotIdx);
        Slot.ExposedFireLinks.Empty();
    }
}

#line 42 "candidate.cpp"
