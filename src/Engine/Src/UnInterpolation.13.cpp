// UnInterpolation.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"
#include "ue3/Classes.h"

extern FName g_026c54a8;
 /* ENGINE_FinishAnimControl */

/* EngineClasses.h's inline script-event glue (not in the kit). */
struct AActor_ : public AActor
{
    void eventFinishAnimControl()
    {
        ProcessEvent(FindFunctionChecked(g_026c54a8), NULL);
    }
};

// @baa 0x00cfab00
/* UE3's UInterpGroupInst::TermGroupInst(UBOOL bDeleteData): shut down every track instance, then let the group's
 * actor finish anim control when the group drives animation. */
void UInterpGroupInst::TermGroupInst(UBOOL bDeleteData)
{
    for (INT i = 0; i < TrackInst.Num(); i++)
    {
        UInterpTrack* Track = Group->InterpTracks(i);
        TrackInst(i)->TermTrackInst(Track);
    }
    TrackInst.Empty();

    UBOOL bHasAnimTrack = Group->HasAnimControlTrack();
    if (GroupActor != NULL && !GroupActor->IsPendingKill() && bHasAnimTrack)
    {
        ((AActor_*)GroupActor)->eventFinishAnimControl();
    }
}

/* UnObjBas.h ConstructObject<T>, out of line in this build (UClass as the project's other callers spell it). */

/* UnObjBas.h RF_Transactional (64-bit object flags). */
/* EngineClasses.h's script-event glue, out of line in this build. */

// @baa 0x00d03640
/* UE3's UInterpGroupInst::InitGroupInst(UInterpGroup* InGroup, AActor* InGroupActor): make a track instance for every
 * track of the group, and start anim control on the actor when the group animates it. */
void UInterpGroupInst::InitGroupInst(UInterpGroup* InGroup, AActor* InGroupActor)
{
#line 2420 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
    check(InGroup);
    Group = InGroup;
    GroupActor = InGroupActor;
    for (INT i = 0; i < InGroup->InterpTracks.Num(); i++)
    {
        UInterpTrackInst* TrInst = ConstructObject<UInterpTrackInst>((UClass*)InGroup->InterpTracks(i)->TrackInstClass, this,
            NAME_None, RF_Transactional, NULL, NULL, NULL);
        TrackInst.AddItem(TrInst);
        TrInst->InitTrackInst(InGroup->InterpTracks(i));
    }
    if (Group->HasAnimControlTrack() && GroupActor != NULL)
    {
        GroupActor->eventBeginAnimControl(Group->GroupAnimSets);
    }
}

#line 93 "candidate.cpp"
