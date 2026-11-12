// UnUIDataStores.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c45c4;
	/* ENGINE_RefreshSubscribers */
struct UUIDataStore_ : public UUIDataStore
{
	void eventRefreshSubscribers(FName PropertyTag, UBOOL bInvalidateValues, class UUIDataProvider* SourceProvider, INT ArrayIndex);
};

// @baa 0x00d8f690
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDataStore_::eventRefreshSubscribers(FName PropertyTag, UBOOL bInvalidateValues, class UUIDataProvider* SourceProvider, INT ArrayIndex)
{
	struct UIDataStore_eventRefreshSubscribers_Parms
	{
		FName PropertyTag;
		UBOOL bInvalidateValues;
		class UUIDataProvider* SourceProvider;
		INT ArrayIndex;
	} Parms;
	Parms.PropertyTag = PropertyTag;
	Parms.bInvalidateValues = bInvalidateValues ? TRUE : FALSE;
	Parms.SourceProvider = SourceProvider;
	Parms.ArrayIndex = ArrayIndex;
	ProcessEvent(FindFunctionChecked(g_026c45c4), &Parms);
}

extern FName g_026c5048;
	/* ENGINE_Unregistered */
struct UUIDataStore__00d8f700 : public UUIDataStore
{
	void eventUnregistered(class ULocalPlayer* PlayerOwner);
};

// @baa 0x00d8f700
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDataStore__00d8f700::eventUnregistered(class ULocalPlayer* PlayerOwner)
{
	struct UIDataStore_eventUnregistered_Parms
	{
		class ULocalPlayer* PlayerOwner;
	} Parms;
	Parms.PlayerOwner = PlayerOwner;
	ProcessEvent(FindFunctionChecked(g_026c5048), &Parms);
}

extern FName g_026c4f80;
	/* ENGINE_Registered */
struct UUIDataStore__00d8f740 : public UUIDataStore
{
	void eventRegistered(class ULocalPlayer* PlayerOwner);
};

// @baa 0x00d8f740
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDataStore__00d8f740::eventRegistered(class ULocalPlayer* PlayerOwner)
{
	struct UIDataStore_eventRegistered_Parms
	{
		class ULocalPlayer* PlayerOwner;
	} Parms;
	Parms.PlayerOwner = PlayerOwner;
	ProcessEvent(FindFunctionChecked(g_026c4f80), &Parms);
}

extern FName g_026c53cc;
	/* ENGINE_GetCachedPlayerProfile */
struct UUIDataStore_OnlinePlayerData_ : public UUIDataStore_OnlinePlayerData
{
	class UOnlineProfileSettings* eventGetCachedPlayerProfile(INT ControllerId);
};

// @baa 0x00d8f820
/* The script event's generated glue (EngineClasses.h), out of line here. */
class UOnlineProfileSettings* UUIDataStore_OnlinePlayerData_::eventGetCachedPlayerProfile(INT ControllerId)
{
	struct UIDataStore_OnlinePlayerData_eventGetCachedPlayerProfile_Parms
	{
		INT ControllerId;
		class UOnlineProfileSettings* ReturnValue;
	} Parms;
	Parms.ControllerId = ControllerId;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026c53cc), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c3dfc;
	/* ENGINE_ProviderInstanceUnbound */
struct UUIDynamicDataProvider_ : public UUIDynamicDataProvider
{
	void eventProviderInstanceUnbound(class UObject* DataSourceInstance);
};

// @baa 0x00d8f9c0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDynamicDataProvider_::eventProviderInstanceUnbound(class UObject* DataSourceInstance)
{
	struct UIDynamicDataProvider_eventProviderInstanceUnbound_Parms
	{
		class UObject* DataSourceInstance;
	} Parms;
	Parms.DataSourceInstance = DataSourceInstance;
	ProcessEvent(FindFunctionChecked(g_026c3dfc), &Parms);
}

extern FName g_026c450c;
	/* ENGINE_ProviderInstanceBound */
struct UUIDynamicDataProvider__00d8fa00 : public UUIDynamicDataProvider
{
	void eventProviderInstanceBound(class UObject* DataSourceInstance);
};

// @baa 0x00d8fa00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDynamicDataProvider__00d8fa00::eventProviderInstanceBound(class UObject* DataSourceInstance)
{
	struct UIDynamicDataProvider_eventProviderInstanceBound_Parms
	{
		class UObject* DataSourceInstance;
	} Parms;
	Parms.DataSourceInstance = DataSourceInstance;
	ProcessEvent(FindFunctionChecked(g_026c450c), &Parms);
}

extern FName g_026c3db4;
	/* ENGINE_ProviderClientUnbound */
struct USessionSettingsProvider_ : public USessionSettingsProvider
{
	void eventProviderClientUnbound(class UClass* DataSourceClass);
};

// @baa 0x00d8fab0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void USessionSettingsProvider_::eventProviderClientUnbound(class UClass* DataSourceClass)
{
	struct SessionSettingsProvider_eventProviderClientUnbound_Parms
	{
		class UClass* DataSourceClass;
	} Parms;
	Parms.DataSourceClass = DataSourceClass;
	ProcessEvent(FindFunctionChecked(g_026c3db4), &Parms);
}

extern FName g_026c50ec;
	/* ENGINE_ProviderClientBound */
struct USessionSettingsProvider__00d8faf0 : public USessionSettingsProvider
{
	void eventProviderClientBound(class UClass* DataSourceClass);
};

// @baa 0x00d8faf0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void USessionSettingsProvider__00d8faf0::eventProviderClientBound(class UClass* DataSourceClass)
{
	struct SessionSettingsProvider_eventProviderClientBound_Parms
	{
		class UClass* DataSourceClass;
	} Parms;
	Parms.DataSourceClass = DataSourceClass;
	ProcessEvent(FindFunctionChecked(g_026c50ec), &Parms);
}

	/* ENGINE_Registered */
struct UUIDataStore__00d904d0 : public UUIDataStore
{
	void eventRegistered(class ULocalPlayer* PlayerOwner);
};

// @baa 0x00d904d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDataStore__00d904d0::eventRegistered(class ULocalPlayer* PlayerOwner)
{
	struct UIDataStore_eventRegistered_Parms
	{
		class ULocalPlayer* PlayerOwner;
	} Parms;
	Parms.PlayerOwner = PlayerOwner;
	ProcessEvent(FindFunctionChecked(g_026c4f80), &Parms);
}

	/* ENGINE_Unregistered */
struct UUIDataStore__00d90510 : public UUIDataStore
{
	void eventUnregistered(class ULocalPlayer* PlayerOwner);
};

// @baa 0x00d90510
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDataStore__00d90510::eventUnregistered(class ULocalPlayer* PlayerOwner)
{
	struct UIDataStore_eventUnregistered_Parms
	{
		class ULocalPlayer* PlayerOwner;
	} Parms;
	Parms.PlayerOwner = PlayerOwner;
	ProcessEvent(FindFunctionChecked(g_026c5048), &Parms);
}

extern FName g_026c4c74;
	/* ENGINE_AllowPublishingToField */
struct UUIDataProvider_ : public UUIDataProvider
{
	UBOOL eventAllowPublishingToField(const FString& FieldName, INT ArrayIndex);
};

// @baa 0x00d94c40
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL UUIDataProvider_::eventAllowPublishingToField(const FString& FieldName, INT ArrayIndex)
{
	struct UIDataProvider_eventAllowPublishingToField_Parms
	{
		FString FieldName;
		INT ArrayIndex;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.FieldName = FieldName;
	Parms.ArrayIndex = ArrayIndex;
	ProcessEvent(FindFunctionChecked(g_026c4c74), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4358;
	/* ENGINE_OnRegister */
struct UUIDataStore_OnlinePlayerData__00d8f570 : public UUIDataStore_OnlinePlayerData
{
	void eventOnRegister(class ULocalPlayer* InPlayer);
};

// @baa 0x00d8f570
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIDataStore_OnlinePlayerData__00d8f570::eventOnRegister(class ULocalPlayer* InPlayer)
{
	struct UIDataStore_OnlinePlayerData_eventOnRegister_Parms
	{
		class ULocalPlayer* InPlayer;
	} Parms;
	Parms.InPlayer = InPlayer;
	ProcessEvent(FindFunctionChecked(g_026c4358), &Parms);
}
