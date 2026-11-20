// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystem::*UOnlineSubsystemNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UOnlineSubsystem::name },
// @baa 0x01df5d70
UOnlineSubsystemNativeInfo GEngineUOnlineSubsystemNatives[] =
{
	MAP_NATIVE(UOnlineSubsystem, execGetBuildUniqueId)
	MAP_NATIVE(UOnlineSubsystem, execAreUniqueNetIdsEqual)
	MAP_NATIVE(UOnlineSubsystem, execStringToUniqueNetId)
	MAP_NATIVE(UOnlineSubsystem, execUniqueNetIdToString)
	MAP_NATIVE(UOnlineSubsystem, execInit)
	{ NULL, NULL }
};
