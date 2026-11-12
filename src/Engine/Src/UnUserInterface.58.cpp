// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: DELTA (UnMath.h), the script structs' operator== and FGuid's operator== aren't declared. */
#define DELTA (0.00001f)
struct FUIScreenValue_Extent_ : public FUIScreenValue_Extent
{
	FORCEINLINE UBOOL operator==(const FUIScreenValue_Extent& Other) const
	{
		return appAbs(Value - Other.Value) < DELTA && ScaleType == Other.ScaleType && Orientation == Other.Orientation;
	}
};

struct FUIImageAdjustmentData_ : public FUIImageAdjustmentData
{
	UBOOL operator==(const FUIImageAdjustmentData& Other) const;
};

// @baa 0x00ddef70
UBOOL FUIImageAdjustmentData_::operator==(const FUIImageAdjustmentData& Other) const
{
	return ((const FUIScreenValue_Extent_&)ProtectedRegion[0]) == Other.ProtectedRegion[0]
		&&	((const FUIScreenValue_Extent_&)ProtectedRegion[1]) == Other.ProtectedRegion[1]
		&&	AdjustmentType == Other.AdjustmentType
		&&	Alignment == Other.Alignment;
}
