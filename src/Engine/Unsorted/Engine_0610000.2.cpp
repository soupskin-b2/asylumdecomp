// Engine_0610000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x00614a50
template UExporter* ConstructObject<UExporter>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x00614af0
template UFactory* ConstructObject<UFactory>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
