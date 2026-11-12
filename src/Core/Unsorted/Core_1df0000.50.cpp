// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UGameViewportClient's script natives that the kit's class does not declare.
struct UGameViewportClient_ : public UGameViewportClient
{
	void execShouldForceFullscreenViewport(FFrame& Stack, RESULT_DECL);
	void execIs4x3(FFrame& Stack, RESULT_DECL);
	void execIs16x9(FFrame& Stack, RESULT_DECL);
	void execIsFullScreenViewport(FFrame& Stack, RESULT_DECL);
	void execGetViewportSize(FFrame& Stack, RESULT_DECL);
	void execConsoleCommand(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGameViewportClient_::*UGameViewportClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameViewportClientNativeInfo
{
	const TCHAR* Name;
	UGameViewportClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGameViewportClient_::name },
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
