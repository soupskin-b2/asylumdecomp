// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UGameUISceneClient's script natives that the kit's class does not declare.
struct UGameUISceneClient_ : public UGameUISceneClient
{
	void execSetActiveControl(FFrame& Stack, RESULT_DECL);
	void execCanUnpauseInternalUI(FFrame& Stack, RESULT_DECL);
	void execRequestCursorRenderUpdate(FFrame& Stack, RESULT_DECL);
	void execRequestInputProcessingUpdate(FFrame& Stack, RESULT_DECL);
	void execAllActiveScenes(FFrame& Stack, RESULT_DECL);
	void execGetNextSceneFromIndex(FFrame& Stack, RESULT_DECL);
	void execGetNextScene(FFrame& Stack, RESULT_DECL);
	void execGetPreviousInputProcessingScene(FFrame& Stack, RESULT_DECL);
	void execGetPreviousSceneFromIndex(FFrame& Stack, RESULT_DECL);
	void execGetPreviousScene(FFrame& Stack, RESULT_DECL);
	void execGetActiveScene(FFrame& Stack, RESULT_DECL);
	void execGetActiveSceneCount(FFrame& Stack, RESULT_DECL);
	void execFindSceneIndexByTag(FFrame& Stack, RESULT_DECL);
	void execGetSceneAtIndex(FFrame& Stack, RESULT_DECL);
	void execFindSceneIndex(FFrame& Stack, RESULT_DECL);
	void execFindSceneByTag(FFrame& Stack, RESULT_DECL);
	void execCreateTransientWidget(FFrame& Stack, RESULT_DECL);
	void execCreateScene(FFrame& Stack, RESULT_DECL);
	void execGetTransientScene(FFrame& Stack, RESULT_DECL);
	void execGetCurrentNetMode(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGameUISceneClient_::*UGameUISceneClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameUISceneClientNativeInfo
{
	const TCHAR* Name;
	UGameUISceneClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGameUISceneClient_::name },
// @baa 0x01df5fc0
UGameUISceneClientNativeInfo GEngineUGameUISceneClientNatives[] =
{
	MAP_NATIVE(UGameUISceneClient, execSetActiveControl)
	MAP_NATIVE(UGameUISceneClient, execCanUnpauseInternalUI)
	MAP_NATIVE(UGameUISceneClient, execRequestCursorRenderUpdate)
	MAP_NATIVE(UGameUISceneClient, execRequestInputProcessingUpdate)
	MAP_NATIVE(UGameUISceneClient, execAllActiveScenes)
	MAP_NATIVE(UGameUISceneClient, execGetNextSceneFromIndex)
	MAP_NATIVE(UGameUISceneClient, execGetNextScene)
	MAP_NATIVE(UGameUISceneClient, execGetPreviousInputProcessingScene)
	MAP_NATIVE(UGameUISceneClient, execGetPreviousSceneFromIndex)
	MAP_NATIVE(UGameUISceneClient, execGetPreviousScene)
	MAP_NATIVE(UGameUISceneClient, execGetActiveScene)
	MAP_NATIVE(UGameUISceneClient, execGetActiveSceneCount)
	MAP_NATIVE(UGameUISceneClient, execFindSceneIndexByTag)
	MAP_NATIVE(UGameUISceneClient, execGetSceneAtIndex)
	MAP_NATIVE(UGameUISceneClient, execFindSceneIndex)
	MAP_NATIVE(UGameUISceneClient, execFindSceneByTag)
	MAP_NATIVE(UGameUISceneClient, execCreateTransientWidget)
	MAP_NATIVE(UGameUISceneClient, execCreateScene)
	MAP_NATIVE(UGameUISceneClient, execGetTransientScene)
	MAP_NATIVE(UGameUISceneClient, execGetCurrentNetMode)
	{ NULL, NULL }
};
