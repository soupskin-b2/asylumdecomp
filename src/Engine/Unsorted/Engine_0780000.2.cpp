// Engine_0780000.cpp (part 2 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" double __cdecl asin(double);
#pragma intrinsic(asin)
// @baa 0x00784ea0
double sub_00784ea0(float f) { return asin(f); }
