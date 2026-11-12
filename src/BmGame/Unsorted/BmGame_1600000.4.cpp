// BmGame_1600000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2904;
	/* CanDoPathShortenCheck */
struct ARBMAIManager_ : public ARBMAIManager
{
	UBOOL eventCanDoPathShortenCheck(class ARBMAIController* TestController);
};

// @baa 0x0160e680
/* RBMAIManager.CanDoPathShortenCheck script event: the generated glue, out of line here. */
UBOOL ARBMAIManager_::eventCanDoPathShortenCheck(class ARBMAIController* TestController)
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
struct URBMSpeechManager_ : public URBMSpeechManager
{
	void eventStopAllSpeech();
};

// @baa 0x0160e6d0
/* RBMSpeechManager.StopAllSpeech script event: the generated glue, out of line here. */
void URBMSpeechManager_::eventStopAllSpeech()
{
	ProcessEvent(FindFunctionChecked(g_026e3048), NULL);
}

extern FName g_026e3280;
	/* BMGAME_GetNumEvents */
struct URIdleConfig_ : public URIdleConfig
{
	INT eventGetNumEvents();
};

// @baa 0x0160e790
/* The script event's generated glue (BmGameClasses.h), out of line here. */
INT URIdleConfig_::eventGetNumEvents()
{
	struct RIdleConfig_eventGetNumEvents_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e3280), &Parms);
	return Parms.ReturnValue;
}
