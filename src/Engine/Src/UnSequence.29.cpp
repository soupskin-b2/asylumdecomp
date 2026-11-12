// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x008c03d0
void USeqAct_SetObject::Activated()
{
	// no value given: use the default
	if (Value == NULL)
	{
		Value = DefaultValue;
	}
	// a controller stands for its pawn
	if (GetPawnFromController && Cast<AController>(Value) != NULL)
	{
		Value = Cast<AController>(Value)->Pawn;
	}
	for (INT Idx = 0; Idx < Targets.Num(); Idx++)
	{
		Targets(Idx) = Value;
	}
}
