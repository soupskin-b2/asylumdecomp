// UnCrowd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* UnVcWin32.h appCeil: this build's returns INT (appTrunc(ceilf(F))) where the kit's AppMath.h appCeil returns FLOAT;
 * out of line here (0x0058c540), so only declared. */
INT appCeilToInt(FLOAT F);
// @baa 0x00cbccf0
/* UE3's USeqAct_CrowdSpawner::Activated(): input 0 starts spawning (cutting the count in split screen once), input 1
 * stops it, input 2 kills the spawned agents and stops it. */
void USeqAct_CrowdSpawner::Activated()
{
    if (InputLinks(0).bHasImpulse)
    {
        bSpawningActive = TRUE;
        CacheSpawnerVars();

        if (bReduceNumInSplitScreen && GEngine->GamePlayers.Num() > 1 && !bHasReducedNumberDueToSplitScreen)
        {
            SpawnNum = appCeilToInt(SpawnNum * SplitScreenNumReduction);
        }
    }
    else if (InputLinks(1).bHasImpulse)
    {
        bSpawningActive = FALSE;
    }
    else if (InputLinks(2).bHasImpulse)
    {
        KillAgents();
        bSpawningActive = FALSE;
    }
}
