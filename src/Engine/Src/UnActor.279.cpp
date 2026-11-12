// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: AActor::GetComponentsBoundingBox (00763530) isn't declared, and FBox/FVector have no methods or
 * constructors (UnMath.h: FVector's constructor and operators, FBox::GetExtent). */
struct AActor_ : public AActor
{
	FBox GetComponentsBoundingBox(UBOOL bNonColliding = FALSE);
};

struct FVector_ : public FVector
{
	FORCEINLINE FVector_() {}
	FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
	FORCEINLINE FVector_ operator-(const FVector& V) const { return FVector_(X - V.X, Y - V.Y, Z - V.Z); }
	FORCEINLINE FVector_ operator*(FLOAT Scale) const { return FVector_(X * Scale, Y * Scale, Z * Scale); }
};

FORCEINLINE FVector_ operator*(FLOAT Scale, const FVector_& V)
{
	return V.operator*(Scale);
}

struct FBox_ : public FBox
{
	FORCEINLINE FVector_ GetExtent() const
	{
		return 0.5f * (((const FVector_&)Max) - Min);
	}
};

// @baa 0x00769120
void AActor::GetBoundingCylinder(FLOAT& CollisionRadius, FLOAT& CollisionHeight)
{
	FBox Box = ((AActor_*)this)->GetComponentsBoundingBox();
	FVector_ BoxExtent = ((FBox_&)Box).GetExtent();
	CollisionHeight = BoxExtent.Z;
	CollisionRadius = appSqrt((BoxExtent.X * BoxExtent.X) + (BoxExtent.Y * BoxExtent.Y));
}
