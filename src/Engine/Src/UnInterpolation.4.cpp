// UnInterpolation.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00cf0440
/* A track with no keys has an empty time range. */
void UInterpTrack::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    StartTime = 0.f;
    EndTime = 0.f;
}

// @baa 0x00cf3ea0
/* The base filter shows every group and every track. */
void UInterpFilter::FilterData(USeqAct_Interp* InInterp)
{
    for (INT GroupIdx = 0; GroupIdx < InInterp->InterpData->InterpGroups.Num(); GroupIdx++)
    {
        UInterpGroup* Group = InInterp->InterpData->InterpGroups(GroupIdx);
        Group->bVisible = TRUE;
        for (INT TrackIdx = 0; TrackIdx < Group->InterpTracks.Num(); TrackIdx++)
        {
            Group->InterpTracks(TrackIdx)->bVisible = TRUE;
        }
    }
}
