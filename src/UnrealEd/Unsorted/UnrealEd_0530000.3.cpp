// UnrealEd_0530000.cpp (part 3 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" double sqrt(double);
#pragma intrinsic(sqrt)
// @baa 0x0053e2d0
double sub_0053e2d0(float param_1)
{
    return sqrt(param_1);
}
