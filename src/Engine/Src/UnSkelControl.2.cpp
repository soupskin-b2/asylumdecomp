// UnSkelControl.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkelControlBase_ : public USkelControlBase
{
	void sub_0090cec0(UBOOL);
};

// @baa 0x00c92160
void USkelControlBase::execSetSkelControlActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInActive);
	P_FINISH;
	((USkelControlBase_*)this)->sub_0090cec0(bInActive);
}

struct USkelControlBase__00c921d0 : public USkelControlBase
{
	void SetSkelControlStrength(FLOAT NewStrength, FLOAT InBlendTime);
	void execSetSkelControlStrength(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c921d0
void USkelControlBase__00c921d0::execSetSkelControlStrength(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewStrength);
	P_GET_FLOAT(InBlendTime);
	P_FINISH;
	SetSkelControlStrength(NewStrength, InBlendTime);
}
