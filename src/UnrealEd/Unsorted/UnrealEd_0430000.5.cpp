// UnrealEd_0430000.cpp: 1 function
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
