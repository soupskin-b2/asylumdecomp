// USettings.cpp: 13 functions
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
