// Launch_0400000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl abs(int);
#pragma intrinsic(abs)
// @baa 0x00401bf0
int sub_00401bf0(int x)
{
    return abs(x);
}
