// RControllableChatteringTeethBase.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2e5c;
	/* HandleExplode */
struct ARControllableChatteringTeethCamera_ : public ARControllableChatteringTeethCamera
{
	void eventHandleExplode();
};

// @baa 0x01709e50
/* RControllableChatteringTeethCamera.HandleExplode script event: the generated glue, out of line here. */
void ARControllableChatteringTeethCamera_::eventHandleExplode()
{
	ProcessEvent(FindFunctionChecked(g_026e2e5c), NULL);
}
