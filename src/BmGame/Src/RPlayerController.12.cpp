// RPlayerController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* FVector's arithmetic and Size() (UnMath.h); the kit's FVector has none. */
struct FVector_ : public FVector
{
	FVector_() {}
	FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
	FVector_ operator-(const FVector& V) const { return FVector_(X - V.X, Y - V.Y, Z - V.Z); }
	
	FVector_ operator+(const FVector& V) const { return FVector_(X + V.X, Y + V.Y, Z + V.Z); }
	FVector_ operator+=(const FVector& V) { X += V.X; Y += V.Y; Z += V.Z; return *this; }
	FLOAT Size() const { return appSqrt(X * X + (Y * Y + Z * Z)); }
};

/* Kit gap: this grapple-pull helper isn't declared. */
static FORCEINLINE FVector_ operator*(FLOAT Scale, const FVector_& V) { return FVector_(V.X * Scale, V.Y * Scale, V.Z * Scale); }

struct ARPlayerController_ : public ARPlayerController
{
	void sub_01614010(const FVector& NewDirection, FLOAT DeltaTime);
};

// @baa 0x01614010
/* Turns GrapplePullDirection towards NewDirection at up to 2 units/s and builds up GrapplePullStrength
 * (10/s per unit of change, capped at 1). */
void ARPlayerController_::sub_01614010(const FVector& NewDirection, FLOAT DeltaTime)
{
	FVector_ Delta = (const FVector_&)NewDirection - GrapplePullDirection;
	FLOAT Dist = Delta.Size();
	FLOAT MaxStep = DeltaTime * 2.f;
	if (MaxStep > Dist)
	{
		GrapplePullDirection = NewDirection;
	}
	else
	{
		(FVector_&)GrapplePullDirection += (MaxStep / Dist) * Delta;
	}
	GrapplePullStrength += Dist * DeltaTime * 10.f;
	if (GrapplePullStrength > 1.f)
	{
		GrapplePullStrength = 1.f;
	}
}
