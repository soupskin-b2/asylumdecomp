// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// ULocalPlayer's script natives that the kit's class does not declare.
struct ULocalPlayer_ : public ULocalPlayer
{
	void execDeProject(FFrame& Stack, RESULT_DECL);
	void execTouchPlayerPostProcessChain(FFrame& Stack, RESULT_DECL);
	void execGetPostProcessChain(FFrame& Stack, RESULT_DECL);
	void execRemoveAllPostProcessingChains(FFrame& Stack, RESULT_DECL);
	void execRemovePostProcessingChain(FFrame& Stack, RESULT_DECL);
	void execInsertPostProcessingChain(FFrame& Stack, RESULT_DECL);
	void execGetActorVisibility(FFrame& Stack, RESULT_DECL);
	void execSendSplitJoin(FFrame& Stack, RESULT_DECL);
	void execSpawnPlayActor(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ULocalPlayer_::*ULocalPlayerNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ULocalPlayerNativeInfo
{
	const TCHAR* Name;
	ULocalPlayerNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ULocalPlayer_::name },
// @baa 0x01df5cd0
ULocalPlayerNativeInfo GEngineULocalPlayerNatives[] =
{
	MAP_NATIVE(ULocalPlayer, execDeProject)
	MAP_NATIVE(ULocalPlayer, execTouchPlayerPostProcessChain)
	MAP_NATIVE(ULocalPlayer, execGetPostProcessChain)
	MAP_NATIVE(ULocalPlayer, execRemoveAllPostProcessingChains)
	MAP_NATIVE(ULocalPlayer, execRemovePostProcessingChain)
	MAP_NATIVE(ULocalPlayer, execInsertPostProcessingChain)
	MAP_NATIVE(ULocalPlayer, execGetActorVisibility)
	MAP_NATIVE(ULocalPlayer, execSendSplitJoin)
	MAP_NATIVE(ULocalPlayer, execSpawnPlayActor)
	{ NULL, NULL }
};
