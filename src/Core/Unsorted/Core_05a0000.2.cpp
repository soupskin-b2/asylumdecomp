// Core_05a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005aeed0
void UObject::execPopState(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bPopAll, 0);
	P_FINISH;
	sub_005aecc0(Stack, bPopAll);
}

/* UObject::PushState (0x5a61f0) isn't declared in the kit. */
struct UObject_ : public UObject
{
    void PushState(FName NewState, FName NewLabel);
};

// @baa 0x005a6470
void UObject::execPushState(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(NewState);
    P_GET_NAME_OPTX(NewLabel, NAME_None);
    P_FINISH;
    ((UObject_*)this)->PushState(NewState, NewLabel);
}
