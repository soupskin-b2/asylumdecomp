// NewMaterialEditor.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x0142ab70
template UMaterial* ConstructObject<UMaterial>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x0142adf0
template UMaterialExpressionComment* ConstructObject<UMaterialExpressionComment>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x0142afe0
template UMaterialExpressionCompound* ConstructObject<UMaterialExpressionCompound>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x0143fdc0
template UMaterialEditorOptions* ConstructObject<UMaterialEditorOptions>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
