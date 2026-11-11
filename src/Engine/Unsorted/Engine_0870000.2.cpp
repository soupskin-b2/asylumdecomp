// Engine_0870000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00873b30
void AActor::execMoveSmooth(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Delta);
	P_FINISH;
	bJustTeleported = 0;
	*(UBOOL*)Result = sub_00868010(Delta);
}
