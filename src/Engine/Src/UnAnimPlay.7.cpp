// UnAnimPlay.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* TArray<FAnimGroup>::operator()(INT), forced inline as the original has it here (the kit's inline copy is kept out of
 * line in this function). */
static FORCEINLINE FAnimGroup& GetAnimGroup_(TArray<FAnimGroup>& Groups, INT i)
{
#line 560 BAA_ARRAY_FILE
    check(i>=0 && (i<Groups.ArrayNum||(i==0 && Groups.ArrayNum==0)));
    return Groups.GetTypedData()[i];
}

// @baa 0x00c7fb90
/* UAnimNodeSequence slot 0x190 (kit vf_190, UE3 GetGlobalPlayRate()): this node's rate scaled by the mesh's global rate,
 * the sequence's RateScale and its synch group's RateScale. */
FLOAT UAnimNodeSequence::GetGlobalPlayRate()
{
    FLOAT GlobalRate = Rate * SkelComponent->GlobalAnimRateScale;
    if (AnimSeq)
    {
        GlobalRate *= AnimSeq->RateScale;
    }
    if ((SynchGroupName.Index != 0 || SynchGroupName.Number != 0) && SkelComponent)
    {
        UAnimTree* RootNode = Cast<UAnimTree>(SkelComponent->Animations);
        if (RootNode)
        {
            const INT GroupIndex = RootNode->sub_00c556d0(SynchGroupName);
            if (GroupIndex != INDEX_NONE)
            {
                GlobalRate *= GetAnimGroup_(RootNode->AnimGroups, GroupIndex).RateScale;
            }
        }
    }
    return GlobalRate;
}

#line 43 "candidate.cpp"
