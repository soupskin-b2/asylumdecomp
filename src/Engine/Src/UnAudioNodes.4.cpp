// UnAudioNodes.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c92ec0
void USoundNodeRandom::execPickNextNodeInAdvance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PickNextNodeInAdvance();
}

// Classes.h declares vf_10c as returning void, but the game's function returns FLOAT.
typedef FLOAT(__thiscall* FGetCueDuration)(void*);

// @baa 0x00c8ee40
void USoundCue::execGetCueDuration(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = ((FGetCueDuration)(*(void***)this)[0x10c / 4])(this);
}
