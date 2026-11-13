// BmGame_1690000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x01692980
/* ARGameInfo slot 0x3b0 (kit vf_3b0, a GetPlayerController-style accessor): the first local player's controller,
 * cached in CachedPC; NULL with no local players. */
ARPlayerController* ARGameInfo::GetPC()
{
    if (GEngine->GamePlayers.Num() > 0)
    {
        ARPlayerController* PC = Cast<ARPlayerController>(GEngine->GamePlayers(0)->Actor);
        if (PC != NULL)
        {
            CachedPC = PC;
            return PC;
        }
        return CachedPC;
    }
    return NULL;
}
