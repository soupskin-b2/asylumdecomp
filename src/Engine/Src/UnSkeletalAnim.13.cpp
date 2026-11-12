// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: UObject::GetOutermost (005d7350) isn't declared, UPackage is only forward-declared
 * (PackageFlags at 0x74), and the TArray::Remove instances are out of line here. */
#define PKG_Cooked	0x00000008
struct UPackage_ : public UObject
{
	BYTE Pad[0x74 - sizeof(UObject)];
	DWORD PackageFlags;	/* 0x74 */
};

struct UObject_ : public UObject
{
	UPackage_* sub_005d7350();	/* GetOutermost */
};

struct FVectorArray : public TArray<FVector>	{ void sub_00667a40(INT Index, INT Count); };

	/* Remove */
struct FQuatArray : public TArray<FQuat>	{ void sub_00921320(INT Index, INT Count); };

	/* Remove */
struct FFloatArray : public TArray<FLOAT>	{ void sub_00920980(INT Index, INT Count); };

	/* Remove */
template< class T > inline T Max3( const T A, const T B, const T C ) { return Max( Max( A, B ), C ); }

struct UAnimSequence_ : public UAnimSequence
{
	UBOOL CropRawAnimData(FLOAT CurrentTime, UBOOL bFromStart);
};

// @baa 0x0092a830
/* Cuts the raw keys before (bFromStart) or after CurrentTime, and respaces what's left over the new length. */
UBOOL UAnimSequence_::CropRawAnimData(FLOAT CurrentTime, UBOOL bFromStart)
{
	// Can't crop cooked animations.
	const UPackage_* Package = ((UObject_*)this)->sub_005d7350();
	if (Package->PackageFlags & PKG_Cooked)
	{
		return FALSE;
	}

	// Length of the new segment.
	const FLOAT NewLength = bFromStart ? SequenceLength - CurrentTime : CurrentTime;

	for (INT i = 0; i < RawAnimData.Num(); i++)
	{
		FRawAnimSequenceTrack& RawTrack = RawAnimData(i);

		const INT NumKeys = Max3<INT>(RawTrack.KeyTimes.Num(), RawTrack.PosKeys.Num(), RawTrack.RotKeys.Num());
#line 1759 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp"
		check(RawTrack.KeyTimes.Num() == NumKeys);
		check(RawTrack.PosKeys.Num() == 1 || RawTrack.PosKeys.Num() == NumKeys);
		check(RawTrack.RotKeys.Num() == 1 || RawTrack.RotKeys.Num() == NumKeys);

		// Nothing to crop on a single key.
		if (NumKeys > 1)
		{
			const FLOAT FrameInterval = RawTrack.KeyTimes(1) - RawTrack.KeyTimes(0);
			INT KeyIndex = appTrunc(appCeil(CurrentTime / FrameInterval));
			KeyIndex = Clamp<INT>(KeyIndex, 1, RawTrack.KeyTimes.Num() - 1);

			if (bFromStart)
			{
				if (RawTrack.PosKeys.Num() > 1)
				{
					((FVectorArray&)RawTrack.PosKeys).sub_00667a40(0, KeyIndex);
				}
				if (RawTrack.RotKeys.Num() > 1)
				{
					((FQuatArray&)RawTrack.RotKeys).sub_00921320(0, KeyIndex);
				}
				((FFloatArray&)RawTrack.KeyTimes).sub_00920980(0, KeyIndex);
			}
			else
			{
				if (RawTrack.PosKeys.Num() > 1)
				{
#line 1789
					check(RawTrack.PosKeys.Num() == NumKeys);
					((FVectorArray&)RawTrack.PosKeys).sub_00667a40(KeyIndex, NumKeys - KeyIndex);
				}
				if (RawTrack.RotKeys.Num() > 1)
				{
#line 1794
					check(RawTrack.RotKeys.Num() == NumKeys);
					((FQuatArray&)RawTrack.RotKeys).sub_00921320(KeyIndex, NumKeys - KeyIndex);
				}
				((FFloatArray&)RawTrack.KeyTimes).sub_00920980(KeyIndex, NumKeys - KeyIndex);
			}

			// Respace the remaining key times over the new length.
			for (INT k = 0; k < RawTrack.KeyTimes.Num(); k++)
			{
				RawTrack.KeyTimes(k) = ((FLOAT)k / (FLOAT)RawTrack.KeyTimes.Num()) * NewLength;
			}

			if (RawTrack.KeyTimes.Num() > 1)
			{
				NumFrames = RawTrack.KeyTimes.Num();
			}
		}
	}

	SequenceLength = NewLength;
	MarkPackageDirty();
	return TRUE;
}

#line 116 "candidate.cpp"
