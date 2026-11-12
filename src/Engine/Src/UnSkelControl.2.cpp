// UnSkelControl.cpp: 3 functions
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

extern FName g_026c4808;
	/* ENGINE_NotifySkelControlBeyondLimit */
struct AActor_ : public AActor
{
	void eventNotifySkelControlBeyondLimit(class USkelControlLookAt* LookAt);
};

// @baa 0x0090aec0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor_::eventNotifySkelControlBeyondLimit(class USkelControlLookAt* LookAt)
{
	struct Actor_eventNotifySkelControlBeyondLimit_Parms
	{
		class USkelControlLookAt* LookAt;
	} Parms;
	Parms.LookAt = LookAt;
	ProcessEvent(FindFunctionChecked(g_026c4808), &Parms);
}
