// Engine_06e0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UMeshComponent_ : public UMeshComponent
{
    /* SetMaterial; Classes.h doesn't declare it. */
    void sub_006ea640(INT ElementIndex, UMaterialInterface* Material);
};

// @baa 0x006ea720
void UMeshComponent::execSetMaterial(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ElementIndex);
    P_GET_OBJECT(UMaterialInterface, Material);
    P_FINISH;
    ((UMeshComponent_*)this)->sub_006ea640(ElementIndex, Material);
}

