// UOnlineProfileSettings.cpp: 26 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c8e3f0
void UOnlineProfileSettings::execSetToDefaults( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_178();
}

// @baa 0x00c8e430
void UOnlineProfileSettings::execAppendVersionToReadIds( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AppendVersionToReadIds();
}

// @baa 0x00c8e470
void UOnlineProfileSettings::execAppendVersionToSettings( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_15c();
}

// @baa 0x00c8e4f0
void UOnlineProfileSettings::execSetDefaultVersionNumber( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_164();
}

// @baa 0x00c8e4b0
void UOnlineProfileSettings::execGetVersionNumber(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetVersionNumber();
}

// @baa 0x00c8db10
void UOnlineProfileSettings::execFindProfileSettingIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileSettingId);
	P_FINISH;
	*(INT*)Result = sub_00d72590(ProfileSettingId);
}

// @baa 0x00c8db80
void UOnlineProfileSettings::execFindProfileMappingIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileSettingId);
	P_FINISH;
	*(INT*)Result = sub_00d72610(ProfileSettingId);
}

// @baa 0x00c8da90
// @baa 0x00c8da90
void UOnlineProfileSettings::execGetProfileSettingName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_FINISH;
    *(FName*)Result = GetProfileSettingName(ProfileSettingId);
}

// @baa 0x00c8dce0
// @baa 0x00c8dce0
void UOnlineProfileSettings::execGetProfileSettingValueName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_FINISH;
    *(FName*)Result = GetProfileSettingValueName(ProfileSettingId);
}

// @baa 0x00c8dc70
void UOnlineProfileSettings::execIsProfileSettingIdMapped(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileSettingId);
	P_FINISH;
	*(UBOOL*)Result = IsProfileSettingIdMapped(ProfileSettingId);
}

// @baa 0x00c8dbf0
void UOnlineProfileSettings::execFindProfileMappingIndexByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ProfileSettingName);
	P_FINISH;
	*(INT*)Result = FindProfileMappingIndexByName(ProfileSettingName);
}

// @baa 0x00c8d9e0
void UOnlineProfileSettings::execGetProfileSettingId(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ProfileSettingName);
    P_GET_INT_REF(ProfileSettingId);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingId(ProfileSettingName, ProfileSettingId);
}

// @baa 0x00c8de60
void UOnlineProfileSettings::execGetProfileSettingValueInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_INT_REF(Value);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingValueInt(ProfileSettingId, Value);
}

// @baa 0x00c8e100
void UOnlineProfileSettings::execSetProfileSettingValueFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_FLOAT(Value);
    P_FINISH;
    *(UBOOL*)Result = SetProfileSettingValueFloat(ProfileSettingId, Value);
}

// @baa 0x00c8e5e0
void UOnlineProfileSettings::execGetProfileSettingRange(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_FLOAT_REF(OutMinValue);
    P_GET_FLOAT_REF(OutMaxValue);
    P_GET_FLOAT_REF(RangeIncrement);
    P_GET_BYTE_REF(bFormatAsInt);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingRange(ProfileSettingId, OutMinValue, OutMaxValue, RangeIncrement, bFormatAsInt);
}

// @baa 0x00cb85f0
void UOnlineProfileSettings::execGetProfileSettingColumnHeader(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_FINISH;
    *(FString*)Result = GetProfileSettingColumnHeader(ProfileSettingId);
}

// @baa 0x00cb88e0
void UOnlineProfileSettings::execSetProfileSettingValueByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ProfileSettingName);
    P_GET_STR_REF(NewValue);
    P_FINISH;
    *(UBOOL*)Result = SetProfileSettingValueByName(ProfileSettingName, NewValue);
}

// @baa 0x00cc0420
void UOnlineProfileSettings::execGetProfileSettingValues(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_TARRAY_REF(FName, Values);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingValues(ProfileSettingId, Values);
}

// @baa 0x00c8df10
void UOnlineProfileSettings::execGetProfileSettingValueFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_FLOAT_REF(Value);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingValueFloat(ProfileSettingId, Value);
}

// @baa 0x00c8dfc0
void UOnlineProfileSettings::execSetProfileSettingValueId(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_INT(Value);
    P_FINISH;
    *(UBOOL*)Result = SetProfileSettingValueId(ProfileSettingId, Value);
}

// @baa 0x00c8e060
void UOnlineProfileSettings::execSetProfileSettingValueInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_INT(Value);
    P_FINISH;
    *(UBOOL*)Result = SetProfileSettingValueInt(ProfileSettingId, Value);
}

// @baa 0x00c8e1a0
void UOnlineProfileSettings::execGetProfileSettingDefaultId(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_INT_REF(DefaultId);
    P_GET_INT_REF(ListIndex);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingDefaultId(ProfileSettingId, DefaultId, ListIndex);
}

// @baa 0x00c8e290
void UOnlineProfileSettings::execGetProfileSettingDefaultInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_INT_REF(DefaultInt);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingDefaultInt(ProfileSettingId, DefaultInt);
}

// @baa 0x00c8e340
void UOnlineProfileSettings::execGetProfileSettingDefaultFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileSettingId);
    P_GET_FLOAT_REF(DefaultFloat);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingDefaultFloat(ProfileSettingId, DefaultFloat);
}

// @baa 0x00c8e530
void UOnlineProfileSettings::execGetProfileSettingMappingType(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileId);
    P_GET_BYTE_REF(OutType);
    P_FINISH;
    *(UBOOL*)Result = GetProfileSettingMappingType(ProfileId, OutType);
}

// @baa 0x00c8e760
void UOnlineProfileSettings::execSetRangedProfileSettingValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ProfileId);
    P_GET_FLOAT(NewValue);
    P_FINISH;
    *(UBOOL*)Result = SetRangedProfileSettingValue(ProfileId, NewValue);
}
