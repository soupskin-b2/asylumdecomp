// OnlineSubsystemSteamworks_0e80000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern FName g_026c45f0;
 /* ENGINE_SetStatsInterface */
struct UOnlineSubsystem_ : public UOnlineSubsystem
{
    UBOOL eventSetStatsInterface(UObject* NewInterface);
};

// @baa 0x00e85bf0
/* OnlineSubsystem.uc's SetStatsInterface script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem_::eventSetStatsInterface(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetStatsInterface_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetStatsInterface_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c45f0), &Parms);
    return Parms.ReturnValue;
}
