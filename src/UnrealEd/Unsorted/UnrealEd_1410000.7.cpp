// UnrealEd_1410000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x0141ca30
template UMaterialEditorSkeletalMeshComponent* ConstructObject<UMaterialEditorSkeletalMeshComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x0141cb30
template UMaterialEditorInstanceConstant* ConstructObject<UMaterialEditorInstanceConstant>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
