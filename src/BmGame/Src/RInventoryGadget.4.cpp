// RInventoryGadget.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARInventoryGadget_01706ed0 : public ARInventoryGadget {
    void execGetAutoTargetRotation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01706ed0
void ARInventoryGadget_01706ed0::execGetAutoTargetRotation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    FRotator R;
    *(FRotator*)Result = *(FRotator*)vf_354((INT)&R);
}

/* ARInventoryGadget::GetCorrectedAutoTargetOrigin (0x163b170) isn't declared in the kit. */
struct ARInventoryGadget_ : public ARInventoryGadget
{
    FVector GetCorrectedAutoTargetOrigin(FVector& CameraPos, FRotator& AimDirection);
};

// @baa 0x01706f30
void ARInventoryGadget::execGetCorrectedAutoTargetOrigin(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, CameraPos);
    P_GET_STRUCT_REF(FRotator, AimDirection);
    P_FINISH;
    *(FVector*)Result = ((ARInventoryGadget_*)this)->GetCorrectedAutoTargetOrigin(CameraPos, AimDirection);
}
