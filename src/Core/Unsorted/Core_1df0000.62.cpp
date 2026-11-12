// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UGFxInteraction's script natives that the kit's class does not declare.
struct UGFxInteraction_ : public UGFxInteraction
{
	void execNotifyGameSessionEnded(FFrame& Stack, RESULT_DECL);
	void execGetFocusMovie(FFrame& Stack, RESULT_DECL);
	void execSetFocusMovie(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGFxInteraction_::*UGFxInteractionNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGFxInteractionNativeInfo
{
	const TCHAR* Name;
	UGFxInteractionNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGFxInteraction_::name },
// @baa 0x01df79d0
UGFxInteractionNativeInfo GGFxUIUGFxInteractionNatives[] =
{
	MAP_NATIVE(UGFxInteraction, execNotifyGameSessionEnded)
	MAP_NATIVE(UGFxInteraction, execGetFocusMovie)
	MAP_NATIVE(UGFxInteraction, execSetFocusMovie)
	{ NULL, NULL }
};
