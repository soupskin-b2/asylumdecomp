// R3rdPersonCamera.cpp: 2 functions
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

struct AR3rdPersonCamera__01689170 : AR3rdPersonCamera
{
    void sub_01689170(); /* 0x01689170 */
};

// @baa 0x01689170
void AR3rdPersonCamera__01689170::sub_01689170()
{
    const FLOAT DegreesToRadians = 3.14159265358979323846f / 180.0f;
    const FLOAT InvSqrtTwo = 0.70710678118654752440f;
    {
        ZoomPointDir[0] = FVector(1.0f, 0.0f, 0.0f);
        const FLOAT Angle = ZoomPointAngle * DegreesToRadians;
        const FLOAT CosAngle = appCos(Angle);
        const FLOAT SinAngle = appSin(Angle);
        const FLOAT Diagonal = SinAngle * InvSqrtTwo;
        ZoomPointDir[1] = FVector(CosAngle, Diagonal, Diagonal);
        ZoomPointDir[2] = FVector(CosAngle, Diagonal, -Diagonal);
        ZoomPointDir[3] = FVector(CosAngle, -Diagonal, Diagonal);
        ZoomPointDir[4] = FVector(CosAngle, -Diagonal, -Diagonal);
        ZoomPointDir[5] = FVector(CosAngle, SinAngle, 0.0f);
        ZoomPointDir[6] = FVector(CosAngle, -SinAngle, 0.0f);
        ZoomPointDir[7] = FVector(CosAngle, 0.0f, SinAngle);
        ZoomPointDir[8] = FVector(CosAngle, 0.0f, -SinAngle);
    }
    {
        TightZoomPointDir[0] = FVector(1.0f, 0.0f, 0.0f);
        const FLOAT Angle = TightZoomPointAngle * DegreesToRadians;
        const FLOAT CosAngle = appCos(Angle);
        const FLOAT SinAngle = appSin(Angle);
        const FLOAT Diagonal = SinAngle * InvSqrtTwo;
        TightZoomPointDir[1] = FVector(CosAngle, Diagonal, Diagonal);
        TightZoomPointDir[2] = FVector(CosAngle, Diagonal, -Diagonal);
        TightZoomPointDir[3] = FVector(CosAngle, -Diagonal, Diagonal);
        TightZoomPointDir[4] = FVector(CosAngle, -Diagonal, -Diagonal);
        TightZoomPointDir[5] = FVector(CosAngle, SinAngle, 0.0f);
        TightZoomPointDir[6] = FVector(CosAngle, -SinAngle, 0.0f);
        TightZoomPointDir[7] = FVector(CosAngle, 0.0f, SinAngle);
        TightZoomPointDir[8] = FVector(CosAngle, 0.0f, -SinAngle);
    }
}
