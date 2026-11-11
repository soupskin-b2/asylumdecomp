// UnAnimPlay.cpp (part 2 of 2): 3 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UAnimNodeSequence_ : public UAnimNodeSequence
{
    void execSetPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c907c0
void UAnimNodeSequence_::execSetPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewTime);
    P_GET_UBOOL(bFireNotifies);
    P_FINISH;

    vf_160(NewTime, bFireNotifies);
}

// @baa 0x00c90450
void UAnimNodeSequence::execStopAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_124();
}

// @baa 0x00c909d0
void UAnimNodeSequenceBlendByAim::execCheckAnimsUpToDate( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}
