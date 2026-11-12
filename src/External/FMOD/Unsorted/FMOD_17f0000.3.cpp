// FMOD_17f0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    WORD Value;

    WORD* sub_017fa4f0(WORD* Out);
};

// @baa 0x017fa4f0
WORD* C::sub_017fa4f0(WORD* Out)
{
    *Out = Value;
    return Out;
}
