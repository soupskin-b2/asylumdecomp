// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGFxDataStoreSubscriber::*UGFxDataStoreSubscriberNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGFxDataStoreSubscriberNativeInfo
{
	const TCHAR* Name;
	UGFxDataStoreSubscriberNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGFxDataStoreSubscriber::name },
// @baa 0x01df7a10
UGFxDataStoreSubscriberNativeInfo GGFxUIUGFxDataStoreSubscriberNatives[] =
{
	MAP_NATIVE(UGFxDataStoreSubscriber, execSaveSubscriberValue)
	MAP_NATIVE(UGFxDataStoreSubscriber, execClearBoundDataStores)
	MAP_NATIVE(UGFxDataStoreSubscriber, execGetBoundDataStores)
	MAP_NATIVE(UGFxDataStoreSubscriber, execNotifyDataStoreValueUpdated)
	MAP_NATIVE(UGFxDataStoreSubscriber, execRefreshSubscriberValue)
	MAP_NATIVE(UGFxDataStoreSubscriber, execGetDataStoreBinding)
	MAP_NATIVE(UGFxDataStoreSubscriber, execSetDataStoreBinding)
	MAP_NATIVE(UGFxDataStoreSubscriber, execPublishValues)
	{ NULL, NULL }
};
