// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (URGFxGameViewportClient::*URGFxGameViewportClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct URGFxGameViewportClientNativeInfo
{
	const TCHAR* Name;
	URGFxGameViewportClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &URGFxGameViewportClient::name },
// @baa 0x01e1f1c0
URGFxGameViewportClientNativeInfo GBmGameURGFxGameViewportClientNatives[] =
{
	MAP_NATIVE(URGFxGameViewportClient, execGetSubtitleMinY)
	MAP_NATIVE(URGFxGameViewportClient, execGetDisplayGammaReferenceBrightness)
	MAP_NATIVE(URGFxGameViewportClient, execInstallOurGFxHandlers)
	MAP_NATIVE(URGFxGameViewportClient, execSetupGameFonts)
	{ NULL, NULL }
};
