// USettings.cpp: 19 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* Kit gaps: UE3's global operator delete[] (appFree, the exe's out-of-line copy
  * 0053dfa0) isn't declared next to Implement.h's delete, nor is FSettingsData's structcpptext (CleanUp and
 * the SetData overloads). */
inline void __cdecl operator delete[](void* Ptr) { sub_0053dfa0(Ptr); }

struct FSettingsData_ : public FSettingsData
{
	/* Frees the string or blob this holds and empties it. */
	inline void CleanUp()
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
	void SetData(DOUBLE InData);
	void SetData(FLOAT InData);
};

// @baa 0x00d6e350
/* Makes this a double value. */
void FSettingsData_::SetData(DOUBLE InData)
{
	CleanUp();
	Type = SDT_Double;
	*(DOUBLE*)&Value1 = InData;
}

/* Makes this a float value. */
void FSettingsData_::SetData(FLOAT InData)
{
	CleanUp();
	Type = SDT_Float;
	Value1 = *(INT*)&InData;
}

// @baa 0x00d75df0
/* The type of a property's data; SDT_Empty when there's no such property. */
BYTE USettings::GetPropertyType(INT PropertyId)
{
	for (INT Index = 0; Index < Properties.Num(); Index++)
	{
		FSettingsProperty& Property = Properties(Index);
		if (Property.PropertyId == PropertyId)
		{
			return Property.Data.Type;
		}
	}
	return SDT_Empty;
}

/* Kit gap: USettings::FindProperty (USettings.h) isn't declared. */
struct USettings_ : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
};

// @baa 0x00d760d0
/* Whether there's a property with this id. */
UBOOL USettings::HasProperty(INT PropertyId)
{
	return ((USettings_*)this)->FindProperty(PropertyId) != NULL;
}

/* Kit gap: USettings::FindStringSetting (USettings.h) isn't declared. */
struct USettings__00d76140 : public USettings
{
	FORCEINLINE FLocalizedStringSetting* FindStringSetting(INT SettingId)
	{
		for (INT Index = 0; Index < LocalizedSettings.Num(); Index++)
		{
			FLocalizedStringSetting& Setting = LocalizedSettings(Index);
			if (Setting.Id == SettingId)
			{
				return &Setting;
			}
		}
		return NULL;
	}
};

// @baa 0x00d76140
/* Whether there's a string setting with this id. */
UBOOL USettings::HasStringSetting(INT SettingId)
{
	return ((USettings__00d76140*)this)->FindStringSetting(SettingId) != NULL;
}

// @baa 0x00d761b0
/* How a property's values are mapped; FALSE when it has no metadata. */
UBOOL USettings::GetPropertyMappingType(INT PropertyId, BYTE& OutType)
{
	for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
	{
		FSettingsPropertyPropertyMetaData& MetaData = PropertyMappings(Index);
		if (MetaData.Id == PropertyId)
		{
			OutType = MetaData.MappingType;
			return TRUE;
		}
	}
	return FALSE;
}

/* Kit gaps: FSettingsData::GetData (structcpptext) and USettings::FindProperty (USettings.h) aren't declared. */
struct FSettingsData__00d75aa0 : public FSettingsData
{
	FORCEINLINE void GetData(FString& OutData) const
	{
		if (Type == SDT_String)
		{
			if (Value2.Dummy != 0)
			{
				OutData = (const TCHAR*)Value2.Dummy;
			}
			else
			{
				OutData = TEXT("");
			}
		}
	}
};

// @baa 0x00d75aa0
/* The value of a string property; FALSE when there's no such property or it isn't a string. */
UBOOL USettings::GetStringProperty(INT PropertyId, FString& Value)
{
	UBOOL bFound = FALSE;
	FSettingsProperty* Property = ((USettings_*)this)->FindProperty(PropertyId);
	if (Property != NULL)
	{
		if (Property->Data.Type == SDT_String)
		{
			((const FSettingsData__00d75aa0&)Property->Data).GetData(Value);
			bFound = TRUE;
		}
	}
	return bFound;
}

/* Kit gaps: FSettingsData::GetData (structcpptext) and USettings::FindProperty (USettings.h) aren't declared. */
struct FSettingsData__00d75970 : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
	}
};

// @baa 0x00d75970
/* The value of an int property; FALSE when there's no such property or it isn't an int. */
UBOOL USettings::GetIntProperty(INT PropertyId, INT& Value)
{
	UBOOL bFound = FALSE;
	FSettingsProperty* Property = ((USettings_*)this)->FindProperty(PropertyId);
	if (Property != NULL)
	{
		if (Property->Data.Type == SDT_Int32)
		{
			((const FSettingsData__00d75970&)Property->Data).GetData(Value);
			bFound = TRUE;
		}
	}
	return bFound;
}

/* Kit gap: FName has no operator== (UnName.h). */
static FORCEINLINE UBOOL operator==(const FName& A, const FName& B)
{
	return A.Index == B.Index && A.Number == B.Number;
}

// @baa 0x00d75490
/* The id of the property with this name; FALSE when there's none. */
UBOOL USettings::GetPropertyId(FName PropertyName, INT& PropertyId)
{
	for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
	{
		if (PropertyMappings(Index).Name == PropertyName)
		{
			PropertyId = PropertyMappings(Index).Id;
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x00d75550
/* The name of a property; NAME_None when there's no such property. */
FName USettings::GetPropertyName(INT PropertyId)
{
	for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
	{
		if (PropertyMappings(Index).Id == PropertyId)
		{
			return PropertyMappings(Index).Name;
		}
	}
	return NAME_None;
}

// @baa 0x00d74f50
/* The name of the current value of the string setting with this name; NAME_None when there's none. */
FName USettings::GetStringSettingValueNameByName(FName StringSettingName)
{
	INT StringSettingId;
	if (GetStringSettingId(StringSettingName, StringSettingId))
	{
		for (INT Index = 0; Index < LocalizedSettings.Num(); Index++)
		{
			if (LocalizedSettings(Index).Id == StringSettingId)
			{
				return GetStringSettingValueName(StringSettingId, LocalizedSettings(Index).ValueIndex);
			}
		}
	}
	return NAME_None;
}

// @baa 0x00d74a60
/* The column header text of a string setting; empty when there's no such setting. */
FString USettings::GetStringSettingColumnHeader(INT StringSettingId)
{
	FString Result;
	for (INT Index = 0; Index < LocalizedSettingsMappings.Num(); Index++)
	{
		if (LocalizedSettingsMappings(Index).Id == StringSettingId)
		{
			Result = LocalizedSettingsMappings(Index).ColumnHeaderText;
			break;
		}
	}
	return Result;
}

// @baa 0x00d75610
/* The column header text of a property; empty when there's no such property. */
FString USettings::GetPropertyColumnHeader(INT PropertyId)
{
	FString Result;
	for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
	{
		if (PropertyMappings(Index).Id == PropertyId)
		{
			Result = PropertyMappings(Index).ColumnHeaderText;
			break;
		}
	}
	return Result;
}

/* Kit gap: USettings::FindPropertyMetaData (USettings.h) isn't declared. */
struct USettings__00d75ce0 : public USettings
{
	FORCEINLINE FSettingsPropertyPropertyMetaData* FindPropertyMetaData(INT PropertyId)
	{
		for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
		{
			FSettingsPropertyPropertyMetaData& MetaData = PropertyMappings(Index);
			if (MetaData.Id == PropertyId)
			{
				return &MetaData;
			}
		}
		return NULL;
	}
};

// @baa 0x00d75ce0
/* The value id of an id-mapped int property; FALSE when the property, its mapping or the id isn't known. */
UBOOL USettings::GetPropertyValueId(INT PropertyId, INT& ValueId)
{
	UBOOL bFound = FALSE;
	INT Value;
	if (GetIntProperty(PropertyId, Value))
	{
		FSettingsPropertyPropertyMetaData* MetaData = ((USettings__00d75ce0*)this)->FindPropertyMetaData(PropertyId);
		if (MetaData != NULL && MetaData->MappingType == PVMT_IdMapped)
		{
			for (INT Index = 0; Index < MetaData->ValueMappings.Num(); Index++)
			{
				if (MetaData->ValueMappings(Index).Id == Value)
				{
					ValueId = Value;
					bFound = TRUE;
					break;
				}
			}
		}
	}
	return bFound;
}

/* Kit gap: USettings::FindProperty / FindPropertyMetaData (USettings.h) aren't declared. */
struct USettings__00d76220 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
	FORCEINLINE FSettingsPropertyPropertyMetaData* FindPropertyMetaData(INT PropertyId)
	{
		for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
		{
			FSettingsPropertyPropertyMetaData& MetaData = PropertyMappings(Index);
			if (MetaData.Id == PropertyId)
			{
				return &MetaData;
			}
		}
		return NULL;
	}
};

// @baa 0x00d76220
/* The range of a ranged property and whether it's shown as an int; FALSE when it isn't a ranged property. */
UBOOL USettings::GetPropertyRange(INT PropertyId, FLOAT& OutMinValue, FLOAT& OutMaxValue, FLOAT& RangeIncrement, BYTE& bFormatAsInt)
{
	UBOOL bOk = FALSE;
	FSettingsPropertyPropertyMetaData* MetaData = ((USettings__00d76220*)this)->FindPropertyMetaData(PropertyId);
	FSettingsProperty* Property = ((USettings__00d76220*)this)->FindProperty(PropertyId);
	if (MetaData != NULL && MetaData->MappingType == PVMT_Ranged && Property != NULL)
	{
		RangeIncrement = MetaData->RangeIncrement;
		OutMinValue = MetaData->MinVal;
		OutMaxValue = MetaData->MaxVal;
		bFormatAsInt = Property->Data.Type == SDT_Int32;
		bOk = TRUE;
	}
	return bOk;
}

// @baa 0x00d67c50
/* Frees the string or blob this owns (FSettingsData::CleanUp, inlined). */
FSettingsData::~FSettingsData()
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

// @baa 0x00d68020
/* Sets the value index of the string setting with this name. */
void USettings::SetStringSettingValueByName(FName StringSettingName, INT ValueIndex, UBOOL bShouldAutoAdd)
{
	INT StringSettingId;
	if (GetStringSettingId(StringSettingName, StringSettingId))
	{
		SetStringSettingValue(StringSettingId, ValueIndex, bShouldAutoAdd);
	}
}

/* The value index of the string setting with this name; FALSE when there's none. */
UBOOL USettings::GetStringSettingValueByName(FName StringSettingName, INT& ValueIndex)
{
	INT StringSettingId;
	if (GetStringSettingId(StringSettingName, StringSettingId))
	{
		return GetStringSettingValue(StringSettingId, ValueIndex);
	}
	return FALSE;
}

// @baa 0x00d68070

// @baa 0x00d74b60
/* The name of one of a string setting's values; NAME_None when there's no such setting or value. */
FName USettings::GetStringSettingValueName(INT StringSettingId, INT ValueIndex)
{
	for (INT Index = 0; Index < LocalizedSettingsMappings.Num(); Index++)
	{
		if (LocalizedSettingsMappings(Index).Id == StringSettingId)
		{
			for (INT ValueIdx = 0; ValueIdx < LocalizedSettingsMappings(Index).ValueMappings.Num(); ValueIdx++)
			{
				if (LocalizedSettingsMappings(Index).ValueMappings(ValueIdx).Id == ValueIndex)
				{
					return LocalizedSettingsMappings(Index).ValueMappings(ValueIdx).Name;
				}
			}
		}
	}
	return NAME_None;
}

// @baa 0x00d74d30
/* Whether the current value of a string setting is its wildcard value. The settings lookup indexes LocalizedSettings
 * with the mappings' index, as the original does. */
UBOOL USettings::IsWildcardStringSetting(INT StringSettingId)
{
	for (INT Index = 0; Index < LocalizedSettingsMappings.Num(); Index++)
	{
		if (LocalizedSettingsMappings(Index).Id == StringSettingId)
		{
			INT ValueIndex = -1;
			for (INT SettingIdx = 0; SettingIdx < LocalizedSettings.Num(); SettingIdx++)
			{
				FLocalizedStringSetting& Setting = LocalizedSettings(Index);
				if (StringSettingId == Setting.Id)
				{
					ValueIndex = Setting.ValueIndex;
					break;
				}
			}
			for (INT ValueIdx = 0; ValueIdx < LocalizedSettingsMappings(Index).ValueMappings.Num(); ValueIdx++)
			{
				if (LocalizedSettingsMappings(Index).ValueMappings(ValueIdx).Id == ValueIndex)
				{
					return LocalizedSettingsMappings(Index).ValueMappings(ValueIdx).bIsWildcard;
				}
			}
		}
	}
	return FALSE;
}
