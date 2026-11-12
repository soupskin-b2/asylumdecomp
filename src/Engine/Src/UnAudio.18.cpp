// UnAudio.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0079ac70
void UAudioComponent::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Stop();
}

// @baa 0x0079aca0
void UAudioComponent::execKeyOff( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	KeyOff();
}

// @baa 0x0079acd0
void UAudioComponent::execKeyOffOnMarker( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	KeyOffOnMarker();
}

// @baa 0x00786320
void UAudioComponent::execIsPlaying(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(UBOOL*)Result = bPlaying;
}
