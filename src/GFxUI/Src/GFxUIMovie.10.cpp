// GFxUIMovie.cpp: 4 functions
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

// @baa 0x00e51630
void UGFxMovie::execGetVariableBool(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Path);
	P_FINISH;
	*(UBOOL*)Result = GetVariableBool(Path);
}

// @baa 0x00e516f0
void UGFxMovie::execGetVariableNumber(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Path);
	P_FINISH;
	*(FLOAT*)Result = GetVariableNumber(Path);
}
