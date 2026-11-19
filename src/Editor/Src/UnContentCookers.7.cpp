// UnContentCookers.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x010905a0
template AStaticMeshCollectionActor* ConstructObject<AStaticMeshCollectionActor>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x01090640
template AStaticLightCollectionActor* ConstructObject<AStaticLightCollectionActor>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x010b27f0
template UPersistentCookerData* ConstructObject<UPersistentCookerData>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
