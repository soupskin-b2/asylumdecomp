// AnimationCompressionAlgorithm_AutoRemoveLinearKeys.cpp: 9 functions
// Placed here by: class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bf8290
UBOOL UAnimationCompressionAlgorithm_AutoRemoveLinearKeys::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00c0adf0
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_AutoRemoveLinearKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_AutoRemoveLinearKeys.cpp", 13);

// @baa 0x00c0af00
UBOOL UAnimationCompressionAlgorithm_AutoRemoveLinearKeys::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c13d30
// @baa 0x00c13db0
// @baa 0x00c14fd0
// @baa 0x00c14ff0

// @baa 0x00bf8500
/* AnimationCompressionAlgorithm_RemoveLinearKeys.h: a bone atom with its translation replaced by a
 * (reduced) key. */
FBoneAtom UpdateBoneAtom(INT BoneIndex, const FBoneAtom& Atom, const FVector& Component)
{
	return FBoneAtom(Atom.Rotation, Component, 1.0f);
}

/* AnimationCompressionAlgorithm_RemoveLinearKeys.h: B, flipped if needed so that A to B is the
 * shortest rotation. */
static inline FQuat EnforceShortestArc(const FQuat& A, const FQuat& B)
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
