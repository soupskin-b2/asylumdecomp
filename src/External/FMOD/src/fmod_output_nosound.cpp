// fmod_output_nosound.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01796835
INT __stdcall sub_01796835(INT* Out)
{
    *Out = 1;
    return 0;
}

// @baa 0x0179685e
INT __stdcall sub_0179685e(INT A, INT* Out)
{
    *Out |= 0xfc;
    return 0;
}
