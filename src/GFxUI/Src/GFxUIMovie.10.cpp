// GFxUIMovie.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00e41f40
void UGFxMovie::execSetTimingMode(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(Mode);
    P_FINISH;
    SetTimingMode(Mode);
}

// @baa 0x00e41dc0
void UGFxMovie::execStart(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(StartPaused, FALSE);
	P_FINISH;
	*(UBOOL*)Result = Start(StartPaused);
}
