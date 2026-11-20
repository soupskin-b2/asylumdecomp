// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGFxInteraction::*UGFxInteractionNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGFxInteractionNativeInfo
{
	const TCHAR* Name;
	UGFxInteractionNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGFxInteraction::name },
// @baa 0x01df79d0
UGFxInteractionNativeInfo GGFxUIUGFxInteractionNatives[] =
{
	MAP_NATIVE(UGFxInteraction, execNotifyGameSessionEnded)
	MAP_NATIVE(UGFxInteraction, execGetFocusMovie)
	MAP_NATIVE(UGFxInteraction, execSetFocusMovie)
	{ NULL, NULL }
};
