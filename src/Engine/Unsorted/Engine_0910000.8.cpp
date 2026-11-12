// Engine_0910000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* USkeletalMeshComponent::UpdateDampingRampUp (0x914660) isn't declared in the kit. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void UpdateDampingRampUp(FLOAT DeltaTime, UBOOL bAllowDampingRampup);
};

// @baa 0x00914750
void USkeletalMeshComponent::execUpdateDampingRampUp(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_UBOOL(bAllowDampingRampup);
    P_FINISH;
    ((USkeletalMeshComponent_*)this)->UpdateDampingRampUp(DeltaTime, bAllowDampingRampup);
}
