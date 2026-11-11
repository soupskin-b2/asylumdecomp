// Editor_0c90000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c9eca0
void ADecalManager::execAreDynamicDecalsEnabled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = AreDynamicDecalsEnabled();
}
