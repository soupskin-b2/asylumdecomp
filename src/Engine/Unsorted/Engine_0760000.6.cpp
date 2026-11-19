// Engine_0760000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x00760670
template UCanvas* ConstructObject<UCanvas>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x007607d0
template UStaticMeshComponent* ConstructObject<UStaticMeshComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
