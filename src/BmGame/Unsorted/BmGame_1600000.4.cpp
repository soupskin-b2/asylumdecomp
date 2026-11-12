// BmGame_1600000.cpp: 1 function
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
