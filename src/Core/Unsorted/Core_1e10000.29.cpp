// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARPawnPlayer::*ARPawnPlayerNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARPawnPlayerNativeInfo
{
	const TCHAR* Name;
	ARPawnPlayerNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARPawnPlayer::name },
// @baa 0x01e1ed40
ARPawnPlayerNativeInfo GBmGameARPawnPlayerNatives[] =
{
	MAP_NATIVE(ARPawnPlayer, execResetRagdollLinearDamping)
	MAP_NATIVE(ARPawnPlayer, execSetRagdollLinearDampingForGrappleDeath)
	MAP_NATIVE(ARPawnPlayer, execGetThoughts)
	MAP_NATIVE(ARPawnPlayer, execWillFlightPathHit)
	MAP_NATIVE(ARPawnPlayer, execSetupLocatorFromCornerPoint)
	MAP_NATIVE(ARPawnPlayer, execGetRailingTopAndNormal)
	MAP_NATIVE(ARPawnPlayer, execSetDeferredVelocity)
	MAP_NATIVE(ARPawnPlayer, execShouldIFallOffEdge)
	MAP_NATIVE(ARPawnPlayer, execIsLedgeATunnelLedge)
	MAP_NATIVE(ARPawnPlayer, execIsLedgeADangleLedge)
	MAP_NATIVE(ARPawnPlayer, execOnDestroyPhysicsAssetInstance)
	MAP_NATIVE(ARPawnPlayer, execOnCreatePhysicsAssetInstance)
	MAP_NATIVE(ARPawnPlayer, execClearOverridableTransition)
	MAP_NATIVE(ARPawnPlayer, execUpdateGrateExcluder)
	MAP_NATIVE(ARPawnPlayer, execForceUnCrouch)
	MAP_NATIVE(ARPawnPlayer, execCheckSurroundingEnvironment)
	MAP_NATIVE(ARPawnPlayer, execApplyDistributedForceToRagdoll)
	MAP_NATIVE(ARPawnPlayer, execMoveInDirection)
	{ NULL, NULL }
};
