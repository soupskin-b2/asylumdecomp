// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UOnlineSubsystem's script natives that the kit's class does not declare.
struct UOnlineSubsystem_ : public UOnlineSubsystem
{
	void execGetBuildUniqueId(FFrame& Stack, RESULT_DECL);
	void execAreUniqueNetIdsEqual(FFrame& Stack, RESULT_DECL);
	void execStringToUniqueNetId(FFrame& Stack, RESULT_DECL);
	void execUniqueNetIdToString(FFrame& Stack, RESULT_DECL);
	void execInit(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystem_::*UOnlineSubsystemNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UOnlineSubsystem_::name },
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
