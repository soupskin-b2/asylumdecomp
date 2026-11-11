// Core_0590000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <stdlib.h>
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005942b0
void UObject::execFRand(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = (FLOAT)rand() / (FLOAT)RAND_MAX;
}
