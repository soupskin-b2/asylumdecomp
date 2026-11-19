// UnTerrain.cpp: 3 functions
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

#include "ue3/ConstructObject.h"

// @baa 0x0099f060
template UTerrainComponent* ConstructObject<UTerrainComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 51 "candidate.cpp"

// @baa 0x0099f100
template UTerrainWeightMapTexture* ConstructObject<UTerrainWeightMapTexture>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
