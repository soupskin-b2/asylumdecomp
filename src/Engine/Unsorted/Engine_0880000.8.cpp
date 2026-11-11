// Engine_0880000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0088a510
void UReachSpec::execGetEnd(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = End.Actor;
}
