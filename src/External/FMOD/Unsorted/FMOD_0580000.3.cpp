// FMOD_0580000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" float tan(float);
// @baa 0x0058c3d0
float sub_0058c3d0(float arg1)
{
	return tan(arg1);
}

// @baa 0x0058c3e0
void __stdcall sub_0058c3e0(int a0, int a1) {  }

// @baa 0x0058c3f0
void __stdcall sub_0058c3f0(int a0) {  }
