// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ULocalPlayer::*ULocalPlayerNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ULocalPlayerNativeInfo
{
	const TCHAR* Name;
	ULocalPlayerNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ULocalPlayer::name },
// @baa 0x01df5cd0
ULocalPlayerNativeInfo GEngineULocalPlayerNatives[] =
{
	MAP_NATIVE(ULocalPlayer, execDeProject)
	MAP_NATIVE(ULocalPlayer, execTouchPlayerPostProcessChain)
	MAP_NATIVE(ULocalPlayer, execGetPostProcessChain)
	MAP_NATIVE(ULocalPlayer, execRemoveAllPostProcessingChains)
	MAP_NATIVE(ULocalPlayer, execRemovePostProcessingChain)
	MAP_NATIVE(ULocalPlayer, execInsertPostProcessingChain)
	MAP_NATIVE(ULocalPlayer, execGetActorVisibility)
	MAP_NATIVE(ULocalPlayer, execSendSplitJoin)
	MAP_NATIVE(ULocalPlayer, execSpawnPlayActor)
	{ NULL, NULL }
};
