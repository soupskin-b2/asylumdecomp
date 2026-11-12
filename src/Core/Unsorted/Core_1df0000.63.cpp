// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UGFxDataStoreSubscriber's script natives that the kit's class does not declare.
struct UGFxDataStoreSubscriber_ : public UGFxDataStoreSubscriber
{
	void execSaveSubscriberValue(FFrame& Stack, RESULT_DECL);
	void execClearBoundDataStores(FFrame& Stack, RESULT_DECL);
	void execGetBoundDataStores(FFrame& Stack, RESULT_DECL);
	void execNotifyDataStoreValueUpdated(FFrame& Stack, RESULT_DECL);
	void execRefreshSubscriberValue(FFrame& Stack, RESULT_DECL);
	void execGetDataStoreBinding(FFrame& Stack, RESULT_DECL);
	void execSetDataStoreBinding(FFrame& Stack, RESULT_DECL);
	void execPublishValues(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UGFxDataStoreSubscriber_::*UGFxDataStoreSubscriberNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UGFxDataStoreSubscriberNativeInfo
{
	const TCHAR* Name;
	UGFxDataStoreSubscriberNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UGFxDataStoreSubscriber_::name },
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
