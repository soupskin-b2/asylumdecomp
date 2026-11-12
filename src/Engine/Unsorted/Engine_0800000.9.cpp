// Engine_0800000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ff8;
	/* ENGINE_UpdateCamera */
struct ACamera_ : public ACamera
{
	void eventUpdateCamera(FLOAT DeltaTime);
};

// @baa 0x00802b00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void ACamera_::eventUpdateCamera(FLOAT DeltaTime)
{
	struct Camera_eventUpdateCamera_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026c4ff8), &Parms);
}
