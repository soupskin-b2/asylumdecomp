// PrimitiveComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <math.h>

/* Kit gap: UnMath.h's HALF_WORLD_MAX (WORLD_MAX * 0.5, a double). */
#define HALF_WORLD_MAX	262144.0
// @baa 0x006e4950
/* UPrimitiveComponent slot 0x160 (kit vf_160, UE3 UpdateBounds()): a plain primitive is unbounded. */
void UPrimitiveComponent::vf_160()
{
    Bounds.Origin = FVector(0, 0, 0);
    Bounds.BoxExtent = FVector(HALF_WORLD_MAX, HALF_WORLD_MAX, HALF_WORLD_MAX);
    Bounds.SphereRadius = sqrt(3.0 * HALF_WORLD_MAX * HALF_WORLD_MAX);
}
