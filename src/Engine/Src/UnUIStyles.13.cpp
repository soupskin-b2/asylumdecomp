// UnUIStyles.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Cast.h"

/* Kit gaps: DELTA (UnMath.h), the script structs' operator== and FGuid's operator== aren't declared. */
#define DELTA (0.00001f)
struct FTextureCoordinates_ : public FTextureCoordinates
{
	UBOOL operator==(const FTextureCoordinates& Other) const;
};

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

// @baa 0x00dd3b40
/* UUIStyle_Image's comparison: the base properties, then image, coordinates and adjustments. */
UBOOL UUIStyle_Image::MatchesStyleData(UUIStyle_Data* StyleToCompare)
{
	UBOOL bResult = Super::MatchesStyleData(StyleToCompare);
	if (bResult)
	{
		if (StyleToCompare == NULL)
		{
			bResult = StyleToCompare == this;
		}
		else if (StyleToCompare == this)
		{
			bResult = TRUE;
		}
		else if (StyleToCompare->IsA(UUIStyle_Image::StaticClass()))
		{
			UUIStyle_Image* OtherImageStyle = Cast<UUIStyle_Image>(StyleToCompare);
			bResult = DefaultImage == OtherImageStyle->DefaultImage
				&&	((const FTextureCoordinates_&)Coordinates) == OtherImageStyle->Coordinates
				&&	((const FUIImageAdjustmentData_&)AdjustmentType[0]) == OtherImageStyle->AdjustmentType[0]
				&&	((const FUIImageAdjustmentData_&)AdjustmentType[1]) == OtherImageStyle->AdjustmentType[1];
		}
	}
	return bResult;
}
