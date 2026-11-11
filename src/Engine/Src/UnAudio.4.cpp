// UnAudio.cpp (part 4 of 13): 3 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UAudioComponent's audio play implementation (00791770): int __thiscall, no stack args.
struct C {
    INT sub_00791770();
};

// @baa 0x007918c0
void UAudioComponent::execPlay(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    ((C*)this)->sub_00791770();
}

// @baa 0x00786530
void UAudioComponent::execIsLooping(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(UBOOL*)Result = CurrentUseSeamlessLooping;
}

// @baa 0x00786360
void UAudioComponent::execIsPaused(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = bIsPaused;
}
