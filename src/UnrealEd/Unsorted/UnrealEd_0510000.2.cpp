// UnrealEd_0510000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#pragma intrinsic(sin)
extern "C" double sin(double);
// @baa 0x00510660
float sub_00510660(float param_1)
{
    return (float)sin((double)param_1);
}
