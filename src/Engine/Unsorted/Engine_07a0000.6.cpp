// Engine_07a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x007a0330
/* APlayerController slot 0x354 (kit vf_354, UE3 IsLocalPlayerController()): the player is a local one. */
INT APlayerController::vf_354()
{
    return Player && ObjectIsA(Player, ULocalPlayer::StaticClass());
}

// @baa 0x007a03a0
/* APlayerController slot 0x3a4 (kit vf_3a4, UE3 IsLocalController()): the player is a local one. */
INT APlayerController::vf_3a4()
{
    return Player && ObjectIsA(Player, ULocalPlayer::StaticClass());
}
