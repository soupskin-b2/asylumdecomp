// BmGame_1600000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2904;
	/* CanDoPathShortenCheck */

// @baa 0x0160e680
/* RBMAIManager.CanDoPathShortenCheck script event: the generated glue, out of line here. */
UBOOL ARBMAIManager::eventCanDoPathShortenCheck(class ARBMAIController* TestController)
{
	struct RBMAIManager_eventCanDoPathShortenCheck_Parms
	{
		class ARBMAIController* TestController;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.TestController = TestController;
	ProcessEvent(FindFunctionChecked(g_026e2904), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3048;
	/* StopAllSpeech */

// @baa 0x0160e6d0
/* RBMSpeechManager.StopAllSpeech script event: the generated glue, out of line here. */
void URBMSpeechManager::eventStopAllSpeech()
{
	ProcessEvent(FindFunctionChecked(g_026e3048), NULL);
}

extern FName g_026e3280;
	/* BMGAME_GetNumEvents */

// @baa 0x0160e790
/* The script event's generated glue (BmGameClasses.h), out of line here. */
INT URIdleConfig::eventGetNumEvents()
{
	struct RIdleConfig_eventGetNumEvents_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e3280), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2c9c;
	/* BMGAME_GetEventName */

// @baa 0x0160e730
/* The script event's generated glue (BmGameClasses.h), out of line here. */
FName URIdleConfig::eventGetEventName(INT I)
{
	struct RIdleConfig_eventGetEventName_Parms
	{
		INT I;
		FName ReturnValue;
	} Parms;
	Parms.ReturnValue = FName(NAME_None);
	Parms.I = I;
	ProcessEvent(FindFunctionChecked(g_026e2c9c), &Parms);
	return Parms.ReturnValue;
}
