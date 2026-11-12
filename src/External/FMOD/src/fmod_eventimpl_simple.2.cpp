// fmod_eventimpl_simple.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    INT sub_017f0670(INT A, BYTE* Out);
};

// @baa 0x017f0670
INT C::sub_017f0670(INT, BYTE* Out)
{
    *Out = 0;
    return 0;
}

struct C_017f0680
{
    INT sub_017f0680(INT A, BYTE* Out);
};

// @baa 0x017f0680
INT C_017f0680::sub_017f0680(INT, BYTE* Out)
{
    *Out = 0;
    return 0;
}

// @baa 0x017efd40
INT __stdcall sub_017efd40(INT* Out)
{
    *Out = 0;
    return 0;
}

// @baa 0x017efe90
INT __stdcall sub_017efe90(INT* Out)
{
    *Out = 0;
    return 0;
}
