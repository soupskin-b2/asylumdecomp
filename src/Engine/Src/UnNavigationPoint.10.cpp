// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Kit gaps: FRotationMatrix (constructor out of line, 004029a0), FMatrix::TransformFVector/TransformFVector4
 * (UnMath.h; FVector4 is spelled FPlane here) and FVector's operator+ aren't declared. */

struct FMatrix_ : public FMatrix
{
	FORCEINLINE FPlane TransformFVector4(const FPlane& P) const
	{
		FPlane Result;
		Result.X = P.X * XPlane.X + P.Y * YPlane.X + P.Z * ZPlane.X + P.W * WPlane.X;
		Result.Y = P.X * XPlane.Y + P.Y * YPlane.Y + P.Z * ZPlane.Y + P.W * WPlane.Y;
		Result.Z = P.X * XPlane.Z + P.Y * YPlane.Z + P.Z * ZPlane.Z + P.W * WPlane.Z;
		Result.W = P.X * XPlane.W + P.Y * YPlane.W + P.Z * ZPlane.W + P.W * WPlane.W;
		return Result;
	}
	FORCEINLINE FPlane TransformFVector(const FVector& V) const
	{
		return TransformFVector4(FPlane(V.X, V.Y, V.Z, 1.0f));
	}
};

static FORCEINLINE FVector AddVectors(const FVector& A, const FVector& B)
{
	return FVector(A.X + B.X, A.Y + B.Y, A.Z + B.Z);
}

// @baa 0x008418c0
/* Where the slot is: its marker's location if it has one (unless the offset is forced), else the link's location
 * plus the slot's offset rotated into the link's frame. */
FVector ACoverLink::GetSlotLocation(INT SlotIdx, UBOOL bForceUseOffset)
{
	if (SlotIdx >= 0 && SlotIdx < Slots.Num())
	{
		if (!bForceUseOffset && ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).SlotMarker != NULL)
		{
			return ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).SlotMarker->Location;
		}
		return AddVectors(Location, ((const FMatrix_&)FRotationMatrix(Rotation)).TransformFVector(((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).LocationOffset));
	}
	return Location;
}

#line 71 "candidate.cpp"
