// Engine_0930000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: UE3's UpdateLODStatus(), UpdateSkelPose(FLOAT DeltaTime, UBOOL bTickFaceFX) (this build
 * has a third flag) and UActorComponent::ConditionalUpdateTransform(). */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void sub_0092be40();
    void sub_0093b170(FLOAT DeltaTime, UBOOL bTickFaceFX, UBOOL bUnknownFlag);
};

struct UActorComponent_ : public UActorComponent
{
    void sub_00759620();
};

// @baa 0x0093c860
/* UE3's USkeletalMeshComponent::ForceSkelUpdate(): tick the pose once as if just rendered. */
void USkeletalMeshComponent::ForceSkelUpdate()
{
    if (bAttached)
    {
        const FLOAT OldLastRenderTime = LastRenderTime;
        LastRenderTime = GWorld->GetWorldInfo()->TimeSeconds;
        ((USkeletalMeshComponent_*)this)->sub_0092be40();
        ((USkeletalMeshComponent_*)this)->sub_0093b170(0.f, TRUE, FALSE);
        ((UActorComponent_*)this)->sub_00759620();
        LastRenderTime = OldLastRenderTime;
    }
}
