// Engine_0710000.cpp: 1 function
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

// @baa 0x0071b1b0
/* UpdateBounds: a cube the size of the (scaled) sprite, centered on the component. */
void USpriteComponent::vf_160()
{
	const FLOAT Scale = Owner ? Owner->DrawScale : 1.0f;
	const FLOAT Size = (Sprite ? (FLOAT)Max(Sprite->SizeX, Sprite->SizeY) : 1.0f) * Scale;
	Bounds = FBoxSphereBounds_(LocalToWorld.GetOrigin(), FVector(Size, Size, Size), appSqrt(3.0f * Square(Size)));
}
