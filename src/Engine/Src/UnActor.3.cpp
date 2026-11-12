// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName ENGINE_Detach;
struct Actor_eventDetach_Parms
{
	AActor* Other;
};

// The script events aren't declared in Classes.h yet.
struct AActor_ : public AActor
{
	void eventDetach(AActor* Other);
};

// @baa 0x007538b0
void AActor_::eventDetach(AActor* Other)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Detach - NAME_PROBEMIN))))
	{
		Actor_eventDetach_Parms Parms;
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(ENGINE_Detach), &Parms);
	}
}
