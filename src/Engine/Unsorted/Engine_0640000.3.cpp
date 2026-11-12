// Engine_0640000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4964;
	/* ENGINE_DecalFinished */
struct ADecalManager_ : public ADecalManager
{
	void eventDecalFinished(class UDecalComponent* Decal);
};

// @baa 0x0064db90
/* The script event's generated glue (EngineClasses.h), out of line here. */
void ADecalManager_::eventDecalFinished(class UDecalComponent* Decal)
{
	struct DecalManager_eventDecalFinished_Parms
	{
		class UDecalComponent* Decal;
	} Parms;
	Parms.Decal = Decal;
	ProcessEvent(FindFunctionChecked(g_026c4964), &Parms);
}
