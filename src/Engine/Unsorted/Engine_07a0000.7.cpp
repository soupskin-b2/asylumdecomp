// Engine_07a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x007af740
/* APlayerController slot 0x194 (UE3 PostScriptDestroyed()): drop the input and cheat objects, then the controller's
 * own teardown (inlined): unregister from the world's controller list. */
void APlayerController::PostScriptDestroyed()
{
    PlayerInput = NULL;
    CheatManager = NULL;
    GWorld->RemoveController(this);
}

// @baa 0x007a06b0
void APlayerController::SetAllowMatureLanguage(UBOOL bAllowMatureLanguge)
{
	GEngine->bAllowMatureLanguage = bAllowMatureLanguge;
}
