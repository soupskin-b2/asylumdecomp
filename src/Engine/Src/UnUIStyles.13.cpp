// UnUIStyles.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Cast.h"

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
				&&	Coordinates == OtherImageStyle->Coordinates
				&&	AdjustmentType[0] == OtherImageStyle->AdjustmentType[0]
				&&	AdjustmentType[1] == OtherImageStyle->AdjustmentType[1];
		}
	}
	return bResult;
}
