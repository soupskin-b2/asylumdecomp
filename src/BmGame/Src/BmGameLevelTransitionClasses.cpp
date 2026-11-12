// BmGameLevelTransitionClasses.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3574;
	/* RecordRoomMetrics */
struct ARGameRI_ : public ARGameRI
{
	void eventRecordRoomMetrics(FName GoingToLevel);
};

// @baa 0x0154b040
/* RGameRI.RecordRoomMetrics script event: the generated glue, out of line here. */
void ARGameRI_::eventRecordRoomMetrics(FName GoingToLevel)
{
	struct RGameRI_eventRecordRoomMetrics_Parms
	{
		FName GoingToLevel;
	} Parms;
	Parms.GoingToLevel = GoingToLevel;
	ProcessEvent(FindFunctionChecked(g_026e3574), &Parms);
}

extern FName g_026e2ea0;
	/* FacingSameDirection */
struct ARPlayerStartInLevel_ : public ARPlayerStartInLevel
{
	UBOOL eventFacingSameDirection(FRotator PlayerRot);
};

// @baa 0x01558e60
/* RPlayerStartInLevel.FacingSameDirection script event: the generated glue, out of line here. */
UBOOL ARPlayerStartInLevel_::eventFacingSameDirection(FRotator PlayerRot)
{
	struct RPlayerStartInLevel_eventFacingSameDirection_Parms
	{
		FRotator PlayerRot;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.PlayerRot = PlayerRot;
	ProcessEvent(FindFunctionChecked(g_026e2ea0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a60;
	/* IsLocationNear */
struct ARBunkerDoorVillainBlocker_ : public ARBunkerDoorVillainBlocker
{
	UBOOL eventIsLocationNear(FVector TestLocation);
};

// @baa 0x01558ee0
/* RBunkerDoorVillainBlocker.IsLocationNear script event: the generated glue, out of line here. */
UBOOL ARBunkerDoorVillainBlocker_::eventIsLocationNear(FVector TestLocation)
{
	struct RBunkerDoorVillainBlocker_eventIsLocationNear_Parms
	{
		FVector TestLocation;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.TestLocation = TestLocation;
	ProcessEvent(FindFunctionChecked(g_026e2a60), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a24;
	/* IsInFront */
struct ARLevelTransition_ : public ARLevelTransition
{
	UBOOL eventIsInFront(class APlayerController* PC);
};

// @baa 0x01558f60
/* RLevelTransition.IsInFront script event: the generated glue, out of line here. */
UBOOL ARLevelTransition_::eventIsInFront(class APlayerController* PC)
{
	struct RLevelTransition_eventIsInFront_Parms
	{
		class APlayerController* PC;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.PC = PC;
	ProcessEvent(FindFunctionChecked(g_026e2a24), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a58;
	/* AllowedToOpenIfNotAlreadyOpen */
struct ARLevelTransitionDoorBunkerNativeBase_ : public ARLevelTransitionDoorBunkerNativeBase
{
	UBOOL eventAllowedToOpenIfNotAlreadyOpen(class ARPlayerController* PC);
};

// @baa 0x01559090
/* RLevelTransitionDoorBunkerNativeBase.AllowedToOpenIfNotAlreadyOpen script event: the generated glue, out of line here. */
UBOOL ARLevelTransitionDoorBunkerNativeBase_::eventAllowedToOpenIfNotAlreadyOpen(class ARPlayerController* PC)
{
	struct RLevelTransitionDoorBunkerNativeBase_eventAllowedToOpenIfNotAlreadyOpen_Parms
	{
		class ARPlayerController* PC;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.PC = PC;
	ProcessEvent(FindFunctionChecked(g_026e2a58), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2d3c;
	/* PassedThroughDoor */
struct ARLevelTransitionDoorBunkerNativeBase__015590e0 : public ARLevelTransitionDoorBunkerNativeBase
{
	void eventPassedThroughDoor(class ARPlayerController* PC);
};

// @baa 0x015590e0
/* RLevelTransitionDoorBunkerNativeBase.PassedThroughDoor script event: the generated glue, out of line here. */
void ARLevelTransitionDoorBunkerNativeBase__015590e0::eventPassedThroughDoor(class ARPlayerController* PC)
{
	struct RLevelTransitionDoorBunkerNativeBase_eventPassedThroughDoor_Parms
	{
		class ARPlayerController* PC;
	} Parms;
	Parms.PC = PC;
	ProcessEvent(FindFunctionChecked(g_026e2d3c), &Parms);
}

extern FName g_026e25dc;
	/* AttemptToCloseDoor */
struct ARLevelTransitionDoorBunkerNativeBase__01559150 : public ARLevelTransitionDoorBunkerNativeBase
{
	UBOOL eventAttemptToCloseDoor(UBOOL Instantly);
};

// @baa 0x01559150
/* RLevelTransitionDoorBunkerNativeBase.AttemptToCloseDoor script event: the generated glue, out of line here. */
UBOOL ARLevelTransitionDoorBunkerNativeBase__01559150::eventAttemptToCloseDoor(UBOOL Instantly)
{
	struct RLevelTransitionDoorBunkerNativeBase_eventAttemptToCloseDoor_Parms
	{
		UBOOL Instantly;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.Instantly = Instantly ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e25dc), &Parms);
	return Parms.ReturnValue;
}
