// UOnlineProfileSettings.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include "ue3/Enums.h"

/* Kit gaps: UE3's global operator delete[] (appFree, out of line at 0053dfa0), FSettingsData's structcpptext
 * (CleanUp, SetData), FScriptDelegate::IsCallable and the delegateNotifySettingValueUpdated glue (inlined here;
 * out of line at 00d67120) aren't declared. */
inline void __cdecl operator delete[](void* Ptr) { sub_0053dfa0(Ptr); }

/* FName's comparison (UnName.h); the kit's FName has none. */
extern FName g_026c438c;
	/* NotifySettingValueUpdated */
struct FScriptDelegate_ : public FScriptDelegate
{
	FORCEINLINE UBOOL IsCallable(UObject* OwningObject) const
	{
		return FunctionName != FName(NAME_None) && (Object != NULL ? !Object->IsPendingKill() : (OwningObject != NULL && !OwningObject->IsPendingKill()));
	}
};

struct FSettingsData_ : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
	}
};

struct UOnlineProfileSettings_ : public UOnlineProfileSettings
{
	FORCEINLINE void delegateNotifySettingValueUpdated(FName SettingName)
	{
		struct OnlineProfileSettings_eventNotifySettingValueUpdated_Parms
		{
			FName SettingName;
		} Parms;
		Parms.SettingName = SettingName;
		ProcessDelegate(g_026c438c, &__NotifySettingValueUpdated__Delegate, &Parms, NULL);
	}
};

// @baa 0x00d73b60
/* Stamps the current VersionNumber into the profile's version setting and tells the NotifySettingValueUpdated delegate. */
void UOnlineProfileSettings::SetDefaultVersionNumber()
{
	for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
	{
		FOnlineProfileSetting& Setting = ProfileSettings(Index);
		if (Setting.ProfileSetting.PropertyId == PSI_ProfileVersionNum)
		{
			((FSettingsData_&)Setting.ProfileSetting.Data).SetData(VersionNumber);
			if (((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
			{
				((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(GetProfileSettingName(PSI_ProfileVersionNum));
			}
			return;
		}
	}
}

struct FSettingsData__00d73040 : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE UBOOL operator==(INT Other) const
	{
		if (Type == SDT_Int32)
		{
			return Other == Value1;
		}
		return FALSE;
	}
	FORCEINLINE UBOOL operator!=(INT Other) const
	{
		return !(*this == Other);
	}
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
	}
};

// @baa 0x00d73040
/* Sets an id-mapped setting's value id, telling the NotifySettingValueUpdated delegate when it changes. */
INT UOnlineProfileSettings::SetProfileSettingValueId(INT ProfileSettingId, INT Value)
{
	for (INT MapIndex = 0; MapIndex < ProfileMappings.Num(); MapIndex++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIndex);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT ProfileIndex = 0; ProfileIndex < ProfileSettings.Num(); ProfileIndex++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(ProfileIndex);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_IdMapped)
					{
						UBOOL bChanged = !(((FSettingsData__00d73040&)Setting.ProfileSetting.Data) == Value);
						((FSettingsData__00d73040&)Setting.ProfileSetting.Data).SetData(Value);
						if (bChanged && ((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
						{
							((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(MetaData.Name);
						}
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

struct FSettingsData__00d731f0 : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE UBOOL operator==(INT Other) const
	{
		if (Type == SDT_Int32)
		{
			return Other == Value1;
		}
		return FALSE;
	}
	FORCEINLINE UBOOL operator!=(INT Other) const
	{
		return !(*this == Other);
	}
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
	}
};

// @baa 0x00d731f0
/* Sets a raw-value setting to an INT and tells the NotifySettingValueUpdated delegate. */
INT UOnlineProfileSettings::SetProfileSettingValueInt(INT ProfileSettingId, INT Value)
{
	for (INT MapIndex = 0; MapIndex < ProfileMappings.Num(); MapIndex++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIndex);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT ProfileIndex = 0; ProfileIndex < ProfileSettings.Num(); ProfileIndex++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(ProfileIndex);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_RawValue)
					{
						((FSettingsData__00d731f0&)Setting.ProfileSetting.Data).SetData(Value);
						if (((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
						{
							((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(GetProfileSettingName(ProfileSettingId));
						}
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

struct FSettingsData__00d73390 : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE UBOOL operator==(INT Other) const
	{
		if (Type == SDT_Int32)
		{
			return Other == Value1;
		}
		return FALSE;
	}
	FORCEINLINE UBOOL operator!=(INT Other) const
	{
		return !(*this == Other);
	}
	FORCEINLINE void SetData(FLOAT InData)
	{
		INT Value;
		*(FLOAT*)&Value = InData;
		CleanUp();
		Type = SDT_Float;
		Value1 = Value;
	}
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
	}
};

// @baa 0x00d73390
/* Sets a raw-value setting to a FLOAT and tells the NotifySettingValueUpdated delegate. */
INT UOnlineProfileSettings::SetProfileSettingValueFloat(INT ProfileSettingId, FLOAT Value)
{
	for (INT MapIndex = 0; MapIndex < ProfileMappings.Num(); MapIndex++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIndex);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT ProfileIndex = 0; ProfileIndex < ProfileSettings.Num(); ProfileIndex++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(ProfileIndex);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_RawValue)
					{
						((FSettingsData__00d73390&)Setting.ProfileSetting.Data).SetData(Value);
						if (((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
						{
							((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(GetProfileSettingName(ProfileSettingId));
						}
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}

/* FName's comparison (UnName.h); the kit's FName has none. */
/* FString's operator* (UnString.h); the kit's FString has none. */
struct FStringM_ : public FString
{
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

struct FSettingsData__00d72a10 : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE UBOOL operator==(INT Other) const
	{
		if (Type == SDT_Int32)
		{
			return Other == Value1;
		}
		return FALSE;
	}
	FORCEINLINE UBOOL operator!=(INT Other) const
	{
		return !(*this == Other);
	}
	UBOOL operator==(const FString& Other) const; /* 0x00d6e560 */
	FORCEINLINE UBOOL operator!=(const FString& Other) const
	{
		return !(*this == Other);
	}
	UBOOL FromString(const FString& NewValue); /* 0x00d6e4a0 */
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
	}
};

// @baa 0x00d72a10
/* Sets a setting from a string: id-mapped settings take the id whose name matches, others convert the string;
 * tells the NotifySettingValueUpdated delegate when the value changes. */
INT UOnlineProfileSettings::SetProfileSettingValue(INT ProfileSettingId, const FString& NewValue)
{
	for (INT MapIndex = 0; MapIndex < ProfileMappings.Num(); MapIndex++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIndex);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT ProfileIndex = 0; ProfileIndex < ProfileSettings.Num(); ProfileIndex++)
			{
				FOnlineProfileSetting& Setting = ProfileSettings(ProfileIndex);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_IdMapped)
					{
						FName ValueName;
						ValueName.sub_005d5620(*(const FStringM_&)NewValue, 1, TRUE);
						for (INT Index = 0; Index < MetaData.ValueMappings.Num(); Index++)
						{
							const FIdToStringMapping& Mapping = MetaData.ValueMappings(Index);
							if (Mapping.Name == ValueName)
							{
								UBOOL bChanged = !(((FSettingsData__00d72a10&)Setting.ProfileSetting.Data) == Mapping.Id);
								((FSettingsData__00d72a10&)Setting.ProfileSetting.Data).SetData(Mapping.Id);
								if (bChanged && ((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
								{
									((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(MetaData.Name);
								}
								return TRUE;
							}
						}
					}
					else
					{
						UBOOL bChanged = !(((FSettingsData__00d72a10&)Setting.ProfileSetting.Data) == NewValue);
						Setting.ProfileSetting.Data.FromString(NewValue);
						if (bChanged && ((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
						{
							((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(MetaData.Name);
						}
						return TRUE;
					}
				}
			}
		}
	}
	return FALSE;
}
