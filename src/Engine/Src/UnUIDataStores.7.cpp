// UnUIDataStores.cpp: 22 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca2cb0
void UUIDynamicDataProvider::execUnbindProviderInstance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UnbindProviderInstance();
}

// @baa 0x00ca2e50
void USessionSettingsProvider::execUnbindProviderClient( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UnbindProviderClient();
}

// @baa 0x00ca07d0
void UDataStoreClient::execCreateDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, DataStoreClass);
	P_FINISH;
	*(UUIDataStore**)Result = sub_00da19f0(DataStoreClass);
}

// @baa 0x00ca08e0
void UDataStoreClient::execUnregisterDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIDataStore, DataStore);
	P_FINISH;
	*(UBOOL*)Result = sub_00d9cc20(DataStore);
}

// @baa 0x00ca0950
void UDataStoreClient::execFindPlayerDataStoreIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULocalPlayer, PlayerOwner);
	P_FINISH;
	*(INT*)Result = sub_00d92fb0(PlayerOwner);
}

// @baa 0x00ca2c40
void UUIDynamicDataProvider::execBindProviderInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, DataSourceInstance);
	P_FINISH;
	*(UBOOL*)Result = sub_00d90570(DataSourceInstance);
}

// @baa 0x00ca2de0
void USessionSettingsProvider::execBindProviderClient(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, DataSourceClass);
	P_FINISH;
	*(UBOOL*)Result = sub_00da32c0(DataSourceClass);
}

// @baa 0x00ca0840
void UDataStoreClient::execRegisterDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIDataStore, DataStore);
	P_GET_OBJECT_OPTX(ULocalPlayer, PlayerOwner, NULL);
	P_FINISH;
	*(UBOOL*)Result = RegisterDataStore(DataStore, PlayerOwner);
}

// @baa 0x00ca2850
void UUIDataStore_InputAlias::execHasAliasMappingForPlatform(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE(DesiredPlatform);
	P_FINISH;
	*(UBOOL*)Result = HasAliasMappingForPlatform(DesiredAlias, DesiredPlatform);
}

// @baa 0x00ca29d0
void UUISkin::execAddUISoundCue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_GET_OBJECT(USoundCue, SoundToPlay);
	P_FINISH;
	*(UBOOL*)Result = AddUISoundCue(SoundCueName, SoundToPlay);
}


// @baa 0x00ca2560
void UUIDataStore_InputAlias::execGetAliasInputKeyNameByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(AliasIndex);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FName*)Result = GetAliasInputKeyNameByIndex(AliasIndex, OverridePlatform);
}

// @baa 0x00ca0720
void UDataStoreClient::execFindDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DataStoreTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, PlayerOwner, NULL);
	P_FINISH;
	*(UUIDataStore**)Result = FindDataStore(DataStoreTag, PlayerOwner);
}

// @baa 0x00ca2b00
void UUISkin::execGetUISoundCue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_GET_OBJECT_REF(USoundCue, out_UISoundCue);
	P_FINISH;
	*(UBOOL*)Result = GetUISoundCue(SoundCueName, out_UISoundCue);
}

// @baa 0x00ca24a0
void UUIDataStore_InputAlias::execGetAliasInputKeyName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FName*)Result = GetAliasInputKeyName(DesiredAlias, OverridePlatform);
}

// @baa 0x00ca26f0
void UUIDataStore_InputAlias::execGetAliasInputKeyDataByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FRawInputKeyEventData, out_InputKeyData);
	P_GET_INT(AliasIndex);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(UBOOL*)Result = GetAliasInputKeyDataByIndex(out_InputKeyData, AliasIndex, OverridePlatform);
}

// @baa 0x00ca2610
void UUIDataStore_InputAlias::execGetAliasInputKeyData(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FRawInputKeyEventData, out_InputKeyData);
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(UBOOL*)Result = GetAliasInputKeyData(out_InputKeyData, DesiredAlias, OverridePlatform);
}

// @baa 0x00cbd4d0
void UUIDataStore_InputAlias::execGetAliasFontMarkupByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(AliasIndex);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FString*)Result = GetAliasFontMarkupByIndex(AliasIndex, OverridePlatform);
}

// @baa 0x00cbd3d0
void UUIDataStore_InputAlias::execGetAliasFontMarkup(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FString*)Result = GetAliasFontMarkup(DesiredAlias, OverridePlatform);
}

// @baa 0x00cc7390
void UDataStoreClient::execGetAvailableDataStores(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, CurrentScene);
	P_GET_TARRAY_REF(UUIDataStore*, out_DataStores);
	P_FINISH;
	GetAvailableDataStores(CurrentScene, out_DataStores);
}

// @baa 0x00ca27d0
void UUIDataStore_InputAlias::execFindInputAliasIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_FINISH;
	*(INT*)Result = FindInputAliasIndex(DesiredAlias);
}

// @baa 0x00ca2950
void UUISkin::execGetCursorResource(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(CursorName);
	P_FINISH;
	*(UUITexture**)Result = GetCursorResource(CursorName);
}

// @baa 0x00ca2a80
void UUISkin::execRemoveUISoundCue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_FINISH;
	*(UBOOL*)Result = RemoveUISoundCue(SoundCueName);
}
