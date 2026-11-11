// UnUIDataStores.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UUIDynamicDataProvider_ : public UUIDynamicDataProvider
{
	UBOOL UnbindProviderInstance();
	void execUnbindProviderInstance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2cb0
void UUIDynamicDataProvider_::execUnbindProviderInstance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UnbindProviderInstance();
}

struct USessionSettingsProvider_ : public USessionSettingsProvider
{
	UBOOL UnbindProviderClient();
	void execUnbindProviderClient(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2e50
void USessionSettingsProvider_::execUnbindProviderClient( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UnbindProviderClient();
}

struct UDataStoreClient_ : public UDataStoreClient
{
	UUIDataStore* sub_00da19f0(UClass*);
};

// @baa 0x00ca07d0
void UDataStoreClient::execCreateDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, DataStoreClass);
	P_FINISH;
	*(UUIDataStore**)Result = ((UDataStoreClient_*)this)->sub_00da19f0(DataStoreClass);
}

struct UDataStoreClient__00ca08e0 : public UDataStoreClient
{
	UBOOL sub_00d9cc20(UUIDataStore*);
};

// @baa 0x00ca08e0
void UDataStoreClient::execUnregisterDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIDataStore, DataStore);
	P_FINISH;
	*(UBOOL*)Result = ((UDataStoreClient__00ca08e0*)this)->sub_00d9cc20(DataStore);
}

struct UDataStoreClient__00ca0950 : public UDataStoreClient
{
	INT sub_00d92fb0(ULocalPlayer*);
};

// @baa 0x00ca0950
void UDataStoreClient::execFindPlayerDataStoreIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULocalPlayer, PlayerOwner);
	P_FINISH;
	*(INT*)Result = ((UDataStoreClient__00ca0950*)this)->sub_00d92fb0(PlayerOwner);
}

struct UUIDynamicDataProvider__00ca2c40 : public UUIDynamicDataProvider
{
	UBOOL sub_00d90570(UObject*);
};

// @baa 0x00ca2c40
void UUIDynamicDataProvider::execBindProviderInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, DataSourceInstance);
	P_FINISH;
	*(UBOOL*)Result = ((UUIDynamicDataProvider__00ca2c40*)this)->sub_00d90570(DataSourceInstance);
}

struct USessionSettingsProvider__00ca2de0 : public USessionSettingsProvider
{
	UBOOL sub_00da32c0(UClass*);
};

// @baa 0x00ca2de0
void USessionSettingsProvider::execBindProviderClient(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, DataSourceClass);
	P_FINISH;
	*(UBOOL*)Result = ((USessionSettingsProvider__00ca2de0*)this)->sub_00da32c0(DataSourceClass);
}
