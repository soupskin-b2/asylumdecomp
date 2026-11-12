// Engine_07a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: UE3's UWorld::RemoveController(AController* Controller) (AController's PostScriptDestroyed,
 * 007a1d90, calls it too). */
struct UWorld_ : public UWorld
{
    void sub_009c8d50(AController* Controller);
};

// @baa 0x007af740
/* APlayerController slot 0x194 (kit vf_194, UE3 PostScriptDestroyed()): drop the input and cheat objects, then the
 * controller's own teardown (inlined): unregister from the world's controller list. */
void APlayerController::vf_194()
{
    PlayerInput = NULL;
    CheatManager = NULL;
    ((UWorld_*)GWorld)->sub_009c8d50(this);
}
