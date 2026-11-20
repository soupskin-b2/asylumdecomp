// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGameViewportClient::*UGameViewportClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameViewportClientNativeInfo
{
	const TCHAR* Name;
	UGameViewportClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGameViewportClient::name },
// @baa 0x01df5c60
UGameViewportClientNativeInfo GEngineUGameViewportClientNatives[] =
{
	MAP_NATIVE(UGameViewportClient, execShouldForceFullscreenViewport)
	MAP_NATIVE(UGameViewportClient, execIs4x3)
	MAP_NATIVE(UGameViewportClient, execIs16x9)
	MAP_NATIVE(UGameViewportClient, execIsFullScreenViewport)
	MAP_NATIVE(UGameViewportClient, execGetViewportSize)
	MAP_NATIVE(UGameViewportClient, execConsoleCommand)
	{ NULL, NULL }
};
