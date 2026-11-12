// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C_007a5160
{
    float X;
    float Y;
    float Z;

    C_007a5160& sub_007a5160(const C_007a5160& Other);
};

// @baa 0x007a5160
C_007a5160& C_007a5160::sub_007a5160(const C_007a5160& Other)
{
    X = Other.X;
    Y = Other.Y;
    Z = Other.Z;
    return *this;
}

static void use_007a5160(C_007a5160& A, const C_007a5160& B)
{
    A.sub_007a5160(B);
}
