// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

extern template USequenceOp* Cast<USequenceOp>(UObject* Src);
/* TArray::AddItem (UE3's Array.h); the kit's TArray has none. */
template<class T> inline INT AddItem(TArray<T>& Array, const T& Item)
{
    const INT Index = Array.Add(1);
    new(Array.GetTypedData() + Index) T(Item);
    return Index;
}

/* FSeqOpOutputLink::HasLinkTo (0x008bbfb0) isn't declared in Classes.h. */

/* USequence::FindLinksToSeqOp isn't declared in Classes.h. */
struct USequence_ : public USequence
{
    void FindLinksToSeqOp(USequenceOp* TargetOp, TArray<FSeqOpOutputLink*>& Links);
};

// @baa 0x008fe500
void USequence_::FindLinksToSeqOp(USequenceOp* TargetOp, TArray<FSeqOpOutputLink*>& Links)
{
    if (TargetOp != NULL)
    {
        // look through every op in this sequence for output links to the target
        for (INT ObjIdx = 0; ObjIdx < SequenceObjects.Num(); ObjIdx++)
        {
            USequenceOp* ChkOp = Cast<USequenceOp>(SequenceObjects(ObjIdx));
            if (ChkOp != NULL && ChkOp->OutputLinks.Num() > 0)
            {
                for (INT LinkIdx = 0; LinkIdx < ChkOp->OutputLinks.Num(); LinkIdx++)
                {
                    FSeqOpOutputLink* Link = &ChkOp->OutputLinks(LinkIdx);
                    if (Link->HasLinkTo(TargetOp))
                    {
                        AddItem(Links, Link);
                    }
                }
            }
        }
    }
}
