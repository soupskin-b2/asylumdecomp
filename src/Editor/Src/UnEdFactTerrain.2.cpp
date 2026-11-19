// UnEdFactTerrain.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x00f53ab0
template UTerrainMaterial* ConstructObject<UTerrainMaterial>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x00f53b50
template UTerrainLayerSetup* ConstructObject<UTerrainLayerSetup>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x00f53bf0
template UStaticMeshComponentFactory* ConstructObject<UStaticMeshComponentFactory>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x00f53c90
template UTerrainHeightMapFactory* ConstructObject<UTerrainHeightMapFactory>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
