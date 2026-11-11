// FMOD_0580000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" double __cdecl cosh(double);
#pragma intrinsic(cosh)
// @baa 0x0058c380
double sub_0058c380(float f) { return cosh(f); }
