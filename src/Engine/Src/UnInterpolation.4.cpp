// UnInterpolation.cpp: 16 functions
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

// @baa 0x00d09160
/* UE3's UInterpTrackFaceFX::RemoveKeyframe(INT KeyIndex): drop the FaceFX sequence key when the index is valid. */
void UInterpTrackFaceFX::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < FaceFXSeqs.Num())
    {
        FaceFXSeqs.Remove(KeyIndex);
    }
}

// @baa 0x00cfb780
/* UE3's UInterpTrackToggle::RemoveKeyframe(INT KeyIndex): drop the toggle key when the index is valid. */
void UInterpTrackToggle::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < ToggleTrack.Num())
    {
        ToggleTrack.Remove(KeyIndex);
    }
}

// @baa 0x00cfce50
/* UE3's UInterpTrackParticleReplay::RemoveKeyframe(INT KeyIndex): drop the replay key when the index is valid. */
void UInterpTrackParticleReplay::RemoveKeyframe(INT KeyIndex)
{
    if (KeyIndex >= 0 && KeyIndex < TrackKeys.Num())
    {
        TrackKeys.Remove(KeyIndex);
    }
}

/* Unnamed in the kit: UE3's FInterpCurveVector::AutoSetTangents(FLOAT Tension). */
struct FInterpCurveVector_ : public FInterpCurveVector
{
    void sub_007bb200(FLOAT Tension);
};

// @baa 0x00cfb050
/* UE3's UInterpTrackMove::PostEditChange(UProperty* PropertyThatChanged): reapply the randomiser (slot 0x178), then
 * rebuild both curves' tangents with their tensions. */
void UInterpTrackMove::PostEditChange(UProperty* PropertyThatChanged)
{
    if (Randomiser.bUseRandomise)
    {
        vf_178();
    }
#line 3340 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
    check((PosTrack.Points.Num() == EulerTrack.Points.Num()) && (PosTrack.Points.Num() == LookupTrack.Points.Num()));
    ((FInterpCurveVector_&)PosTrack).sub_007bb200(LinCurveTension);
    ((FInterpCurveVector_&)EulerTrack).sub_007bb200(AngCurveTension);
    Super::PostEditChange(PropertyThatChanged);
}

#line 203 "candidate.cpp"

// @baa 0x00cf49e0
/* UE3's UInterpTrackToggle::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime): the first and last toggle key times, 0 for an empty track. */
void UInterpTrackToggle::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (ToggleTrack.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ToggleTrack(0).Time;
        EndTime = ToggleTrack(ToggleTrack.Num() - 1).Time;
    }
}

// @baa 0x00cf71b0
/* UE3's UInterpTrackParticleReplay::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime): the first and last replay key times, 0 for an empty track. */
void UInterpTrackParticleReplay::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (TrackKeys.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = TrackKeys(0).Time;
        EndTime = TrackKeys(TrackKeys.Num() - 1).Time;
    }
}

// @baa 0x00d04720
/* UE3's UInterpTrackToggle::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode): insert a key in
 * time order, taking the instance's current action. */
INT UInterpTrackToggle::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    UInterpTrackInstToggle* ToggleInst = CastChecked<UInterpTrackInstToggle>(TrInst);

    INT i = 0;
    for (i = 0; i < ToggleTrack.Num() && ToggleTrack(i).Time < Time; i++);
    ToggleTrack.Insert(i);
    ToggleTrack(i).Time = Time;
    ToggleTrack(i).ToggleAction = ToggleInst->Action;

    return i;
}

/* Unnamed in the kit: the USeqAct_Interp member at 0x00d19950 taking one flag (UE3's UpdateInterp/ConditionalPersistent
 * refresh after an edit). */
struct USeqAct_Interp__00d19a50 : public USeqAct_Interp
{
    void sub_00d19950(UBOOL bFlag);
};

// @baa 0x00d19a50
/* UE3's USeqAct_Interp::PostEditChange(UProperty* PropertyThatChanged). */
void USeqAct_Interp::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    ((USeqAct_Interp__00d19a50*)this)->sub_00d19950(TRUE);
}
