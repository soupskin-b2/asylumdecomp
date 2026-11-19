// RRopeComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x01700ce0
void URRopeComponent::execSplitRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(SplitPos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_BYTE_REF(ThisSplitEnd);
    P_GET_OBJECT(URRopeComponent, InOutOtherSplitEnd);
    P_FINISH;
    *(FVector*)Result = this->SplitRope(SplitPos, MeasurementRopeEnd, ThisSplitEnd, InOutOtherSplitEnd);
}

// @baa 0x01700df0
void URRopeComponent::execJoinRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URRopeComponent, OtherRope);
    P_GET_BYTE(ThisRopeJoinEnd);
    P_GET_BYTE(OtherRopeJoinEnd);
    P_FINISH;
    this->JoinRope(OtherRope, ThisRopeJoinEnd, OtherRopeJoinEnd);
}
