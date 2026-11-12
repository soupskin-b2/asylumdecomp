// Engine_0780000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3d94;
	/* EndViewTarget */
struct AActor_ : public AActor
{
	void eventEndViewTarget(class APlayerController* PC);
};

// @baa 0x00785150
/* Actor.EndViewTarget script event: the generated glue, out of line here. */
void AActor_::eventEndViewTarget(class APlayerController* PC)
{
	struct Actor_eventEndViewTarget_Parms
	{
		class APlayerController* PC;
	} Parms;
	Parms.PC = PC;
	ProcessEvent(FindFunctionChecked(g_026c3d94), &Parms);
}
