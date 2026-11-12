// Engine_0790000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3ea0;
	/* ENGINE_HandleSeamlessTravelPlayer */
struct AGameInfo_ : public AGameInfo
{
	void eventHandleSeamlessTravelPlayer(class AController*& C);
};

// @baa 0x0079f6d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AGameInfo_::eventHandleSeamlessTravelPlayer(class AController*& C)
{
	struct GameInfo_eventHandleSeamlessTravelPlayer_Parms
	{
		class AController* C;
	} Parms;
	Parms.C = C;
	ProcessEvent(FindFunctionChecked(g_026c3ea0), &Parms);
	C = Parms.C;
}
