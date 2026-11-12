// UnStaticMeshBuild.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00d455c0
/* UVsEqual (UnStaticMeshBuild.cpp): two texture coordinates are the same if they're within 1/1024 on both axes. */
UBOOL sub_00d455c0(const FVector2D& UVa, const FVector2D& UVb)
{
	if (appAbs(UVa.X - UVb.X) > (1.0f / 1024.0f))
	{
		return FALSE;
	}
	if (appAbs(UVa.Y - UVb.Y) > (1.0f / 1024.0f))
	{
		return FALSE;
	}
	return TRUE;
}
