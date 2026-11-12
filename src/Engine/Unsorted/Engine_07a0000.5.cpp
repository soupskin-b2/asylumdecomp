// Engine_07a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ff0;
	/* ENGINE_SetInXrayMode */
struct AFracturedStaticMeshActor_ : public AFracturedStaticMeshActor
{
	void eventSetInXrayMode(UBOOL bInXrayMode);
};

// @baa 0x007a4d70
/* The script event's generated glue (EngineClasses.h), out of line here. Callers in
 * UnFracturedStaticMesh pass a part actor's x-ray bit. */
void AFracturedStaticMeshActor_::eventSetInXrayMode(UBOOL bInXrayMode)
{
	struct FracturedStaticMeshActor_eventSetInXrayMode_Parms
	{
		UBOOL bInXrayMode;
	} Parms;
	Parms.bInXrayMode = bInXrayMode ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ff0), &Parms);
}
