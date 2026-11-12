// BmGameClasses.cpp: 25 functions
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
struct URSeqAct_ModifyPostProcess__0154bc80 : public URSeqAct_ModifyPostProcess
{
	void eventUpdatePP(class ULocalPlayer* Player);
};

// @baa 0x0154bc80
/* RSeqAct_ModifyPostProcess.UpdatePP script event: the generated glue, out of line here. */
void URSeqAct_ModifyPostProcess__0154bc80::eventUpdatePP(class ULocalPlayer* Player)
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
struct URSeqAct_ShowLevelIntroText_ : public URSeqAct_ShowLevelIntroText
{
	UBOOL eventTickHUD(FLOAT DeltaTime);
};

// @baa 0x0154be20
/* RSeqAct_ShowLevelIntroText.TickHUD script event: the generated glue, out of line here. */
UBOOL URSeqAct_ShowLevelIntroText_::eventTickHUD(FLOAT DeltaTime)
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
