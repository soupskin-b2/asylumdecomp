// USettings.cpp: 2 functions
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
