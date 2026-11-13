// RAnimUtil_Sequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

static FORCEINLINE FQuat AxisAngleQuaternion(const FVector& Axis, FLOAT Angle)
{
    const FLOAT HalfAngle = Angle * 0.5f;
    const FLOAT Sine = appSin(HalfAngle);
    const FLOAT Cosine = appCos(HalfAngle);
    return FQuat(Axis.X * Sine, Axis.Y * Sine, Axis.Z * Sine, Cosine);
}

// @baa 0x015c9e80
FBoneAtom __cdecl sub_015c9e80(USkeletalMeshComponent* Component, const FAnimOrigin& Origin)
{
    const FQuat InverseYaw = AxisAngleQuaternion(FVector(0.0f, 0.0f, 1.0f), -Origin.Yaw);
    const FQuat RelativeRotation = InverseYaw * Origin.RootBoneAtom.Rotation;
    const FVector RelativeTranslation = InverseYaw.RotateVector(Origin.RootBoneAtom.Translation - Origin.Translation);
    return FBoneAtom(RelativeRotation, RelativeTranslation, Origin.RootBoneAtom.Scale);
}
