// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARPawnBossVenomBase::*ARPawnBossVenomBaseNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARPawnBossVenomBaseNativeInfo
{
	const TCHAR* Name;
	ARPawnBossVenomBaseNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARPawnBossVenomBase::name },
// @baa 0x01e1ed00
ARPawnBossVenomBaseNativeInfo GBmGameARPawnBossVenomBaseNatives[] =
{
	MAP_NATIVE(ARPawnBossVenomBase, execIsPathClear)
	MAP_NATIVE(ARPawnBossVenomBase, execGetCollideFreePosition)
	MAP_NATIVE(ARPawnBossVenomBase, execWillCollideWithWall)
	{ NULL, NULL }
};
