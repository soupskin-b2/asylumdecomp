// RInventoryGadget.cpp: 1 function
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
