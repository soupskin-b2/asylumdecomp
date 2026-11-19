// UnrealEd_0f10000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x00f16450
template UMaterialExporterT3D* ConstructObject<UMaterialExporterT3D>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x00f164f0
template UStaticMeshExporterT3D* ConstructObject<UStaticMeshExporterT3D>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x00f16590
template UTextureExporterT3D* ConstructObject<UTextureExporterT3D>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
