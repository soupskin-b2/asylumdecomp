// FMOD_0580000.cpp (part 1 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)
// @baa 0x0058c370
double sub_0058c370(float f) { return acos(f); }
