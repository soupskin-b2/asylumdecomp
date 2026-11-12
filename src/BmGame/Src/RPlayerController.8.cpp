// RPlayerController.cpp: 42 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3194;
	/* GetPathToWithoutBeingSeenFrom */
struct ARBMRouteRequest_HideOnCorner_ : public ARBMRouteRequest_HideOnCorner
{
	class URBMRouterPath* eventGetPathToWithoutBeingSeenFrom(FVector Dest, FVector HideFromPos);
};

// @baa 0x0160dec0
/* RBMRouteRequest_HideOnCorner.GetPathToWithoutBeingSeenFrom script event: the generated glue, out of line here. */
class URBMRouterPath* ARBMRouteRequest_HideOnCorner_::eventGetPathToWithoutBeingSeenFrom(FVector Dest, FVector HideFromPos)
{
	struct RBMRouteRequest_HideOnCorner_eventGetPathToWithoutBeingSeenFrom_Parms
	{
		FVector Dest;
		FVector HideFromPos;
		class URBMRouterPath* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.Dest = Dest;
	Parms.HideFromPos = HideFromPos;
	ProcessEvent(FindFunctionChecked(g_026e3194), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3698;
	/* LockDestCorner */
struct ARBMRouteRequest_HideOnCorner__0160de60 : public ARBMRouteRequest_HideOnCorner
{
	void eventLockDestCorner();
};

// @baa 0x0160de60
/* RBMRouteRequest_HideOnCorner.LockDestCorner script event: the generated glue, out of line here. */
void ARBMRouteRequest_HideOnCorner__0160de60::eventLockDestCorner()
{
	ProcessEvent(FindFunctionChecked(g_026e3698), NULL);
}

extern FName g_026e2dc8;
	/* UnlockDestCorner */
struct ARBMRouteRequest_HideOnCorner__0160de90 : public ARBMRouteRequest_HideOnCorner
{
	void eventUnlockDestCorner();
};

// @baa 0x0160de90
/* RBMRouteRequest_HideOnCorner.UnlockDestCorner script event: the generated glue, out of line here. */
void ARBMRouteRequest_HideOnCorner__0160de90::eventUnlockDestCorner()
{
	ProcessEvent(FindFunctionChecked(g_026e2dc8), NULL);
}

extern FName g_026e3474;
	/* GrappleStopCollidingWorld */
struct ARPlayerController_ : public ARPlayerController
{
	void eventGrappleStopCollidingWorld();
};

// @baa 0x016122c0
/* RPlayerController.GrappleStopCollidingWorld script event: the generated glue, out of line here. */
void ARPlayerController_::eventGrappleStopCollidingWorld()
{
	ProcessEvent(FindFunctionChecked(g_026e3474), NULL);
}

extern FName g_026e3a48;
	/* SearchNewAmbientSound */
struct ARPlayerController__016125c0 : public ARPlayerController
{
	void eventSearchNewAmbientSound();
};

// @baa 0x016125c0
/* RPlayerController.SearchNewAmbientSound script event: the generated glue, out of line here. */
void ARPlayerController__016125c0::eventSearchNewAmbientSound()
{
	ProcessEvent(FindFunctionChecked(g_026e3a48), NULL);
}

/* ARPlayerController::ShouldIReallyLand (0x16181f0) isn't declared in the kit. */
struct ARPlayerController__016f93c0 : public ARPlayerController
{
    UBOOL ShouldIReallyLand(class AActor* HitFloor, FVector& HitNormal);
};

// @baa 0x016f93c0
void ARPlayerController::execShouldIReallyLand(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, HitFloor);
    P_GET_STRUCT_REF(FVector, HitNormal);
    P_FINISH;
    *(UBOOL*)Result = ((ARPlayerController__016f93c0*)this)->ShouldIReallyLand(HitFloor, HitNormal);
}

// @baa 0x0171daf0
void ARPlayerController::execCheckContentExists(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(Path);
    P_FINISH;
    *(UBOOL*)Result = CheckContentExists(Path);
}

// @baa 0x0171dbb0
void ARPlayerController::execIsMoviePresent(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(Path);
    P_FINISH;
    *(UBOOL*)Result = IsMoviePresent(Path);
}

// @baa 0x016fa1f0
void ARPlayerController::execLive_LoadSavedGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Id);
    P_FINISH;
    *(UBOOL*)Result = Live_LoadSavedGame(Id);
}

// @baa 0x016fa260
void ARPlayerController::execLive_LoadSavedGameFast(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Id);
    P_FINISH;
    *(INT*)Result = Live_LoadSavedGameFast(Id);
}

// @baa 0x016fa340
void ARPlayerController::execLive_DeleteSavedGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Id);
    P_FINISH;
    *(UBOOL*)Result = Live_DeleteSavedGame(Id);
}

/* Kit gap: ARPlayerController::GetLeftRightAxis (out of line at 01614b70) isn't declared. */
struct ARPlayerController__016f8f30 : public ARPlayerController
{
	FVector GetLeftRightAxis(FVector& ForwardAxis, INT Side);	/* 0x01614b70 */
};

// @baa 0x016f8f30
void ARPlayerController::execGetLeftRightAxis(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, ForwardAxis);
	P_GET_INT_OPTX(Side, 1);
	P_FINISH;
	*(FVector*)Result = ((ARPlayerController__016f8f30*)this)->GetLeftRightAxis(ForwardAxis, Side);
}

extern FName g_026e2c28;
	/* BMGAME_ForceNotDestroy */
struct ARSpecialMoveInstance_ : public ARSpecialMoveInstance
{
	UBOOL eventForceNotDestroy();
};

// @baa 0x016128b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARSpecialMoveInstance_::eventForceNotDestroy()
{
	struct RSpecialMoveInstance_eventForceNotDestroy_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2c28), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3568;
	/* BMGAME_CancelSpecialMove */
struct ARSpecialMoveInstance__01612880 : public ARSpecialMoveInstance
{
	void eventCancelSpecialMove();
};

// @baa 0x01612880
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARSpecialMoveInstance__01612880::eventCancelSpecialMove()
{
	ProcessEvent(FindFunctionChecked(g_026e3568), NULL);
}

extern FName g_026e31e4;
	/* BMGAME_IsStunned */
struct ARBMAIController_ : public ARBMAIController
{
	UBOOL eventIsStunned();
};

// @baa 0x015d8a70
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARBMAIController_::eventIsStunned()
{
	struct RBMAIController_eventIsStunned_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e31e4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2708;
	/* BMGAME_IsOnSamePath */
struct ARBMPathNode_SpecialMove_ : public ARBMPathNode_SpecialMove
{
	UBOOL eventIsOnSamePath(class ARPathNode* TestNode);
};

// @baa 0x0160db90
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARBMPathNode_SpecialMove_::eventIsOnSamePath(class ARPathNode* TestNode)
{
	struct RBMPathNode_SpecialMove_eventIsOnSamePath_Parms
	{
		class ARPathNode* TestNode;
		UBOOL ReturnValue;
	} Parms;
	Parms.TestNode = TestNode;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2708), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e295c;
	/* BMGAME_IsValidForStrike */
struct ARPawnBossVenomBase_ : public ARPawnBossVenomBase
{
	UBOOL eventIsValidForStrike(class ARPawnCombat* TestPawn, class UClass* DamageType);
};

// @baa 0x0160e540
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPawnBossVenomBase_::eventIsValidForStrike(class ARPawnCombat* TestPawn, class UClass* DamageType)
{
	struct RPawnBossVenomBase_eventIsValidForStrike_Parms
	{
		class ARPawnCombat* TestPawn;
		class UClass* DamageType;
		UBOOL ReturnValue;
	} Parms;
	Parms.TestPawn = TestPawn;
	Parms.DamageType = DamageType;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e295c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3184;
	/* BMGAME_CanReachItem */
struct ARPlayerController__01612690 : public ARPlayerController
{
	UBOOL eventCanReachItem(class AActor* CheckActor);
};

// @baa 0x01612690
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARPlayerController__01612690::eventCanReachItem(class AActor* CheckActor)
{
	struct RPlayerController_eventCanReachItem_Parms
	{
		class AActor* CheckActor;
		UBOOL ReturnValue;
	} Parms;
	Parms.CheckActor = CheckActor;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3184), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c14;
	/* BMGAME_TriggerSpecialMove */
struct URSpecialMoveConfig_ : public URSpecialMoveConfig
{
	void eventTriggerSpecialMove(class ARPlayerController* Controller, FEnvironmentSpecialMoveLocator MoveLocation);
};

// @baa 0x01612950
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSpecialMoveConfig_::eventTriggerSpecialMove(class ARPlayerController* Controller, FEnvironmentSpecialMoveLocator MoveLocation)
{
	struct RSpecialMoveConfig_eventTriggerSpecialMove_Parms
	{
		class ARPlayerController* Controller;
		FEnvironmentSpecialMoveLocator MoveLocation;
	} Parms;
	Parms.Controller = Controller;
	Parms.MoveLocation = MoveLocation;
	ProcessEvent(FindFunctionChecked(g_026e2c14), &Parms);
}

extern FName g_026e364c;
	/* BMGAME_AddTransientCosts */
struct ARBMRouteRequest_BuildComparisonList_ : public ARBMRouteRequest_BuildComparisonList
{
	void eventAddTransientCosts();
};

// @baa 0x0160dde0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARBMRouteRequest_BuildComparisonList_::eventAddTransientCosts()
{
	ProcessEvent(FindFunctionChecked(g_026e364c), NULL);
}

extern FName g_026e25fc;
	/* BMGAME_ScorePath */
struct ARBMRouteRequest_NervousSearch_ : public ARBMRouteRequest_NervousSearch
{
	FLOAT eventScorePath(class URBMRouterPath* TestPath, FLOAT LastSeenTime);
};

// @baa 0x0160df80
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARBMRouteRequest_NervousSearch_::eventScorePath(class URBMRouterPath* TestPath, FLOAT LastSeenTime)
{
	struct RBMRouteRequest_NervousSearch_eventScorePath_Parms
	{
		class URBMRouterPath* TestPath;
		FLOAT LastSeenTime;
		FLOAT ReturnValue;
	} Parms;
	Parms.TestPath = TestPath;
	Parms.LastSeenTime = LastSeenTime;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e25fc), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e36b8;
	/* BMGAME_GetLastSeenTime */
struct ARBMRouteRequest_NervousSearch__0160dfe0 : public ARBMRouteRequest_NervousSearch
{
	FLOAT eventGetLastSeenTime(class ARPathNode* TestNode);
};

// @baa 0x0160dfe0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARBMRouteRequest_NervousSearch__0160dfe0::eventGetLastSeenTime(class ARPathNode* TestNode)
{
	struct RBMRouteRequest_NervousSearch_eventGetLastSeenTime_Parms
	{
		class ARPathNode* TestNode;
		FLOAT ReturnValue;
	} Parms;
	Parms.TestNode = TestNode;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e36b8), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_ScorePath */
struct ARBMRouteRequest_RunAway_ : public ARBMRouteRequest_RunAway
{
	FLOAT eventScorePath(class URBMRouterPath* TestPath, FLOAT LastSeenTime);
};

// @baa 0x0160e150
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARBMRouteRequest_RunAway_::eventScorePath(class URBMRouterPath* TestPath, FLOAT LastSeenTime)
{
	struct RBMRouteRequest_RunAway_eventScorePath_Parms
	{
		class URBMRouterPath* TestPath;
		FLOAT LastSeenTime;
		FLOAT ReturnValue;
	} Parms;
	Parms.TestPath = TestPath;
	Parms.LastSeenTime = LastSeenTime;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e25fc), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_GetLastSeenTime */
struct ARBMRouteRequest_RunAway__0160e1b0 : public ARBMRouteRequest_RunAway
{
	FLOAT eventGetLastSeenTime(class ARPathNode* TestNode);
};

// @baa 0x0160e1b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARBMRouteRequest_RunAway__0160e1b0::eventGetLastSeenTime(class ARPathNode* TestNode)
{
	struct RBMRouteRequest_RunAway_eventGetLastSeenTime_Parms
	{
		class ARPathNode* TestNode;
		FLOAT ReturnValue;
	} Parms;
	Parms.TestNode = TestNode;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e36b8), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_ScorePath */
struct ARBMRouteRequest_TerrifiedSearch_ : public ARBMRouteRequest_TerrifiedSearch
{
	FLOAT eventScorePath(class URBMRouterPath* TestPath, FLOAT LastSeenTime);
};

// @baa 0x0160e260
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARBMRouteRequest_TerrifiedSearch_::eventScorePath(class URBMRouterPath* TestPath, FLOAT LastSeenTime)
{
	struct RBMRouteRequest_TerrifiedSearch_eventScorePath_Parms
	{
		class URBMRouterPath* TestPath;
		FLOAT LastSeenTime;
		FLOAT ReturnValue;
	} Parms;
	Parms.TestPath = TestPath;
	Parms.LastSeenTime = LastSeenTime;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e25fc), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_GetLastSeenTime */
struct ARBMRouteRequest_TerrifiedSearch__0160e2c0 : public ARBMRouteRequest_TerrifiedSearch
{
	FLOAT eventGetLastSeenTime(class ARPathNode* TestNode);
};

// @baa 0x0160e2c0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FLOAT ARBMRouteRequest_TerrifiedSearch__0160e2c0::eventGetLastSeenTime(class ARPathNode* TestNode)
{
	struct RBMRouteRequest_TerrifiedSearch_eventGetLastSeenTime_Parms
	{
		class ARPathNode* TestNode;
		FLOAT ReturnValue;
	} Parms;
	Parms.TestNode = TestNode;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e36b8), &Parms);
	return Parms.ReturnValue;
}

	/* BMGAME_AddTransientCosts */
struct ARBMRouteRequest_TerrifiedSearch__0160e340 : public ARBMRouteRequest_TerrifiedSearch
{
	void eventAddTransientCosts();
};

// @baa 0x0160e340
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARBMRouteRequest_TerrifiedSearch__0160e340::eventAddTransientCosts()
{
	ProcessEvent(FindFunctionChecked(g_026e364c), NULL);
}

// @baa 0x0171d330
void ARPlayerController::execGetActiveSaveDeviceName(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetActiveSaveDeviceName();
}

// @baa 0x0171ddb0
void ARPlayerController::execFE_PlaySoundFromString(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Cmd);
	P_FINISH;
	*(UBOOL*)Result = FE_PlaySoundFromString(Cmd);
}

// @baa 0x0171de70
void ARPlayerController::execFE_StartSoundFromString(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Cmd);
	P_FINISH;
	*(UBOOL*)Result = FE_StartSoundFromString(Cmd);
}

// @baa 0x0171df30
void ARPlayerController::execFE_StopSoundFromString(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Cmd);
	P_FINISH;
	*(UBOOL*)Result = FE_StopSoundFromString(Cmd);
}

// @baa 0x0171d3c0
void ARPlayerController::execLive_StoreSaveInfo(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Id);
	P_GET_STR(Difficulty);
	P_GET_STR(Percentage);
	P_GET_STR(TimePlayed);
	P_GET_STR(RoomName);
	P_GET_STR(ChallengeStr);
	P_GET_STR(RiddlerStr);
	P_GET_STR(UpgradesStr);
	P_GET_STR(BioStr);
	P_FINISH;
	Live_StoreSaveInfo(Id, Difficulty, Percentage, TimePlayed, RoomName, ChallengeStr, RiddlerStr, UpgradesStr, BioStr);
}

// @baa 0x0171d8e0
void ARPlayerController::execTestSave(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Filename);
	P_FINISH;
	TestSave(Filename);
}

// @baa 0x0171d990
void ARPlayerController::execTestLoad(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Filename);
	P_FINISH;
	TestLoad(Filename);
}

// @baa 0x0171da40
void ARPlayerController::execTestQuery(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Filename);
	P_FINISH;
	TestQuery(Filename);
}

// @baa 0x0171dd00
void ARPlayerController::execSetReturnPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Str);
	P_FINISH;
	SetReturnPoint(Str);
}

// @baa 0x0171e3b0
void ARTapePlayer::execSetSubtitles(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Str);
	P_FINISH;
	SetSubtitles(Str);
}

// @baa 0x0171e000
void URSeqAct_ConversationDialogue::execCheckName(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Name);
	P_FINISH;
	*(UBOOL*)Result = CheckName(Name);
}

// @baa 0x0171d100
void ARPlayerController::execGetInfocastMsg(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetInfocastMsg();
}

// @baa 0x0171dc70
void ARPlayerController::execGetReturnPoint(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetReturnPoint();
}

// @baa 0x0171e2f0
void ARTapePlayer::execLoadConversation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Str);
	P_FINISH;
	*(UBOOL*)Result = LoadConversation(Str);
}

// @baa 0x0172a8d0
void ARPlayerController::execStripGlobalNamePart(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FString, Names);
	P_FINISH;
	StripGlobalNamePart(Names);
}
