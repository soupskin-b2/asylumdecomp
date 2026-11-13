// GFxUI_0e50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/GFx.h"

// FGuarded_00e5d870: runs sub_00e5d3a0 only when the engine object exists.
struct FGuardTarget_00e5d870
{
	void sub_00e5d3a0();
};

// @baa 0x00e5d870
void sub_00e5d870()
{
	if (GGFxEngine != NULL)
	{
		((FGuardTarget_00e5d870*)GGFxEngine)->sub_00e5d3a0();
	}
}
