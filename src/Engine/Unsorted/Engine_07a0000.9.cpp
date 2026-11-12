// Engine_07a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x007afc20
/* UnPlayerController.cpp: blends one rotation component toward its target, taking the short way around. */
INT BlendRot(FLOAT DeltaTime, INT BlendC, INT NewC)
{
	if (Abs(BlendC - NewC) > 32767)
	{
		if (BlendC > NewC)
		{
			NewC += 65536;
		}
		else
		{
			BlendC += 65536;
		}
	}
	if (Abs(BlendC - NewC) > 4096)
	{
		BlendC = NewC;
	}
	else
	{
		BlendC = appTrunc(BlendC + (NewC - BlendC) * Min(1.f, 24.f * DeltaTime));
	}
	return (BlendC & 65535);
}
