// UnrealEd_1190000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Classes.h has FIntPoint as a plain script mirror without its methods. */
struct FIntPoint_ : public FIntPoint
{
	INT Size() const;
};

// @baa 0x01191e40
INT FIntPoint_::Size() const
{
	return INT(appSqrt(FLOAT(X * X + Y * Y)));
}
