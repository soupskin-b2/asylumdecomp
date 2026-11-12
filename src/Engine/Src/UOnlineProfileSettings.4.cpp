// UOnlineProfileSettings.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

// @baa 0x00cb89e0
void UOnlineProfileSettings::execSetProfileSettingValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileSettingId);
	P_GET_STR_REF(NewValue);
	P_FINISH;
	*(UBOOL*)Result = SetProfileSettingValue(ProfileSettingId, NewValue);
}

// @baa 0x00cb87e0
void UOnlineProfileSettings::execGetProfileSettingValueByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ProfileSettingName);
	P_GET_STR_REF(Value);
	P_FINISH;
	*(UBOOL*)Result = GetProfileSettingValueByName(ProfileSettingName, Value);
}
