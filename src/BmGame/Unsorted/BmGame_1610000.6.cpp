// BmGame_1610000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e314c;
	/* MouseInput */
struct URPlayerInput_ : public URPlayerInput
{
	void eventMouseInput(FLOAT DeltaTime, FLOAT FOVScale);
};

// @baa 0x01612b50
/* RPlayerInput.MouseInput script event: the generated glue, out of line here. */
void URPlayerInput_::eventMouseInput(FLOAT DeltaTime, FLOAT FOVScale)
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
