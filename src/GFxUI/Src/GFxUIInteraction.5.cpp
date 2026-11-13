// GFxUIInteraction.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/GFx.h"

// FGuarded_00e53880: runs sub_00e53400 only when the engine object exists.
struct FGuardTarget_00e53880
{
	void sub_00e53400();
};

// @baa 0x00e53880
void sub_00e53880()
{
	if (GGFxEngine != NULL)
	{
		((FGuardTarget_00e53880*)GGFxEngine)->sub_00e53400();
	}
}
