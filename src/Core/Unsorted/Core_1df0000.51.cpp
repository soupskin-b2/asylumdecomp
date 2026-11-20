// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGameEngine::*UGameEngineNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameEngineNativeInfo
{
	const TCHAR* Name;
	UGameEngineNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGameEngine::name },
// @baa 0x01df5c20
UGameEngineNativeInfo GEngineUGameEngineNatives[] =
{
	MAP_NATIVE(UGameEngine, execGetOnlineSubsystem)
	MAP_NATIVE(UGameEngine, execDestroyNamedNetDriver)
	MAP_NATIVE(UGameEngine, execCreateNamedNetDriver)
	{ NULL, NULL }
};
