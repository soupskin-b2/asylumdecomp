// RForceField.cpp (part 2 of 3): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URForceField_ : public URForceField
{
	void execGetIsInitialised(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017030a0
void URForceField_::execGetIsInitialised(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_10c();
}
