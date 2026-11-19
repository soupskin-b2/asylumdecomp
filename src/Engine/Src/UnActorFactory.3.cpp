// UnActorFactory.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c5390;
	/* ENGINE_Possess */

// @baa 0x00c49ef0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AController::eventPossess(APawn* inPawn, UBOOL bVehicleTransition)
{
	struct Controller_eventPossess_Parms
	{
		class APawn* inPawn;
		UBOOL bVehicleTransition;
	} Parms;
	Parms.inPawn = inPawn;
	Parms.bVehicleTransition = bVehicleTransition ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c5390), &Parms);
}

extern FName g_026c4ea0;
	/* ENGINE_SetTemplate */

// @baa 0x00c49f50
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AEmitter::eventSetTemplate(UParticleSystem* NewTemplate, UBOOL bDestroyOnFinish)
{
	struct Emitter_eventSetTemplate_Parms
	{
		class UParticleSystem* NewTemplate;
		UBOOL bDestroyOnFinish;
	} Parms;
	Parms.NewTemplate = NewTemplate;
	Parms.bDestroyOnFinish = bDestroyOnFinish ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ea0), &Parms);
}

extern FName g_026c4a58;
	/* ENGINE_CreateInventory */

// @baa 0x00c4a000
/* The script event's generated glue (EngineClasses.h), out of line here. */
AInventory* AInventoryManager::eventCreateInventory(UClass* NewInventoryItemClass, UBOOL bDoNotActivate)
{
	struct InventoryManager_eventCreateInventory_Parms
	{
		class UClass* NewInventoryItemClass;
		UBOOL bDoNotActivate;
		class AInventory* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.NewInventoryItemClass = NewInventoryItemClass;
	Parms.bDoNotActivate = bDoNotActivate ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4a58), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4d74;
	/* ENGINE_AddDefaultInventory */

// @baa 0x00c49fb0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AGameInfo::eventAddDefaultInventory(APawn* P)
{
	struct GameInfo_eventAddDefaultInventory_Parms
	{
		class APawn* P;
	} Parms;
	Parms.P = P;
	ProcessEvent(FindFunctionChecked(g_026c4d74), &Parms);
}

extern FName g_026c3fd4;
	/* ENGINE_SetTeam */

// @baa 0x00c4a390
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AAIController::eventSetTeam(INT inTeamIdx)
{
	struct AIController_eventSetTeam_Parms
	{
		INT inTeamIdx;
	} Parms;
	Parms.inTeamIdx = inTeamIdx;
	ProcessEvent(FindFunctionChecked(g_026c3fd4), &Parms);
}

extern FName g_026c4f88;
	/* SetPlayerName */

// @baa 0x00c5a0b0
/* PlayerReplicationInfo.SetPlayerName script event: the generated glue, out of line here. */
void APlayerReplicationInfo::eventSetPlayerName(const FString& S)
{
	struct PlayerReplicationInfo_eventSetPlayerName_Parms
	{
		FString S;
	} Parms;
	Parms.S = S;
	ProcessEvent(FindFunctionChecked(g_026c4f88), &Parms);
}
