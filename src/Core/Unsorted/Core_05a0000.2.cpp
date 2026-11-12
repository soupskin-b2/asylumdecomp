// Core_05a0000.cpp: 8 functions
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

// @baa 0x005a4fb0
/* Script logging; the debugf is compiled out of this build. The default tag (0x302) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternal(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x302);
	P_FINISH;
}

// @baa 0x005a5160
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e8) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalAudio(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e8);
	P_FINISH;
}

// @baa 0x005a5230
/* Script logging; the debugf is compiled out of this build. The default tag (0x5ea) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5ea);
	P_FINISH;
}

// @baa 0x005a5300
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e7) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalAI(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e7);
	P_FINISH;
}

// @baa 0x005a53d0
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e6) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalEngine(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e6);
	P_FINISH;
}

// @baa 0x005a54a0
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e9) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalPlayer(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e9);
	P_FINISH;
}
