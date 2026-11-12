// UnNavigationPoint.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (flagged): this build's FGuid is a pointer to its four INTs (FGuidImplementation, NULL = the zero GUID);
 * the kit's FGuid is { INT A }. Same-layout stand-in with UE3's inline IsValid. */
struct FGuid_
{
    FGuidImplementation* Impl;
    UBOOL IsValid() const
    {
        return Impl ? ((Impl->A | Impl->B | Impl->C | Impl->D) != 0) : FALSE;
    }
};

/* TArray::AddItem (Array.h), out of line in this build for TArray<FActorReference*> (0x0083cc20). */
template<typename T> struct TArrayAddItem_ : public TArray<T>
{
    INT AddItem(const T& Item);
};

// @baa 0x00844820
/* UE3's ACoverGroup::GetActorReferences: hand out the cover link references that need fixing up (resolved ones
 * when the level goes away, unresolved ones otherwise). */
void ACoverGroup::GetActorReferences(TArray<FActorReference*>& ActorRefs, UBOOL bIsRemovingLevel)
{
    Super::GetActorReferences(ActorRefs, bIsRemovingLevel);
    for (INT Idx = 0; Idx < CoverLinkRefs.Num(); Idx++)
    {
        FActorReference& ActorRef = CoverLinkRefs(Idx);
        if (((FGuid_&)ActorRef.Guid).IsValid())
        {
            if ((bIsRemovingLevel && ActorRef.Actor != NULL) || (!bIsRemovingLevel && ActorRef.Actor == NULL))
            {
                ((TArrayAddItem_<FActorReference*>&)ActorRefs).AddItem(&ActorRef);
            }
        }
    }
}

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

// @baa 0x00841860
/* UE3's ACoverLink::GetSlotMarker(INT SlotIdx) (kit sub_00841860): the marker placed for a slot, if any. */
ACoverSlotMarker* ACoverLink::sub_00841860(INT SlotIdx)
{
    ACoverSlotMarker* Marker = NULL;
    if (SlotIdx >= 0 && SlotIdx < Slots.Num())
    {
        Marker = ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).SlotMarker;
    }
    return Marker;
}

#line 74 "candidate.cpp"
