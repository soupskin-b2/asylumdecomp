// BmGameClasses.cpp: 68 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2bb0;
	/* HitPontoon */
struct ARGatherRootPointBase_ : public ARGatherRootPointBase
{
	void eventHitPontoon(class AActor* P, FVector ContactPos);
};

// @baa 0x0154aec0
/* RGatherRootPointBase.HitPontoon script event: the generated glue, out of line here. */
void ARGatherRootPointBase_::eventHitPontoon(class AActor* P, FVector ContactPos)
{
	struct RGatherRootPointBase_eventHitPontoon_Parms
	{
		class AActor* P;
		FVector ContactPos;
	} Parms;
	Parms.P = P;
	Parms.ContactPos = ContactPos;
	ProcessEvent(FindFunctionChecked(g_026e2bb0), &Parms);
}

extern FName g_026e3368;
	/* CauseElectricDamageToPawn */
struct ARElectrifiedFloorPanel_ : public ARElectrifiedFloorPanel
{
	void eventCauseElectricDamageToPawn(class ARPawnCharacter* CPawn);
};

// @baa 0x0154b330
/* RElectrifiedFloorPanel.CauseElectricDamageToPawn script event: the generated glue, out of line here. */
void ARElectrifiedFloorPanel_::eventCauseElectricDamageToPawn(class ARPawnCharacter* CPawn)
{
	struct RElectrifiedFloorPanel_eventCauseElectricDamageToPawn_Parms
	{
		class ARPawnCharacter* CPawn;
	} Parms;
	Parms.CPawn = CPawn;
	ProcessEvent(FindFunctionChecked(g_026e3368), &Parms);
}

extern FName g_026e33d4;
	/* IsHitReactionBehav */
struct ARElectrifiedFloorPanel__0154b370 : public ARElectrifiedFloorPanel
{
	UBOOL eventIsHitReactionBehav(class URBMBehaviour* behav);
};

// @baa 0x0154b370
/* RElectrifiedFloorPanel.IsHitReactionBehav script event: the generated glue, out of line here. */
UBOOL ARElectrifiedFloorPanel__0154b370::eventIsHitReactionBehav(class URBMBehaviour* behav)
{
	struct RElectrifiedFloorPanel_eventIsHitReactionBehav_Parms
	{
		class URBMBehaviour* behav;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.behav = behav;
	ProcessEvent(FindFunctionChecked(g_026e33d4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c30;
	/* GetClassType */
struct URCharacter_ : public URCharacter
{
	class UClass* eventGetClassType();
};

// @baa 0x0154b6e0
/* RCharacter.GetClassType script event: the generated glue, out of line here. */
class UClass* URCharacter_::eventGetClassType()
{
	struct RCharacter_eventGetClassType_Parms
	{
		class UClass* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e2c30), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e27b0;
	/* UpdateRumble */
struct URSeqAct_FullScreenPlayer_ : public URSeqAct_FullScreenPlayer
{
	void eventUpdateRumble(INT frameNo);
};

// @baa 0x0154bb30
/* RSeqAct_FullScreenPlayer.UpdateRumble script event: the generated glue, out of line here. */
void URSeqAct_FullScreenPlayer_::eventUpdateRumble(INT frameNo)
{
	struct RSeqAct_FullScreenPlayer_eventUpdateRumble_Parms
	{
		INT frameNo;
	} Parms;
	Parms.frameNo = frameNo;
	ProcessEvent(FindFunctionChecked(g_026e27b0), &Parms);
}

extern FName g_026e2ac8;
	/* DeactivatePP */
struct URSeqAct_ModifyPostProcess_ : public URSeqAct_ModifyPostProcess
{
	void eventDeactivatePP(class ULocalPlayer* Player);
};

// @baa 0x0154bc40
/* RSeqAct_ModifyPostProcess.DeactivatePP script event: the generated glue, out of line here. */
void URSeqAct_ModifyPostProcess_::eventDeactivatePP(class ULocalPlayer* Player)
{
	struct RSeqAct_ModifyPostProcess_eventDeactivatePP_Parms
	{
		class ULocalPlayer* Player;
	} Parms;
	Parms.Player = Player;
	ProcessEvent(FindFunctionChecked(g_026e2ac8), &Parms);
}

extern FName g_026e3768;
	/* UpdatePP */

// @baa 0x0154bc80
/* RSeqAct_ModifyPostProcess.UpdatePP script event: the generated glue, out of line here. */
void URSeqAct_ModifyPostProcess::eventUpdatePP(class ULocalPlayer* Player)
{
	struct RSeqAct_ModifyPostProcess_eventUpdatePP_Parms
	{
		class ULocalPlayer* Player;
	} Parms;
	Parms.Player = Player;
	ProcessEvent(FindFunctionChecked(g_026e3768), &Parms);
}

extern FName g_026e3438;
	/* ActivatePP */
struct URSeqAct_ModifyPostProcess__0154bcc0 : public URSeqAct_ModifyPostProcess
{
	void eventActivatePP(class ULocalPlayer* Player);
};

// @baa 0x0154bcc0
/* RSeqAct_ModifyPostProcess.ActivatePP script event: the generated glue, out of line here. */
void URSeqAct_ModifyPostProcess__0154bcc0::eventActivatePP(class ULocalPlayer* Player)
{
	struct RSeqAct_ModifyPostProcess_eventActivatePP_Parms
	{
		class ULocalPlayer* Player;
	} Parms;
	Parms.Player = Player;
	ProcessEvent(FindFunctionChecked(g_026e3438), &Parms);
}

extern FName g_026e27b8;
	/* ForceLookDirection */
struct URSeqAct_SetStationary1stPersonCamera_ : public URSeqAct_SetStationary1stPersonCamera
{
	void eventForceLookDirection(UBOOL Force);
};

// @baa 0x0154bd30
/* RSeqAct_SetStationary1stPersonCamera.ForceLookDirection script event: the generated glue, out of line here. */
void URSeqAct_SetStationary1stPersonCamera_::eventForceLookDirection(UBOOL Force)
{
	struct RSeqAct_SetStationary1stPersonCamera_eventForceLookDirection_Parms
	{
		UBOOL Force;
	} Parms;
	Parms.Force = Force ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e27b8), &Parms);
}

extern FName g_026e2664;
	/* TickHUD */

// @baa 0x0154be20
/* RSeqAct_ShowLevelIntroText.TickHUD script event: the generated glue, out of line here. */
UBOOL URSeqAct_ShowLevelIntroText::eventTickHUD(FLOAT DeltaTime)
{
	struct RSeqAct_ShowLevelIntroText_eventTickHUD_Parms
	{
		FLOAT DeltaTime;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e2664), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e37f4;
	/* UpdateNPCCounts */
struct URForensicsInvestigator_ : public URForensicsInvestigator
{
	void eventUpdateNPCCounts(class ARPlayerController* RPC, INT ArmedNPCs, INT UnarmedNPCs);
};

// @baa 0x0154c010
/* RForensicsInvestigator.UpdateNPCCounts script event: the generated glue, out of line here. */
void URForensicsInvestigator_::eventUpdateNPCCounts(class ARPlayerController* RPC, INT ArmedNPCs, INT UnarmedNPCs)
{
	struct RForensicsInvestigator_eventUpdateNPCCounts_Parms
	{
		class ARPlayerController* RPC;
		INT ArmedNPCs;
		INT UnarmedNPCs;
	} Parms;
	Parms.RPC = RPC;
	Parms.ArmedNPCs = ArmedNPCs;
	Parms.UnarmedNPCs = UnarmedNPCs;
	ProcessEvent(FindFunctionChecked(g_026e37f4), &Parms);
}

extern FName g_026e39fc;
	/* TriggerInvestigateEvent */
struct URForensicsInvestigator__0154c070 : public URForensicsInvestigator
{
	void eventTriggerInvestigateEvent(class ARPlayerController* RPC);
};

// @baa 0x0154c070
/* RForensicsInvestigator.TriggerInvestigateEvent script event: the generated glue, out of line here. */
void URForensicsInvestigator__0154c070::eventTriggerInvestigateEvent(class ARPlayerController* RPC)
{
	struct RForensicsInvestigator_eventTriggerInvestigateEvent_Parms
	{
		class ARPlayerController* RPC;
	} Parms;
	Parms.RPC = RPC;
	ProcessEvent(FindFunctionChecked(g_026e39fc), &Parms);
}

extern FName g_026e2c80;
	/* SetNPCInfoCursor */
struct URForensicsInvestigator__0154c0b0 : public URForensicsInvestigator
{
	void eventSetNPCInfoCursor(class ARPlayerController* RPC, INT HeartBeatType, INT WeaponType);
};

// @baa 0x0154c0b0
/* RForensicsInvestigator.SetNPCInfoCursor script event: the generated glue, out of line here. */
void URForensicsInvestigator__0154c0b0::eventSetNPCInfoCursor(class ARPlayerController* RPC, INT HeartBeatType, INT WeaponType)
{
	struct RForensicsInvestigator_eventSetNPCInfoCursor_Parms
	{
		class ARPlayerController* RPC;
		INT HeartBeatType;
		INT WeaponType;
	} Parms;
	Parms.RPC = RPC;
	Parms.HeartBeatType = HeartBeatType;
	Parms.WeaponType = WeaponType;
	ProcessEvent(FindFunctionChecked(g_026e2c80), &Parms);
}

extern FName g_026e2b64;
	/* SetBlankInfoCursor */
struct URForensicsInvestigator__0154c110 : public URForensicsInvestigator
{
	void eventSetBlankInfoCursor(class ARPlayerController* RPC);
};

// @baa 0x0154c110
/* RForensicsInvestigator.SetBlankInfoCursor script event: the generated glue, out of line here. */
void URForensicsInvestigator__0154c110::eventSetBlankInfoCursor(class ARPlayerController* RPC)
{
	struct RForensicsInvestigator_eventSetBlankInfoCursor_Parms
	{
		class ARPlayerController* RPC;
	} Parms;
	Parms.RPC = RPC;
	ProcessEvent(FindFunctionChecked(g_026e2b64), &Parms);
}

extern FName g_026e2760;
	/* CheckSetBlankInfoCursor */
struct URForensicsInvestigator__0154c150 : public URForensicsInvestigator
{
	UBOOL eventCheckSetBlankInfoCursor(class ARPlayerController* RPC);
};

// @baa 0x0154c150
/* RForensicsInvestigator.CheckSetBlankInfoCursor script event: the generated glue, out of line here. */
UBOOL URForensicsInvestigator__0154c150::eventCheckSetBlankInfoCursor(class ARPlayerController* RPC)
{
	struct RForensicsInvestigator_eventCheckSetBlankInfoCursor_Parms
	{
		class ARPlayerController* RPC;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.RPC = RPC;
	ProcessEvent(FindFunctionChecked(g_026e2760), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e266c;
	/* SortInfoEntryList */
struct URForensicsInvestigator__0154c1a0 : public URForensicsInvestigator
{
	void eventSortInfoEntryList(class ARPlayerController* RPC);
};

// @baa 0x0154c1a0
/* RForensicsInvestigator.SortInfoEntryList script event: the generated glue, out of line here. */
void URForensicsInvestigator__0154c1a0::eventSortInfoEntryList(class ARPlayerController* RPC)
{
	struct RForensicsInvestigator_eventSortInfoEntryList_Parms
	{
		class ARPlayerController* RPC;
	} Parms;
	Parms.RPC = RPC;
	ProcessEvent(FindFunctionChecked(g_026e266c), &Parms);
}

extern FName g_026e2d14;
	/* SpecialCheckForGrates */
struct URForensicsInvestigator__0154c1e0 : public URForensicsInvestigator
{
	void eventSpecialCheckForGrates(class ARPlayerController* RPC);
};

// @baa 0x0154c1e0
/* RForensicsInvestigator.SpecialCheckForGrates script event: the generated glue, out of line here. */
void URForensicsInvestigator__0154c1e0::eventSpecialCheckForGrates(class ARPlayerController* RPC)
{
	struct RForensicsInvestigator_eventSpecialCheckForGrates_Parms
	{
		class ARPlayerController* RPC;
	} Parms;
	Parms.RPC = RPC;
	ProcessEvent(FindFunctionChecked(g_026e2d14), &Parms);
}

extern FName g_026e2814;
	/* SetInfoText */
struct URGFxMovieHUD_ : public URGFxMovieHUD
{
	void eventSetInfoText(const FString& Label, FLOAT TextSize, BYTE Justification);
};

// @baa 0x0156ad20
/* RGFxMovieHUD.SetInfoText script event: the generated glue, out of line here. */
void URGFxMovieHUD_::eventSetInfoText(const FString& Label, FLOAT TextSize, BYTE Justification)
{
	struct RGFxMovieHUD_eventSetInfoText_Parms
	{
		FString Label;
		FLOAT TextSize;
		BYTE Justification;
	} Parms;
	Parms.Label = Label;
	Parms.TextSize = TextSize;
	Parms.Justification = Justification;
	ProcessEvent(FindFunctionChecked(g_026e2814), &Parms);
}

extern FName g_026e3228;
	/* SetMainPrompt */
struct URGFxMovieHUD__0156add0 : public URGFxMovieHUD
{
	void eventSetMainPrompt(INT Id, const FString& Label, FLOAT Alpha, FLOAT TextAlpha);
};

// @baa 0x0156add0
/* RGFxMovieHUD.SetMainPrompt script event: the generated glue, out of line here. */
void URGFxMovieHUD__0156add0::eventSetMainPrompt(INT Id, const FString& Label, FLOAT Alpha, FLOAT TextAlpha)
{
	struct RGFxMovieHUD_eventSetMainPrompt_Parms
	{
		INT Id;
		FString Label;
		FLOAT Alpha;
		FLOAT TextAlpha;
	} Parms;
	Parms.Id = Id;
	Parms.Label = Label;
	Parms.Alpha = Alpha;
	Parms.TextAlpha = TextAlpha;
	ProcessEvent(FindFunctionChecked(g_026e3228), &Parms);
}

extern FName g_026e3910;
	/* SetPrompt */
struct URGFxMovieHUD__0156ae90 : public URGFxMovieHUD
{
	void eventSetPrompt(INT Id, const FString& Label, FLOAT Alpha, FLOAT TextAlpha);
};

// @baa 0x0156ae90
/* RGFxMovieHUD.SetPrompt script event: the generated glue, out of line here. */
void URGFxMovieHUD__0156ae90::eventSetPrompt(INT Id, const FString& Label, FLOAT Alpha, FLOAT TextAlpha)
{
	struct RGFxMovieHUD_eventSetPrompt_Parms
	{
		INT Id;
		FString Label;
		FLOAT Alpha;
		FLOAT TextAlpha;
	} Parms;
	Parms.Id = Id;
	Parms.Label = Label;
	Parms.Alpha = Alpha;
	Parms.TextAlpha = TextAlpha;
	ProcessEvent(FindFunctionChecked(g_026e3910), &Parms);
}

extern FName g_026e3430;
	/* SetInfoCursor */
struct URGFxMovieInvestigate_ : public URGFxMovieInvestigate
{
	void eventSetInfoCursor(FLOAT X, FLOAT Y, const FString& actorName, const FString& Title, const FString& Message, UBOOL bWarningColour);
};

// @baa 0x0156af50
/* RGFxMovieInvestigate.SetInfoCursor script event: the generated glue, out of line here. */
void URGFxMovieInvestigate_::eventSetInfoCursor(FLOAT X, FLOAT Y, const FString& actorName, const FString& Title, const FString& Message, UBOOL bWarningColour)
{
	struct RGFxMovieInvestigate_eventSetInfoCursor_Parms
	{
		FLOAT X;
		FLOAT Y;
		FString actorName;
		FString Title;
		FString Message;
		UBOOL bWarningColour;
	} Parms;
	Parms.X = X;
	Parms.Y = Y;
	Parms.actorName = actorName;
	Parms.Title = Title;
	Parms.Message = Message;
	Parms.bWarningColour = bWarningColour ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3430), &Parms);
}

extern FName g_026e30a0;
	/* DoCheck */
struct URSeqAct_IsOnPontoon_ : public URSeqAct_IsOnPontoon
{
	UBOOL eventDoCheck();
};

// @baa 0x0157f700
/* RSeqAct_IsOnPontoon.DoCheck script event: the generated glue, out of line here. */
UBOOL URSeqAct_IsOnPontoon_::eventDoCheck()
{
	struct RSeqAct_IsOnPontoon_eventDoCheck_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e30a0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2ad0;
	/* SetInitialValues */
struct URSeqAct_SmoothCameraTransition_ : public URSeqAct_SmoothCameraTransition
{
	UBOOL eventSetInitialValues();
};

// @baa 0x01582ba0
/* RSeqAct_SmoothCameraTransition.SetInitialValues script event: the generated glue, out of line here. */
UBOOL URSeqAct_SmoothCameraTransition_::eventSetInitialValues()
{
	struct RSeqAct_SmoothCameraTransition_eventSetInitialValues_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2ad0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3a84;
	/* DoFade */
struct URSeqAct_CombatMusic_ : public URSeqAct_CombatMusic
{
	void eventDoFade(FLOAT Delta);
};

// @baa 0x01583740
/* RSeqAct_CombatMusic.DoFade script event: the generated glue, out of line here. */
void URSeqAct_CombatMusic_::eventDoFade(FLOAT Delta)
{
	struct RSeqAct_CombatMusic_eventDoFade_Parms
	{
		FLOAT Delta;
	} Parms;
	Parms.Delta = Delta;
	ProcessEvent(FindFunctionChecked(g_026e3a84), &Parms);
}

extern FName g_026e2568;
	/* Search */
struct URSeqAct_SetScarecrowSearch_ : public URSeqAct_SetScarecrowSearch
{
	void eventSearch();
};

// @baa 0x01580b60
/* RSeqAct_SetScarecrowSearch.Search script event: the generated glue, out of line here. */
void URSeqAct_SetScarecrowSearch_::eventSearch()
{
	ProcessEvent(FindFunctionChecked(g_026e2568), NULL);
}

extern FName g_026e2ab8;
	/* SetAnimNames */
struct URSeqAct_SetScarecrowSearchAnims_ : public URSeqAct_SetScarecrowSearchAnims
{
	void eventSetAnimNames();
};

// @baa 0x01580cc0
/* RSeqAct_SetScarecrowSearchAnims.SetAnimNames script event: the generated glue, out of line here. */
void URSeqAct_SetScarecrowSearchAnims_::eventSetAnimNames()
{
	ProcessEvent(FindFunctionChecked(g_026e2ab8), NULL);
}

extern FName g_026e35c0;
	/* BatmanUse */
struct URSeqAct_SetTrackingSpotlightVars_ : public URSeqAct_SetTrackingSpotlightVars
{
	void eventBatmanUse();
};

// @baa 0x01580f60
/* RSeqAct_SetTrackingSpotlightVars.BatmanUse script event: the generated glue, out of line here. */
void URSeqAct_SetTrackingSpotlightVars_::eventBatmanUse()
{
	ProcessEvent(FindFunctionChecked(g_026e35c0), NULL);
}

extern FName g_026e3078;
	/* SetS */
struct URSeqAct_SetTrackingSpotlightVars__01581020 : public URSeqAct_SetTrackingSpotlightVars
{
	void eventSetS();
};

// @baa 0x01581020
/* RSeqAct_SetTrackingSpotlightVars.SetS script event: the generated glue, out of line here. */
void URSeqAct_SetTrackingSpotlightVars__01581020::eventSetS()
{
	ProcessEvent(FindFunctionChecked(g_026e3078), NULL);
}

extern FName g_026e2844;
	/* TriggerRunTheGauntlet */
struct URSeqAct_TriggerRunTheGauntlet_ : public URSeqAct_TriggerRunTheGauntlet
{
	void eventTriggerRunTheGauntlet();
};

// @baa 0x01581450
/* RSeqAct_TriggerRunTheGauntlet.TriggerRunTheGauntlet script event: the generated glue, out of line here. */
void URSeqAct_TriggerRunTheGauntlet_::eventTriggerRunTheGauntlet()
{
	ProcessEvent(FindFunctionChecked(g_026e2844), NULL);
}

extern FName g_026e30b0;
	/* CheckDialogue */
struct URSeqAct_InDialogue_ : public URSeqAct_InDialogue
{
	void eventCheckDialogue();
};

// @baa 0x015822a0
/* RSeqAct_InDialogue.CheckDialogue script event: the generated glue, out of line here. */
void URSeqAct_InDialogue_::eventCheckDialogue()
{
	ProcessEvent(FindFunctionChecked(g_026e30b0), NULL);
}

extern FName g_026e26f4;
	/* UpdateMoveSpeed */
struct URSeqAct_MovePlayer_ : public URSeqAct_MovePlayer
{
	void eventUpdateMoveSpeed();
};

// @baa 0x01582660
/* RSeqAct_MovePlayer.UpdateMoveSpeed script event: the generated glue, out of line here. */
void URSeqAct_MovePlayer_::eventUpdateMoveSpeed()
{
	ProcessEvent(FindFunctionChecked(g_026e26f4), NULL);
}

extern FName g_026e2bf8;
	/* Move */
struct URSeqAct_MovePlayer__01582690 : public URSeqAct_MovePlayer
{
	void eventMove();
};

// @baa 0x01582690
/* RSeqAct_MovePlayer.Move script event: the generated glue, out of line here. */
void URSeqAct_MovePlayer__01582690::eventMove()
{
	ProcessEvent(FindFunctionChecked(g_026e2bf8), NULL);
}

extern FName g_026e31bc;
	/* AdvanceResetCue */
struct URSeqAct_Music_ : public URSeqAct_Music
{
	void eventAdvanceResetCue();
};

// @baa 0x01583b90
/* RSeqAct_Music.AdvanceResetCue script event: the generated glue, out of line here. */
void URSeqAct_Music_::eventAdvanceResetCue()
{
	ProcessEvent(FindFunctionChecked(g_026e31bc), NULL);
}

extern FName g_026e2db8;
	/* StopCue */
struct URSeqAct_Music__01583bf0 : public URSeqAct_Music
{
	void eventStopCue();
};

// @baa 0x01583bf0
/* RSeqAct_Music.StopCue script event: the generated glue, out of line here. */
void URSeqAct_Music__01583bf0::eventStopCue()
{
	ProcessEvent(FindFunctionChecked(g_026e2db8), NULL);
}

extern FName g_026e3444;
	/* StartCue */
struct URSeqAct_Music__01583c20 : public URSeqAct_Music
{
	void eventStartCue();
};

// @baa 0x01583c20
/* RSeqAct_Music.StartCue script event: the generated glue, out of line here. */
void URSeqAct_Music__01583c20::eventStartCue()
{
	ProcessEvent(FindFunctionChecked(g_026e3444), NULL);
}

extern FName g_026e31b4;
	/* KeyOffSound */
struct URSeqAct_PlayScaledDistanceSound_ : public URSeqAct_PlayScaledDistanceSound
{
	void eventKeyOffSound();
};

// @baa 0x01583f30
/* RSeqAct_PlayScaledDistanceSound.KeyOffSound script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound_::eventKeyOffSound()
{
	ProcessEvent(FindFunctionChecked(g_026e31b4), NULL);
}

extern FName g_026e263c;
	/* StopSound */
struct URSeqAct_PlayScaledDistanceSound__01583f60 : public URSeqAct_PlayScaledDistanceSound
{
	void eventStopSound();
};

// @baa 0x01583f60
/* RSeqAct_PlayScaledDistanceSound.StopSound script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound__01583f60::eventStopSound()
{
	ProcessEvent(FindFunctionChecked(g_026e263c), NULL);
}

extern FName g_026e2924;
	/* ProcessDistance */
struct URSeqAct_PlayScaledDistanceSound__01583f90 : public URSeqAct_PlayScaledDistanceSound
{
	void eventProcessDistance();
};

// @baa 0x01583f90
/* RSeqAct_PlayScaledDistanceSound.ProcessDistance script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound__01583f90::eventProcessDistance()
{
	ProcessEvent(FindFunctionChecked(g_026e2924), NULL);
}

extern FName g_026e2a2c;
	/* StartSound */
struct URSeqAct_PlayScaledDistanceSound__01583fc0 : public URSeqAct_PlayScaledDistanceSound
{
	void eventStartSound();
};

// @baa 0x01583fc0
/* RSeqAct_PlayScaledDistanceSound.StartSound script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound__01583fc0::eventStartSound()
{
	ProcessEvent(FindFunctionChecked(g_026e2a2c), NULL);
}

extern FName g_026e3628;
	/* BMGAME_TurnOnFaked */
struct URSeqAct_SetTrackingSpotlightVars__01580f90 : public URSeqAct_SetTrackingSpotlightVars
{
	void eventTurnOnFaked();
};

// @baa 0x01580f90
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars__01580f90::eventTurnOnFaked()
{
	ProcessEvent(FindFunctionChecked(g_026e3628), NULL);
}

extern FName g_026e3420;
	/* BMGAME_TurnOn */
struct URSeqAct_SetTrackingSpotlightVars__01580fc0 : public URSeqAct_SetTrackingSpotlightVars
{
	void eventTurnOn();
};

// @baa 0x01580fc0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars__01580fc0::eventTurnOn()
{
	ProcessEvent(FindFunctionChecked(g_026e3420), NULL);
}

extern FName g_026e2cd0;
	/* BMGAME_TurnOff */
struct URSeqAct_SetTrackingSpotlightVars__01580ff0 : public URSeqAct_SetTrackingSpotlightVars
{
	void eventTurnOff();
};

// @baa 0x01580ff0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars__01580ff0::eventTurnOff()
{
	ProcessEvent(FindFunctionChecked(g_026e2cd0), NULL);
}

extern FName g_026e2780;
	/* BMGAME_Start */
struct URSeqAct_Mixbin_ : public URSeqAct_Mixbin
{
	void eventStart();
};

// @baa 0x015823f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Mixbin_::eventStart()
{
	ProcessEvent(FindFunctionChecked(g_026e2780), NULL);
}

extern FName g_026e3590;
	/* BMGAME_Stop */
struct URSeqAct_MovePlayer__01582630 : public URSeqAct_MovePlayer
{
	void eventStop();
};

// @baa 0x01582630
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_MovePlayer__01582630::eventStop()
{
	ProcessEvent(FindFunctionChecked(g_026e3590), NULL);
}

extern FName g_026e3560;
	/* BMGAME_Handle */
struct URSeqEvent_EvidenceFlagSet_ : public URSeqEvent_EvidenceFlagSet
{
	UBOOL eventHandle(class AActor* InOriginator, INT typeNo);
};

// @baa 0x01583070
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_EvidenceFlagSet_::eventHandle(class AActor* InOriginator, INT typeNo)
{
	struct RSeqEvent_EvidenceFlagSet_eventHandle_Parms
	{
		class AActor* InOriginator;
		INT typeNo;
		UBOOL ReturnValue;
	} Parms;
	Parms.InOriginator = InOriginator;
	Parms.typeNo = typeNo;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3560), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_Handle */
struct URSeqEvent_EvidenceFound_ : public URSeqEvent_EvidenceFound
{
	UBOOL eventHandle(class AActor* InOriginator, INT typeNo);
};

// @baa 0x015831e0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_EvidenceFound_::eventHandle(class AActor* InOriginator, INT typeNo)
{
	struct RSeqEvent_EvidenceFound_eventHandle_Parms
	{
		class AActor* InOriginator;
		INT typeNo;
		UBOOL ReturnValue;
	} Parms;
	Parms.InOriginator = InOriginator;
	Parms.typeNo = typeNo;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3560), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_Handle */
struct URSeqEvent_ItemInvestigated_ : public URSeqEvent_ItemInvestigated
{
	UBOOL eventHandle(class AActor* InOriginator, INT typeNo);
};

// @baa 0x01583450
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_ItemInvestigated_::eventHandle(class AActor* InOriginator, INT typeNo)
{
	struct RSeqEvent_ItemInvestigated_eventHandle_Parms
	{
		class AActor* InOriginator;
		INT typeNo;
		UBOOL ReturnValue;
	} Parms;
	Parms.InOriginator = InOriginator;
	Parms.typeNo = typeNo;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3560), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_Handle */
struct URSeqEvent_RopeCut_ : public URSeqEvent_RopeCut
{
	UBOOL eventHandle(class AActor* InOriginator, INT typeNo);
};

// @baa 0x015841f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_RopeCut_::eventHandle(class AActor* InOriginator, INT typeNo)
{
	struct RSeqEvent_RopeCut_eventHandle_Parms
	{
		class AActor* InOriginator;
		INT typeNo;
		UBOOL ReturnValue;
	} Parms;
	Parms.InOriginator = InOriginator;
	Parms.typeNo = typeNo;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3560), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2730;
	/* BMGAME_SetT */
struct URSeqAct_SetTrackingObjectVars_ : public URSeqAct_SetTrackingObjectVars
{
	void eventSetT();
};

// @baa 0x01580e10
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingObjectVars_::eventSetT()
{
	ProcessEvent(FindFunctionChecked(g_026e2730), NULL);
}

	/* BMGAME_SetT */
struct URSeqAct_SetTrackingSpotlightVars__01581050 : public URSeqAct_SetTrackingSpotlightVars
{
	void eventSetT();
};

// @baa 0x01581050
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars__01581050::eventSetT()
{
	ProcessEvent(FindFunctionChecked(g_026e2730), NULL);
}

extern FName g_026e30f0;
	/* BMGAME_SetParameters */
struct URSeqAct_SetVenomParameters_ : public URSeqAct_SetVenomParameters
{
	void eventSetParameters();
};

// @baa 0x01581300
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetVenomParameters_::eventSetParameters()
{
	ProcessEvent(FindFunctionChecked(g_026e30f0), NULL);
}

extern FName g_026e3558;
	/* BMGAME_Unlock */
struct URSeqAct_UnlockXrayMode_ : public URSeqAct_UnlockXrayMode
{
	void eventUnlock();
};

// @baa 0x015815a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_UnlockXrayMode_::eventUnlock()
{
	ProcessEvent(FindFunctionChecked(g_026e3558), NULL);
}

extern FName g_026e2c00;
	/* BMGAME_ShutdownHUD */

// @baa 0x01581870
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Credits::eventShutdownHUD()
{
	ProcessEvent(FindFunctionChecked(g_026e2c00), NULL);
}

extern FName g_026e2644;
	/* BMGAME_InitHUD */
struct URSeqAct_Credits__015818a0 : public URSeqAct_Credits
{
	void eventInitHUD();
};

// @baa 0x015818a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Credits__015818a0::eventInitHUD()
{
	ProcessEvent(FindFunctionChecked(g_026e2644), NULL);
}

extern FName g_026e375c;
	/* BMGAME_TickFade */

// @baa 0x01581ae0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqAct_FadeScreen::eventTickFade(FLOAT DeltaTime)
{
	struct RSeqAct_FadeScreen_eventTickFade_Parms
	{
		FLOAT DeltaTime;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e375c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e315c;
	/* BMGAME_SetFadeType */
struct URSeqAct_FadeScreen__01581b40 : public URSeqAct_FadeScreen
{
	void eventSetFadeType(UBOOL FadeIn);
};

// @baa 0x01581b40
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_FadeScreen__01581b40::eventSetFadeType(UBOOL FadeIn)
{
	struct RSeqAct_FadeScreen_eventSetFadeType_Parms
	{
		UBOOL FadeIn;
	} Parms;
	Parms.FadeIn = FadeIn ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e315c), &Parms);
}

	/* BMGAME_TickFade */

// @baa 0x01581e50
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqAct_FadeSound::eventTickFade(FLOAT DeltaTime)
{
	struct RSeqAct_FadeSound_eventTickFade_Parms
	{
		FLOAT DeltaTime;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e375c), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_SetFadeType */
struct URSeqAct_FadeSound__01581eb0 : public URSeqAct_FadeSound
{
	void eventSetFadeType(UBOOL FadeIn);
};

// @baa 0x01581eb0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_FadeSound__01581eb0::eventSetFadeType(UBOOL FadeIn)
{
	struct RSeqAct_FadeSound_eventSetFadeType_Parms
	{
		UBOOL FadeIn;
	} Parms;
	Parms.FadeIn = FadeIn ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e315c), &Parms);
}

extern FName g_026e30dc;
	/* BMGAME_StopAll */
struct URSeqAct_CombatMusic__01583780 : public URSeqAct_CombatMusic
{
	void eventStopAll();
};

// @baa 0x01583780
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_CombatMusic__01583780::eventStopAll()
{
	ProcessEvent(FindFunctionChecked(g_026e30dc), NULL);
}

extern FName g_026e39b0;
	/* BMGAME_StartIntro */
struct URSeqAct_CombatMusic__015837b0 : public URSeqAct_CombatMusic
{
	void eventStartIntro();
};

// @baa 0x015837b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_CombatMusic__015837b0::eventStartIntro()
{
	ProcessEvent(FindFunctionChecked(g_026e39b0), NULL);
}

extern FName g_026e386c;
	/* BMGAME_AdvanceCue */
struct URSeqAct_Music__01583bc0 : public URSeqAct_Music
{
	void eventAdvanceCue();
};

// @baa 0x01583bc0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Music__01583bc0::eventAdvanceCue()
{
	ProcessEvent(FindFunctionChecked(g_026e386c), NULL);
}

	/* BMGAME_InitHUD */
/* Kit gaps: the script events' generated glue (BmGameClasses.h); ShutdownHUD's copy is out of line (0x01581870),
 * and USeqAct_Latent's Update glue is out of line too (0x008aa600). */
struct URSeqAct_Credits__015818f0 : public URSeqAct_Credits
{
	void eventInitHUD()
	{
		ProcessEvent(FindFunctionChecked(g_026e2644), NULL);
	}
};

// @baa 0x015818f0
/* Inputs: start, stop (which also fires the second output), pause and resume. While the credits run, script
 * Update drives them, and the action finishes once it reports they're done. */
UBOOL URSeqAct_Credits::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_Credits__015818f0*)this)->eventInitHUD();
	}
	else if (InputLinks.Num() > 1 && InputLinks(1).bHasImpulse)
	{
		((URSeqAct_Credits__015818f0*)this)->eventShutdownHUD();
		sub_008bd720(1);
	}
	else if (InputLinks.Num() > 2 && InputLinks(2).bHasImpulse)
	{
		bCreditsPaused = TRUE;
	}
	else if (InputLinks.Num() > 3 && InputLinks(3).bHasImpulse)
	{
		bCreditsPaused = FALSE;
	}
	else if (bCreditsActive)
	{
		return !this->eventUpdate(DeltaTime);
	}
	return FALSE;
}

extern FName g_026e3520;
	/* BMGAME_Set */
extern FName g_026e29a4;
	/* BMGAME_Clear */
/* Kit gap: the script events' generated glue (BmGameClasses.h). */
struct URSeqAct_ScarecrowEffect_ : public URSeqAct_ScarecrowEffect
{
	void eventSet()
	{
		ProcessEvent(FindFunctionChecked(g_026e3520), NULL);
	}
	void eventClear()
	{
		ProcessEvent(FindFunctionChecked(g_026e29a4), NULL);
	}
};

// @baa 0x0157fe70
/* The first input calls script Set, the second Clear; the action finishes at once. */
UBOOL URSeqAct_ScarecrowEffect::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_ScarecrowEffect_*)this)->eventSet();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_ScarecrowEffect_*)this)->eventClear();
	}
	return TRUE;
}

	/* BMGAME_Clear */
/* Kit gap: the script events' generated glue (BmGameClasses.h). */
struct URSeqAct_MakeBatmanLookAtItems_ : public URSeqAct_MakeBatmanLookAtItems
{
	void eventSet()
	{
		ProcessEvent(FindFunctionChecked(g_026e3520), NULL);
	}
	void eventClear()
	{
		ProcessEvent(FindFunctionChecked(g_026e29a4), NULL);
	}
};

// @baa 0x0157f9f0
/* The first input calls script Set, the second Clear; the action finishes at once. */
UBOOL URSeqAct_MakeBatmanLookAtItems::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_MakeBatmanLookAtItems_*)this)->eventSet();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_MakeBatmanLookAtItems_*)this)->eventClear();
	}
	return TRUE;
}

	/* BMGAME_Unlock */
extern FName g_026e3410;
	/* BMGAME_Lock */
/* Kit gap: the script events' generated glue (BmGameClasses.h). */
struct URSeqAct_SetRoomUnlocked_ : public URSeqAct_SetRoomUnlocked
{
	void eventUnlock()
	{
		ProcessEvent(FindFunctionChecked(g_026e3558), NULL);
	}
	void eventLock()
	{
		ProcessEvent(FindFunctionChecked(g_026e3410), NULL);
	}
};

// @baa 0x01580570
/* The first input calls script Unlock, the second Lock; the action finishes at once. */
UBOOL URSeqAct_SetRoomUnlocked::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_SetRoomUnlocked_*)this)->eventUnlock();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_SetRoomUnlocked_*)this)->eventLock();
	}
	return TRUE;
}

extern FName g_026e2884;
	/* BMGAME_FocusIn */
extern FName g_026e2a48;
	/* BMGAME_FocusOut */
/* Kit gap: the script events' generated glue (BmGameClasses.h). */
struct URSeqAct_SetScarecrowFocus_ : public URSeqAct_SetScarecrowFocus
{
	void eventFocusIn()
	{
		ProcessEvent(FindFunctionChecked(g_026e2884), NULL);
	}
	void eventFocusOut()
	{
		ProcessEvent(FindFunctionChecked(g_026e2a48), NULL);
	}
};

// @baa 0x01580740
/* The first input calls script FocusIn, the second FocusOut; the action finishes at once. */
UBOOL URSeqAct_SetScarecrowFocus::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_SetScarecrowFocus_*)this)->eventFocusIn();
	}
	if (InputLinks(1).bHasImpulse)
	{
		((URSeqAct_SetScarecrowFocus_*)this)->eventFocusOut();
	}
	return TRUE;
}

extern FName g_026e3844;
	/* BMGAME_GetStatus */
/* Kit gap: the script event's generated glue (BmGameClasses.h). */
struct URSeqAct_GetThugStatus_ : public URSeqAct_GetThugStatus
{
	void eventGetStatus()
	{
		ProcessEvent(FindFunctionChecked(g_026e3844), NULL);
	}
};

// @baa 0x0157f300
/* Script works out the thug's status and picks the output; that output fires (USequenceOp::ActivateOutputLink,
 * inlined). */
UBOOL URSeqAct_GetThugStatus::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		((URSeqAct_GetThugStatus_*)this)->eventGetStatus();
		FSeqOpOutputLink& Link = OutputLinks(OutputToFire);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
	}
	return TRUE;
}

	/* BMGAME_DoCheck */
/* Kit gap: the script event's generated glue (BmGameClasses.h). */
struct URSeqAct_IsOnPontoon__0157f740 : public URSeqAct_IsOnPontoon
{
	UBOOL eventDoCheck()
	{
		struct RSeqAct_IsOnPontoon_eventDoCheck_Parms
		{
			UBOOL ReturnValue;
		} Parms;
		Parms.ReturnValue = FALSE;
		ProcessEvent(FindFunctionChecked(g_026e30a0), &Parms);
		return Parms.ReturnValue;
	}
};

// @baa 0x0157f740
/* Script does the check (and fires the outputs); the action finishes when it says so. */
UBOOL URSeqAct_IsOnPontoon::UpdateOp(FLOAT DeltaTime)
{
	return ((URSeqAct_IsOnPontoon__0157f740*)this)->eventDoCheck() != FALSE;
}
