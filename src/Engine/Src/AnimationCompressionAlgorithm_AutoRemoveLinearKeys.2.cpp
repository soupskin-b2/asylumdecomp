// AnimationCompressionAlgorithm_AutoRemoveLinearKeys.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

// @baa 0x00bf8550
/* AnimationCompressionAlgorithm_RemoveLinearKeys.h: a bone atom with its rotation replaced by a
 * (reduced) key; the tracks store the conjugate for every bone but the root. */
FBoneAtom_ UpdateBoneAtom(INT BoneIndex, const FBoneAtom& Atom, const FQuat& Component)
{
	FQuat Rot = Component;
	if (BoneIndex > 0)
	{
		Rot.W *= -1.0f;
	}
	return FBoneAtom_(Rot, Atom.Translation, 1.0f);
}

/* Kit gaps, with UE3's definitions (UnMath.h): FQuat has no constructor, operators or Normalize (out of
 * line here); LerpQuat is missing. */
struct FQuat_ : public FQuat
{
	FQuat_(FLOAT InX, FLOAT InY, FLOAT InZ, FLOAT InW) { X = InX; Y = InY; Z = InZ; W = InW; }
	void sub_0062bb60();				/* Normalize */
};

inline FLOAT operator|(const FQuat& A, const FQuat& B) { return A.X * B.X + A.Y * B.Y + A.Z * B.Z + A.W * B.W; }

inline FQuat_ operator*(const FQuat& Q, FLOAT Scale) { return FQuat_(Q.X * Scale, Q.Y * Scale, Q.Z * Scale, Q.W * Scale); }

inline FQuat_ operator+(const FQuat& A, const FQuat& B) { return FQuat_(A.X + B.X, A.Y + B.Y, A.Z + B.Z, A.W + B.W); }

inline FQuat_ operator-(const FQuat& A, const FQuat& B) { return FQuat_(A.X - B.X, A.Y - B.Y, A.Z - B.Z, A.W - B.W); }

inline FQuat_ LerpQuat(const FQuat& A, const FQuat& B, const FLOAT Alpha)
{
	// To ensure the 'shortest route', we make sure the dot product between the both rotations is positive.
	if ((A | B) < 0.f)
	{
		return (B * Alpha) - (A * (1.f - Alpha));
	}

	// Then add on the second rotation..
	return (B * Alpha) + (A * (1.f - Alpha));
}

// @baa 0x00bf8330
/* AnimationCompressionAlgorithm_RemoveLinearKeys.h: interpolation between two rotation keys. */
FQuat_ Interpolate(const FQuat& A, const FQuat& B, FLOAT Alpha)
{
	FQuat_ result = LerpQuat(A, B, Alpha);
	result.sub_0062bb60();
	return result;
}
