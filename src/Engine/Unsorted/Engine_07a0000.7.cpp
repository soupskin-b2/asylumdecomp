// Engine_07a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: UE3's UWorld::RemoveController(AController* Controller) (AController's PostScriptDestroyed,
 * 007a1d90, calls it too). */

// @baa 0x007af740
/* APlayerController slot 0x194 (kit vf_194, UE3 PostScriptDestroyed()): drop the input and cheat objects, then the
 * controller's own teardown (inlined): unregister from the world's controller list. */
void APlayerController::vf_194()
{
    PlayerInput = NULL;
    CheatManager = NULL;
    GWorld->sub_009c8d50(this);
}

// @baa 0x007a06b0
/* Slot 0x414 (unnamed in the kit; UE3's SetAllowMatureLanguage). */
void APlayerController::SetAllowMatureLanguage(UBOOL bAllowMatureLanguge)
{
	GEngine->bAllowMatureLanguage = bAllowMatureLanguge;
}
