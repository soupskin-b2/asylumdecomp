// UnMorph.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c920c0
void UMorphNodeWeight::execSetNodeWeight(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewWeight);
	P_FINISH;
	vf_144(NewWeight);
}
