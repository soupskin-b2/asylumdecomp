// UnPhysComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009fe9e0
void UPrimitiveComponent::execRigidBodyIsAwake(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    *(UBOOL*)Result = (UBOOL)vf_1bc(BoneName.Index, BoneName.Number);
}
