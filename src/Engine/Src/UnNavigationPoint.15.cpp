// UnNavigationPoint.cpp: 5 functions
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

extern FName g_026c4ba8;
 /* ENGINE_SetDisabled */
/* EngineClasses.h's inline script-event glue (not in the kit). */
struct ACoverLink_ : public ACoverLink
{
    void eventSetDisabled(UBOOL bNewDisabled)
    {
        struct CoverLink_eventSetDisabled_Parms
        {
            UBOOL bNewDisabled;
        } Parms;
        Parms.bNewDisabled = bNewDisabled ? TRUE : FALSE;
        ProcessEvent(FindFunctionChecked(g_026c4ba8), &Parms);
    }
};

// @baa 0x008607e0
/* UE3's ACoverGroup::EnableGroup(): enable every linked cover link; references that no longer resolve to a cover link are dropped. */
void ACoverGroup::EnableGroup()
{
    for (INT Idx = 0; Idx < CoverLinkRefs.Num(); Idx++)
    {
        ACoverLink* Link = Cast<ACoverLink>(((TArrayAt_<FActorReference>&)CoverLinkRefs).At(Idx).Actor);
        if (Link != NULL)
        {
            ((ACoverLink_*)Link)->eventSetDisabled(FALSE);
        }
        else
        {
            CoverLinkRefs.Remove(Idx--, 1);
        }
    }
}

#line 62 "candidate.cpp"

// @baa 0x008608e0
/* UE3's ACoverGroup::DisableGroup(): disable every linked cover link; references that no longer resolve to a cover link are dropped. */
void ACoverGroup::DisableGroup()
{
    for (INT Idx = 0; Idx < CoverLinkRefs.Num(); Idx++)
    {
        ACoverLink* Link = Cast<ACoverLink>(((TArrayAt_<FActorReference>&)CoverLinkRefs).At(Idx).Actor);
        if (Link != NULL)
        {
            ((ACoverLink_*)Link)->eventSetDisabled(TRUE);
        }
        else
        {
            CoverLinkRefs.Remove(Idx--, 1);
        }
    }
}

// @baa 0x008609e0
/* UE3's ACoverGroup::ToggleGroup(): flip every linked cover link; references that no longer resolve to a cover link are dropped. */
void ACoverGroup::ToggleGroup()
{
    for (INT Idx = 0; Idx < CoverLinkRefs.Num(); Idx++)
    {
        ACoverLink* Link = Cast<ACoverLink>(((TArrayAt_<FActorReference>&)CoverLinkRefs).At(Idx).Actor);
        if (Link != NULL)
        {
            ((ACoverLink_*)Link)->eventSetDisabled(!Link->bDisabled);
        }
        else
        {
            CoverLinkRefs.Remove(Idx--, 1);
        }
    }
}

FCoverSlot* sub_00840460(FCoverInfo& Info);
    /* 0x00840460 */
FCoverSlot* sub_0085d480(FCoverReference& Ref);
// @baa 0x00861350
 /* 0x0085d480 */
/* UE3's ACoverSlotMarker::GetReachSpecClass: slot-to-slot specs between markers of the same link, swat-turn specs
 * to a marker this slot can turn to, else the default. */
UClass* ACoverSlotMarker::GetReachSpecClass(ANavigationPoint* Nav, UClass* ReachSpecClass)
{
    ACoverSlotMarker* Marker = Cast<ACoverSlotMarker>(Nav);
    if (Marker != NULL)
    {
        if (Marker->OwningSlot.Link == OwningSlot.Link)
        {
            return USlotToSlotReachSpec::StaticClass();
        }
        FCoverSlot* Slot = sub_00840460(OwningSlot);
        for (INT Idx = 0; Idx < Slot->TurnTarget.Num(); Idx++)
        {
            FCoverSlot* TurnSlot = sub_0085d480(((TArrayAt_<FCoverReference>&)Slot->TurnTarget).At(Idx));
            if (TurnSlot != NULL && TurnSlot->SlotMarker == Nav)
            {
                return USwatTurnReachSpec::StaticClass();
            }
        }
    }
    return ReachSpecClass;
}

// @baa 0x00840340
/* ACoverSlotMarker slot 0x374 (kit vf_374(INT PathIdx)): a path is a regular one unless it is a slot-to-slot or a
 * swat-turn reach spec. */
INT ACoverSlotMarker::vf_374(INT PathIdx)
{
    return !ObjectIsA(((TArrayAt_<UReachSpec*>&)PathList).At(PathIdx), USlotToSlotReachSpec::StaticClass()) &&
           !ObjectIsA(((TArrayAt_<UReachSpec*>&)PathList).At(PathIdx), USwatTurnReachSpec::StaticClass());
}
