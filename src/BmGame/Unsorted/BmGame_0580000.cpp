// BmGame_0580000.cpp (part 1 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#pragma intrinsic(sin)
extern "C" double sin(double);
// @baa 0x0058c480
float sub_0058c480(float param_1)
{
    return (float)sin((double)param_1);
}
