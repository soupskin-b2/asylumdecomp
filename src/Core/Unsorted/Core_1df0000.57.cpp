// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UAudioDevice's script natives that the kit's class does not declare.
struct UAudioDevice_ : public UAudioDevice
{
	void execSetMasterDuck(FFrame& Stack, RESULT_DECL);
	void execClearScaleformData(FFrame& Stack, RESULT_DECL);
	void execForceUpdate(FFrame& Stack, RESULT_DECL);
	void execGetFadeVolume(FFrame& Stack, RESULT_DECL);
	void execSetFadeVolume(FFrame& Stack, RESULT_DECL);
	void execSetDebugMessage(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UAudioDevice_::*UAudioDeviceNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UAudioDeviceNativeInfo
{
	const TCHAR* Name;
	UAudioDeviceNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UAudioDevice_::name },
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
