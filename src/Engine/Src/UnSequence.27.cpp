// UnSequence.cpp: 16 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName comparisons (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* UnSequence.cpp's static level lookup (0x008cc3b0): finds the streaming level for LevelName. */
UBOOL FindLevel(ULevelStreaming*& Level, FName LevelName);
/* slot 0x1a0 (vf_1a0) */
struct USeqAct_MultiLevelStreaming_ : public USeqAct_MultiLevelStreaming
{
    void UpdateStatus();
};

// @baa 0x008cc7c0
void USeqAct_MultiLevelStreaming_::UpdateStatus()
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
/* UE3's USequenceOp::PostEditChange(UProperty* PropertyThatChanged): fix up the links first (slot 0x188, UE3
 * CleanupConnections()). */
void USequenceOp::PostEditChange(UProperty* PropertyThatChanged)
{
    vf_188();
    Super::PostEditChange(PropertyThatChanged);
}

// @baa 0x008bdf20
/* USequenceOp slot 0x178 (kit vf_178, UE3 DeActivated()): fire every enabled output link when
 * bAutoActivateOutputLinks is set. */
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
/* USequenceEvent slot 0x19c (kit vf_19c, UE3's CheckActivate(InOriginator, InInstigator, bTest) short form): forward to
 * slot 0x1a4 with no activate indices and bPushTop off. */
INT USequenceEvent::vf_19c(INT InOriginator, INT InInstigator, INT bTest)
{
    return vf_1a4(InOriginator, InInstigator, bTest, 0, 0);
}

// @baa 0x008c0980
/* USequence slot 0x154 (kit vf_154, UE3 USequenceObject::CleanUp-style pass): run it on every object in the sequence. */
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

// @baa 0x008aa270
/* USequenceObject slot 0x120 (kit vf_120, UE3's OnCreated()): stamp the object with its class's current version. */
void USequenceObject::vf_120()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
}

// @baa 0x008e2270
/* USequence slot 0x120 (kit vf_120, UE3's OnCreated()): stamp the version, then slot 0x1a4. */
void USequence::vf_120()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
    vf_1a4();
}

// @baa 0x008ac570
/* USeqEvent_ParticleEvent slot 0x120 (kit vf_120, UE3's OnCreated()): stamp the version, then slot 0x1a8 with 0. */
void USeqEvent_ParticleEvent::vf_120()
{
    ObjInstanceVersion = ((USequenceObject_*)this)->eventGetObjClassVersion();
    vf_1a8(0);
}

extern FName g_026c4db8;
 /* ENGINE_CheckLogins */
/* EngineSequenceClasses.h's inline script-event glue (not in the kit). */
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

extern FName g_026c530c;
 /* ENGINE_RegisterEvent */
/* TArray::AddUniqueItem (Array.h), which the kit's TArray lacks; out of line in this build (0x008b1c90). */
template<typename T> struct TArrayAddUnique_ : public TArray<T>
{
    INT AddUniqueItem(const T& Item);
};

/* EngineSequenceClasses.h's inline script-event glue (not in the kit). */
struct USequenceEvent_ : public USequenceEvent
{
    void eventRegisterEvent()
    {
        ProcessEvent(FindFunctionChecked(g_026c530c), NULL);
    }
};

// @baa 0x008be6c0
/* UE3's USequenceEvent::RegisterEvent(): hook the event into its originator's GeneratedEvents, let script register,
 * and mark it registered. */
UBOOL USequenceEvent::RegisterEvent()
{
    if (Originator != NULL && !Originator->IsPendingKill())
    {
        ((TArrayAddUnique_<USequenceEvent*>&)Originator->GeneratedEvents).AddUniqueItem(this);
    }
    ((USequenceEvent_*)this)->eventRegisterEvent();
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

/* FLinearColor's component constructor (UnMath.h), which the kit's plain struct lacks */
struct FLinearColor_ : public FLinearColor
{
	FLinearColor_(FLOAT InR, FLOAT InG, FLOAT InB, FLOAT InA) { R = InR; G = InG; B = InB; A = InA; }
};

// @baa 0x008ac7b0
/* Reads the material instance's ParamName vector parameter (black and transparent if missing). */
void USeqAct_GetMatInstVectorParam::GetColour(FLinearColor& Colour)
{
	if (MatInst == NULL || !MatInst->GetVectorParameterValue(ParamName, Colour))
	{
		Colour = FLinearColor_(0.f, 0.f, 0.f, 0.f);
	}
}
