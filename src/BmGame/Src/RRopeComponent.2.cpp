// RRopeComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* URRopeComponent::SplitRope (0x1667a30) isn't declared in the kit. */
struct URRopeComponent_ : public URRopeComponent
{
    FVector SplitRope(FLOAT SplitPos, BYTE MeasurementRopeEnd, BYTE& ThisSplitEnd, class URRopeComponent* InOutOtherSplitEnd);
};

// @baa 0x01700ce0
void URRopeComponent::execSplitRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(SplitPos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_BYTE_REF(ThisSplitEnd);
    P_GET_OBJECT(URRopeComponent, InOutOtherSplitEnd);
    P_FINISH;
    *(FVector*)Result = ((URRopeComponent_*)this)->SplitRope(SplitPos, MeasurementRopeEnd, ThisSplitEnd, InOutOtherSplitEnd);
}

/* URRopeComponent::JoinRope (0x1667e50) isn't declared in the kit. */
struct URRopeComponent__01700df0 : public URRopeComponent
{
    void JoinRope(class URRopeComponent* OtherRope, BYTE ThisRopeJoinEnd, BYTE OtherRopeJoinEnd);
};

// @baa 0x01700df0
void URRopeComponent::execJoinRope(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URRopeComponent, OtherRope);
    P_GET_BYTE(ThisRopeJoinEnd);
    P_GET_BYTE(OtherRopeJoinEnd);
    P_FINISH;
    ((URRopeComponent__01700df0*)this)->JoinRope(OtherRope, ThisRopeJoinEnd, OtherRopeJoinEnd);
}
