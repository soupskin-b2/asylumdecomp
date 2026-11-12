// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UUIInteraction's script natives that the kit's class does not declare.
struct UUIInteraction_ : public UUIInteraction
{
	void execCreateScene(FFrame& Stack, RESULT_DECL);
	void execCreateTransientWidget(FFrame& Stack, RESULT_DECL);
	void execPlayUISound(FFrame& Stack, RESULT_DECL);
	void execGetDataStoreClient(FFrame& Stack, RESULT_DECL);
	void execGetPlayerControllerId(FFrame& Stack, RESULT_DECL);
	void execGetPlayerIndex(FFrame& Stack, RESULT_DECL);
	void execGetPlayerCount(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UUIInteraction_::*UUIInteractionNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UUIInteractionNativeInfo
{
	const TCHAR* Name;
	UUIInteractionNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UUIInteraction_::name },
// @baa 0x01df5e40
UUIInteractionNativeInfo GEngineUUIInteractionNatives[] =
{
	MAP_NATIVE(UUIInteraction, execCreateScene)
	MAP_NATIVE(UUIInteraction, execCreateTransientWidget)
	MAP_NATIVE(UUIInteraction, execPlayUISound)
	MAP_NATIVE(UUIInteraction, execGetDataStoreClient)
	MAP_NATIVE(UUIInteraction, execGetPlayerControllerId)
	MAP_NATIVE(UUIInteraction, execGetPlayerIndex)
	MAP_NATIVE(UUIInteraction, execGetPlayerCount)
	{ NULL, NULL }
};
