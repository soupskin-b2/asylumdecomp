// USettings.cpp: 16 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

/* Kit gap: USettings' blob helpers (USettings.h) aren't declared. */

// @baa 0x00cbf990
void USettings::execSetSettingsDataBlob(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_TARRAY_REF(BYTE, Blob);
	P_FINISH;
	((USettings*)this)->SetSettingsDataBlob(Data, Blob);
}

// @baa 0x00cbfaa0
void USettings::execGetSettingsDataBlob(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_TARRAY_REF(BYTE, OutBlob);
	P_FINISH;
	((USettings*)this)->GetSettingsDataBlob(Data, OutBlob);
}

// @baa 0x00cb67c0
void USettings::execAppendDataBindingsToURL(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR_REF(URL);
	P_FINISH;
	AppendDataBindingsToURL(URL);
}

// @baa 0x00cb6890
void USettings::execAppendPropertiesToURL(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR_REF(URL);
	P_FINISH;
	AppendPropertiesToURL(URL);
}

// @baa 0x00cb6960
void USettings::execAppendContextsToURL(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR_REF(URL);
	P_FINISH;
	AppendContextsToURL(URL);
}

// @baa 0x00cb6a30
void USettings::execBuildURL(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR_REF(URL);
	P_FINISH;
	BuildURL(URL);
}

// @baa 0x00cbfdd0
void USettings::execGetQoSAdvertisedProperties(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FSettingsProperty, QoSProps);
	P_FINISH;
	GetQoSAdvertisedProperties(QoSProps);
}

// @baa 0x00cbfea0
void USettings::execGetQoSAdvertisedStringSettings(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FLocalizedStringSetting, QoSSettings);
	P_FINISH;
	GetQoSAdvertisedStringSettings(QoSSettings);
}

// @baa 0x00cb6420
void USettings::execGetPropertyAsStringByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(PropertyName);
	P_FINISH;
	*(FString*)Result = GetPropertyAsStringByName(PropertyName);
}

// @baa 0x00cb65f0
void USettings::execSetStringProperty(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PropertyId);
	P_GET_STR(Value);
	P_FINISH;
	SetStringProperty(PropertyId, Value);
}

// @baa 0x00cb66d0
void USettings::execGetStringProperty(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PropertyId);
	P_GET_STR_REF(Value);
	P_FINISH;
	*(UBOOL*)Result = GetStringProperty(PropertyId, Value);
}

// @baa 0x00cc54e0
void USettings::execGetStringSettingValueNames(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StringSettingId);
	P_GET_TARRAY_REF(FIdToStringMapping, Values);
	P_FINISH;
	*(UBOOL*)Result = GetStringSettingValueNames(StringSettingId, Values);
}

// @baa 0x00cb61a0
void USettings::execSetStringSettingValueFromStringByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(StringSettingName);
	P_GET_STR_REF(NewValue);
	P_FINISH;
	*(UBOOL*)Result = SetStringSettingValueFromStringByName(StringSettingName, NewValue);
}

// @baa 0x00cb64f0
void USettings::execSetPropertyFromStringByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(PropertyName);
	P_GET_STR_REF(NewValue);
	P_FINISH;
	*(UBOOL*)Result = SetPropertyFromStringByName(PropertyName, NewValue);
}

// @baa 0x00cbfbb0
void USettings::execUpdateStringSettings(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FLocalizedStringSetting, NewStringSettings);
	P_GET_UBOOL_OPTX(bShouldAddIfMissing, TRUE);
	P_FINISH;
	UpdateStringSettings(NewStringSettings, bShouldAddIfMissing);
}

// @baa 0x00cbfcc0
void USettings::execUpdateProperties(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FSettingsProperty, NewProperties);
	P_GET_UBOOL_OPTX(bShouldAddIfMissing, TRUE);
	P_FINISH;
	UpdateProperties(NewProperties, bShouldAddIfMissing);
}
