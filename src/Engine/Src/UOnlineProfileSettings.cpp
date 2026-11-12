// UOnlineProfileSettings.cpp: 49 functions
// Placed here by: neighbours 21, class 6, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_020b50d8[];
// @baa 0x00d67060
int sub_00d67060(void) { return (int)g_020b50d8; }

int sub_005c7a20(void);
extern undefined * g_020b50f0;
// @baa 0x00d67070
undefined4 * UObject::sub_00d67070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b50f0);
  return param_1;
}

// @baa 0x00d67090
IMPLEMENT_CLASS_AT(UOnlinePlaylistManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlinePlaylistManager.cpp", 10);

// @baa 0x00d670f0
struct C {
    int sub_00d67110(int arg1);
};

// @baa 0x00d67110
int C::sub_00d67110(int arg1)
{
    return (int)this;
}

// @baa 0x00d67160
int sub_00d67160(int a0, int a1) { return a1; }

extern char g_020b51fc[];
struct C_00d67170 { void sub_00d67170(void); };

// @baa 0x00d67170
void C_00d67170::sub_00d67170(void) { *(int*)((char*)this + 0) = (int)g_020b51fc; }

int sub_0053dfa0(...);
// @baa 0x00d67180
undefined4 * UOnlinePlaylistManager::sub_00d67180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020b51fc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01f4d260;
// @baa 0x00d671a0
undefined4 * UObject::sub_00d671a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f4d260);
  return param_1;
}

// @baa 0x00d671c0
int sub_00d671c0(int a0, int a1) { return a1; }

// @baa 0x00d671d0
int sub_00d671d0(int a0, int a1) { return a1; }

extern char g_020b5204[];
// @baa 0x00d671e0
int sub_00d671e0(void) { return (int)g_020b5204; }

// @baa 0x00d671f0
int sub_00d671f0(int a0, int a1) { return a1; }

// @baa 0x00d67200
int sub_00d67200(void) { return (int)g_020b5204; }

// @baa 0x00d67210
int sub_00d67210(int a0, int a1) { return a1; }

struct C_00d67220 { int sub_00d67220(void); };

// @baa 0x00d67220
int C_00d67220::sub_00d67220(void) { return *(int*)((char*)this + 28); }

// @baa 0x00d67270
int sub_00d67270(int a0, int a1) { return a1; }

extern char g_020b5210[];
// @baa 0x00d67280
int sub_00d67280(void) { return (int)g_020b5210; }

// @baa 0x00d67290
int sub_00d67290(int a0, int a1) { return a1; }

// @baa 0x00d672a0
int sub_00d672a0(void) { return (int)g_020b5204; }

// @baa 0x00d672b0
// @baa 0x00d673e0
bool UOnlinePlaylistManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67420
IMPLEMENT_CLASS_AT(UOnlineProfileSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineProfileSettings.cpp", 7);

// @baa 0x00d67530
int UOnlineProfileSettings::vf_000(void) { return 1; }

// @baa 0x00d67540
bool UOnlineProfileSettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d88ba0
// @baa 0x00d88c40
// @baa 0x00d8aba0
// @baa 0x00d8ac90

struct F00d67250Record
{
		INT	First;
		INT	Second;
		DOUBLE Value;
		INT	Flags;
};

struct C_00d67250Record : F00d67250Record
{
		F00d67250Record* sub_00d67250();
};

// @baa 0x00d67250
F00d67250Record* C_00d67250Record::sub_00d67250()
{
		Flags |= 1;
		Value = 0.0;
		First = 0;
		Second = 0;
		return this;
}

struct C_00d67250Driver
{
		C_00d67250Record Record;
		void Run();
};

void C_00d67250Driver::Run()
{
		Record.sub_00d67250();
}

static void Use_00d67250()
{
		C_00d67250Driver Driver;
		Driver.Run();
}

// @baa 0x00d72710
/* Whether a profile setting's values are mapped to ids. */
UBOOL UOnlineProfileSettings::IsProfileSettingIdMapped(INT ProfileSettingId)
{
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
		if (MetaData.Id == ProfileSettingId)
		{
			return MetaData.MappingType == PVMT_IdMapped;
		}
	}
	return FALSE;
}

/* Kit gap: FSettingsData::GetData (structcpptext) isn't declared. */
struct FSettingsData_ : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
		else
		{
			OutData = 0;
		}
	}
	FORCEINLINE void GetData(FLOAT& OutData) const
	{
		if (Type == SDT_Float)
		{
			OutData = *(const FLOAT*)&Value1;
		}
		else
		{
			OutData = 0.f;
		}
	}
};

// @baa 0x00d72e60
/* The value of a raw-value int profile setting; FALSE when it is unknown or id mapped. */
INT UOnlineProfileSettings::GetProfileSettingValueInt(INT ProfileSettingId, INT& Value)
{
	for (INT MapIdx = 0; MapIdx < ProfileMappings.Num(); MapIdx++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIdx);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(Index);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_RawValue)
					{
						((const FSettingsData_&)Setting.ProfileSetting.Data).GetData(Value);
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

// @baa 0x00d72f50
/* The value of a raw-value float profile setting; FALSE when it is unknown or id mapped. */
INT UOnlineProfileSettings::GetProfileSettingValueFloat(INT ProfileSettingId, FLOAT& Value)
{
	for (INT MapIdx = 0; MapIdx < ProfileMappings.Num(); MapIdx++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIdx);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(Index);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_RawValue)
					{
						((const FSettingsData_&)Setting.ProfileSetting.Data).GetData(Value);
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

// @baa 0x00d73690
/* The default value of a raw-value int profile setting; FALSE when it is unknown or id mapped. */
INT UOnlineProfileSettings::GetProfileSettingDefaultInt(INT ProfileSettingId, INT& DefaultInt)
{
	for (INT MapIdx = 0; MapIdx < ProfileMappings.Num(); MapIdx++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIdx);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT Index = 0; Index < DefaultSettings.Num(); Index++)
			{
				FOnlineProfileSetting& Setting = DefaultSettings(Index);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_RawValue)
					{
						((const FSettingsData_&)Setting.ProfileSetting.Data).GetData(DefaultInt);
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

// @baa 0x00d73780
/* The default value of a raw-value float profile setting; FALSE when it is unknown or id mapped. */
INT UOnlineProfileSettings::GetProfileSettingDefaultFloat(INT ProfileSettingId, FLOAT& DefaultFloat)
{
	for (INT MapIdx = 0; MapIdx < ProfileMappings.Num(); MapIdx++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIdx);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT Index = 0; Index < DefaultSettings.Num(); Index++)
			{
				FOnlineProfileSetting& Setting = DefaultSettings(Index);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_RawValue)
					{
						((const FSettingsData_&)Setting.ProfileSetting.Data).GetData(DefaultFloat);
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

/* Kit gap: FSettingsData::GetData (structcpptext) isn't declared. */
struct FSettingsData__00d72780 : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
		else
		{
			OutData = 0;
		}
	}
};

// @baa 0x00d72780
/* The name of an id-mapped profile setting's current value; NAME_None when there's none. */
FName UOnlineProfileSettings::GetProfileSettingValueName(INT ProfileSettingId)
{
	for (INT MapIdx = 0; MapIdx < ProfileMappings.Num(); MapIdx++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIdx);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(Index);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType != PVMT_IdMapped)
					{
						return NAME_None;
					}
					INT ValueId;
					((const FSettingsData__00d72780&)Setting.ProfileSetting.Data).GetData(ValueId);
					for (INT ValueIdx = 0; ValueIdx < MetaData.ValueMappings.Num(); ValueIdx++)
					{
						const FIdToStringMapping& Mapping = MetaData.ValueMappings(ValueIdx);
						if (Mapping.Id == ValueId)
						{
							return Mapping.Name;
						}
					}
				}
			}
		}
	}
	return NAME_None;
}

// @baa 0x00d73c70
/* How a profile setting's values are mapped; FALSE when it has no metadata. */
INT UOnlineProfileSettings::GetProfileSettingMappingType(INT ProfileSettingId, BYTE& OutType)
{
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
		if (MetaData.Id == ProfileSettingId)
		{
			OutType = MetaData.MappingType;
			return TRUE;
		}
	}
	return FALSE;
}

/* Kit gap: the script natives FindProfileSettingIndex / FindProfileMappingIndex (execs 00c8db10 / 00c8db80) aren't
 * declared. */
struct UOnlineProfileSettings_ : public UOnlineProfileSettings
{
	INT FindProfileSettingIndex(INT ProfileSettingId) const;
	INT FindProfileMappingIndex(INT ProfileSettingId) const;
};

// @baa 0x00d72590
/* The index of a profile setting in ProfileSettings; INDEX_NONE when there's none. */
INT UOnlineProfileSettings_::FindProfileSettingIndex(INT ProfileSettingId) const
{
	INT Result = INDEX_NONE;
	for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
	{
		if (ProfileSettings(Index).ProfileSetting.PropertyId == ProfileSettingId)
		{
			Result = Index;
			break;
		}
	}
	return Result;
}

// @baa 0x00d72610
/* The index of a profile setting's metadata in ProfileMappings; INDEX_NONE when there's none. */
INT UOnlineProfileSettings_::FindProfileMappingIndex(INT ProfileSettingId) const
{
	INT Result = INDEX_NONE;
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		if (ProfileMappings(Index).Id == ProfileSettingId)
		{
			Result = Index;
			break;
		}
	}
	return Result;
}

/* Kit gap: FSettingsData::GetData (structcpptext) isn't declared. */
struct FSettingsData__00d73af0 : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
		else
		{
			OutData = 0;
		}
	}
};

// @baa 0x00d73af0
/* The profile's version (the int value of PSI_ProfileVersionNum); -1 when it has none. */
INT UOnlineProfileSettings::GetVersionNumber()
{
	INT Version = -1;
	for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
	{
		FOnlineProfileSetting& Setting = ProfileSettings(Index);
		if (Setting.ProfileSetting.PropertyId == PSI_ProfileVersionNum)
		{
			((const FSettingsData__00d73af0&)Setting.ProfileSetting.Data).GetData(Version);
			break;
		}
	}
	return Version;
}

/* Kit gap: FName has no operator== (UnName.h). */
// @baa 0x00d723d0
/* The id of the profile setting with this name; FALSE when there's none. */
INT UOnlineProfileSettings::GetProfileSettingId(FName ProfileSettingName, INT& ProfileSettingId)
{
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
		if (MetaData.Name == ProfileSettingName)
		{
			ProfileSettingId = MetaData.Id;
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x00d72450
/* The name of a profile setting; NAME_None when there's none. */
FName UOnlineProfileSettings::GetProfileSettingName(INT ProfileSettingId)
{
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
		if (MetaData.Id == ProfileSettingId)
		{
			return MetaData.Name;
		}
	}
	return NAME_None;
}

// @baa 0x00d724d0
/* The column header text of a profile setting; empty when there's none. */
FString UOnlineProfileSettings::GetProfileSettingColumnHeader(INT ProfileSettingId)
{
	FString Result;
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
		if (MetaData.Id == ProfileSettingId)
		{
			Result = MetaData.ColumnHeaderText;
			break;
		}
	}
	return Result;
}

/* Kit gap: UOnlineProfileSettings' FindProfileSetting / FindProfileMappingMetaData aren't declared. */
struct UOnlineProfileSettings__00d73ce0 : public UOnlineProfileSettings
{
	FORCEINLINE FOnlineProfileSetting* FindProfileSetting(INT ProfileSettingId)
	{
		for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
		{
			FOnlineProfileSetting& Setting = ProfileSettings(Index);
			if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
			{
				return &Setting;
			}
		}
		return NULL;
	}
	FORCEINLINE FSettingsPropertyPropertyMetaData* FindProfileMappingMetaData(INT ProfileSettingId)
	{
		for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
		{
			FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
			if (MetaData.Id == ProfileSettingId)
			{
				return &MetaData;
			}
		}
		return NULL;
	}
};

// @baa 0x00d73ce0
/* The range of a ranged profile setting and whether it's shown as an int; FALSE when it isn't a ranged profile setting. */
INT UOnlineProfileSettings::GetProfileSettingRange(INT ProfileSettingId, FLOAT& OutMinValue, FLOAT& OutMaxValue, FLOAT& RangeIncrement, BYTE& bFormatAsInt)
{
	UBOOL bOk = FALSE;
	FSettingsPropertyPropertyMetaData* MetaData = ((UOnlineProfileSettings__00d73ce0*)this)->FindProfileMappingMetaData(ProfileSettingId);
	FOnlineProfileSetting* Setting = ((UOnlineProfileSettings__00d73ce0*)this)->FindProfileSetting(ProfileSettingId);
	if (MetaData != NULL && MetaData->MappingType == PVMT_Ranged && Setting != NULL)
	{
		RangeIncrement = MetaData->RangeIncrement;
		OutMinValue = MetaData->MinVal;
		OutMaxValue = MetaData->MaxVal;
		bFormatAsInt = Setting->ProfileSetting.Data.Type == SDT_Int32;
		bOk = TRUE;
	}
	return bOk;
}

struct UOnlineProfileSettings__00d73f90 : public UOnlineProfileSettings
{
	FORCEINLINE FOnlineProfileSetting* FindProfileSetting(INT ProfileSettingId)
	{
		for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
		{
			FOnlineProfileSetting& Setting = ProfileSettings(Index);
			if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
			{
				return &Setting;
			}
		}
		return NULL;
	}
};

// @baa 0x00d73f90
/* A ranged profile setting's value as a float (ints are converted); false when there's no such setting. */
bool UOnlineProfileSettings::GetRangedProfileSettingValue(INT ProfileSettingId, FLOAT& OutValue)
{
	FOnlineProfileSetting* Setting = ((UOnlineProfileSettings__00d73f90*)this)->FindProfileSetting(ProfileSettingId);
	if (Setting != NULL)
	{
		switch (Setting->ProfileSetting.Data.Type)
		{
			case SDT_Int32:
			{
				INT Value;
				((const FSettingsData_&)Setting->ProfileSetting.Data).GetData(Value);
				OutValue = (FLOAT)Value;
				break;
			}
			case SDT_Float:
			{
				((const FSettingsData_&)Setting->ProfileSetting.Data).GetData(OutValue);
				break;
			}
			default:
			{
				Setting = NULL;
				break;
			}
		}
	}
	return Setting != NULL;
}

/* Kit gap: FSettingsData::GetData (structcpptext) isn't declared. */
struct FSettingsData__00d73540 : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
		else
		{
			OutData = 0;
		}
	}
};

// @baa 0x00d73540
/* The default value id of an id-mapped profile setting and its index in the value list; FALSE when the setting is
 * unknown or isn't id mapped. */
INT UOnlineProfileSettings::GetProfileSettingDefaultId(INT ProfileSettingId, INT& DefaultId, INT& ListIndex)
{
	for (INT MapIdx = 0; MapIdx < ProfileMappings.Num(); MapIdx++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIdx);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT Index = 0; Index < DefaultSettings.Num(); Index++)
			{
				FOnlineProfileSetting& Setting = DefaultSettings(Index);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType != PVMT_IdMapped)
					{
						return FALSE;
					}
					((const FSettingsData__00d73540&)Setting.ProfileSetting.Data).GetData(DefaultId);
					for (INT ValueIdx = 0; ValueIdx < MetaData.ValueMappings.Num(); ValueIdx++)
					{
						if (MetaData.ValueMappings(ValueIdx).Id == DefaultId)
						{
							ListIndex = ValueIdx;
							break;
						}
					}
					return TRUE;
				}
			}
		}
	}
	return FALSE;
}

// @baa 0x00d675d0
/* Sets the value of the profile setting with this name from a string; FALSE when there's no such setting. */
INT UOnlineProfileSettings::SetProfileSettingValueByName(FName ProfileSettingName, const FString& NewValue)
{
	INT ProfileSettingId;
	if (GetProfileSettingId(ProfileSettingName, ProfileSettingId))
	{
		return SetProfileSettingValue(ProfileSettingId, NewValue);
	}
	return FALSE;
}

extern FName g_026c438c;
	/* NotifySettingValueUpdated */
/* Kit gap: the delegate's generated glue (EngineClasses.h) isn't declared. */
struct UOnlineProfileSettings__00d67120 : public UOnlineProfileSettings
{
	void delegateNotifySettingValueUpdated(FName SettingName);
};

// @baa 0x00d67120
/* The script delegate's generated glue, out of line here. */
void UOnlineProfileSettings__00d67120::delegateNotifySettingValueUpdated(FName SettingName)
{
	struct OnlineProfileSettings_eventNotifySettingValueUpdated_Parms
	{
		FName SettingName;
	} Parms;
	Parms.SettingName = SettingName;
	ProcessDelegate(g_026c438c, &__NotifySettingValueUpdated__Delegate, &Parms, NULL);
}

// @baa 0x00d67580
/* Looks the setting up by name and returns its value as a string. */
INT UOnlineProfileSettings::GetProfileSettingValueByName(FName ProfileSettingName, FString& Value)
{
	INT ProfileSettingId;
	if (GetProfileSettingId(ProfileSettingName, ProfileSettingId))
	{
		return GetProfileSettingValue(ProfileSettingId, Value, INDEX_NONE);
	}
	return FALSE;
}
