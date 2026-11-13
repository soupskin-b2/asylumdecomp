// Engine_08a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"
#include "ue3/Script.h"

// @baa 0x008a90b0
void AActor::execDestroy(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = GWorld->sub_007e72a0(this, 0, 1);
}
