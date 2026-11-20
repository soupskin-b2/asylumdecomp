// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UUISceneClient::*UUISceneClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UUISceneClientNativeInfo
{
	const TCHAR* Name;
	UUISceneClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UUISceneClient::name },
// @baa 0x01df5ec0
UUISceneClientNativeInfo GEngineUUISceneClientNatives[] =
{
	MAP_NATIVE(UUISceneClient, execGetInverseCanvasToScreen)
	MAP_NATIVE(UUISceneClient, execGetCanvasToScreen)
	MAP_NATIVE(UUISceneClient, execUpdateCanvasToScreen)
	MAP_NATIVE(UUISceneClient, execChangeMouseCursor)
	MAP_NATIVE(UUISceneClient, execSetMousePosition)
	MAP_NATIVE(UUISceneClient, execCloseSceneAtIndex)
	MAP_NATIVE(UUISceneClient, execCloseScene)
	MAP_NATIVE(UUISceneClient, execReplaceSceneAtIndex)
	MAP_NATIVE(UUISceneClient, execReplaceScene)
	MAP_NATIVE(UUISceneClient, execInsertScene)
	MAP_NATIVE(UUISceneClient, execOpenScene)
	MAP_NATIVE(UUISceneClient, execInitializeScene)
	MAP_NATIVE(UUISceneClient, execIsSceneInitialized)
	MAP_NATIVE(UUISceneClient, execIsUIActive)
	MAP_NATIVE(UUISceneClient, execChangeActiveSkin)
	{ NULL, NULL }
};
