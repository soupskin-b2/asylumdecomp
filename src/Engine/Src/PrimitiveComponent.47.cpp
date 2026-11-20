// PrimitiveComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x006dcb20
/* UpdateBounds: a box around the (scaled) cylinder, centered on the component. */
void UCylinderComponent::UpdateBounds()
{
	const FVector BoxPoint = FVector(CollisionRadius * AABBScale, CollisionRadius * AABBScale, CollisionHeight);
	Bounds = FBoxSphereBounds(LocalToWorld.GetOrigin(), BoxPoint, BoxPoint.Size());
}

// @baa 0x006dee10
/* UpdateBounds: a fixed 128-unit box around the component. */
void UCameraConeComponent::UpdateBounds()
{
	Bounds = FBoxSphereBounds(LocalToWorld.GetOrigin(), FVector(128, 128, 128), 128);
}
