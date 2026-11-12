// Core_1720000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x01729cd0
void ARCinematicActor::execGetThoughts(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FThought, ThoughtList);
	P_GET_STRUCT_REF(FVector, ThoughtLocation);
	P_FINISH;
	GetThoughts(ThoughtList, ThoughtLocation);
}
