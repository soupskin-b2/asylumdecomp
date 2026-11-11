// UnrealEd_0430000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct SSub_0043cef0 {
	void sub_0043cef0(float Value);
};

extern SSub_0043cef0 *g_02617628;
// @baa 0x0043d1c0
void sub_0043d1c0(float Value)
{
	if (g_02617628 != NULL) {
		g_02617628->sub_0043cef0(Value);
	}
}

typedef void (__thiscall* Fn)(void*);

struct C
{
    void sub_004310d0(INT Unused);
};

// @baa 0x004310d0
void C::sub_004310d0(INT)
{
    (*(Fn*)(*(char**)this + 0x1c8))(this);
}
