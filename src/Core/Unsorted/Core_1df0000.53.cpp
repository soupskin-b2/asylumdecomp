// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UTextureFlipBook::*UTextureFlipBookNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UTextureFlipBookNativeInfo
{
	const TCHAR* Name;
	UTextureFlipBookNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UTextureFlipBook::name },
// @baa 0x01df5df0
UTextureFlipBookNativeInfo GEngineUTextureFlipBookNatives[] =
{
	MAP_NATIVE(UTextureFlipBook, execSetCurrentFrame)
	MAP_NATIVE(UTextureFlipBook, execStop)
	MAP_NATIVE(UTextureFlipBook, execPause)
	MAP_NATIVE(UTextureFlipBook, execPlay)
	{ NULL, NULL }
};
