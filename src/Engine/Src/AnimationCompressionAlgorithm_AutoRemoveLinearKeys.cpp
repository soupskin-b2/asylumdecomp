// AnimationCompressionAlgorithm_AutoRemoveLinearKeys.cpp: 9 functions
// Placed here by: class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bf8290
int UAnimationCompressionAlgorithm_AutoRemoveLinearKeys::vf_000(void) { return 1; }

// @baa 0x00c0adf0
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_AutoRemoveLinearKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_AutoRemoveLinearKeys.cpp", 13);

// @baa 0x00c0af00
bool UAnimationCompressionAlgorithm_AutoRemoveLinearKeys::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c13d30
// @baa 0x00c13db0
// @baa 0x00c14fd0
// @baa 0x00c14ff0

/* FBoneAtom's constructor (UnSkeletalMesh.h), not in the kit. */
struct FBoneAtom_
{
	FQuat Rotation;
	FVector Translation;
	FLOAT Scale;

	FBoneAtom_(const FQuat& InRotation, const FVector& InTranslation, FLOAT InScale)
	:	Rotation(InRotation)
	,	Translation(InTranslation)
	,	Scale(InScale)
	{}
};

// @baa 0x00bf8500
/* AnimationCompressionAlgorithm_RemoveLinearKeys.h: a bone atom with its translation replaced by a
 * (reduced) key. */
FBoneAtom_ UpdateBoneAtom(INT BoneIndex, const FBoneAtom& Atom, const FVector& Component)
{
	return FBoneAtom_(Atom.Rotation, Component, 1.0f);
}

/* Kit gaps, with UE3's definitions (UnMath.h): FQuat has no constructor, dot product or scaling. */
struct FQuat_ : public FQuat
{
	FQuat_(FLOAT InX, FLOAT InY, FLOAT InZ, FLOAT InW) { X = InX; Y = InY; Z = InZ; W = InW; }
};

inline FLOAT operator|(const FQuat& A, const FQuat& B) { return A.X * B.X + A.Y * B.Y + A.Z * B.Z + A.W * B.W; }

inline FQuat_ operator*(const FQuat& Q, FLOAT Scale) { return FQuat_(Q.X * Scale, Q.Y * Scale, Q.Z * Scale, Q.W * Scale); }

inline FLOAT appFloatSelect(FLOAT Comparand, FLOAT ValueGEZero, FLOAT ValueLTZero) { return Comparand >= 0.f ? ValueGEZero : ValueLTZero; }

FLOAT FQuatError(const FQuat& Q1, const FQuat& Q2);
	/* 00bf7af0 */
/* AnimationCompressionAlgorithm_RemoveLinearKeys.h: B, flipped if needed so that A to B is the
 * shortest rotation. */
static inline FQuat_ EnforceShortestArc(const FQuat& A, const FQuat& B)
{
	const FLOAT DotResult = (A | B);
	const FLOAT Bias = appFloatSelect(DotResult, 1.0f, -1.0f);
	return B * Bias;
}

// @baa 0x00bf8460
/* The key delta for rotations. */
FLOAT CalcDelta(const FQuat& A, const FQuat& B)
{
	return FQuatError(A, EnforceShortestArc(A, B));
}
