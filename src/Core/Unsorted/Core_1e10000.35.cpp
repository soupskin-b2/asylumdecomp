// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARFractureWallBase::*ARFractureWallBaseNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARFractureWallBaseNativeInfo
{
	const TCHAR* Name;
	ARFractureWallBaseNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARFractureWallBase::name },
// @baa 0x01e1f020
ARFractureWallBaseNativeInfo GBmGameARFractureWallBaseNatives[] =
{
	MAP_NATIVE(ARFractureWallBase, execSpawnPartMulti)
	MAP_NATIVE(ARFractureWallBase, execUpdateWallState)
	MAP_NATIVE(ARFractureWallBase, execFindNearestPointOnEdge)
	MAP_NATIVE(ARFractureWallBase, execHandleExplode)
	MAP_NATIVE(ARFractureWallBase, execGetWallSideForPoint)
	MAP_NATIVE(ARFractureWallBase, execGetWallNormalForSide)
	MAP_NATIVE(ARFractureWallBase, execLoadFractureState)
	MAP_NATIVE(ARFractureWallBase, execSaveFractureState)
	MAP_NATIVE(ARFractureWallBase, execKnockOverBasedPawns)
	MAP_NATIVE(ARFractureWallBase, execTryPlacePathThroughGap)
	MAP_NATIVE(ARFractureWallBase, execCheckLastSloMoTime)
	MAP_NATIVE(ARFractureWallBase, execGetHarpoonTargetLocation)
	MAP_NATIVE(ARFractureWallBase, execGetChunkLocation)
	MAP_NATIVE(ARFractureWallBase, execGetHarpoonChunkIndex)
	MAP_NATIVE(ARFractureWallBase, execGetWallBasePos)
	MAP_NATIVE(ARFractureWallBase, execGetWallBoundsRadius)
	MAP_NATIVE(ARFractureWallBase, execGetWallBounds)
	MAP_NATIVE(ARFractureWallBase, execGetPosOnWall)
	MAP_NATIVE(ARFractureWallBase, execGetWallCentre)
	MAP_NATIVE(ARFractureWallBase, execGetFOVCheckLocation)
	MAP_NATIVE(ARFractureWallBase, execGetTargetLocation)
	MAP_NATIVE(ARFractureWallBase, execGetFragmentSaveName)
	MAP_NATIVE(ARFractureWallBase, execGetHasInvisibleWallParts)
	{ NULL, NULL }
};
