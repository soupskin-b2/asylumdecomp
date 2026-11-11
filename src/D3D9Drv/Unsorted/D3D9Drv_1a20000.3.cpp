// D3D9Drv_1a20000.cpp (part 3 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl abs(int);
#pragma intrinsic(abs)
// @baa 0x01a278c0
int sub_01a278c0(int x)
{
    return abs(x);
}
