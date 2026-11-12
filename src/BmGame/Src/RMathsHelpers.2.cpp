// RMathsHelpers.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FQuat_ : FQuat
{
    void ToAxisAndAngle(FVector& Axis, FLOAT& Angle) const;
};

// @baa 0x01560a70
FVector sub_01560a70(const FQuat_& Rotation)
{
    FLOAT Angle;
    FVector Axis;
    Rotation.ToAxisAndAngle(Axis, Angle);
    return FVector(Axis.X * Angle, Axis.Y * Angle, Axis.Z * Angle);
}

struct FQuat__0155b460 : FQuat
{
    FVector RotateVector(FVector Vector) const;
};

// @baa 0x0155b460
FVector sub_0155b460(const FQuat__0155b460& Rotation)
{
    return Rotation.RotateVector(FVector(1.0f, 0.0f, 0.0f));
}

struct FRotator_ : FRotator
{
    explicit FRotator_(const FQuat& Rotation);
};

struct FRotationMatrix : FMatrix
{
    explicit FRotationMatrix(const FRotator& Rotation);
    FMatrix Inverse() const;
};

struct FQuat__0155b530 : FQuat
{
    explicit FQuat__0155b530(const FMatrix& RotationMatrix);
};

// @baa 0x0155b530
FQuat__0155b530 sub_0155b530(const FQuat& Rotation)
{
    FRotator_ EulerRotation(Rotation);
    return FQuat__0155b530(FRotationMatrix(EulerRotation).Inverse());
}
