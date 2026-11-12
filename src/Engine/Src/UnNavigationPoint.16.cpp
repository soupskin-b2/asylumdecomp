// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"

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

extern INT g_026b55f8;
 /* overlap-claim recursion depth (UnCover.cpp file static) */
/* Unnamed in the kit (0x009c8f80): UWorld::GetTimeSeconds(). */

/* Unnamed in the kit (0x00860250, UE3's IsOverlapSlotClaimed). */


// @baa 0x008603f0
/* UE3's ACoverSlotMarker::IsValidClaim: whether ChkClaim may take this marker's slot (enabled, not owned by someone
 * alive, valid by now, no enemy-team claimer, no claimed overlapping slot). While an overlap check is recursing an
 * unusable slot counts as valid. */
UBOOL ACoverSlotMarker::IsValidClaim(APawn* ChkClaim, UBOOL bSkipTeamCheck, UBOOL bSkipOverlapCheck)
{
    ACoverLink* Link = OwningSlot.Link;
    INT SlotIdx = OwningSlot.SlotIdx;
    if (Link == NULL || !Link->IsEnabled() || ChkClaim == NULL || SlotIdx < 0 || SlotIdx >= Link->Slots.Num() ||
        !((TArrayAt_<FCoverSlot>&)Link->Slots).At(SlotIdx).bEnabled)
    {
        return (g_026b55f8 > 0);
    }
    UBOOL bResult;
    APawn* SlotOwner = ((TArrayAt_<FCoverSlot>&)Link->Slots).At(SlotIdx).SlotOwner;
    if ((SlotOwner == ChkClaim || SlotOwner == NULL || SlotOwner->bDeleteMe) &&
        (ChkClaim->IsHumanControlled() || !bBlocked) &&
        ((UWorld*)GWorld)->GetTimeSeconds() >= ((TArrayAt_<FCoverSlot>&)Link->Slots).At(SlotIdx).SlotValidAfterTime)
    {
        bResult = TRUE;
        if (!bSkipTeamCheck)
        {
            for (INT Idx = 0; Idx < Link->Claims.Num(); Idx++)
            {
                APawn* Claim = ((TArrayAt_<APawn*>&)Link->Claims).At(Idx);
                if (Claim == NULL)
                {
                    Link->Claims.Remove(Idx--, 1);
                }
                else if (!Claim->bDeleteMe && ChkClaim->PlayerReplicationInfo != NULL && Claim->PlayerReplicationInfo != NULL &&
                         Claim->PlayerReplicationInfo->Team != ChkClaim->PlayerReplicationInfo->Team)
                {
                    bResult = FALSE;
                    break;
                }
            }
        }
        if (bResult && !bSkipOverlapCheck && ((ACoverLink*)Link)->sub_00860250(ChkClaim, SlotIdx, bSkipTeamCheck))
        {
            bResult = FALSE;
        }
    }
    else
    {
        bResult = FALSE;
    }
    return bResult;
}

#line 95 "candidate.cpp"
