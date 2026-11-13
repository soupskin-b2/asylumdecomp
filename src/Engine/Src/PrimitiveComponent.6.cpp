// PrimitiveComponent.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x006dc7c0
void UMeshComponent::execGetUseSimpleBoxCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_250();
}

// @baa 0x006dc810
void UMeshComponent::execGetUseSimpleLineCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_254();
}

// @baa 0x006dc8c0
void UMeshComponent::execGetMaterial(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ElementIndex);
	P_FINISH;
	*(UMaterialInterface**)Result = (UMaterialInterface*)GetMaterial(ElementIndex);
}

// @baa 0x006dc930
void UMeshComponent::execGetNumElements( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = vf_258();
}

struct UMeshComponent_ : public UMeshComponent
{
    /* PrestreamTextures; Classes.h doesn't declare it. */
    void sub_006dc850(FLOAT Seconds, UBOOL bPrioritizeCharacterTextures);
};

// @baa 0x006dc970
void UMeshComponent::execPrestreamTextures(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Seconds);
    P_GET_UBOOL(bPrioritizeCharacterTextures);
    P_FINISH;
    ((UMeshComponent_*)this)->sub_006dc850(Seconds, bPrioritizeCharacterTextures);
}

// @baa 0x006e4ba0
void UPrimitiveComponent::execSetLevelHidden(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bNewLevelHidden);
    P_FINISH;

    if (bLevelHidden != bNewLevelHidden)
    {
        bLevelHidden = bNewLevelHidden;
        BeginDeferredReattach();
    }
}
