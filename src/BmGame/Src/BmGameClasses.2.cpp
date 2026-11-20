// BmGameClasses.cpp: 68 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2bb0;
	/* HitPontoon */

// @baa 0x0154aec0
/* RGatherRootPointBase.HitPontoon script event: the generated glue, out of line here. */
void ARGatherRootPointBase::eventHitPontoon(class AActor* P, FVector ContactPos)
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

// @baa 0x0154b330
/* RElectrifiedFloorPanel.CauseElectricDamageToPawn script event: the generated glue, out of line here. */
void ARElectrifiedFloorPanel::eventCauseElectricDamageToPawn(class ARPawnCharacter* CPawn)
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

// @baa 0x0154b370
/* RElectrifiedFloorPanel.IsHitReactionBehav script event: the generated glue, out of line here. */
UBOOL ARElectrifiedFloorPanel::eventIsHitReactionBehav(class URBMBehaviour* behav)
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

// @baa 0x0154b6e0
/* RCharacter.GetClassType script event: the generated glue, out of line here. */
class UClass* URCharacter::eventGetClassType()
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

// @baa 0x0154bb30
/* RSeqAct_FullScreenPlayer.UpdateRumble script event: the generated glue, out of line here. */
void URSeqAct_FullScreenPlayer::eventUpdateRumble(INT frameNo)
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

// @baa 0x0154bc40
/* RSeqAct_ModifyPostProcess.DeactivatePP script event: the generated glue, out of line here. */
void URSeqAct_ModifyPostProcess::eventDeactivatePP(class ULocalPlayer* Player)
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

// @baa 0x0154bcc0
/* RSeqAct_ModifyPostProcess.ActivatePP script event: the generated glue, out of line here. */
void URSeqAct_ModifyPostProcess::eventActivatePP(class ULocalPlayer* Player)
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

// @baa 0x0154bd30
/* RSeqAct_SetStationary1stPersonCamera.ForceLookDirection script event: the generated glue, out of line here. */
void URSeqAct_SetStationary1stPersonCamera::eventForceLookDirection(UBOOL Force)
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

// @baa 0x0154c010
/* RForensicsInvestigator.UpdateNPCCounts script event: the generated glue, out of line here. */
void URForensicsInvestigator::eventUpdateNPCCounts(class ARPlayerController* RPC, INT ArmedNPCs, INT UnarmedNPCs)
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

// @baa 0x0154c070
/* RForensicsInvestigator.TriggerInvestigateEvent script event: the generated glue, out of line here. */
void URForensicsInvestigator::eventTriggerInvestigateEvent(class ARPlayerController* RPC)
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

// @baa 0x0154c0b0
/* RForensicsInvestigator.SetNPCInfoCursor script event: the generated glue, out of line here. */
void URForensicsInvestigator::eventSetNPCInfoCursor(class ARPlayerController* RPC, INT HeartBeatType, INT WeaponType)
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

// @baa 0x0154c110
/* RForensicsInvestigator.SetBlankInfoCursor script event: the generated glue, out of line here. */
void URForensicsInvestigator::eventSetBlankInfoCursor(class ARPlayerController* RPC)
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

// @baa 0x0154c150
/* RForensicsInvestigator.CheckSetBlankInfoCursor script event: the generated glue, out of line here. */
UBOOL URForensicsInvestigator::eventCheckSetBlankInfoCursor(class ARPlayerController* RPC)
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

// @baa 0x0154c1a0
/* RForensicsInvestigator.SortInfoEntryList script event: the generated glue, out of line here. */
void URForensicsInvestigator::eventSortInfoEntryList(class ARPlayerController* RPC)
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

// @baa 0x0154c1e0
/* RForensicsInvestigator.SpecialCheckForGrates script event: the generated glue, out of line here. */
void URForensicsInvestigator::eventSpecialCheckForGrates(class ARPlayerController* RPC)
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

// @baa 0x0156ad20
/* RGFxMovieHUD.SetInfoText script event: the generated glue, out of line here. */
void URGFxMovieHUD::eventSetInfoText(const FString& Label, FLOAT TextSize, BYTE Justification)
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

// @baa 0x0156add0
/* RGFxMovieHUD.SetMainPrompt script event: the generated glue, out of line here. */
void URGFxMovieHUD::eventSetMainPrompt(INT Id, const FString& Label, FLOAT Alpha, FLOAT TextAlpha)
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

// @baa 0x0156ae90
/* RGFxMovieHUD.SetPrompt script event: the generated glue, out of line here. */
void URGFxMovieHUD::eventSetPrompt(INT Id, const FString& Label, FLOAT Alpha, FLOAT TextAlpha)
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

// @baa 0x0156af50
/* RGFxMovieInvestigate.SetInfoCursor script event: the generated glue, out of line here. */
void URGFxMovieInvestigate::eventSetInfoCursor(FLOAT X, FLOAT Y, const FString& actorName, const FString& Title, const FString& Message, UBOOL bWarningColour)
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

// @baa 0x0157f700
/* RSeqAct_IsOnPontoon.DoCheck script event: the generated glue, out of line here. */
UBOOL URSeqAct_IsOnPontoon::eventDoCheck()
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

// @baa 0x01582ba0
/* RSeqAct_SmoothCameraTransition.SetInitialValues script event: the generated glue, out of line here. */
UBOOL URSeqAct_SmoothCameraTransition::eventSetInitialValues()
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

// @baa 0x01583740
/* RSeqAct_CombatMusic.DoFade script event: the generated glue, out of line here. */
void URSeqAct_CombatMusic::eventDoFade(FLOAT Delta)
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

// @baa 0x01580b60
/* RSeqAct_SetScarecrowSearch.Search script event: the generated glue, out of line here. */
void URSeqAct_SetScarecrowSearch::eventSearch()
{
	ProcessEvent(FindFunctionChecked(g_026e2568), NULL);
}

extern FName g_026e2ab8;
	/* SetAnimNames */

// @baa 0x01580cc0
/* RSeqAct_SetScarecrowSearchAnims.SetAnimNames script event: the generated glue, out of line here. */
void URSeqAct_SetScarecrowSearchAnims::eventSetAnimNames()
{
	ProcessEvent(FindFunctionChecked(g_026e2ab8), NULL);
}

extern FName g_026e35c0;
	/* BatmanUse */

// @baa 0x01580f60
/* RSeqAct_SetTrackingSpotlightVars.BatmanUse script event: the generated glue, out of line here. */
void URSeqAct_SetTrackingSpotlightVars::eventBatmanUse()
{
	ProcessEvent(FindFunctionChecked(g_026e35c0), NULL);
}

extern FName g_026e3078;
	/* SetS */

// @baa 0x01581020
/* RSeqAct_SetTrackingSpotlightVars.SetS script event: the generated glue, out of line here. */
void URSeqAct_SetTrackingSpotlightVars::eventSetS()
{
	ProcessEvent(FindFunctionChecked(g_026e3078), NULL);
}

extern FName g_026e2844;
	/* TriggerRunTheGauntlet */

// @baa 0x01581450
/* RSeqAct_TriggerRunTheGauntlet.TriggerRunTheGauntlet script event: the generated glue, out of line here. */
void URSeqAct_TriggerRunTheGauntlet::eventTriggerRunTheGauntlet()
{
	ProcessEvent(FindFunctionChecked(g_026e2844), NULL);
}

extern FName g_026e30b0;
	/* CheckDialogue */

// @baa 0x015822a0
/* RSeqAct_InDialogue.CheckDialogue script event: the generated glue, out of line here. */
void URSeqAct_InDialogue::eventCheckDialogue()
{
	ProcessEvent(FindFunctionChecked(g_026e30b0), NULL);
}

extern FName g_026e26f4;
	/* UpdateMoveSpeed */

// @baa 0x01582660
/* RSeqAct_MovePlayer.UpdateMoveSpeed script event: the generated glue, out of line here. */
void URSeqAct_MovePlayer::eventUpdateMoveSpeed()
{
	ProcessEvent(FindFunctionChecked(g_026e26f4), NULL);
}

extern FName g_026e2bf8;
	/* Move */

// @baa 0x01582690
/* RSeqAct_MovePlayer.Move script event: the generated glue, out of line here. */
void URSeqAct_MovePlayer::eventMove()
{
	ProcessEvent(FindFunctionChecked(g_026e2bf8), NULL);
}

extern FName g_026e31bc;
	/* AdvanceResetCue */

// @baa 0x01583b90
/* RSeqAct_Music.AdvanceResetCue script event: the generated glue, out of line here. */
void URSeqAct_Music::eventAdvanceResetCue()
{
	ProcessEvent(FindFunctionChecked(g_026e31bc), NULL);
}

extern FName g_026e2db8;
	/* StopCue */

// @baa 0x01583bf0
/* RSeqAct_Music.StopCue script event: the generated glue, out of line here. */
void URSeqAct_Music::eventStopCue()
{
	ProcessEvent(FindFunctionChecked(g_026e2db8), NULL);
}

extern FName g_026e3444;
	/* StartCue */

// @baa 0x01583c20
/* RSeqAct_Music.StartCue script event: the generated glue, out of line here. */
void URSeqAct_Music::eventStartCue()
{
	ProcessEvent(FindFunctionChecked(g_026e3444), NULL);
}

extern FName g_026e31b4;
	/* KeyOffSound */

// @baa 0x01583f30
/* RSeqAct_PlayScaledDistanceSound.KeyOffSound script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound::eventKeyOffSound()
{
	ProcessEvent(FindFunctionChecked(g_026e31b4), NULL);
}

extern FName g_026e263c;
	/* StopSound */

// @baa 0x01583f60
/* RSeqAct_PlayScaledDistanceSound.StopSound script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound::eventStopSound()
{
	ProcessEvent(FindFunctionChecked(g_026e263c), NULL);
}

extern FName g_026e2924;
	/* ProcessDistance */

// @baa 0x01583f90
/* RSeqAct_PlayScaledDistanceSound.ProcessDistance script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound::eventProcessDistance()
{
	ProcessEvent(FindFunctionChecked(g_026e2924), NULL);
}

extern FName g_026e2a2c;
	/* StartSound */

// @baa 0x01583fc0
/* RSeqAct_PlayScaledDistanceSound.StartSound script event: the generated glue, out of line here. */
void URSeqAct_PlayScaledDistanceSound::eventStartSound()
{
	ProcessEvent(FindFunctionChecked(g_026e2a2c), NULL);
}

extern FName g_026e3628;
	/* BMGAME_TurnOnFaked */

// @baa 0x01580f90
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars::eventTurnOnFaked()
{
	ProcessEvent(FindFunctionChecked(g_026e3628), NULL);
}

extern FName g_026e3420;
	/* BMGAME_TurnOn */

// @baa 0x01580fc0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars::eventTurnOn()
{
	ProcessEvent(FindFunctionChecked(g_026e3420), NULL);
}

extern FName g_026e2cd0;
	/* BMGAME_TurnOff */

// @baa 0x01580ff0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars::eventTurnOff()
{
	ProcessEvent(FindFunctionChecked(g_026e2cd0), NULL);
}

extern FName g_026e2780;
	/* BMGAME_Start */

// @baa 0x015823f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Mixbin::eventStart()
{
	ProcessEvent(FindFunctionChecked(g_026e2780), NULL);
}

extern FName g_026e3590;
	/* BMGAME_Stop */

// @baa 0x01582630
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_MovePlayer::eventStop()
{
	ProcessEvent(FindFunctionChecked(g_026e3590), NULL);
}

extern FName g_026e3560;
	/* BMGAME_Handle */

// @baa 0x01583070
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_EvidenceFlagSet::eventHandle(class AActor* InOriginator, INT typeNo)
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

// @baa 0x015831e0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_EvidenceFound::eventHandle(class AActor* InOriginator, INT typeNo)
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

// @baa 0x01583450
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_ItemInvestigated::eventHandle(class AActor* InOriginator, INT typeNo)
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

// @baa 0x015841f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URSeqEvent_RopeCut::eventHandle(class AActor* InOriginator, INT typeNo)
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

// @baa 0x01580e10
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingObjectVars::eventSetT()
{
	ProcessEvent(FindFunctionChecked(g_026e2730), NULL);
}

	/* BMGAME_SetT */

// @baa 0x01581050
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetTrackingSpotlightVars::eventSetT()
{
	ProcessEvent(FindFunctionChecked(g_026e2730), NULL);
}

extern FName g_026e30f0;
	/* BMGAME_SetParameters */

// @baa 0x01581300
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SetVenomParameters::eventSetParameters()
{
	ProcessEvent(FindFunctionChecked(g_026e30f0), NULL);
}

extern FName g_026e3558;
	/* BMGAME_Unlock */

// @baa 0x015815a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_UnlockXrayMode::eventUnlock()
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

// @baa 0x015818a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Credits::eventInitHUD()
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

// @baa 0x01581b40
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_FadeScreen::eventSetFadeType(UBOOL FadeIn)
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

// @baa 0x01581eb0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_FadeSound::eventSetFadeType(UBOOL FadeIn)
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

// @baa 0x01583780
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_CombatMusic::eventStopAll()
{
	ProcessEvent(FindFunctionChecked(g_026e30dc), NULL);
}

extern FName g_026e39b0;
	/* BMGAME_StartIntro */

// @baa 0x015837b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_CombatMusic::eventStartIntro()
{
	ProcessEvent(FindFunctionChecked(g_026e39b0), NULL);
}

extern FName g_026e386c;
	/* BMGAME_AdvanceCue */

// @baa 0x01583bc0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_Music::eventAdvanceCue()
{
	ProcessEvent(FindFunctionChecked(g_026e386c), NULL);
}

	/* BMGAME_InitHUD */
// @baa 0x015818f0
/* Inputs: start, stop (which also fires the second output), pause and resume. While the credits run, script
 * Update drives them, and the action finishes once it reports they're done. */
UBOOL URSeqAct_Credits::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		eventInitHUD();
	}
	else if (InputLinks.Num() > 1 && InputLinks(1).bHasImpulse)
	{
		this->eventShutdownHUD();
		ActivateOutputLink(1);
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
// @baa 0x0157f740
/* Script does the check (and fires the outputs); the action finishes when it says so. */
UBOOL URSeqAct_IsOnPontoon::UpdateOp(FLOAT DeltaTime)
{
	return eventDoCheck() != FALSE;
}
