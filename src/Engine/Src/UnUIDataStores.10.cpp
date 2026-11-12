// UnUIDataStores.cpp: 6 functions
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
/* Kit gap: UStruct::IsChildOf isn't declared; UE3's inline body. */
struct UClass_ : public UClass
{
	UBOOL IsChildOf(const UField* SomeBase) const
	{
		for (const UField* Struct = this; Struct; Struct = Struct->SuperField)
		{
			if (Struct == SomeBase)
			{
				return TRUE;
			}
		}
		return FALSE;
	}
};

// @baa 0x00da19f0
/* CreateDataStore: a new, initialized data store of the given class (NULL unless it's a UIDataStore class). */
UUIDataStore* UDataStoreClient::sub_00da19f0(UClass* DataStoreClass)
{
	UUIDataStore* Result = NULL;
	if (DataStoreClass != NULL && ((UClass_*)DataStoreClass)->IsChildOf(UUIDataStore::StaticClass()))
	{
		Result = ConstructObject<UUIDataStore>(DataStoreClass, this);
		Result->InitializeDataStore();
	}
	return Result;
}
