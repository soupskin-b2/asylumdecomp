// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UAudioDevice::*UAudioDeviceNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UAudioDeviceNativeInfo
{
	const TCHAR* Name;
	UAudioDeviceNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UAudioDevice::name },
// @baa 0x01df6110
UAudioDeviceNativeInfo GEngineUAudioDeviceNatives[] =
{
	MAP_NATIVE(UAudioDevice, execSetMasterDuck)
	MAP_NATIVE(UAudioDevice, execClearScaleformData)
	MAP_NATIVE(UAudioDevice, execForceUpdate)
	MAP_NATIVE(UAudioDevice, execGetFadeVolume)
	MAP_NATIVE(UAudioDevice, execSetFadeVolume)
	MAP_NATIVE(UAudioDevice, execSetDebugMessage)
	{ NULL, NULL }
};
