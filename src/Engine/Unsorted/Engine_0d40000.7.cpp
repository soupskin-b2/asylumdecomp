// Engine_0d40000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

#define THRESH_POINTS_ARE_SAME 0.002f	/* UnMath.h */
// @baa 0x00d452d0
/* UnStaticMeshBuild.cpp PointsEqual: whether two vectors are equal within four times THRESH_POINTS_ARE_SAME. */
UBOOL sub_00d452d0(const FVector& V1, const FVector& V2)
{
	if (appAbs(V1.X - V2.X) > THRESH_POINTS_ARE_SAME * 4.0f || appAbs(V1.Y - V2.Y) > THRESH_POINTS_ARE_SAME * 4.0f || appAbs(V1.Z - V2.Z) > THRESH_POINTS_ARE_SAME * 4.0f)
	{
		return FALSE;
	}
	return TRUE;
}

#define THRESH_NORMALS_ARE_SAME 0.00002f	/* UnMath.h */
// @baa 0x00d45310
/* UnStaticMeshBuild.cpp NormalsEqual: whether two vectors are equal within four times THRESH_NORMALS_ARE_SAME. */
UBOOL sub_00d45310(const FVector& V1, const FVector& V2)
{
	if (appAbs(V1.X - V2.X) > THRESH_NORMALS_ARE_SAME * 4.0f || appAbs(V1.Y - V2.Y) > THRESH_NORMALS_ARE_SAME * 4.0f || appAbs(V1.Z - V2.Z) > THRESH_NORMALS_ARE_SAME * 4.0f)
	{
		return FALSE;
	}
	return TRUE;
}
