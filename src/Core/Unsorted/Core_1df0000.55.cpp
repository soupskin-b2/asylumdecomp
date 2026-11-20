// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UUIInteraction::*UUIInteractionNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UUIInteractionNativeInfo
{
	const TCHAR* Name;
	UUIInteractionNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UUIInteraction::name },
// @baa 0x01df5e40
UUIInteractionNativeInfo GEngineUUIInteractionNatives[] =
{
	MAP_NATIVE(UUIInteraction, execCreateScene)
	MAP_NATIVE(UUIInteraction, execCreateTransientWidget)
	MAP_NATIVE(UUIInteraction, execPlayUISound)
	MAP_NATIVE(UUIInteraction, execGetDataStoreClient)
	MAP_NATIVE(UUIInteraction, execGetPlayerControllerId)
	MAP_NATIVE(UUIInteraction, execGetPlayerIndex)
	MAP_NATIVE(UUIInteraction, execGetPlayerCount)
	{ NULL, NULL }
};
