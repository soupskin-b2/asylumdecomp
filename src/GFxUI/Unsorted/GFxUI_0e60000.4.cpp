// GFxUI_0e60000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/GFx.h"

// FGuarded_00e65ec0: runs sub_00e64fb0 only when the engine object exists.
struct FGuardTarget_00e65ec0
{
	void sub_00e64fb0();
};

// @baa 0x00e65ec0
void sub_00e65ec0()
{
	if (GGFxEngine != NULL)
	{
		((FGuardTarget_00e65ec0*)GGFxEngine)->sub_00e64fb0();
	}
}
