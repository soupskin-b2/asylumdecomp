// BmGame_1610000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e314c;
	/* MouseInput */

// @baa 0x01612b50
/* RPlayerInput.MouseInput script event: the generated glue, out of line here. */
void URPlayerInput::eventMouseInput(FLOAT DeltaTime, FLOAT FOVScale)
{
	struct RPlayerInput_eventMouseInput_Parms
	{
		FLOAT DeltaTime;
		FLOAT FOVScale;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	Parms.FOVScale = FOVScale;
	ProcessEvent(FindFunctionChecked(g_026e314c), &Parms);
}

extern FName g_026e345c;
	/* DebugUpdateCinematicCapes */

// @baa 0x016121e0
/* RBMDebugCameraController.DebugUpdateCinematicCapes script event: the generated glue, out of line here. */
void ARBMDebugCameraController::eventDebugUpdateCinematicCapes()
{
	ProcessEvent(FindFunctionChecked(g_026e345c), NULL);
}

extern FName g_026e2e7c;
	/* BMGAME_PlayNextLine */

// @baa 0x01612140
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SpeechEventManagerBase::eventPlayNextLine()
{
	ProcessEvent(FindFunctionChecked(g_026e2e7c), NULL);
}

extern FName g_026e2ce0;
	/* BMGAME_InputActivated */

// @baa 0x01612170
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_SpeechEventManagerBase::eventInputActivated(INT InputID)
{
	struct RSeqAct_SpeechEventManagerBase_eventInputActivated_Parms
	{
		INT InputID;
	} Parms;
	Parms.InputID = InputID;
	ProcessEvent(FindFunctionChecked(g_026e2ce0), &Parms);
}
