// Engine_0780000.cpp: 2 functions
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

extern FName g_026c4dd0;
	/* ENGINE_BecomeViewTarget */
struct AActor__00785190 : public AActor
{
	void eventBecomeViewTarget(class APlayerController* PC);
};

// @baa 0x00785190
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00785190::eventBecomeViewTarget(class APlayerController* PC)
{
	struct Actor_eventBecomeViewTarget_Parms
	{
		class APlayerController* PC;
	} Parms;
	Parms.PC = PC;
	ProcessEvent(FindFunctionChecked(g_026c4dd0), &Parms);
}
