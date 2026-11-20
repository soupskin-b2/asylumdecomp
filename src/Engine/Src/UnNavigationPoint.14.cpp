// UnNavigationPoint.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00840460
/* The cover slot a FCoverInfo names, or NULL without a link or for a bad index. */
FCoverSlot* sub_00840460(FCoverInfo& Info)
{
    FCoverSlot* Slot = NULL;
    ACoverLink* Link = Info.Link;
    if (Link != NULL && Info.SlotIdx >= 0 && Info.SlotIdx < Link->Slots.Num())
    {
        Slot = &Link->Slots(Info.SlotIdx);
    }
    return Slot;
}

#line 39 "candidate.cpp"

// @baa 0x00844610
/* UE3's ACoverLink::HasFireLinkTo: whether the slot has a (non-fallback, unless allowed) fire link with items to the
 * other cover's slot marker. */
UBOOL ACoverLink::HasFireLinkTo(INT SlotIdx, const FCoverInfo& ChkCover, UBOOL bAllowFallbackLinks)
{
    FCoverSlot& Slot = Slots(SlotIdx);
    ACoverSlotMarker* ChkMarker = ChkCover.Link->GetSlotMarker(ChkCover.SlotIdx);
    for (INT Idx = 0; Idx < Slot.FireLinks.Num(); Idx++)
    {
        FFireLink& FireLink = Slot.FireLinks(Idx);
        if (FireLink.TargetMarker.Actor == ChkMarker && (bAllowFallbackLinks || !FireLink.bFallbackLink))
        {
            return (FireLink.Items.Num() > 0);
        }
    }
    return FALSE;
}

// @baa 0x00835e10
/* UnNavigationPoint.cpp file-level helper with no remaining callers: whether either
 * end of the reach spec has a MaxPathSize no bigger than Nav's (radius and height). */
UBOOL sub_00835e10(ANavigationPoint* Nav, UReachSpec* Spec)
{
    if (Nav == NULL || Spec == NULL)
    {
        return FALSE;
    }
    ANavigationPoint* Start = Spec->Start;
    if (Start == NULL)
    {
        return FALSE;
    }
    ANavigationPoint* End = (ANavigationPoint*)Spec->End.Actor;
    if (End == NULL)
    {
        return FALSE;
    }
    if ((Start->MaxPathSize.Height > Nav->MaxPathSize.Height || Start->MaxPathSize.Radius > Nav->MaxPathSize.Radius) &&
        (End->MaxPathSize.Height > Nav->MaxPathSize.Height || End->MaxPathSize.Radius > Nav->MaxPathSize.Radius))
    {
        return FALSE;
    }
    return TRUE;
}
