// UnSequence.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"
#include "ue3/Classes.h"

extern FName g_026c4fcc;
 /* ENGINE_GetObjClassVersion */
/* EngineSequenceClasses.h's inline script-event glue (not in the kit). */
struct USequenceObject_ : public USequenceObject
{
    INT eventGetObjClassVersion()
    {
        struct SequenceObject_eventGetObjClassVersion_Parms
        {
            INT ReturnValue;
        } Parms;
        Parms.ReturnValue = 0;
        ProcessEvent(FindFunctionChecked(g_026c4fcc), &Parms);
        return Parms.ReturnValue;
    }
};

// @baa 0x008cb5d0
/* USeqVar_ObjectList slot 0x120 (kit vf_120, UE3's OnCreated()): stamp the version and start with an empty list. */
void USeqVar_ObjectList::vf_120()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
    ObjList.Empty();
}

extern FName g_026c45cc;
 /* ENGINE_Update */
/* EngineSequenceClasses.h's inline script-event glue (not in the kit). */
struct USeqAct_Latent_ : public USeqAct_Latent
{
    UBOOL eventUpdate(FLOAT DeltaTime)
    {
        struct SeqAct_Latent_eventUpdate_Parms
        {
            FLOAT DeltaTime;
            UBOOL ReturnValue;
        } Parms;
        Parms.ReturnValue = FALSE;
        Parms.DeltaTime = DeltaTime;
        ProcessEvent(FindFunctionChecked(g_026c45cc), &Parms);
        return Parms.ReturnValue;
    }
};

// @baa 0x008caeb0
/* UE3's USeqAct_Latent::UpdateOp(FLOAT DeltaTime): drop actors that died or no longer run this action (all of them
 * when aborted), then let script update; done once script reports nothing in progress and no actors are left. */
UBOOL USeqAct_Latent::UpdateOp(FLOAT DeltaTime)
{
    if (bAborted)
    {
        LatentActors.Empty();
    }
    else
    {
        for (INT Idx = 0; Idx < LatentActors.Num(); Idx++)
        {
            AActor* Actor = LatentActors(Idx);
            if (Actor == NULL || Actor->IsPendingKill() || !Actor->LatentActions.ContainsItem(this))
            {
                LatentActors.Remove(Idx--, 1);
            }
        }
    }
    return (!((USeqAct_Latent_*)this)->eventUpdate(DeltaTime) && LatentActors.Num() == 0);
}

// @baa 0x008cc250
/* UE3's USeqAct_InterpolateFloat::Activated(): start the countdown and record, per material instance, how far the
 * parameter has to move to reach TargetValue. */
void USeqAct_InterpolateFloat::Activated()
{
    RemainingTime = Duration;
    FLOAT CurrentValue = 0.f;
    DeltaValue.Empty(MatInst.Num());
    DeltaValue.Add(MatInst.Num());
    for (INT Idx = 0; Idx < MatInst.Num(); Idx++)
    {
        if (MatInst(Idx) != NULL)
        {
            MatInst(Idx)->GetScalarParameterValue(ParamName, CurrentValue);
        }
        DeltaValue(Idx) = TargetValue - CurrentValue;
    }
}
