// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"


// @baa 0x008417e0
/* ACoverLink::GetSlotHeight (UE3 UnNavigationPoint.cpp; not declared in the kit). */
FLOAT ACoverLink::GetSlotHeight(INT SlotIdx)
{
    if (SlotIdx >= 0 && SlotIdx < Slots.Num())
    {
        switch (Slots(SlotIdx).CoverType)
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
