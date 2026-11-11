// Engine_0830000.cpp (part 2 of 7): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" float sqrt(float);
#pragma intrinsic(sqrt)
// @baa 0x00837a80
float sub_00837a80(float x)
{
    return sqrt(x);
}
