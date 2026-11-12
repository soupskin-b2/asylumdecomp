// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4644;
	/* ENGINE_OnAnimEnd */
struct AActor_ : public AActor
{
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, FLOAT PlayedTime, FLOAT ExcessTime);
};

// @baa 0x00c49e80
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor_::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, FLOAT PlayedTime, FLOAT ExcessTime)
{
	struct Actor_eventOnAnimEnd_Parms
	{
		class UAnimNodeSequence* SeqNode;
		FLOAT PlayedTime;
		FLOAT ExcessTime;
	} Parms;
	Parms.SeqNode = SeqNode;
	Parms.PlayedTime = PlayedTime;
	Parms.ExcessTime = ExcessTime;
	ProcessEvent(FindFunctionChecked(g_026c4644), &Parms);
}
