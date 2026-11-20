// UnSequence.cpp: 16 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName comparisons (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* UnSequence.cpp's static level lookup (0x008cc3b0): finds the streaming level for LevelName. */
UBOOL FindLevel(ULevelStreaming*& Level, FName LevelName);
// @baa 0x008cc7c0
void USeqAct_MultiLevelStreaming::UpdateStatus()
{
    bStatusIsOk = TRUE;
    for (INT LevelIdx = 0; LevelIdx < Levels.Num() && bStatusIsOk; LevelIdx++)
    {
        FLevelStreamingNameCombo& Combo = Levels(LevelIdx);
        // forget the cached level if it no longer matches the name
        if (Combo.Level != NULL && Combo.LevelName != NAME_None && Combo.Level->PackageName != Combo.LevelName)
        {
            Combo.Level = NULL;
        }
        ULevelStreaming* TheLevel = Combo.Level;
        bStatusIsOk = bStatusIsOk && FindLevel(TheLevel, Combo.LevelName);
    }
}

// @baa 0x00d201d0
/* UE3's USequenceOp::PostEditChange(UProperty* PropertyThatChanged): update the dynamic links first. */
void USequenceOp::PostEditChange(UProperty* PropertyThatChanged)
{
    UpdateDynamicLinks();
    Super::PostEditChange(PropertyThatChanged);
}

// @baa 0x008bdf20
/* USequenceOp slot 0x178 (UE3 DeActivated()): fire every enabled output link when bAutoActivateOutputLinks is set. */
void USequenceOp::DeActivated()
{
    if (bAutoActivateOutputLinks)
    {
        for (INT Idx = 0; Idx < OutputLinks.Num(); Idx++)
        {
            FSeqOpOutputLink& Link = OutputLinks(Idx);
            if (!Link.bDisabled)
            {
                Link.bHasImpulse = TRUE;
            }
        }
    }
}

// @baa 0x008ac6d0
/* UE3's USeqAct_SetMatInstScalarParam::Activated(): push the scalar onto the material instance. */
void USeqAct_SetMatInstScalarParam::Activated()
{
    if (MatInst != NULL)
    {
        MatInst->SetScalarParameterValue(ParamName, ScalarValue);
    }
}

// @baa 0x008ac710
/* UE3's USeqAct_SetMatInstTexParam::Activated(): push the texture onto the material instance. */
void USeqAct_SetMatInstTexParam::Activated()
{
    if (NewTexture != NULL && MatInst != NULL)
    {
        MatInst->SetTextureParameterValue(ParamName, NewTexture);
    }
}

// @baa 0x008abb80
/* Activate the event from the debugger: ActivateEvent with bPushTop and bFromQueued off. */
void USequenceEvent::DebugActivateEvent(AActor * InOriginator, AActor * InInstigator, TArray<INT> * ActivateIndices)
{
    ActivateEvent(InOriginator, InInstigator, ActivateIndices, FALSE, FALSE);
}

// @baa 0x008c0980
/* USequence slot 0x154 (kit vf_154, UE3 USequenceObject::CleanUp-style pass): run it on every object in the
 * sequence. */
void USequence::vf_154()
{
    for (INT Idx = 0; Idx < SequenceObjects.Num(); Idx++)
    {
        USequenceObject* SeqObj = SequenceObjects(Idx);
        if (SeqObj != NULL)
        {
            SeqObj->vf_154();
        }
    }
}

// @baa 0x008c0d00
/* UE3's USeqAct_PlayCameraAnim::UpdateOp(FLOAT DeltaTime): input 0 restarts the anim, input 1 stops it (handled by
 * Activated(), then marked stopped); otherwise count down the remaining time. */
UBOOL USeqAct_PlayCameraAnim::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        Activated();
    }
    else if (InputLinks(1).bHasImpulse)
    {
        Activated();
        AnimTimeRemaining = 0.f;
        InputLinks(1).bHasImpulse = FALSE;
        bStopped = TRUE;
    }
    else
    {
        AnimTimeRemaining -= DeltaTime;
    }

    return (AnimTimeRemaining <= 0.f);
}

extern FName g_026c4fcc;
 /* ENGINE_GetObjClassVersion */
/* Inlined here: the script-event glue for eventGetObjClassVersion (0x008aa210);
 * Classes.h declares the out-of-line copy. */
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

// @baa 0x008aa270
/* USequenceObject slot 0x120 (UE3's OnCreated()): stamp the object with its class's current version. */
void USequenceObject::OnCreated()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
}

// @baa 0x008e2270
/* USequence slot 0x120 (UE3's OnCreated()): stamp the version, then slot 0x1a4. */
void USequence::OnCreated()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
    UpdateConnectors();
}

// @baa 0x008ac570
/* USeqEvent_ParticleEvent slot 0x120 (UE3's OnCreated()): stamp the version, then SetupOutputLinks(FALSE). */
void USeqEvent_ParticleEvent::OnCreated()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
    SetupOutputLinks(FALSE);
}

extern FName g_026c4db8;
 /* ENGINE_CheckLogins */
/* Inlined here: the script-event glue for eventCheckLogins (0x008e7cd0); Classes.h declares the out-of-line copy. */
struct USeqCond_IsLoggedIn_ : public USeqCond_IsLoggedIn
{
    UBOOL eventCheckLogins()
    {
        struct SeqCond_IsLoggedIn_eventCheckLogins_Parms
        {
            UBOOL ReturnValue;
        } Parms;
        Parms.ReturnValue = FALSE;
        ProcessEvent(FindFunctionChecked(g_026c4db8), &Parms);
        return Parms.ReturnValue;
    }
};

// @baa 0x008e7d10
/* UE3's USeqCond_IsLoggedIn::Activated(): fire "True" when enough players are logged in, else "False". */
void USeqCond_IsLoggedIn::Activated()
{
    if (((USeqCond_IsLoggedIn_*)this)->eventCheckLogins() == TRUE)
    {
        OutputLinks(0).bHasImpulse = TRUE;
    }
    else
    {
        OutputLinks(1).bHasImpulse = TRUE;
    }
}

// @baa 0x008be6c0
/* UE3's USequenceEvent::RegisterEvent(): hook the event into its originator's GeneratedEvents, let script register,
 * and mark it registered. */
UBOOL USequenceEvent::RegisterEvent()
{
    if (Originator != NULL && !Originator->IsPendingKill())
    {
        Originator->GeneratedEvents.AddUniqueItem(this);
    }
    eventRegisterEvent();
    bRegistered = TRUE;
    return bRegistered;
}

/* GIsEditor is a compile-time FALSE in this build (see Material.cpp's check(!Selected || GIsEditor), which compiles to
 * a plain "if (Selected) fail"); the kit doesn't define it. */
#define GIsEditor FALSE
// @baa 0x008e6820
void USeqAct_Switch::Activated()
{
	// for each index in the list
	for (INT Idx = 0; Idx < Indices.Num(); Idx++)
	{
		INT OutIdx = Indices(Idx) - 1;
		// if it's a valid, enabled output
		if (OutIdx >= 0 && OutIdx < OutputLinks.Num() &&
			!OutputLinks(OutIdx).bDisabled &&
			!(OutputLinks(OutIdx).bDisabledPIE && GIsEditor))
		{
			// activate it
			OutputLinks(OutIdx).bHasImpulse = TRUE;
			// and disable it if necessary
			if (bAutoDisableLinks)
			{
				OutputLinks(OutIdx).bDisabled = TRUE;
			}
		}
		// increment the index
		if (IncrementAmount != 0)
		{
			if (bLooping)
			{
				Indices(Idx) = ((Indices(Idx) + IncrementAmount - 1) % OutputLinks.Num()) + 1;
			}
			else
			{
				Indices(Idx) += IncrementAmount;
			}
		}
	}
}

// @baa 0x008ac750
/* Pushes VectorValue into the material instance's ParamName parameter. */
void USeqAct_SetMatInstVectorParam::Activated()
{
	if (MatInst)
	{
		MatInst->SetVectorParameterValue(ParamName, VectorValue);
	}
}

// @baa 0x008ac7b0
/* Reads the material instance's ParamName vector parameter (black and transparent if missing). */
void USeqAct_GetMatInstVectorParam::GetColour(FLinearColor& Colour)
{
	if (MatInst == NULL || !MatInst->GetVectorParameterValue(ParamName, Colour))
	{
		Colour = FLinearColor(0.f, 0.f, 0.f, 0.f);
	}
}
