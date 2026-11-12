// Engine_0770000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x0077e120
/* UE3's APlayerController::IgnoreBlockingBy(const AActor* Other): non-vehicle rigid bodies never block a player
 * controller; otherwise AActor's rule (inlined): ignore encroachers if bIgnoreEncroachers. */
UBOOL APlayerController::IgnoreBlockingBy(const AActor* Other) const
{
    if (Other->Physics == PHYS_RigidBody && !ObjectIsA(Other, AVehicle::StaticClass()))
    {
        return TRUE;
    }
    if (bIgnoreEncroachers && Other->bCollideActors && (Other->Physics == PHYS_RigidBody || Other->Physics == PHYS_Interpolating))
    {
        return TRUE;
    }
    return FALSE;
}
