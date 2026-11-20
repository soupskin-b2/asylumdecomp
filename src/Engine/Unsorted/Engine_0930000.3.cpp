// Engine_0930000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x0093c860
/* UE3's USkeletalMeshComponent::ForceSkelUpdate(): tick the pose once as if just rendered. */
void USkeletalMeshComponent::ForceSkelUpdate()
{
    if (bAttached)
    {
        const FLOAT OldLastRenderTime = LastRenderTime;
        LastRenderTime = GWorld->GetWorldInfo()->TimeSeconds;
        UpdateLODStatus();
        UpdateSkelPose(0.f, TRUE, FALSE);
        ConditionalUpdateTransform();
        LastRenderTime = OldLastRenderTime;
    }
}
