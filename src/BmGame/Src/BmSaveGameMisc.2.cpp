// BmSaveGameMisc.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3aa0;
	/* FE_NewGame */
struct ARPlayerController_ : public ARPlayerController
{
	void eventFE_NewGame(const FString& Difficulty);
};

// @baa 0x01722dc0
/* RPlayerController.FE_NewGame script event: the generated glue, out of line here. */
void ARPlayerController_::eventFE_NewGame(const FString& Difficulty)
{
	struct RPlayerController_eventFE_NewGame_Parms
	{
		FString Difficulty;
	} Parms;
	Parms.Difficulty = Difficulty;
	ProcessEvent(FindFunctionChecked(g_026e3aa0), &Parms);
}
