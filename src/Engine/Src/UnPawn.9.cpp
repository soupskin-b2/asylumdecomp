// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gaps: UWorld::GetNetMode (0x009c84b0) and UWorld::GetTimeSeconds (0x009c8f80) aren't declared. */

#undef GWorld
#define GWorld ((UWorld*)g_026b62b8)
// @baa 0x00865230
/* Rendered within the last second (never asked on a dedicated server). */
UBOOL AActor::PlayerCanSeeMe()
{
#line 215 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPawn.cpp"
    check(GWorld->GetNetMode() != NM_DedicatedServer);
    return GWorld->GetTimeSeconds() - LastRenderTime < 1.f;
}

#line 26 "candidate.cpp"
