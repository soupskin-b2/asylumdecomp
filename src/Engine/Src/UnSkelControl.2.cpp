// UnSkelControl.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c92160
void USkelControlBase::execSetSkelControlActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInActive);
	P_FINISH;
	sub_0090cec0(bInActive);
}

// @baa 0x00c921d0
void USkelControlBase::execSetSkelControlStrength(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewStrength);
	P_GET_FLOAT(InBlendTime);
	P_FINISH;
	SetSkelControlStrength(NewStrength, InBlendTime);
}
