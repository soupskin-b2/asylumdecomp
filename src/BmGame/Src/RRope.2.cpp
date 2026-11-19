// RRope.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x01700fe0
void ARRopeBase::execSplitRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(SplitPos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_BYTE_REF(ThisSplitEnd);
    P_FINISH;
    *(ARRopeBase**)Result = this->SplitRope(SplitPos, MeasurementRopeEnd, ThisSplitEnd);
}

// @baa 0x017010c0
void ARRopeBase::execJoinRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARRopeBase, OtherRope);
    P_GET_BYTE(ThisRopeJoinEnd);
    P_GET_BYTE(OtherRopeJoinEnd);
    P_FINISH;
    this->JoinRope(OtherRope, ThisRopeJoinEnd, OtherRopeJoinEnd);
}
