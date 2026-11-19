// LaunchEngineLoop.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x01504960
template UEngine* ConstructObject<UEngine>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x01504a00
template UCommandlet* ConstructObject<UCommandlet>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x01504aa0
template UUnrealEdEngine* ConstructObject<UUnrealEdEngine>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
