// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/FaceFX.h"

// @baa 0x0091f590
/* the value of one of the FaceFX actor instance's registers, 0 without one */
void USkeletalMeshComponent::execGetFaceFXRegister(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(RegName);
    P_FINISH;

    OC3Ent::Face::FxActorInstance*& FaceFXInstance = (OC3Ent::Face::FxActorInstance*&)FaceFXActorInstance; /* FPointer */
    FLOAT RegVal;
    FFaceFXRegMap* RegMapEntry;
    if (FaceFXInstance && (RegMapEntry = FFaceFXRegMap::GetRegisterMapping(RegName)) != NULL)
    {
        RegVal = FaceFXInstance->GetRegister(RegMapEntry->FaceFXRegName);
    }
    else
    {
        RegVal = 0.0f;
    }
    *(FLOAT*)Result = RegVal;
}
