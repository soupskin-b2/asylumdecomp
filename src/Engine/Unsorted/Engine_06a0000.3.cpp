// Engine_06a0000.cpp: 1 function
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

// @baa 0x006aa380
/* UpdateBounds: a box reaching the far end of the frustum, around the component. */
void UDrawFrustumComponent::vf_160()
{
	Bounds = FBoxSphereBounds_(LocalToWorld.TransformFVector(FVector(0, 0, 0)), FVector(FrustumEndDist, FrustumEndDist, FrustumEndDist), FrustumEndDist);
}
