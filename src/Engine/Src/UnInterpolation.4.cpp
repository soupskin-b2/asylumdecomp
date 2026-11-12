// UnInterpolation.cpp: 8 functions
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

/* Unnamed in the kit: UE3's USeqAct_Interp::Pause(): toggle bPaused while playing. */
struct USeqAct_Interp_ : public USeqAct_Interp
{
    void sub_00ceb4f0();
};

// @baa 0x00ceb4f0
void USeqAct_Interp_::sub_00ceb4f0()
{
    if (bIsPlaying)
    {
        bPaused = !bPaused;
    }
}

/* Unnamed in the kit: UE3's FName UInterpTrackDirector::GetViewedGroupName(FLOAT CurrentTime, FLOAT& CutTime,
 * FLOAT& CutTransitionTime) (this build has a trailing flag), and USeqAct_Interp::FindFirstGroupInstByName(FName)
 * (as the project binds it, 0x00cf3830); UInterpData::FindDirectorGroup and UInterpGroupDirector::GetDirectorTrack
 * are project stand-ins too (0x00d132d0, 0x00d0eb90). */
struct UInterpData_ : public UInterpData
{
    UInterpGroupDirector* FindDirectorGroup();
};

struct UInterpGroupDirector_ : public UInterpGroupDirector
{
    UInterpTrackDirector* GetDirectorTrack();
};

struct UInterpTrackDirector_ : public UInterpTrackDirector
{
    FName sub_00d0f950(FLOAT CurrentTime, FLOAT& CutTime, FLOAT& CutTransitionTime, UBOOL bFlag);
};

struct USeqAct_Interp__00d14410 : public USeqAct_Interp
{
    UInterpGroupInst* sub_00cf3830(FName InGroupName);
    AActor* sub_00d14410();
};

// @baa 0x00d14410
/* UE3's USeqAct_Interp::FindViewedActor(): the actor the director track is viewing through at the current position,
 * if it isn't being destroyed. */
AActor* USeqAct_Interp__00d14410::sub_00d14410()
{
    UInterpGroupDirector* DirGroup = ((UInterpData_*)InterpData)->FindDirectorGroup();
    if (DirGroup != NULL)
    {
        UInterpTrackDirector* DirTrack = ((UInterpGroupDirector_*)DirGroup)->GetDirectorTrack();
        if (DirTrack != NULL)
        {
            FLOAT CutTime, CutTransitionTime;
            FName ViewGroupName = ((UInterpTrackDirector_*)DirTrack)->sub_00d0f950(Position, CutTime, CutTransitionTime, FALSE);
            UInterpGroupInst* ViewGroupInst = sub_00cf3830(ViewGroupName);
            if (ViewGroupInst != NULL && ViewGroupInst->GroupActor != NULL && !ViewGroupInst->GroupActor->bDeleteMe)
            {
                return ViewGroupInst->GroupActor;
            }
        }
    }
    return NULL;
}

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

/* Unnamed in the kit: UE3's UInterpData::FindGroupByName(FName GroupName): the index of the group named GroupName,
 * INDEX_NONE if none (or for NAME_None). */
struct UInterpData__00cf3030 : public UInterpData
{
    INT sub_00cf3030(FName GroupName);
};

// @baa 0x00cf3030
INT UInterpData__00cf3030::sub_00cf3030(FName GroupName)
{
    if (GroupName.Index != 0 || GroupName.Number != 0)
    {
        for (INT i = 0; i < InterpGroups.Num(); i++)
        {
            if (InterpGroups(i)->GroupName == GroupName)
            {
                return i;
            }
        }
    }
    return INDEX_NONE;
}

/* UnObjBas.h: Cast<T> that fails loudly; this build has one out-of-line copy per use site group, declared only here. */
template<class T> T* CastChecked(UObject* Src);
// @baa 0x00d1c5e0
/* UE3's UInterpTrackInstAnimControl::InitTrackInst(UInterpTrack* Track): start from the sequence's current position. */
void UInterpTrackInstAnimControl::InitTrackInst(UInterpTrack* Track)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(Outer);
    UObject* GrOuter = GrInst->Outer;
    USeqAct_Interp* Seq = CastChecked<USeqAct_Interp>(GrOuter);
    LastUpdatePosition = Seq->Position;
}

// @baa 0x00d1c300
/* UE3's UInterpTrackInstEvent::InitTrackInst(UInterpTrack* Track): start from the sequence's current position. */
void UInterpTrackInstEvent::InitTrackInst(UInterpTrack* Track)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(Outer);
    UObject* GrOuter = GrInst->Outer;
    USeqAct_Interp* Seq = CastChecked<USeqAct_Interp>(GrOuter);
    LastUpdatePosition = Seq->Position;
}

// @baa 0x00d1c660
/* UE3's UInterpTrackInstSound::InitTrackInst(UInterpTrack* Track): start from the sequence's current position. */
void UInterpTrackInstSound::InitTrackInst(UInterpTrack* Track)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(Outer);
    UObject* GrOuter = GrInst->Outer;
    USeqAct_Interp* Seq = CastChecked<USeqAct_Interp>(GrOuter);
    LastUpdatePosition = Seq->Position;
}
