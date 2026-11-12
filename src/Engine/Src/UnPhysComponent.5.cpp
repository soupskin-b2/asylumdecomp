// UnPhysComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit (0x00a09b60): UE3's URB_BodyInstance::TermBody(FRBPhysScene* Scene); the scene is passed
 * through as the kit types it here (INT). */
struct URB_BodyInstance_ : public URB_BodyInstance
{
    UBOOL sub_00a09b60(INT Scene);
};

// @baa 0x00a11080
/* UPrimitiveComponent slot 0x13c (kit vf_13c(INT), UE3's TermComponentRBPhys(FRBPhysScene* InScene)): shut down the body and hand
 * it back to the world once it has let go of its physics. */
void UPrimitiveComponent::vf_13c(INT InScene)
{
    if (BodyInstance != NULL && ((URB_BodyInstance_*)BodyInstance)->sub_00a09b60(InScene))
    {
        GWorld->sub_00a47a10(BodyInstance);
        BodyInstance = NULL;
    }
}

// @baa 0x00a14d30
/* UStaticMeshComponent slot 0x13c (kit vf_13c(INT), UE3's TermComponentRBPhys(FRBPhysScene* InScene)): shut down the body and hand
 * it back to the world once it has let go of its physics. */
void UStaticMeshComponent::vf_13c(INT InScene)
{
    if (BodyInstance != NULL && ((URB_BodyInstance_*)BodyInstance)->sub_00a09b60(InScene))
    {
        GWorld->sub_00a47a10(BodyInstance);
        BodyInstance = NULL;
    }
}
