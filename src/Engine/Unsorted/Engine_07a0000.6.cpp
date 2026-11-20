// Engine_07a0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x007a0330
/* APlayerController slot 0x354 (UE3 IsLocalPlayerController()): the player is a local one. */
UBOOL APlayerController::IsLocalPlayerController()
{
    return Player && ObjectIsA(Player, ULocalPlayer::StaticClass());
}

// @baa 0x007a03a0
/* APlayerController slot 0x3a4 (UE3 IsLocalController()): the player is a local one. */
UBOOL APlayerController::IsLocalController()
{
    return Player && ObjectIsA(Player, ULocalPlayer::StaticClass());
}



// @baa 0x007ad390
/* UE3's AController::FindRandomDest() (execFindRandomDest's native): a random reachable navigation point. */
ANavigationPoint* AController::FindRandomDest()
{
    if (!Pawn)
    {
        return NULL;
    }
    ANavigationPoint* bestPath = NULL;
    bPreparingMove = FALSE;
    if (((APawn*)Pawn)->findPathToward(NULL, FVector(0.f, 0.f, 0.f), &FindRandomPath, 0.f, FALSE, 10000000, FALSE, 200) > 0.f)
    {
        bestPath = Cast<ANavigationPoint>(RouteGoal);
    }
    return bestPath;
}
