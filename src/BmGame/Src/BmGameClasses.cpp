// BmGameClasses.cpp: 59 functions
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

struct C_Movie_24
{
    virtual void vf00() = 0;
    virtual void vf01() = 0;
    virtual void vf02() = 0;
    virtual void vf03() = 0;
    virtual void vf04() = 0;
    virtual void vf05() = 0;
    virtual void vf06() = 0;
    virtual void vf07() = 0;
    virtual void vf08() = 0;
    virtual INT vf24(void* P) = 0;
};

extern C_Movie_24* g_026dfcbc;
extern DWORD g_022f0fa4;
// @baa 0x01556980
INT URSeqAct_FullScreenPlayer::vf_1b0()
{
    return g_026dfcbc->vf24(&g_022f0fa4);
}

struct C_015767e0
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual void d153() = 0;
    virtual void d154() = 0;
    virtual void d155() = 0;
    virtual void d156() = 0;
    virtual void d157() = 0;
    virtual void d158() = 0;
    virtual void d159() = 0;
    virtual void d160() = 0;
    virtual void d161() = 0;
    virtual void d162() = 0;
    virtual void d163() = 0;
    virtual void d164() = 0;
    virtual void d165() = 0;
    virtual void d166() = 0;
    virtual void d167() = 0;
    virtual void d168() = 0;
    virtual void d169() = 0;
    virtual void d170() = 0;
    virtual void d171() = 0;
    virtual void d172() = 0;
    virtual void d173() = 0;
    virtual void d174() = 0;
    virtual void d175() = 0;
    virtual void d176() = 0;
    virtual void d177() = 0;
    virtual void d178() = 0;
    virtual void d179() = 0;
    virtual void d180() = 0;
    virtual void d181() = 0;
    virtual void d182() = 0;
    virtual void d183() = 0;
    virtual void d184() = 0;
    virtual void d185() = 0;
    virtual void d186() = 0;
    virtual void d187() = 0;
    virtual void d188() = 0;
    virtual void d189() = 0;
    virtual void d190() = 0;
    virtual void d191() = 0;
    virtual void d192() = 0;
    virtual void d193() = 0;
    virtual void d194() = 0;
    virtual void d195() = 0;
    virtual void d196() = 0;
    virtual void d197() = 0;
    virtual void d198() = 0;
    virtual void d199() = 0;
    virtual void d200() = 0;
    virtual void d201() = 0;
    virtual void d202() = 0;
    virtual void d203() = 0;
    virtual void d204() = 0;
    virtual void d205() = 0;
    virtual void d206() = 0;
    virtual void d207() = 0;
    virtual void d208() = 0;
    virtual void d209() = 0;
    virtual void d210() = 0;
    virtual void d211() = 0;
    virtual void d212() = 0;
    virtual void d213() = 0;
    virtual void d214() = 0;
    virtual void vf35c();
    INT sub_00783b70(INT A);
    void sub_015767e0(UINT A);
};

// @baa 0x015767e0
void C_015767e0::sub_015767e0(UINT A)
{
    sub_00783b70((INT)A);
    vf35c();
}

/* Kit gap: AActor::IsBlockedBy (0x00758100) isn't declared. */
struct AActor_ : public AActor
{
    UBOOL IsBlockedBy(const AActor* Other, const UPrimitiveComponent* Primitive) const; /* 0x00758100 */
};

// @baa 0x01558120
/* Like AActor::ShouldTrace, but the panel answers every level-geometry trace (0x80) even though it isn't world
 * geometry. (0x10 TRACE_Others, 0x20 TRACE_OnlyProjActor, 0x40 TRACE_Blocking) */
UBOOL ARElectrifiedFloorPanel::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    return (TraceFlags & 0x80)
        || (!bWorldGeometry && (TraceFlags & 0x10)
            && ((TraceFlags & 0x20)
                ? (bProjTarget || (bBlockActors && Primitive->BlockActors))
                : (!(TraceFlags & 0x40) || (SourceActor && ((AActor_*)SourceActor)->IsBlockedBy(this, Primitive)))));
}

struct C_01574e00
{
    void sub_01573870();
    INT sub_0081c2f0(FLOAT F, INT A);
    INT sub_01574e00(FLOAT F, INT A);
};

// @baa 0x01574e00
INT C_01574e00::sub_01574e00(FLOAT F, INT A)
{
    sub_01573870();
    return sub_0081c2f0(F, A);
}

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x015640e0
void URAimingConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URAimingConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Animation Aiming Config");
}

// @baa 0x0156b040
void URCharacterViewerConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URCharacterViewerConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Character Viewer Config");
}

// @baa 0x01577f70
void URBoneRescaleConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URBoneRescaleConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Animation Bone Rescale Config");
}

// @baa 0x01577fb0
void URMirrorConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URMirrorConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Animation Mirror Config");
}

// @baa 0x01577ff0
void URWeaponConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URWeaponConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Animation Weapon Config");
}

// @baa 0x01578030
void URAlternateAnimationAndWeaponConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URAlternateAnimationAndWeaponConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Alternate Animation Weapon Config");
}

// @baa 0x01576800
/* Slot 0x350 (unnamed in the kit): the point to investigate, 32 units above the pontoon. */
FVector ARPontoonBase::vf_350()
{
	return FVector(Location.X, Location.Y, Location.Z + 32.f);
}

// @baa 0x0154f2b0
/* A new, empty object of the class the editor asked for. */
UObject* URAimingConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x0154f450
/* A new, empty object of the class the editor asked for. */
UObject* URBoneRescaleConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x0154f5f0
/* A new, empty object of the class the editor asked for. */
UObject* URCharacterViewerConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x0154f790
/* A new, empty object of the class the editor asked for. */
UObject* URMirrorConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x0154f930
/* A new, empty object of the class the editor asked for. */
UObject* URPoseConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x0154fad0
/* A new, empty object of the class the editor asked for. */
UObject* URWeaponConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x0154fc70
/* A new, empty object of the class the editor asked for. */
UObject* URAlternateAnimationAndWeaponConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

/* Kit gap: TArray::Remove isn't declared; this build calls TArray<FBMScreenShakeStruct>::Remove out of line
 * (0x0156a3d0). */
template<class T> struct TArray_ : public TArray<T>
{
	void Remove(INT Index, INT Count = 1);
};

// @baa 0x0156b630
/* Updates every active shake (newest first), dropping those that have finished. */
void URBMScreenShakeModifier::UpdateFast(FLOAT DeltaTime, FVector& Loc, FRotator& Rot, FLOAT& FOV)
{
	for (INT i = Shakes.Num() - 1; i >= 0; i--)
	{
		if (UpdateShake(DeltaTime, Shakes(i), Loc, Rot, FOV))
		{
			((TArray_<FBMScreenShakeStruct>&)Shakes).Remove(i, 1);
		}
	}
}

struct C_Body_7760
{
    INT sub_016d9eb0(INT A);
};

struct ARCinematicActor_ : public ARCinematicActor
{
    INT sub_009e5850(INT A);
};

// @baa 0x01557760
void ARCinematicActor::vf_23c(INT A)
{
    ARCinematicActor_* Self = (ARCinematicActor_*)this;
    if (BodyConstrainingComponent != NULL)
        ((C_Body_7760*)BodyConstrainingComponent)->sub_016d9eb0(0);
    Self->sub_009e5850(A);
}

extern FName g_026e27d0;
	/* BMGAME_Play */
extern FName g_026e2fb8;
	/* BMGAME_Pause */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_ChangeMovieStatus_ : public URSeqAct_ChangeMovieStatus
{
	void eventPlay()
	{
		ProcessEvent(FindFunctionChecked(g_026e27d0), NULL);
	}
	void eventPause()
	{
		ProcessEvent(FindFunctionChecked(g_026e2fb8), NULL);
	}
};

// @baa 0x0157e7a0
/* Inputs: 0 play, 1 pause (both handled in script), 2 stop and rewind the movie. */
UBOOL URSeqAct_ChangeMovieStatus::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_ChangeMovieStatus_*)this)->eventPlay();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_ChangeMovieStatus_*)this)->eventPause();
	}
	if (InputLinks(2).bHasImpulse)
	{
		Movie->Stop();
		Movie->Decoder->ResetStream();
	}
	return TRUE;
}

extern FName g_026e2bf8;
	/* BMGAME_Move */
extern FName g_026e3590;
	/* BMGAME_Stop */
extern FName g_026e26f4;
	/* BMGAME_UpdateMoveSpeed */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_MovePlayer_ : public URSeqAct_MovePlayer
{
	void eventMove()
	{
		ProcessEvent(FindFunctionChecked(g_026e2bf8), NULL);
	}
	void eventStop()
	{
		ProcessEvent(FindFunctionChecked(g_026e3590), NULL);
	}
	void eventUpdateMoveSpeed()
	{
		ProcessEvent(FindFunctionChecked(g_026e26f4), NULL);
	}
};

// @baa 0x015826c0
/* Input 0 starts the move (kept queued until it takes), input 1 stops it; output 0 fires on arrival. */
UBOOL URSeqAct_MovePlayer::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse || bQueuedMove)
	{
		if (!bIsAtLocation)
		{
			bQueuedMove = TRUE;
			((URSeqAct_MovePlayer_*)this)->eventMove();
		}
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_MovePlayer_*)this)->eventStop();
		return TRUE;
	}
	if (bIsAtLocation)
	{
		bIsAtLocation = FALSE;
		FSeqOpOutputLink& Link = OutputLinks(0);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
	}
	((URSeqAct_MovePlayer_*)this)->eventUpdateMoveSpeed();
	return FALSE;
}

	/* BMGAME_SetT */
extern FName g_026e3078;
	/* BMGAME_SetS */
extern FName g_026e2cd0;
	/* BMGAME_TurnOff */
extern FName g_026e3420;
	/* BMGAME_TurnOn */
extern FName g_026e35c0;
	/* BMGAME_BatmanUse */
extern FName g_026e3628;
	/* BMGAME_TurnOnFaked */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_SetTrackingSpotlightVars_ : public URSeqAct_SetTrackingSpotlightVars
{
	void eventSetT() { ProcessEvent(FindFunctionChecked(g_026e2730), NULL); }
	void eventSetS() { ProcessEvent(FindFunctionChecked(g_026e3078), NULL); }
	void eventTurnOff() { ProcessEvent(FindFunctionChecked(g_026e2cd0), NULL); }
	void eventTurnOn() { ProcessEvent(FindFunctionChecked(g_026e3420), NULL); }
	void eventBatmanUse() { ProcessEvent(FindFunctionChecked(g_026e35c0), NULL); }
	void eventTurnOnFaked() { ProcessEvent(FindFunctionChecked(g_026e3628), NULL); }
};

// @baa 0x01581080
/* Each input forwards to its script event; the last three inputs are optional. */
UBOOL URSeqAct_SetTrackingSpotlightVars::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_SetTrackingSpotlightVars_*)this)->eventSetT();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_SetTrackingSpotlightVars_*)this)->eventSetS();
	}
	if (InputLinks(2).bHasImpulse)
	{
		((URSeqAct_SetTrackingSpotlightVars_*)this)->eventTurnOff();
	}
	if (InputLinks.Num() > 3 && InputLinks(3).bHasImpulse)
	{
		((URSeqAct_SetTrackingSpotlightVars_*)this)->eventTurnOn();
	}
	if (InputLinks.Num() > 4 && InputLinks(4).bHasImpulse)
	{
		((URSeqAct_SetTrackingSpotlightVars_*)this)->eventBatmanUse();
	}
	if (InputLinks.Num() > 5 && InputLinks(5).bHasImpulse)
	{
		((URSeqAct_SetTrackingSpotlightVars_*)this)->eventTurnOnFaked();
	}
	return TRUE;
}

extern FName g_026e2a2c;
	/* BMGAME_StartSound */
extern FName g_026e263c;
	/* BMGAME_StopSound */
extern FName g_026e31b4;
	/* BMGAME_KeyOffSound */
extern FName g_026e2924;
	/* BMGAME_ProcessDistance */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_PlayScaledDistanceSound_ : public URSeqAct_PlayScaledDistanceSound
{
	void eventStartSound() { ProcessEvent(FindFunctionChecked(g_026e2a2c), NULL); }
	void eventStopSound() { ProcessEvent(FindFunctionChecked(g_026e263c), NULL); }
	void eventKeyOffSound() { ProcessEvent(FindFunctionChecked(g_026e31b4), NULL); }
	void eventProcessDistance() { ProcessEvent(FindFunctionChecked(g_026e2924), NULL); }
};

// @baa 0x01583ff0
/* Inputs start / stop / key off the sound; every tick rescales it by distance. Stays active. */
UBOOL URSeqAct_PlayScaledDistanceSound::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_PlayScaledDistanceSound_*)this)->eventStartSound();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_PlayScaledDistanceSound_*)this)->eventStopSound();
	}
	if (InputLinks(2).bHasImpulse)
	{
		((URSeqAct_PlayScaledDistanceSound_*)this)->eventKeyOffSound();
	}
	((URSeqAct_PlayScaledDistanceSound_*)this)->eventProcessDistance();
	return FALSE;
}

extern FName g_026e2898;
	/* BMGAME_Activate1stPersonCamera */
extern FName g_026e35e8;
	/* BMGAME_Stop1stPersonCamera */
extern FName g_026e27b8;
	/* BMGAME_ForceLookDirection */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_SetStationary1stPersonCamera_ : public URSeqAct_SetStationary1stPersonCamera
{
	void eventActivate1stPersonCamera() { ProcessEvent(FindFunctionChecked(g_026e2898), NULL); }
	void eventStop1stPersonCamera() { ProcessEvent(FindFunctionChecked(g_026e35e8), NULL); }
	void eventForceLookDirection(UBOOL bForce)
	{
		struct RSeqAct_SetStationary1stPersonCamera_eventForceLookDirection_Parms
		{
			UBOOL bForce;
		} Parms;
		Parms.bForce = bForce ? TRUE : FALSE;
		ProcessEvent(FindFunctionChecked(g_026e27b8), &Parms);
	}
};

// @baa 0x01565690
/* Inputs: 0 activate, 1 stop (each fires its output), 2 / 3 turn forced look direction on / off. */
UBOOL URSeqAct_SetStationary1stPersonCamera::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_SetStationary1stPersonCamera_*)this)->eventActivate1stPersonCamera();
		FSeqOpOutputLink& Link = OutputLinks(0);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		return TRUE;
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_SetStationary1stPersonCamera_*)this)->eventStop1stPersonCamera();
		FSeqOpOutputLink& Link = OutputLinks(1);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		return TRUE;
	}
	if (InputLinks.Num() > 2 && InputLinks(2).bHasImpulse)
	{
		((URSeqAct_SetStationary1stPersonCamera_*)this)->eventForceLookDirection(TRUE);
		return TRUE;
	}
	if (InputLinks.Num() > 2 && InputLinks(3).bHasImpulse)
	{
		((URSeqAct_SetStationary1stPersonCamera_*)this)->eventForceLookDirection(FALSE);
		return TRUE;
	}
	return FALSE;
}

extern FName g_026e39b0;
	/* BMGAME_StartIntro */
extern FName g_026e30dc;
	/* BMGAME_StopAll */
extern FName g_026e3a84;
	/* BMGAME_DoFade */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_CombatMusic_ : public URSeqAct_CombatMusic
{
	void eventStartIntro() { ProcessEvent(FindFunctionChecked(g_026e39b0), NULL); }
	void eventStopAll() { ProcessEvent(FindFunctionChecked(g_026e30dc), NULL); }
	void eventDoFade(FLOAT DeltaTime)
	{
		struct RSeqAct_CombatMusic_eventDoFade_Parms
		{
			FLOAT DeltaTime;
		} Parms;
		Parms.DeltaTime = DeltaTime;
		ProcessEvent(FindFunctionChecked(g_026e3a84), &Parms);
	}
};

// @baa 0x015837e0
/* Inputs: 0 start the intro, 1 advance, 2-7 queue a theme (7 is the last one), 8 stop everything.
 * dbgImpulse records the last input seen. While fading, script gets the tick. */
UBOOL URSeqAct_CombatMusic::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_CombatMusic_*)this)->eventStartIntro();
		dbgImpulse = 0;
	}
	if (InputLinks(1).bHasImpulse)
	{
		cueAdvance = TRUE;
		dbgImpulse = 1;
	}
	if (InputLinks(2).bHasImpulse)
	{
		nextCue = Theme1;
		dbgImpulse = 2;
	}
	if (InputLinks(3).bHasImpulse)
	{
		nextCue = Theme2;
		dbgImpulse = 3;
	}
	if (InputLinks(4).bHasImpulse)
	{
		nextCue = Theme3;
		dbgImpulse = 4;
	}
	if (InputLinks(5).bHasImpulse)
	{
		nextCue = Theme4;
		dbgImpulse = 5;
	}
	if (InputLinks(6).bHasImpulse)
	{
		nextCue = Theme4;
		dbgImpulse = 6;
	}
	if (InputLinks(7).bHasImpulse)
	{
		bLastTheme = TRUE;
		nextCue = Theme5;
		dbgImpulse = 7;
	}
	if (InputLinks(8).bHasImpulse)
	{
		((URSeqAct_CombatMusic_*)this)->eventStopAll();
		dbgImpulse = 8;
	}
	if (bFading)
	{
		((URSeqAct_CombatMusic_*)this)->eventDoFade(DeltaTime);
	}
	return FALSE;
}

extern FName g_026e2ad0;
	/* BMGAME_SetInitialValues */
/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_SmoothCameraTransition_ : public URSeqAct_SmoothCameraTransition
{
	UBOOL eventSetInitialValues()
	{
		struct RSeqAct_SmoothCameraTransition_eventSetInitialValues_Parms
		{
			UBOOL ReturnValue;
		} Parms;
		Parms.ReturnValue = FALSE;
		ProcessEvent(FindFunctionChecked(g_026e2ad0), &Parms);
		return Parms.ReturnValue;
	}
	UBOOL eventTick(FLOAT DeltaTime); /* 0x01582b30 (out of line: Tick is a probe event) */
};

// @baa 0x01582be0
/* Input 0 starts the move (output 1 if the camera can't), input 1 aborts it (output 1);
 * script's Tick reports when the camera arrived (output 0). */
UBOOL URSeqAct_SmoothCameraTransition::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		bSeqActive = TRUE;
		if (!((URSeqAct_SmoothCameraTransition_*)this)->eventSetInitialValues())
		{
			FSeqOpOutputLink& Link = OutputLinks(1);
			if (!Link.bDisabled)
			{
				Link.bHasImpulse = TRUE;
			}
		}
	}
	else if (InputLinks(1).bHasImpulse)
	{
		bSeqActive = FALSE;
		FSeqOpOutputLink& Link = OutputLinks(1);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		return TRUE;
	}
	else if (bSeqActive && ((URSeqAct_SmoothCameraTransition_*)this)->eventTick(DeltaTime))
	{
		bSeqActive = FALSE;
		FSeqOpOutputLink& Link = OutputLinks(0);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		return TRUE;
	}
	return FALSE;
}

/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_ShowLevelIntroText_ : public URSeqAct_ShowLevelIntroText
{
	UBOOL eventTickHUD(FLOAT DeltaTime); /* 0x0154be20 */
};

// @baa 0x01565140
/* Input 0 shows the text, input 1 cancels it (output 1); script's TickHUD reports when it's done (output 0). */
UBOOL URSeqAct_ShowLevelIntroText::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		bSeqActive = TRUE;
	}
	else if (InputLinks(1).bHasImpulse)
	{
		bSeqActive = FALSE;
		FSeqOpOutputLink& Link = OutputLinks(1);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		return TRUE;
	}
	else if (bSeqActive && ((URSeqAct_ShowLevelIntroText_*)this)->eventTickHUD(DeltaTime))
	{
		FSeqOpOutputLink& Link = OutputLinks(0);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
		return TRUE;
	}
	return FALSE;
}

extern FName g_026e315c;
	/* BMGAME_SetFadeType */
extern UBOOL g_0266e85c;
	/* unnamed engine flag: set while capturing a movie */
/* FSeqOpOutputLink::ActivateOutputLink, inline in UE3's header (not in the kit); its
 * out-of-line copy is 008aa370. */
struct FSeqOpOutputLink_ : public FSeqOpOutputLink
{
	UBOOL ActivateOutputLink()
	{
		if (!bDisabled)
		{
			bHasImpulse = TRUE;
			return TRUE;
		}
		return FALSE;
	}
};

/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_FadeScreen_ : public URSeqAct_FadeScreen
{
	void eventSetFadeType(UBOOL bIn)
	{
		struct RSeqAct_FadeScreen_eventSetFadeType_Parms
		{
			UBOOL bIn;
		} Parms;
		Parms.bIn = bIn ? TRUE : FALSE;
		ProcessEvent(FindFunctionChecked(g_026e315c), &Parms);
	}
	UBOOL eventTickFade(FLOAT DeltaTime); /* 0x01581ae0 */
};

// @baa 0x01581b90
/* Input 0 fades out, input 1 fades in; script's TickFade reports when the fade is over
 * (output 0 after fading out, output 1 after fading in). While capturing a movie the fade is
 * skipped unless the action asks to be included. */
UBOOL URSeqAct_FadeScreen::UpdateOp(FLOAT DeltaTime)
{
	if (!IncludeInMovieCaptures && g_0266e85c)
	{
		bSeqActive = FALSE;
		if (bFadeIn)
		{
			FSeqOpOutputLink& Link = OutputLinks(1);
			if (!Link.bDisabled)
			{
				Link.bHasImpulse = TRUE;
			}
		}
		else
		{
			FSeqOpOutputLink& Link = OutputLinks(0);
			if (!Link.bDisabled)
			{
				Link.bHasImpulse = TRUE;
			}
		}
		return TRUE;
	}

	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_FadeScreen_*)this)->eventSetFadeType(TRUE);
		bSeqActive = TRUE;
	}
	else if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_FadeScreen_*)this)->eventSetFadeType(FALSE);
		bSeqActive = TRUE;
	}
	else if (bSeqActive && ((URSeqAct_FadeScreen_*)this)->eventTickFade(DeltaTime))
	{
		bSeqActive = FALSE;
		if (bFadeIn)
		{
			((FSeqOpOutputLink_&)OutputLinks(1)).ActivateOutputLink();
		}
		else
		{
			((FSeqOpOutputLink_&)OutputLinks(0)).ActivateOutputLink();
		}
		return TRUE;
	}
	return FALSE;
}

/* The action's script events (generated glue, BmGameClasses.h) */
struct URSeqAct_FadeSound_ : public URSeqAct_FadeSound
{
	void eventSetFadeType(UBOOL bIn)
	{
		struct RSeqAct_FadeSound_eventSetFadeType_Parms
		{
			UBOOL bIn;
		} Parms;
		Parms.bIn = bIn ? TRUE : FALSE;
		ProcessEvent(FindFunctionChecked(g_026e315c), &Parms);
	}
	UBOOL eventTickFade(FLOAT DeltaTime); /* 0x01581e50 */
};

// @baa 0x01581f00
/* Input 0 fades the sound out, input 1 fades it in; script's TickFade reports when the fade is
 * over (output 0 after fading out, output 1 after fading in). */
UBOOL URSeqAct_FadeSound::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_FadeSound_*)this)->eventSetFadeType(TRUE);
		bSeqActive = TRUE;
	}
	else if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_FadeSound_*)this)->eventSetFadeType(FALSE);
		bSeqActive = TRUE;
	}
	else if (bSeqActive && ((URSeqAct_FadeSound_*)this)->eventTickFade(DeltaTime))
	{
		bSeqActive = FALSE;
		if (bFadeIn)
		{
			((FSeqOpOutputLink_&)OutputLinks(1)).ActivateOutputLink();
		}
		else
		{
			((FSeqOpOutputLink_&)OutputLinks(0)).ActivateOutputLink();
		}
		return TRUE;
	}
	return FALSE;
}

// @baa 0x01575d20
// @baa 0x01575d20
FVector ARGatherRootPointBase::vf_350()
{
    FVector V;
    V.X = Location.X;
    V.Y = Location.Y;
    V.Z = Location.Z + 15.0f;
    return V;
}
