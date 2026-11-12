// FMOD_17c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#pragma warning(disable : all)
extern "C" int __stdcall sub_017d3ad0(int arg1, int arg2, int arg3, int arg4);
// @baa 0x017cda90
extern "C" int __stdcall sub_017cda90(int arg1, int arg2, int arg3, int arg4)
{
    if (!arg1)
    {
        return 0x25;
    }
    return sub_017d3ad0(arg1, arg2, arg3, arg4);
}
