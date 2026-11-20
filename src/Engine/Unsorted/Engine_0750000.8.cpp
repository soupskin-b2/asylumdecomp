// Engine_0750000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0075ea00
/* UpdateBounds: the quad's extent, around the component. */
void UDrawQuadComponent::UpdateBounds()
{
	Bounds = FBoxSphereBounds(LocalToWorld.TransformFVector(FVector(0, 0, 0)), FVector(16.0f, Width, Height), Max(Width, Height));
}
