// BmGameClasses.cpp: 28 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C
{
	INT X;
	INT Y;
	INT Z;

	C * sub_0154b6b0(INT NewX, INT NewY, INT NewZ)
	{
		X = NewX;
		Y = NewY;
		Z = NewZ;
		return this;
	}
};

C g_0154b6b0C;
// @baa 0x0154b6b0
C * g_0154b6b0Use(C * c, INT X, INT Y, INT Z)
{
	return c->sub_0154b6b0(X, Y, Z);
}

extern FName g_026e33ec;
 /* StartScarecrow */
struct URSeqAct_ActivateScarecrow_ : public URSeqAct_ActivateScarecrow
{
    void eventStartScarecrow();
};

/* RSeqAct_ActivateScarecrow.StartScarecrow script event: the generated glue (no parameters). */
inline void URSeqAct_ActivateScarecrow_::eventStartScarecrow()
{
    ProcessEvent(FindFunctionChecked(g_026e33ec), NULL);
}

// @baa 0x0157e560
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_ActivateScarecrow::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_ActivateScarecrow_*)this)->eventStartScarecrow();
    }
    return TRUE;
}

extern FName g_026e352c;
 /* TriggerChargeAttack */
struct URSeqAct_CrocPerformChargeAttack_ : public URSeqAct_CrocPerformChargeAttack
{
    void eventTriggerChargeAttack();
};

/* RSeqAct_CrocPerformChargeAttack.TriggerChargeAttack script event: the generated glue (no parameters). */
inline void URSeqAct_CrocPerformChargeAttack_::eventTriggerChargeAttack()
{
    ProcessEvent(FindFunctionChecked(g_026e352c), NULL);
}

// @baa 0x0157e990
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_CrocPerformChargeAttack::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_CrocPerformChargeAttack_*)this)->eventTriggerChargeAttack();
    }
    return TRUE;
}

extern FName g_026e2bec;
 /* TriggerCloseAttack */
struct URSeqAct_CrocPerformCloseAttack_ : public URSeqAct_CrocPerformCloseAttack
{
    void eventTriggerCloseAttack();
};

/* RSeqAct_CrocPerformCloseAttack.TriggerCloseAttack script event: the generated glue (no parameters). */
inline void URSeqAct_CrocPerformCloseAttack_::eventTriggerCloseAttack()
{
    ProcessEvent(FindFunctionChecked(g_026e2bec), NULL);
}

// @baa 0x0157eaf0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_CrocPerformCloseAttack::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_CrocPerformCloseAttack_*)this)->eventTriggerCloseAttack();
    }
    return TRUE;
}

extern FName g_026e31a0;
 /* TriggerSmashAttack */
struct URSeqAct_CrocPerformSmashAttack_ : public URSeqAct_CrocPerformSmashAttack
{
    void eventTriggerSmashAttack();
};

/* RSeqAct_CrocPerformSmashAttack.TriggerSmashAttack script event: the generated glue (no parameters). */
inline void URSeqAct_CrocPerformSmashAttack_::eventTriggerSmashAttack()
{
    ProcessEvent(FindFunctionChecked(g_026e31a0), NULL);
}

// @baa 0x0157ec50
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_CrocPerformSmashAttack::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_CrocPerformSmashAttack_*)this)->eventTriggerSmashAttack();
    }
    return TRUE;
}

extern FName g_026e33c4;
 /* DisableCrocAttacks */
struct URSeqAct_DisableCrocAttacks_ : public URSeqAct_DisableCrocAttacks
{
    void eventDisableCrocAttacks();
};

/* RSeqAct_DisableCrocAttacks.DisableCrocAttacks script event: the generated glue (no parameters). */
inline void URSeqAct_DisableCrocAttacks_::eventDisableCrocAttacks()
{
    ProcessEvent(FindFunctionChecked(g_026e33c4), NULL);
}

// @baa 0x0157ef00
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_DisableCrocAttacks::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_DisableCrocAttacks_*)this)->eventDisableCrocAttacks();
    }
    return TRUE;
}

extern FName g_026e286c;
 /* Drop */
struct URSeqAct_DropPlayerFromForensicsModes_ : public URSeqAct_DropPlayerFromForensicsModes
{
    void eventDrop();
};

/* RSeqAct_DropPlayerFromForensicsModes.Drop script event: the generated glue (no parameters). */
inline void URSeqAct_DropPlayerFromForensicsModes_::eventDrop()
{
    ProcessEvent(FindFunctionChecked(g_026e286c), NULL);
}

// @baa 0x0157f050
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_DropPlayerFromForensicsModes::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_DropPlayerFromForensicsModes_*)this)->eventDrop();
    }
    return TRUE;
}

extern FName g_026e29cc;
 /* Grapple */
struct URSeqAct_GrappleToVantagePoint_ : public URSeqAct_GrappleToVantagePoint
{
    void eventGrapple();
};

/* RSeqAct_GrappleToVantagePoint.Grapple script event: the generated glue (no parameters). */
inline void URSeqAct_GrappleToVantagePoint_::eventGrapple()
{
    ProcessEvent(FindFunctionChecked(g_026e29cc), NULL);
}

// @baa 0x0157f4b0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_GrappleToVantagePoint::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_GrappleToVantagePoint_*)this)->eventGrapple();
    }
    return TRUE;
}

extern FName g_026e30d4;
 /* Kill */
struct URSeqAct_KillScarecrow_ : public URSeqAct_KillScarecrow
{
    void eventKill();
};

/* RSeqAct_KillScarecrow.Kill script event: the generated glue (no parameters). */
inline void URSeqAct_KillScarecrow_::eventKill()
{
    ProcessEvent(FindFunctionChecked(g_026e30d4), NULL);
}

// @baa 0x0157f870
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_KillScarecrow::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_KillScarecrow_*)this)->eventKill();
    }
    return TRUE;
}

extern FName g_026e39d8;
 /* NewWave */
struct URSeqAct_NewSilentPredWave_ : public URSeqAct_NewSilentPredWave
{
    void eventNewWave();
};

/* RSeqAct_NewSilentPredWave.NewWave script event: the generated glue (no parameters). */
inline void URSeqAct_NewSilentPredWave_::eventNewWave()
{
    ProcessEvent(FindFunctionChecked(g_026e39d8), NULL);
}

// @baa 0x0157fba0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_NewSilentPredWave::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_NewSilentPredWave_*)this)->eventNewWave();
    }
    return TRUE;
}

extern FName g_026e2744;
 /* PlayEmitter */
struct URSeqAct_PlayCameraEmitter_ : public URSeqAct_PlayCameraEmitter
{
    void eventPlayEmitter();
};

/* RSeqAct_PlayCameraEmitter.PlayEmitter script event: the generated glue (no parameters). */
inline void URSeqAct_PlayCameraEmitter_::eventPlayEmitter()
{
    ProcessEvent(FindFunctionChecked(g_026e2744), NULL);
}

// @baa 0x0157fcf0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_PlayCameraEmitter::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_PlayCameraEmitter_*)this)->eventPlayEmitter();
    }
    return TRUE;
}

extern FName g_026e2860;
 /* SetScanned */
struct URSeqAct_SetEvidenceScanned_ : public URSeqAct_SetEvidenceScanned
{
    void eventSetScanned();
};

/* RSeqAct_SetEvidenceScanned.SetScanned script event: the generated glue (no parameters). */
inline void URSeqAct_SetEvidenceScanned_::eventSetScanned()
{
    ProcessEvent(FindFunctionChecked(g_026e2860), NULL);
}

// @baa 0x01580010
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetEvidenceScanned::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetEvidenceScanned_*)this)->eventSetScanned();
    }
    return TRUE;
}

extern FName g_026e3520;
 /* Set */
struct URSeqAct_SetMeshInvestigationInfo_ : public URSeqAct_SetMeshInvestigationInfo
{
    void eventSet();
};

/* RSeqAct_SetMeshInvestigationInfo.Set script event: the generated glue (no parameters). */
inline void URSeqAct_SetMeshInvestigationInfo_::eventSet()
{
    ProcessEvent(FindFunctionChecked(g_026e3520), NULL);
}

// @baa 0x01580160
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetMeshInvestigationInfo::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetMeshInvestigationInfo_*)this)->eventSet();
    }
    return TRUE;
}

 /* Set */
struct URSeqAct_SetPawnsREvidence_ : public URSeqAct_SetPawnsREvidence
{
    void eventSet();
};

/* RSeqAct_SetPawnsREvidence.Set script event: the generated glue (no parameters). */
inline void URSeqAct_SetPawnsREvidence_::eventSet()
{
    ProcessEvent(FindFunctionChecked(g_026e3520), NULL);
}

// @baa 0x015803f0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetPawnsREvidence::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetPawnsREvidence_*)this)->eventSet();
    }
    return TRUE;
}

extern FName g_026e37ec;
 /* Inspect */
struct URSeqAct_SetScarecrowInspect_ : public URSeqAct_SetScarecrowInspect
{
    void eventInspect();
};

/* RSeqAct_SetScarecrowInspect.Inspect script event: the generated glue (no parameters). */
inline void URSeqAct_SetScarecrowInspect_::eventInspect()
{
    ProcessEvent(FindFunctionChecked(g_026e37ec), NULL);
}

// @baa 0x015808e0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetScarecrowInspect::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetScarecrowInspect_*)this)->eventInspect();
    }
    return TRUE;
}

extern FName g_026e30f0;
 /* SetParameters */
struct URSeqAct_SetScarecrowParameters_ : public URSeqAct_SetScarecrowParameters
{
    void eventSetParameters();
};

/* RSeqAct_SetScarecrowParameters.SetParameters script event: the generated glue (no parameters). */
inline void URSeqAct_SetScarecrowParameters_::eventSetParameters()
{
    ProcessEvent(FindFunctionChecked(g_026e30f0), NULL);
}

// @baa 0x01580a30
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetScarecrowParameters::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetScarecrowParameters_*)this)->eventSetParameters();
    }
    return TRUE;
}

extern FName g_026e2568;
 /* Search */
struct URSeqAct_SetScarecrowSearch_ : public URSeqAct_SetScarecrowSearch
{
    void eventSearch();
};

/* RSeqAct_SetScarecrowSearch.Search script event: the generated glue (no parameters). */
inline void URSeqAct_SetScarecrowSearch_::eventSearch()
{
    ProcessEvent(FindFunctionChecked(g_026e2568), NULL);
}

// @baa 0x01580b90
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetScarecrowSearch::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetScarecrowSearch_*)this)->eventSearch();
    }
    return TRUE;
}

extern FName g_026e2ab8;
 /* SetAnimNames */
struct URSeqAct_SetScarecrowSearchAnims_ : public URSeqAct_SetScarecrowSearchAnims
{
    void eventSetAnimNames();
};

/* RSeqAct_SetScarecrowSearchAnims.SetAnimNames script event: the generated glue (no parameters). */
inline void URSeqAct_SetScarecrowSearchAnims_::eventSetAnimNames()
{
    ProcessEvent(FindFunctionChecked(g_026e2ab8), NULL);
}

// @baa 0x01580cf0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetScarecrowSearchAnims::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetScarecrowSearchAnims_*)this)->eventSetAnimNames();
    }
    return TRUE;
}

extern FName g_026e2730;
 /* SetT */
struct URSeqAct_SetTrackingObjectVars_ : public URSeqAct_SetTrackingObjectVars
{
    void eventSetT();
};

/* RSeqAct_SetTrackingObjectVars.SetT script event: the generated glue (no parameters). */
inline void URSeqAct_SetTrackingObjectVars_::eventSetT()
{
    ProcessEvent(FindFunctionChecked(g_026e2730), NULL);
}

// @baa 0x01580e40
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetTrackingObjectVars::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetTrackingObjectVars_*)this)->eventSetT();
    }
    return TRUE;
}

 /* SetParameters */
struct URSeqAct_SetVenomParameters_ : public URSeqAct_SetVenomParameters
{
    void eventSetParameters();
};

/* RSeqAct_SetVenomParameters.SetParameters script event: the generated glue (no parameters). */
inline void URSeqAct_SetVenomParameters_::eventSetParameters()
{
    ProcessEvent(FindFunctionChecked(g_026e30f0), NULL);
}

// @baa 0x01581330
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_SetVenomParameters::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_SetVenomParameters_*)this)->eventSetParameters();
    }
    return TRUE;
}

extern FName g_026e2844;
 /* TriggerRunTheGauntlet */
struct URSeqAct_TriggerRunTheGauntlet_ : public URSeqAct_TriggerRunTheGauntlet
{
    void eventTriggerRunTheGauntlet();
};

/* RSeqAct_TriggerRunTheGauntlet.TriggerRunTheGauntlet script event: the generated glue (no parameters). */
inline void URSeqAct_TriggerRunTheGauntlet_::eventTriggerRunTheGauntlet()
{
    ProcessEvent(FindFunctionChecked(g_026e2844), NULL);
}

// @baa 0x01581480
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_TriggerRunTheGauntlet::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_TriggerRunTheGauntlet_*)this)->eventTriggerRunTheGauntlet();
    }
    return TRUE;
}

extern FName g_026e3558;
 /* Unlock */
struct URSeqAct_UnlockXrayMode_ : public URSeqAct_UnlockXrayMode
{
    void eventUnlock();
};

/* RSeqAct_UnlockXrayMode.Unlock script event: the generated glue (no parameters). */
inline void URSeqAct_UnlockXrayMode_::eventUnlock()
{
    ProcessEvent(FindFunctionChecked(g_026e3558), NULL);
}

// @baa 0x015815d0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_UnlockXrayMode::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_UnlockXrayMode_*)this)->eventUnlock();
    }
    return TRUE;
}

extern FName g_026e30b0;
 /* CheckDialogue */
struct URSeqAct_InDialogue_ : public URSeqAct_InDialogue
{
    void eventCheckDialogue();
};

/* RSeqAct_InDialogue.CheckDialogue script event: the generated glue (no parameters). */
inline void URSeqAct_InDialogue_::eventCheckDialogue()
{
    ProcessEvent(FindFunctionChecked(g_026e30b0), NULL);
}

// @baa 0x015822d0
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_InDialogue::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_InDialogue_*)this)->eventCheckDialogue();
    }
    return TRUE;
}

extern FName g_026e29c4;
 /* TriggerSneakPeek */
struct URSeqAct_CrocPerformSneakPeek_ : public URSeqAct_CrocPerformSneakPeek
{
    void eventTriggerSneakPeek();
};

/* RSeqAct_CrocPerformSneakPeek.TriggerSneakPeek script event: the generated glue (no parameters). */
inline void URSeqAct_CrocPerformSneakPeek_::eventTriggerSneakPeek()
{
    ProcessEvent(FindFunctionChecked(g_026e29c4), NULL);
}

// @baa 0x0157edb0
/* The action hands the work to script once its input fires, and finishes then. */
UBOOL URSeqAct_CrocPerformSneakPeek::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_CrocPerformSneakPeek_*)this)->eventTriggerSneakPeek();
        return TRUE;
    }
    return FALSE;
}

extern FName g_026e34a0;
 /* TriggerCrocJumpOff */
struct URSeqAct_ForceCrocToJumpOff_ : public URSeqAct_ForceCrocToJumpOff
{
    void eventTriggerCrocJumpOff();
};

/* RSeqAct_ForceCrocToJumpOff.TriggerCrocJumpOff script event: the generated glue (no parameters). */
inline void URSeqAct_ForceCrocToJumpOff_::eventTriggerCrocJumpOff()
{
    ProcessEvent(FindFunctionChecked(g_026e34a0), NULL);
}

// @baa 0x0157f1a0
/* The action hands the work to script once its input fires; it never finishes here. */
UBOOL URSeqAct_ForceCrocToJumpOff::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_ForceCrocToJumpOff_*)this)->eventTriggerCrocJumpOff();
    }
    return FALSE;
}

extern FName g_026e316c;
 /* SetNR */
struct URSeqAct_SetNeedsRescue_ : public URSeqAct_SetNeedsRescue
{
    void eventSetNR();
};

/* RSeqAct_SetNeedsRescue.SetNR script event: the generated glue (no parameters). */
inline void URSeqAct_SetNeedsRescue_::eventSetNR()
{
    ProcessEvent(FindFunctionChecked(g_026e316c), NULL);
}

// @baa 0x015802c0
/* The action hands the work to script and finishes. */
UBOOL URSeqAct_SetNeedsRescue::UpdateOp(FLOAT DeltaTime)
{
    ((URSeqAct_SetNeedsRescue_*)this)->eventSetNR();
    return TRUE;
}

const TCHAR* sub_0154b870();
const TCHAR* sub_0053f6c0();
// @baa 0x0154da90
INT URHUDPrompt::vf_000()
{
    return sub_0154b870 == sub_0053f6c0;
}

struct URConfig_ : public URConfig
{
    void MarkPackageDirty(UBOOL InDirty = TRUE); /* 0x005d9570 */
};

// @baa 0x0154b230
void URConfig::PostEditChange(UProperty* P)
{
    UObject::PostEditChange(P);
    ((URConfig_*)this)->MarkPackageDirty(TRUE);
}
