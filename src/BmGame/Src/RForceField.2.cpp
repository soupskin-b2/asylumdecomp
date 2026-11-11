// RForceField.cpp (part 2 of 3): 3 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x017030a0
void URForceField::execGetIsInitialised(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_10c();
}

// @baa 0x017030e0
void URForceField::execInitialise(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_110();
}

// @baa 0x01703120
void URForceField::execFinalise(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_114();
}
