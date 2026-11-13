// BmGame_0580000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gap: Core.h's EName list lacks NAME_BeginState (0x13c, UnNames.h). */
#define NAME_BeginState ((EName)0x13c)
struct UObject_ : public UObject
{
	void eventBeginState(FName PreviousStateName);
};

// @baa 0x0058cc90
/* The script event's generated glue (CoreClasses.h), out of line here. */
void UObject_::eventBeginState(FName PreviousStateName)
{
	struct Object_eventBeginState_Parms
	{
		FName PreviousStateName;
	} Parms;
	Parms.PreviousStateName = PreviousStateName;
	ProcessEvent(FindFunctionChecked(NAME_BeginState), &Parms);
}

/* Kit gap: Core.h's EName list lacks NAME_EndState (0x13d, UnNames.h). */
#define NAME_EndState ((EName)0x13d)
struct UObject__0058cce0 : public UObject
{
	void eventEndState(FName NextStateName);
};

// @baa 0x0058cce0
/* The script event's generated glue (CoreClasses.h), out of line here. */
void UObject__0058cce0::eventEndState(FName NextStateName)
{
	struct Object_eventEndState_Parms
	{
		FName NextStateName;
	} Parms;
	Parms.NextStateName = NextStateName;
	ProcessEvent(FindFunctionChecked(NAME_EndState), &Parms);
}

/* Kit gap: Core.h's EName list lacks NAME_PushedState (0x14e, UnNames.h). */
#define NAME_PushedState ((EName)0x14e)
struct UObject__0058cd30 : public UObject
{
	void eventPushedState();
};

// @baa 0x0058cd30
/* The script event's generated glue (CoreClasses.h), out of line here. */
void UObject__0058cd30::eventPushedState()
{
	ProcessEvent(FindFunctionChecked(NAME_PushedState), NULL);
}

/* Kit gap: Core.h's EName list lacks NAME_PoppedState (0x149, UnNames.h). */
#define NAME_PoppedState ((EName)0x149)
struct UObject__0058cd60 : public UObject
{
	void eventPoppedState();
};

// @baa 0x0058cd60
/* The script event's generated glue (CoreClasses.h), out of line here. */
void UObject__0058cd60::eventPoppedState()
{
	ProcessEvent(FindFunctionChecked(NAME_PoppedState), NULL);
}
