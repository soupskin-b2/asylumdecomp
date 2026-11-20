// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00769120
void AActor::GetBoundingCylinder(FLOAT& CollisionRadius, FLOAT& CollisionHeight)
{
	FBox Box = this->GetComponentsBoundingBox();
	FVector BoxExtent = Box.GetExtent();
	CollisionHeight = BoxExtent.Z;
	CollisionRadius = appSqrt((BoxExtent.X * BoxExtent.X) + (BoxExtent.Y * BoxExtent.Y));
}
