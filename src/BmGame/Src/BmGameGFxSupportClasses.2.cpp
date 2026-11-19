// BmGameGFxSupportClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e32ac;
	/* PauseGame */

// @baa 0x016d1ba0
/* RSeqAct_PlayGfxMovie.PauseGame script event: the generated glue, out of line here. */
void URSeqAct_PlayGfxMovie::eventPauseGame(UBOOL Pause)
{
	struct RSeqAct_PlayGfxMovie_eventPauseGame_Parms
	{
		UBOOL Pause;
	} Parms;
	Parms.Pause = Pause ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e32ac), &Parms);
}

extern FName g_026e37c0;
	/* BMGAME_PictureLoaded */

// @baa 0x016d1ae0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URGFxMovie::eventPictureLoaded()
{
	ProcessEvent(FindFunctionChecked(g_026e37c0), NULL);
}
