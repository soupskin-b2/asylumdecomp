// USettings.cpp: 38 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c85e10
// @baa 0x00c85e10
void USettings::execGetStringSettingName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StringSettingId);
    P_FINISH;
    *(FName*)Result = GetStringSettingName(StringSettingId);
}

// @baa 0x00c860f0
// @baa 0x00c860f0
void USettings::execGetPropertyName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_FINISH;
    *(FName*)Result = GetPropertyName(PropertyId);
}

// @baa 0x00c85e90
void USettings::execIsWildcardStringSetting(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StringSettingId);
	P_FINISH;
	*(UBOOL*)Result = IsWildcardStringSetting(StringSettingId);
}

// @baa 0x00c86550
void USettings::execGetPropertyType(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PropertyId);
	P_FINISH;
	*(BYTE*)Result = GetPropertyType(PropertyId);
}

// @baa 0x00c865c0
void USettings::execHasProperty(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PropertyId);
	P_FINISH;
	*(UBOOL*)Result = HasProperty(PropertyId);
}

// @baa 0x00c86630
void USettings::execHasStringSetting(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SettingId);
	P_FINISH;
	*(UBOOL*)Result = HasStringSetting(SettingId);
}

// @baa 0x00c85a50
void USettings::execGetStringSettingValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StringSettingId);
    P_GET_INT_REF(ValueIndex);
    P_FINISH;
    *(UBOOL*)Result = GetStringSettingValue(StringSettingId, ValueIndex);
}

// @baa 0x00c85be0
void USettings::execSetStringSettingValueByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StringSettingName);
    P_GET_INT(ValueIndex);
    P_GET_UBOOL(bShouldAutoAdd);
    P_FINISH;
    SetStringSettingValueByName(StringSettingName, ValueIndex, bShouldAutoAdd);
}

// @baa 0x00c85f00
void USettings::execGetStringSettingValueName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StringSettingId);
    P_GET_INT(ValueIndex);
    P_FINISH;
    *(FName*)Result = GetStringSettingValueName(StringSettingId, ValueIndex);
}

// @baa 0x00c86350
void USettings::execGetIntProperty(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_INT_REF(Value);
    P_FINISH;
    *(UBOOL*)Result = GetIntProperty(PropertyId, Value);
}

// @baa 0x00c86750
void USettings::execGetPropertyRange(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_FLOAT_REF(OutMinValue);
    P_GET_FLOAT_REF(OutMaxValue);
    P_GET_FLOAT_REF(RangeIncrement);
    P_GET_BYTE_REF(bFormatAsInt);
    P_FINISH;
    *(UBOOL*)Result = GetPropertyRange(PropertyId, OutMinValue, OutMaxValue, RangeIncrement, bFormatAsInt);
}

// @baa 0x00cb6360
void USettings::execGetPropertyAsString(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_FINISH;
    *(FString*)Result = GetPropertyAsString(PropertyId);
}

// @baa 0x00cb6b00
void USettings::execUpdateFromURL(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR_REF(URL);
    P_GET_OBJECT(AGameInfo, Game);
    P_FINISH;
    UpdateFromURL(URL, Game);
}

// @baa 0x00c85600
void USettings::execEmptySettingsData(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FSettingsData, Data);
    P_FINISH;
    EmptySettingsData(Data);
}

// @baa 0x00c856c0
void USettings::execGetSettingsDataFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FSettingsData, Data);
    P_FINISH;
    *(FLOAT*)Result = GetSettingsDataFloat(Data);
}

// @baa 0x00c85780
void USettings::execGetSettingsDataInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FSettingsData, Data);
    P_FINISH;
    *(INT*)Result = GetSettingsDataInt(Data);
}

// @baa 0x00cb6000
void USettings::execGetSettingsDataString(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FSettingsData, Data);
    P_FINISH;
    *(FString*)Result = GetSettingsDataString(Data);
}

// @baa 0x00c85310
void USettings::execSetSettingsDataInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FSettingsData, Data);
    P_GET_INT(InInt);
    P_FINISH;
    SetSettingsDataInt(Data, InInt);
}

// @baa 0x00c85220
void USettings::execSetSettingsDataFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FSettingsData, Data);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    SetSettingsDataFloat(Data, InFloat);
}

// @baa 0x00c85970
void USettings::execSetStringSettingValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(StringSettingId);
    P_GET_INT(ValueIndex);
    P_GET_UBOOL_OPTX(bShouldAutoAdd, FALSE);
    P_FINISH;
    SetStringSettingValue(StringSettingId, ValueIndex, bShouldAutoAdd);
}

// @baa 0x00c85cb0
void USettings::execGetStringSettingValueByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StringSettingName);
    P_GET_INT_REF(ValueIndex);
    P_FINISH;
    *(UBOOL*)Result = GetStringSettingValueByName(StringSettingName, ValueIndex);
}

// @baa 0x00c85d60
void USettings::execGetStringSettingId(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StringSettingName);
    P_GET_INT_REF(StringSettingId);
    P_FINISH;
    *(UBOOL*)Result = GetStringSettingId(StringSettingName, StringSettingId);
}

// @baa 0x00c85fb0
void USettings::execGetStringSettingValueNameByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StringSettingName);
    P_FINISH;
    *(FName*)Result = GetStringSettingValueNameByName(StringSettingName);
}

// @baa 0x00c86040
void USettings::execGetPropertyId(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(PropertyName);
    P_GET_INT_REF(PropertyId);
    P_FINISH;
    *(UBOOL*)Result = GetPropertyId(PropertyName, PropertyId);
}

// @baa 0x00c86170
void USettings::execSetFloatProperty(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_FLOAT(Value);
    P_FINISH;
    SetFloatProperty(PropertyId, Value);
}

// @baa 0x00c86210
void USettings::execGetFloatProperty(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_FLOAT_REF(Value);
    P_FINISH;
    *(UBOOL*)Result = GetFloatProperty(PropertyId, Value);
}

// @baa 0x00c862c0
void USettings::execSetIntProperty(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_INT(Value);
    P_FINISH;
    SetIntProperty(PropertyId, Value);
}

// @baa 0x00c86400
void USettings::execSetPropertyValueId(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_INT(ValueId);
    P_FINISH;
    *(UBOOL*)Result = SetPropertyValueId(PropertyId, ValueId);
}

// @baa 0x00c864a0
void USettings::execGetPropertyValueId(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_INT_REF(ValueId);
    P_FINISH;
    *(UBOOL*)Result = GetPropertyValueId(PropertyId, ValueId);
}

// @baa 0x00c866a0
void USettings::execGetPropertyMappingType(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_BYTE_REF(OutType);
    P_FINISH;
    *(UBOOL*)Result = GetPropertyMappingType(PropertyId, OutType);
}

// @baa 0x00c868d0
void USettings::execSetRangedPropertyValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_FLOAT(NewValue);
    P_FINISH;
    *(UBOOL*)Result = SetRangedPropertyValue(PropertyId, NewValue);
}

// @baa 0x00c86970
void USettings::execGetRangedPropertyValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(PropertyId);
    P_GET_FLOAT_REF(OutValue);
    P_FINISH;
    *(UBOOL*)Result = GetRangedPropertyValue(PropertyId, OutValue);
}

/* Kit gap: USettings' FSettingsData helpers below (USettings.h) aren't declared. */
struct USettings_ : public USettings
{
	void SetSettingsDataDateTime(FSettingsData& Data, INT InPart1, INT InPart2); /* 0x00d6e700 */
	void GetSettingsDataDateTime(FSettingsData& Data, INT& OutPart1, INT& OutPart2); /* 0x00d67fe0 */
	void SetSettingsData(FSettingsData& Data, FSettingsData& Data2Copy); /* 0x00d74300 */
	void SetSettingsDataString(FSettingsData& Data, const FString& InString); /* 0x00d6e620 */
};

// @baa 0x00c85400
void USettings::execSetSettingsDataDateTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_INT(InPart1);
	P_GET_INT(InPart2);
	P_FINISH;
	((USettings_*)this)->SetSettingsDataDateTime(Data, InPart1, InPart2);
}

// @baa 0x00c85840
void USettings::execGetSettingsDataDateTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_INT_REF(OutPart1);
	P_GET_INT_REF(OutPart2);
	P_FINISH;
	((USettings_*)this)->GetSettingsDataDateTime(Data, OutPart1, OutPart2);
}

// @baa 0x00c85500
void USettings::execSetSettingsData(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_STRUCT_REF(FSettingsData, Data2Copy);
	P_FINISH;
	((USettings_*)this)->SetSettingsData(Data, Data2Copy);
}

// @baa 0x00cb5f00
void USettings::execSetSettingsDataString(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_STR(InString);
	P_FINISH;
	((USettings_*)this)->SetSettingsDataString(Data, InString);
}

// @baa 0x00cb60e0
void USettings::execGetStringSettingColumnHeader(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StringSettingId);
	P_FINISH;
	*(FString*)Result = GetStringSettingColumnHeader(StringSettingId);
}

// @baa 0x00cb62a0
void USettings::execGetPropertyColumnHeader(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PropertyId);
	P_FINISH;
	*(FString*)Result = GetPropertyColumnHeader(PropertyId);
}
