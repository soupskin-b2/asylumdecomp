// Engine_06e0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x006ea720
void UMeshComponent::execSetMaterial(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ElementIndex);
    P_GET_OBJECT(UMaterialInterface, Material);
    P_FINISH;
    SetMaterial(ElementIndex, Material);
}

