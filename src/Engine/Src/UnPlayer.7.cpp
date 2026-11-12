// UnPlayer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3ec8;
	/* ENGINE_PreRender */
struct UGameViewportClient_ : public UGameViewportClient
{
	void eventPreRender(class UCanvas* Canvas);
};

// @baa 0x008886e0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UGameViewportClient_::eventPreRender(class UCanvas* Canvas)
{
	struct GameViewportClient_eventPreRender_Parms
	{
		class UCanvas* Canvas;
	} Parms;
	Parms.Canvas = Canvas;
	ProcessEvent(FindFunctionChecked(g_026c3ec8), &Parms);
}
