// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// ARPawnPlayerBm's script natives that the kit's class does not declare.
struct ARPawnPlayerBm_ : public ARPawnPlayerBm
{
	void execLoadDamageMeshes(FFrame& Stack, RESULT_DECL);
	void execDamageLevelUpdated(FFrame& Stack, RESULT_DECL);
	void execOnDestroyPhysicsAssetInstance(FFrame& Stack, RESULT_DECL);
	void execOnCreatePhysicsAssetInstance(FFrame& Stack, RESULT_DECL);
	void execSortComponentList(FFrame& Stack, RESULT_DECL);
	void execEyesNormal(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARPawnPlayerBm_::*ARPawnPlayerBmNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARPawnPlayerBmNativeInfo
{
	const TCHAR* Name;
	ARPawnPlayerBmNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARPawnPlayerBm_::name },
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
