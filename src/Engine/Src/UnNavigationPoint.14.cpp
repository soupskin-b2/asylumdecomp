// UnNavigationPoint.cpp: 3 functions
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

// @baa 0x00840460
/* Unnamed in the kit (0x00840460): the cover slot a FCoverInfo names, or NULL without a link or for a bad index. */
FCoverSlot* sub_00840460(FCoverInfo& Info)
{
    FCoverSlot* Slot = NULL;
    ACoverLink* Link = Info.Link;
    if (Link != NULL && Info.SlotIdx >= 0 && Info.SlotIdx < Link->Slots.Num())
    {
        Slot = &((TArrayAt_<FCoverSlot>&)Link->Slots).At(Info.SlotIdx);
    }
    return Slot;
}

#line 39 "candidate.cpp"

// @baa 0x00844610
/* UE3's ACoverLink::HasFireLinkTo: whether the slot has a (non-fallback, unless allowed) fire link with items to the
 * other cover's slot marker. */
UBOOL ACoverLink::HasFireLinkTo(INT SlotIdx, const FCoverInfo& ChkCover, UBOOL bAllowFallbackLinks)
{
    FCoverSlot& Slot = ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx);
    ACoverSlotMarker* ChkMarker = ChkCover.Link->sub_00841860(ChkCover.SlotIdx);
    for (INT Idx = 0; Idx < Slot.FireLinks.Num(); Idx++)
    {
        FFireLink& FireLink = ((TArrayAt_<FFireLink>&)Slot.FireLinks).At(Idx);
        if (FireLink.TargetMarker.Actor == ChkMarker && (bAllowFallbackLinks || !FireLink.bFallbackLink))
        {
            return (FireLink.Items.Num() > 0);
        }
    }
    return FALSE;
}

// @baa 0x00835e10
/* Unnamed in the kit (0x00835e10, UnNavigationPoint.cpp file-level helper, no remaining callers): whether either
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
