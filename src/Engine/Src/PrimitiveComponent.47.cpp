// PrimitiveComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: FBoxSphereBounds' component constructor (UnMath.h) */
struct FBoxSphereBounds_ : public FBoxSphereBounds
{
	FBoxSphereBounds_(const FVector& InOrigin, const FVector& InBoxExtent, FLOAT InSphereRadius)
	{
		Origin = InOrigin;
		BoxExtent = InBoxExtent;
		SphereRadius = InSphereRadius;
	}
};

// @baa 0x006dcb20
/* UpdateBounds: a box around the (scaled) cylinder, centered on the component. */
void UCylinderComponent::vf_160()
{
	const FVector BoxPoint = FVector(CollisionRadius * AABBScale, CollisionRadius * AABBScale, CollisionHeight);
	Bounds = FBoxSphereBounds_(LocalToWorld.GetOrigin(), BoxPoint, BoxPoint.Size());
}

// @baa 0x006dee10
/* UpdateBounds: a fixed 128-unit box around the component. */
void UCameraConeComponent::vf_160()
{
	Bounds = FBoxSphereBounds_(LocalToWorld.GetOrigin(), FVector(128, 128, 128), 128);
}
