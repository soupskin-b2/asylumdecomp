// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* TArray<UInterpTrack*>::Remove, out of line in the exe (00cf79c0) */
struct FInterpTrackArray : public TArray<UInterpTrack*> {
    void sub_00cf79c0(INT Index, INT Count);
    void Remove(INT Index, INT Count = 1) { sub_00cf79c0(Index, Count); }
};

/* TArray<UAnimSet*>::AddUniqueItem, out of line in the exe (00cf7590) */
struct FAnimSetArray : public TArray<UAnimSet*> {
    INT sub_00cf7590(UAnimSet* const& Item);
    INT AddUniqueItem(UAnimSet* const& Item) { return sub_00cf7590(Item); }
};

// @baa 0x00d14480
// UInterpGroup::PostLoad
void UInterpGroup::PostLoad()
{
    Super::PostLoad();

    // Remove any NULL tracks
    for (INT i = 0; i < InterpTracks.Num(); )
    {
        if (InterpTracks(i) != NULL)
        {
            i++;
        }
        else
        {
            ((FInterpTrackArray&)InterpTracks).Remove(i);
        }
    }

    // Move AnimSets from any AnimControl tracks into the group
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackAnimControl* AnimTrack = Cast<UInterpTrackAnimControl>(InterpTracks(i));
        if (AnimTrack)
        {
            for (INT j = 0; j < AnimTrack->AnimSets.Num(); j++)
            {
                ((FAnimSetArray&)GroupAnimSets).AddUniqueItem(AnimTrack->AnimSets(j));
            }
            AnimTrack->AnimSets.Empty();
        }
    }
}
