// UnSequence.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x008e7f60
UBOOL USeqCond_SwitchBase::GetOutputLinksToActivate(TArray<INT>& out_LinksToActivate)
{
    PURE_VIRTUAL(USeqCond_SwitchBase::GetOutputLinksToActivate, return 0;);
}

extern FName g_026c4b60;
	/* ENGINE_LevelStreamingStatusChanged */

// @baa 0x007d6380
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APlayerController::eventLevelStreamingStatusChanged(class ULevelStreaming* LevelObject, UBOOL bNewShouldBeLoaded, UBOOL bNewShouldBeVisible, UBOOL bNewShouldBlockOnLoad)
{
	struct PlayerController_eventLevelStreamingStatusChanged_Parms
	{
		class ULevelStreaming* LevelObject;
		UBOOL bNewShouldBeLoaded;
		UBOOL bNewShouldBeVisible;
		UBOOL bNewShouldBlockOnLoad;
	} Parms;
	Parms.LevelObject = LevelObject;
	Parms.bNewShouldBeLoaded = bNewShouldBeLoaded ? TRUE : FALSE;
	Parms.bNewShouldBeVisible = bNewShouldBeVisible ? TRUE : FALSE;
	Parms.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4b60), &Parms);
}

extern FName g_026c455c;
	/* ENGINE_VersionUpdated */

// @baa 0x008aa3a0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void USequenceOp::eventVersionUpdated(INT OldVersion, INT NewVersion)
{
	struct SequenceOp_eventVersionUpdated_Parms
	{
		INT OldVersion;
		INT NewVersion;
	} Parms;
	Parms.OldVersion = OldVersion;
	Parms.NewVersion = NewVersion;
	ProcessEvent(FindFunctionChecked(g_026c455c), &Parms);
}

extern FName g_026c4db8;
	/* ENGINE_CheckLogins */

// @baa 0x008e7cd0
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL USeqCond_IsLoggedIn::eventCheckLogins()
{
	struct SeqCond_IsLoggedIn_eventCheckLogins_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4db8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c45cc;
	/* ENGINE_Update */

// @baa 0x008aa600
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL USeqAct_Latent::eventUpdate(FLOAT DeltaTime)
{
	struct SeqAct_Latent_eventUpdate_Parms
	{
		FLOAT DeltaTime;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026c45cc), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4304;

// @baa 0x00d1eb70
UBOOL USeqCond_SwitchBase::eventIsFallThruEnabled(INT ValueIndex)
{
	struct SeqCond_SwitchBase_eventIsFallThruEnabled_Parms
	{
		INT ValueIndex;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ValueIndex = ValueIndex;
	ProcessEvent(FindFunctionChecked(g_026c4304), &Parms);
	return Parms.ReturnValue;
}
