// Engine_0d80000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: DELTA (UnMath.h), the script structs' operator== and FGuid's operator== aren't declared. */
#define DELTA (0.00001f)
struct FTextureCoordinates_ : public FTextureCoordinates
{
	UBOOL operator==(const FTextureCoordinates& Other) const;
};

// @baa 0x00d8f260
/* Coordinates match if each differs by less than DELTA. */
UBOOL FTextureCoordinates_::operator==(const FTextureCoordinates& Other) const
{
	return appAbs(U - Other.U) < DELTA && appAbs(V - Other.V) < DELTA && appAbs(UL - Other.UL) < DELTA && appAbs(VL - Other.VL) < DELTA;
}
