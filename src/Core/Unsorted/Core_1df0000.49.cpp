// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UEngine::*UEngineNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UEngineNativeInfo
{
	const TCHAR* Name;
	UEngineNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UEngine::name },
// @baa 0x01df5af0
UEngineNativeInfo GEngineUEngineNatives[] =
{
	MAP_NATIVE(UEngine, execGetPhysXuseGRB)
	MAP_NATIVE(UEngine, execGetPhysXLevel)
	MAP_NATIVE(UEngine, execAddOverlayWrapped)
	MAP_NATIVE(UEngine, execAddOverlay)
	MAP_NATIVE(UEngine, execRemoveAllOverlays)
	MAP_NATIVE(UEngine, execStopMovie)
	MAP_NATIVE(UEngine, execPlayLoadMapMovie)
	MAP_NATIVE(UEngine, execGetLastMovieName)
	MAP_NATIVE(UEngine, execGetAudioDevice)
	MAP_NATIVE(UEngine, execIsSplitScreen)
	MAP_NATIVE(UEngine, execGetAdditionalFont)
	MAP_NATIVE(UEngine, execGetSubtitleFont)
	MAP_NATIVE(UEngine, execGetLargeFont)
	MAP_NATIVE(UEngine, execGetMediumFont)
	MAP_NATIVE(UEngine, execGetSmallFont)
	MAP_NATIVE(UEngine, execGetTinyFont)
	MAP_NATIVE(UEngine, execGetBuildDate)
	MAP_NATIVE(UEngine, execGetCurrentWorldInfo)
	{ NULL, NULL }
};
