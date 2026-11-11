// UnUIDataStores.cpp: 22 functions
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

struct UDataStoreClient__00ca0840 : public UDataStoreClient
{
	UBOOL RegisterDataStore(UUIDataStore* DataStore, ULocalPlayer* PlayerOwner);
	void execRegisterDataStore(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca0840
void UDataStoreClient__00ca0840::execRegisterDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIDataStore, DataStore);
	P_GET_OBJECT_OPTX(ULocalPlayer, PlayerOwner, NULL);
	P_FINISH;
	*(UBOOL*)Result = RegisterDataStore(DataStore, PlayerOwner);
}

struct UUIDataStore_InputAlias_ : public UUIDataStore_InputAlias
{
	UBOOL HasAliasMappingForPlatform(FName DesiredAlias, BYTE DesiredPlatform);
	void execHasAliasMappingForPlatform(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2850
void UUIDataStore_InputAlias_::execHasAliasMappingForPlatform(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE(DesiredPlatform);
	P_FINISH;
	*(UBOOL*)Result = HasAliasMappingForPlatform(DesiredAlias, DesiredPlatform);
}

struct UUISkin_ : public UUISkin
{
	UBOOL AddUISoundCue(FName SoundCueName, USoundCue* SoundToPlay);
	void execAddUISoundCue(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca29d0
void UUISkin_::execAddUISoundCue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_GET_OBJECT(USoundCue, SoundToPlay);
	P_FINISH;
	*(UBOOL*)Result = AddUISoundCue(SoundCueName, SoundToPlay);
}

enum EInputPlatformType
{
	IPT_PC,
	IPT_360,
	IPT_PS3,
	IPT_MAX,
};

struct UUIDataStore_InputAlias__00ca2560 : public UUIDataStore_InputAlias
{
	FName GetAliasInputKeyNameByIndex(INT AliasIndex, BYTE OverridePlatform);
	void execGetAliasInputKeyNameByIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2560
void UUIDataStore_InputAlias__00ca2560::execGetAliasInputKeyNameByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(AliasIndex);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FName*)Result = GetAliasInputKeyNameByIndex(AliasIndex, OverridePlatform);
}

struct UDataStoreClient__00ca0720 : public UDataStoreClient
{
	UUIDataStore* FindDataStore(FName DataStoreTag, ULocalPlayer* PlayerOwner);
	void execFindDataStore(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca0720
void UDataStoreClient__00ca0720::execFindDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DataStoreTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, PlayerOwner, NULL);
	P_FINISH;
	*(UUIDataStore**)Result = FindDataStore(DataStoreTag, PlayerOwner);
}

struct UUISkin__00ca2b00 : public UUISkin
{
	UBOOL GetUISoundCue(FName SoundCueName, USoundCue*& out_UISoundCue);
	void execGetUISoundCue(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2b00
void UUISkin__00ca2b00::execGetUISoundCue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_GET_OBJECT_REF(USoundCue, out_UISoundCue);
	P_FINISH;
	*(UBOOL*)Result = GetUISoundCue(SoundCueName, out_UISoundCue);
}

struct UUIDataStore_InputAlias__00ca24a0 : public UUIDataStore_InputAlias
{
	FName GetAliasInputKeyName(FName DesiredAlias, BYTE OverridePlatform);
	void execGetAliasInputKeyName(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca24a0
void UUIDataStore_InputAlias__00ca24a0::execGetAliasInputKeyName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FName*)Result = GetAliasInputKeyName(DesiredAlias, OverridePlatform);
}

struct UUIDataStore_InputAlias__00ca26f0 : public UUIDataStore_InputAlias
{
	UBOOL GetAliasInputKeyDataByIndex(FRawInputKeyEventData& out_InputKeyData, INT AliasIndex, BYTE OverridePlatform);
	void execGetAliasInputKeyDataByIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca26f0
void UUIDataStore_InputAlias__00ca26f0::execGetAliasInputKeyDataByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FRawInputKeyEventData, out_InputKeyData);
	P_GET_INT(AliasIndex);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(UBOOL*)Result = GetAliasInputKeyDataByIndex(out_InputKeyData, AliasIndex, OverridePlatform);
}

struct UUIDataStore_InputAlias__00ca2610 : public UUIDataStore_InputAlias
{
	UBOOL GetAliasInputKeyData(FRawInputKeyEventData& out_InputKeyData, FName DesiredAlias, BYTE OverridePlatform);
	void execGetAliasInputKeyData(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2610
void UUIDataStore_InputAlias__00ca2610::execGetAliasInputKeyData(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FRawInputKeyEventData, out_InputKeyData);
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(UBOOL*)Result = GetAliasInputKeyData(out_InputKeyData, DesiredAlias, OverridePlatform);
}

struct UUIDataStore_InputAlias__00cbd4d0 : public UUIDataStore_InputAlias
{
	FString GetAliasFontMarkupByIndex(INT AliasIndex, BYTE OverridePlatform);
	void execGetAliasFontMarkupByIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbd4d0
void UUIDataStore_InputAlias__00cbd4d0::execGetAliasFontMarkupByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(AliasIndex);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FString*)Result = GetAliasFontMarkupByIndex(AliasIndex, OverridePlatform);
}

struct UUIDataStore_InputAlias__00cbd3d0 : public UUIDataStore_InputAlias
{
	FString GetAliasFontMarkup(FName DesiredAlias, BYTE OverridePlatform);
	void execGetAliasFontMarkup(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbd3d0
void UUIDataStore_InputAlias__00cbd3d0::execGetAliasFontMarkup(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_GET_BYTE_OPTX(OverridePlatform, IPT_MAX);
	P_FINISH;
	*(FString*)Result = GetAliasFontMarkup(DesiredAlias, OverridePlatform);
}

struct UDataStoreClient__00cc7390 : public UDataStoreClient
{
	void GetAvailableDataStores(UUIScene* CurrentScene, TArray<UUIDataStore*>& out_DataStores);
	void execGetAvailableDataStores(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc7390
void UDataStoreClient__00cc7390::execGetAvailableDataStores(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, CurrentScene);
	P_GET_TARRAY_REF(UUIDataStore*, out_DataStores);
	P_FINISH;
	GetAvailableDataStores(CurrentScene, out_DataStores);
}

struct UUIDataStore_InputAlias__00ca27d0 : public UUIDataStore_InputAlias
{
	INT FindInputAliasIndex(FName DesiredAlias);
	void execFindInputAliasIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca27d0
void UUIDataStore_InputAlias__00ca27d0::execFindInputAliasIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DesiredAlias);
	P_FINISH;
	*(INT*)Result = FindInputAliasIndex(DesiredAlias);
}

struct UUISkin__00ca2950 : public UUISkin
{
	UUITexture* GetCursorResource(FName CursorName);
	void execGetCursorResource(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2950
void UUISkin__00ca2950::execGetCursorResource(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(CursorName);
	P_FINISH;
	*(UUITexture**)Result = GetCursorResource(CursorName);
}

struct UUISkin__00ca2a80 : public UUISkin
{
	UBOOL RemoveUISoundCue(FName SoundCueName);
	void execRemoveUISoundCue(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2a80
void UUISkin__00ca2a80::execRemoveUISoundCue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_FINISH;
	*(UBOOL*)Result = RemoveUISoundCue(SoundCueName);
}
