// UOnlineProfileSettings.cpp: 11 functions
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
	vf_158();
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
	*(INT*)Result = vf_160();
}

struct UOnlineProfileSettings_ : public UOnlineProfileSettings
{
	INT sub_00d72590(INT);
};

// @baa 0x00c8db10
void UOnlineProfileSettings::execFindProfileSettingIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileSettingId);
	P_FINISH;
	*(INT*)Result = ((UOnlineProfileSettings_*)this)->sub_00d72590(ProfileSettingId);
}

struct UOnlineProfileSettings__00c8db80 : public UOnlineProfileSettings
{
	INT sub_00d72610(INT);
};

// @baa 0x00c8db80
void UOnlineProfileSettings::execFindProfileMappingIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileSettingId);
	P_FINISH;
	*(INT*)Result = ((UOnlineProfileSettings__00c8db80*)this)->sub_00d72610(ProfileSettingId);
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
	*(UBOOL*)Result = vf_118(ProfileSettingId);
}

struct UOnlineProfileSettings__00c8dbf0 : public UOnlineProfileSettings
{
	INT FindProfileMappingIndexByName(FName ProfileSettingName);
	void execFindProfileMappingIndexByName(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8dbf0
void UOnlineProfileSettings__00c8dbf0::execFindProfileMappingIndexByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ProfileSettingName);
	P_FINISH;
	*(INT*)Result = FindProfileMappingIndexByName(ProfileSettingName);
}
