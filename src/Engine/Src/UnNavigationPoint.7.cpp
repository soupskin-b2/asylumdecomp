// UnNavigationPoint.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00843c10
UBOOL ACoverLink::IsLeftEdgeSlot(INT SlotIdx, UBOOL bIgnoreLeans)
{
    // circular or looped links have no edges; otherwise the first slot, a disabled neighbour,
    // or a neighbour offering lower cover makes this an edge
    return !bCircular && !bLooped && SlotIdx < Slots.Num() &&
        (SlotIdx <= 0 || !Slots(SlotIdx - 1).bEnabled ||
         (!bIgnoreLeans && Slots(SlotIdx - 1).CoverType > Slots(SlotIdx).CoverType));
}

#line 35 "candidate.cpp"

/* TArray<BYTE>::AddItem, out of line in the exe (00568680) */
struct FByteArray : public TArray<BYTE> {
    INT sub_00568680(const BYTE& Item);
    INT AddItem(const BYTE& Item) { return sub_00568680(Item); }
};

// @baa 0x008446e0
void ACoverLink::GetSlotActions(INT SlotIdx, TArray<BYTE>& Actions)
{
    if (SlotIdx >= 0 && SlotIdx < Slots.Num())
    {
        FCoverSlot& Slot = Slots(SlotIdx);
        if (Slot.bLeanRight)
        {
            ((FByteArray&)Actions).AddItem(CA_PeekRight);
        }
        if (Slot.bLeanLeft)
        {
            ((FByteArray&)Actions).AddItem(CA_PeekLeft);
        }
        if (Slot.CoverType == CT_MidLevel && Slot.bAllowPopup)
        {
            ((FByteArray&)Actions).AddItem(CA_PeekUp);
        }
    }
}
