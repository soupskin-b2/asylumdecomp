// PhysX_1a40000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

// 3-component float value with a self-returning copy (0x01a44d30)
struct Vec3Copy_
{
    float X;
    float Y;
    float Z;

    Vec3Copy_* sub_01a44d30(const Vec3Copy_& In);
};

// @baa 0x01a44d30
__declspec(noinline) Vec3Copy_* Vec3Copy_::sub_01a44d30(const Vec3Copy_& In)
{
    X = In.X;
    Y = In.Y;
    Z = In.Z;
    return this;
}

__declspec(noinline) void s01a4(const Vec3Copy_& A, Vec3Copy_& B)
{
    B.sub_01a44d30(A);
}
