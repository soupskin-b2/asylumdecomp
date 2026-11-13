// BmGame_0580000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

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
