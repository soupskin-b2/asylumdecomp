// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGameUISceneClient::*UGameUISceneClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGameUISceneClientNativeInfo
{
	const TCHAR* Name;
	UGameUISceneClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGameUISceneClient::name },
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
