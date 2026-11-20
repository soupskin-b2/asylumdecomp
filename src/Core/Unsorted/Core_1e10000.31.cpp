// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARPawnPlayerBm::*ARPawnPlayerBmNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARPawnPlayerBmNativeInfo
{
	const TCHAR* Name;
	ARPawnPlayerBmNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARPawnPlayerBm::name },
// @baa 0x01e1ee70
ARPawnPlayerBmNativeInfo GBmGameARPawnPlayerBmNatives[] =
{
	MAP_NATIVE(ARPawnPlayerBm, execLoadDamageMeshes)
	MAP_NATIVE(ARPawnPlayerBm, execDamageLevelUpdated)
	MAP_NATIVE(ARPawnPlayerBm, execOnDestroyPhysicsAssetInstance)
	MAP_NATIVE(ARPawnPlayerBm, execOnCreatePhysicsAssetInstance)
	MAP_NATIVE(ARPawnPlayerBm, execSortComponentList)
	MAP_NATIVE(ARPawnPlayerBm, execEyesNormal)
	{ NULL, NULL }
};
