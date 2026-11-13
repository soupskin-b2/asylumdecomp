// Engine_07a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x007afc20
/* UnPlayerController.cpp: blends one rotation component toward its target, taking the short way around. */
INT BlendRot(FLOAT DeltaTime, INT BlendC, INT NewC)
{
	if (Abs(BlendC - NewC) > 32767)
	{
		if (BlendC > NewC)
		{
			NewC += 65536;
		}
		else
		{
			BlendC += 65536;
		}
	}
	if (Abs(BlendC - NewC) > 4096)
	{
		BlendC = NewC;
	}
	else
	{
		BlendC = appTrunc(BlendC + (NewC - BlendC) * Min(1.f, 24.f * DeltaTime));
	}
	return (BlendC & 65535);
}

/* Kit gaps: FRotationMatrix (constructor out of line, 004029a0) and the UnMath.h inlines
 * FVector::IsNearlyZero / FMatrix::InverseTransformFVector aren't declared. */
#define KINDA_SMALL_NUMBER	(1.e-4f)

struct FVector_ : public FVector
{
	FORCEINLINE FVector_() {}
	FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) : FVector(InX, InY, InZ) {}
};

struct FMatrix_ : public FMatrix
{
	FORCEINLINE FVector InverseTransformFVector(const FVector& V) const
	{
		const FLOAT (*M)[4] = (const FLOAT (*)[4])&XPlane;	/* UnMath.h's FLOAT M[4][4] */
		FVector t, Result;

		t.X = V.X - M[3][0];
		t.Y = V.Y - M[3][1];
		t.Z = V.Z - M[3][2];

		Result.X = t.X * M[0][0] + t.Y * M[0][1] + t.Z * M[0][2];
		Result.Y = t.X * M[1][0] + t.Y * M[1][1] + t.Z * M[1][2];
		Result.Z = t.X * M[2][0] + t.Y * M[2][1] + t.Z * M[2][2];

		return Result;
	}
};

struct FBasedPosition_ : public FBasedPosition
{
	void Set(AActor* InBase, const FVector& InPosition); /* 0x007ab4e0 */
};

// @baa 0x007ab4e0
/* UnActor.cpp: stores InPosition relative to InBase (static bases count as none). */
void FBasedPosition_::Set(AActor* InBase, const FVector& InPosition)
{
	if (((const FVector_&)InPosition).IsNearlyZero())
	{
		Base = NULL;
		Position = FVector(0, 0, 0);
		return;
	}

	AActor* const NewBase = (InBase && !InBase->bStatic) ? InBase : NULL;
	Base = NewBase;
	if (NewBase)
	{
		Position = ((const FMatrix_&)FRotationMatrix(NewBase->Rotation)).InverseTransformFVector(((const FVector_&)InPosition) - NewBase->Location);
		CachedBaseLocation = NewBase->Location;
		CachedBaseRotation = NewBase->Rotation;
		CachedTransPosition = InPosition;
	}
	else
	{
		Position = InPosition;
	}
}
