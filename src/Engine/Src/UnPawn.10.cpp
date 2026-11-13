// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0086ec20
/* APawn slot 0x388 (kit vf_388): UE3's APawn::ReachedDesiredRotation(): the yaw is within AllowedYawError of the
 * desired yaw (either side of the wrap). */
UBOOL APawn::ReachedDesiredRotation()
{
    INT YawDiff = Abs((DesiredRotation.Yaw & 65535) - (Rotation.Yaw & 65535));
    return (YawDiff < AllowedYawError) || (YawDiff > 65535 - AllowedYawError);
}
