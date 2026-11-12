// GFx_18d0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C
{
    INT pad_00;
    long Counter;

    void sub_018d3ee0();
};

// @baa 0x018d3ee0
void C::sub_018d3ee0()
{
    InterlockedExchangeAdd(&Counter, 1);
}

struct C_018da810
{
    INT pad_00;
    long Counter;

    void sub_018da810();
};

// @baa 0x018da810
void C_018da810::sub_018da810()
{
    InterlockedExchangeAdd(&Counter, 1);
}

struct C_018da820
{
    INT pad_00;
    long Counter;

    void sub_018da820();
};

// @baa 0x018da820
void C_018da820::sub_018da820()
{
    InterlockedExchangeAdd(&Counter, -1);
}
