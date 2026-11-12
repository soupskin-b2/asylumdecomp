// BmGame_1610000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: FVector::Size (UnMath.h). */
struct FVector_ : public FVector
{
	FORCEINLINE FLOAT Size() const { return appSqrt(X * X + Y * Y + Z * Z); }
};

// @baa 0x01610340
/* Slot 0x3a0 (unnamed in the kit): whether any of the router's steering vectors is non-trivial. */
INT ARBMRouter::vf_3a0()
{
	return ((const FVector_&)AvoidPawnVec).Size() > 0.1
		|| ((const FVector_&)QueuePawnVec).Size() > 0.1
		|| ((const FVector_&)DivergeVec).Size() > 0.1;
}
