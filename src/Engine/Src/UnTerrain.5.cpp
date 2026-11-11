// UnTerrain.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c9b9e0
void ATerrain::execCalcLayerBounds( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CalcLayerBounds();
}
