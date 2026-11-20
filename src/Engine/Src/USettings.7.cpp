// USettings.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d6e320
/* Makes this a double value. */
void FSettingsData::SetData(DOUBLE InData)
{
	CleanUp();
	Type = SDT_Double;
	*(DOUBLE*)&Value1 = InData;
}

/* Makes this a float value. */
void FSettingsData::SetData(FLOAT InData)
{
	CleanUp();
	Type = SDT_Float;
	Value1 = *(INT*)&InData;
}

// @baa 0x00d88830
/* Drop the named session from the subsystem's list. */
void UOnlineSubsystem::RemoveNamedSession(FName SessionName)
{
    for (INT SearchIndex = 0; SearchIndex < Sessions.Num(); SearchIndex++)
    {
        FNamedSession& Session = Sessions(SearchIndex);
        if (Session.SessionName == SessionName)
        {
            Sessions.Remove(SearchIndex, 1);
            return;
        }
    }
}
