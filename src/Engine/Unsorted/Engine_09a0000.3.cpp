// Engine_09a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3d78;
	/* ServerUpdateLevelVisibility */
struct APlayerController_ : public APlayerController
{
	void eventServerUpdateLevelVisibility(FName PackageName, UBOOL bIsVisible);
};

// @baa 0x009aec40
/* PlayerController.ServerUpdateLevelVisibility script event: the generated glue, out of line here. */
void APlayerController_::eventServerUpdateLevelVisibility(FName PackageName, UBOOL bIsVisible)
{
	struct PlayerController_eventServerUpdateLevelVisibility_Parms
	{
		FName PackageName;
		UBOOL bIsVisible;
	} Parms;
	Parms.PackageName = PackageName;
	Parms.bIsVisible = bIsVisible ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c3d78), &Parms);
}
