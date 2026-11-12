// RRope.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* ARRopeBase::SplitRope (0x1668430) isn't declared in the kit. */
struct ARRopeBase_ : public ARRopeBase
{
    ARRopeBase* SplitRope(FLOAT SplitPos, BYTE MeasurementRopeEnd, BYTE& ThisSplitEnd);
};

// @baa 0x01700fe0
void ARRopeBase::execSplitRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(SplitPos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_BYTE_REF(ThisSplitEnd);
    P_FINISH;
    *(ARRopeBase**)Result = ((ARRopeBase_*)this)->SplitRope(SplitPos, MeasurementRopeEnd, ThisSplitEnd);
}

/* ARRopeBase::JoinRope (0x1668660) isn't declared in the kit. */
struct ARRopeBase__017010c0 : public ARRopeBase
{
    void JoinRope(class ARRopeBase* OtherRope, BYTE ThisRopeJoinEnd, BYTE OtherRopeJoinEnd);
};

// @baa 0x017010c0
void ARRopeBase::execJoinRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARRopeBase, OtherRope);
    P_GET_BYTE(ThisRopeJoinEnd);
    P_GET_BYTE(OtherRopeJoinEnd);
    P_FINISH;
    ((ARRopeBase__017010c0*)this)->JoinRope(OtherRope, ThisRopeJoinEnd, OtherRopeJoinEnd);
}
