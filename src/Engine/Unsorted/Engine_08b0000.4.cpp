// Engine_08b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Unnamed in the kit: UE3's APlayerController::GetPlayerNetworkAddress() (execGetPlayerNetworkAddress's native):
 * the remote address of a network player, or an empty string. */

// @baa 0x008b6e50
FString APlayerController::GetPlayerNetworkAddress()
{
    if (Player && ObjectIsA(Player, UNetConnection::StaticClass()))
    {
        return Cast<UNetConnection>(Player)->LowLevelGetRemoteAddress();
    }
    return TEXT("");
}
