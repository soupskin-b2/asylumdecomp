// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// ARFractureWallBase's script natives that the kit's class does not declare.
struct ARFractureWallBase_ : public ARFractureWallBase
{
	void execUpdateWallState(FFrame& Stack, RESULT_DECL);
	void execFindNearestPointOnEdge(FFrame& Stack, RESULT_DECL);
	void execHandleExplode(FFrame& Stack, RESULT_DECL);
	void execGetWallSideForPoint(FFrame& Stack, RESULT_DECL);
	void execGetWallNormalForSide(FFrame& Stack, RESULT_DECL);
	void execLoadFractureState(FFrame& Stack, RESULT_DECL);
	void execSaveFractureState(FFrame& Stack, RESULT_DECL);
	void execKnockOverBasedPawns(FFrame& Stack, RESULT_DECL);
	void execTryPlacePathThroughGap(FFrame& Stack, RESULT_DECL);
	void execCheckLastSloMoTime(FFrame& Stack, RESULT_DECL);
	void execGetHarpoonTargetLocation(FFrame& Stack, RESULT_DECL);
	void execGetChunkLocation(FFrame& Stack, RESULT_DECL);
	void execGetHarpoonChunkIndex(FFrame& Stack, RESULT_DECL);
	void execGetWallBasePos(FFrame& Stack, RESULT_DECL);
	void execGetWallBoundsRadius(FFrame& Stack, RESULT_DECL);
	void execGetWallBounds(FFrame& Stack, RESULT_DECL);
	void execGetPosOnWall(FFrame& Stack, RESULT_DECL);
	void execGetWallCentre(FFrame& Stack, RESULT_DECL);
	void execGetFOVCheckLocation(FFrame& Stack, RESULT_DECL);
	void execGetTargetLocation(FFrame& Stack, RESULT_DECL);
	void execGetFragmentSaveName(FFrame& Stack, RESULT_DECL);
	void execGetHasInvisibleWallParts(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARFractureWallBase_::*ARFractureWallBaseNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARFractureWallBaseNativeInfo
{
	const TCHAR* Name;
	ARFractureWallBaseNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARFractureWallBase_::name },
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
