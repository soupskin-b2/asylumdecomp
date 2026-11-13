// UnUIDataStores.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00d97240
INT UUIDataStore_Strings::vf_124(INT A, INT B)
{
    return vf_118(A, B, -1);
}

/* Kit gap: FindPlayerDataStoreIndex is const in this build (the const operator() is used); Classes.h declares
 * it as non-const sub_00d92fb0. */
struct UDataStoreClient_ : public UDataStoreClient
{
	INT FindPlayerDataStoreIndex(ULocalPlayer* PlayerOwner) const;
};

// @baa 0x00d92fb0
/* The index of PlayerOwner's group in PlayerDataStores, or INDEX_NONE. */
INT UDataStoreClient_::FindPlayerDataStoreIndex(ULocalPlayer* PlayerOwner) const
{
	INT Result = INDEX_NONE;
	for (INT PlayerIndex = 0; PlayerIndex < PlayerDataStores.Num(); PlayerIndex++)
	{
		if (PlayerDataStores(PlayerIndex).PlayerOwner == PlayerOwner)
		{
			Result = PlayerIndex;
			break;
		}
	}
	return Result;
}

extern FName g_026c3dfc;
	/* ENGINE_ProviderInstanceUnbound */
/* Kit gap: the script event's generated glue (EngineClasses.h, inline) isn't declared. */
struct UUIDynamicDataProvider_ : public UUIDynamicDataProvider
{
	FORCEINLINE void eventProviderInstanceUnbound(UObject* DataSourceInstance)
	{
		struct UIDynamicDataProvider_eventProviderInstanceUnbound_Parms
		{
			UObject* DataSourceInstance;
		} Parms;
		Parms.DataSourceInstance = DataSourceInstance;
		ProcessEvent(FindFunctionChecked(g_026c3dfc), &Parms);
	}
};

// @baa 0x00d90620
/* Clears the data source this provider presents and notifies script. */
UBOOL UUIDynamicDataProvider::UnbindProviderInstance()
{
	if (DataSource != NULL)
	{
		UObject* OldDataSource = DataSource;
		DataSource = NULL;
		((UUIDynamicDataProvider_*)this)->eventProviderInstanceUnbound(OldDataSource);
	}
	return TRUE;
}

extern FName g_026c3db4;
	/* ENGINE_ProviderClientUnbound */
/* Kit gap: the script event's generated glue (EngineClasses.h, inline) isn't declared. */
struct USessionSettingsProvider_ : public USessionSettingsProvider
{
	FORCEINLINE void eventProviderClientUnbound(UClass* DataSourceClass)
	{
		struct SessionSettingsProvider_eventProviderClientUnbound_Parms
		{
			UClass* DataSourceClass;
		} Parms;
		Parms.DataSourceClass = DataSourceClass;
		ProcessEvent(FindFunctionChecked(g_026c3db4), &Parms);
	}
};

// @baa 0x00d90670
/* Clears the settings class this provider presents and notifies script. */
UBOOL USessionSettingsProvider::UnbindProviderClient()
{
	if (ProviderClient != NULL)
	{
		UClass* OldProviderClient = ProviderClient;
		ProviderClient = NULL;
		((USessionSettingsProvider_*)this)->eventProviderClientUnbound(OldProviderClient);
	}
	return TRUE;
}

// @baa 0x00d92c70
/* UnUIDataStores.cpp markup parsing helper: the first occurrence of SearchChar in Str that isn't escaped
 * by a preceding backslash, or NULL. */
const TCHAR* sub_00d92c70(const TCHAR* Str, TCHAR SearchChar)
{
	if (Str != NULL)
	{
		UBOOL bEscaped = FALSE;
		for (; *Str; Str++)
		{
			if (bEscaped)
			{
				bEscaped = FALSE;
			}
			else if (*Str == TEXT('\\'))
			{
				bEscaped = TRUE;
			}
			else if (*Str == SearchChar)
			{
				return Str;
			}
		}
	}
	return NULL;
}

class FObjectInstancingGraph;
/* UnObjBas.h ConstructObject<T>; its instances are out of line in the exe (UUIDataStore: 0x00da0cd0). */
template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name = NAME_None, QWORD SetFlags = 0, UObject* Template = NULL, UObject* SubobjectRoot = NULL, FObjectInstancingGraph* InstanceGraph = NULL);

// @baa 0x00da19f0
/* CreateDataStore: a new, initialized data store of the given class (NULL unless it's a UIDataStore class). */
UUIDataStore* UDataStoreClient::CreateDataStore(UClass* DataStoreClass)
{
	UUIDataStore* Result = NULL;
	if (DataStoreClass != NULL && DataStoreClass->IsChildOf(UUIDataStore::StaticClass()))
	{
		Result = ConstructObject<UUIDataStore>(DataStoreClass, this);
		Result->InitializeDataStore();
	}
	return Result;
}

// @baa 0x00d950a0
FName UUIDataStore::GetDataStoreID()
{
	return Tag;
}

static inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

// @baa 0x00d9da60
UBOOL UUIDataStore_InputAlias::HasAliasMappingForPlatform(FName DesiredAlias, BYTE DesiredPlatform)
{
    const UUIDataStore_InputAlias* This = this;
    UBOOL bResult = FALSE;

    INT AliasIndex = FindInputAliasIndex(DesiredAlias);
    if (This->InputAliases.IsValidIndex(AliasIndex) && DesiredPlatform < IPT_MAX)
    {
        bResult = This->InputAliases(AliasIndex).PlatformInputKeys[DesiredPlatform].InputKeyData.InputKeyName != NAME_None;
    }

    return bResult;
}

// @baa 0x00d97260
/* ParseDataStoreReference(MarkupString, out_FieldOwner, out_FieldTag, out_ArrayIndex): the store
 * itself owns every field, and the whole markup string is the tag. */
INT UUIDataStore_Strings::vf_13c(INT MarkupString, INT out_FieldOwner, INT out_FieldTag, INT out_ArrayIndex)
{
	*(UUIDataStore_Strings**)out_FieldOwner = this;
	*(FString*)out_FieldTag = *(const FString*)MarkupString;
	return TRUE;
}

// FInit_00d92ba0: a three-word record cleared on construction.
struct FInit_00d92ba0
{
	void* Reserved;
	void* Reserved2;
	INT A; /* 0x8 */
	INT B; /* 0xc */
	INT C; /* 0x10 */

	FInit_00d92ba0* Init(INT Unused);
};

// @baa 0x00d92ba0
FInit_00d92ba0* FInit_00d92ba0::Init(INT Unused)
{
	A = 0;
	B = 0;
	C = 0;
	return this;
}
