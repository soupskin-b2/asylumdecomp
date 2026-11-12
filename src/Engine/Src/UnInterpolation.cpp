// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    DWORD Field0;
    DWORD Field4;
    DWORD Field8;
    DWORD FieldC;
    DWORD Field10;
    DWORD Field14;
    DWORD Field18;
    S* sub_00cf05a0(int Unused);
};

// @baa 0x00cf05a0
S* S::sub_00cf05a0(int Unused)
{
    Field4 = 0;
    Field8 = 0;
    FieldC = 0;
    Field10 = 0;
    Field14 = 0;
    Field18 = 0;
    return this;
}
