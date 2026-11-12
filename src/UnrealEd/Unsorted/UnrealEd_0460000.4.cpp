// UnrealEd_0460000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// FVector2D::Size(): the length of the two components.
struct FVector2D_ : public FVector2D
{
    FLOAT Size() const;
};

// @baa 0x004628c0
FLOAT FVector2D_::Size() const
{
    return appSqrt(X * X + Y * Y);
}
