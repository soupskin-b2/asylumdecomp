// UnAnimPlay.cpp (part 2 of 2): 7 functions
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

// @baa 0x00c90860
void UAnimNodeSequence::execGetNormalizedPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_188();
}

// @baa 0x00c90910
void UAnimNodeSequence::execGetGlobalPlayRate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_190();
}

// @baa 0x00c90950
void UAnimNodeSequence::execGetAnimPlaybackLength(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_194();
}

// @baa 0x00c90990
void UAnimNodeSequence::execGetTimeLeft(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_198();
}
