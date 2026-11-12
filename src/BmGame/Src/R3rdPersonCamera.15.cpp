// R3rdPersonCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

#define KINDA_SMALL_NUMBER (1.e-4)
/* Kit gap: FVector has no constructors or operators here (UnMath.h). */
struct FVector_ : public FVector
{
    FORCEINLINE FVector_() {}
    FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
    FORCEINLINE FVector_ operator+(const FVector& V) const { return FVector_(X + V.X, Y + V.Y, Z + V.Z); }
    FORCEINLINE FVector_ operator-(const FVector& V) const { return FVector_(X - V.X, Y - V.Y, Z - V.Z); }
    FORCEINLINE FVector_ operator*(FLOAT Scale) const { return FVector_(X * Scale, Y * Scale, Z * Scale); }
};

/* Unnamed in the kit: exponentially eases ChasePosition toward Target (snaps when smoothing is off). */
struct AR3rdPersonCamera_ : public AR3rdPersonCamera
{
    FVector sub_01689920(const FVector& Target, FLOAT DeltaTime);
};

// @baa 0x01689920
FVector AR3rdPersonCamera_::sub_01689920(const FVector& Target, FLOAT DeltaTime)
{
    if (CameraSmoothingCount == 0)
    {
        ChasePosition = Target;
    }
    else if (DeltaTime > KINDA_SMALL_NUMBER)
    {
        ChasePosition = (const FVector_&)Target + ((const FVector_&)ChasePosition - Target) * (FLOAT)appExp(-(DeltaTime * SmoothingConfigStrength));
    }
    return ChasePosition;
}
