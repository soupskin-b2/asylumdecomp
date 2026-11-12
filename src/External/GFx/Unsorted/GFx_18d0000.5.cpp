// GFx_18d0000.cpp: 10 functions
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

struct C_018dcb30
{
    char pad_00[0x4];
    long Counter;

    void sub_018dcb30();
};

// @baa 0x018dcb30
void C_018dcb30::sub_018dcb30()
{
    InterlockedExchangeAdd(&Counter, 1);
}

void __stdcall sub_018cf920(INT A, INT B);
// @baa 0x018d1a20
void __stdcall sub_018d1a20(INT Value)
{
    sub_018cf920(Value, 0);
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchange(long volatile* Target, long Value);
struct C_018d6950
{
    long Counter;

    INT sub_018d6950(INT Value);
};

// @baa 0x018d6950
INT C_018d6950::sub_018d6950(INT Value)
{
    return InterlockedExchange(&Counter, Value);
}

struct C_018d6960
{
    long Counter;

    INT sub_018d6960(INT Value);
};

// @baa 0x018d6960
INT C_018d6960::sub_018d6960(INT Value)
{
    return InterlockedExchange(&Counter, Value);
}

void __stdcall sub_018d9b70(INT A, INT B);
// @baa 0x018d9e10
void __stdcall sub_018d9e10(INT Value)
{
    sub_018d9b70(Value, 0);
}

// @baa 0x018d9e40
void __stdcall sub_018d9e40(INT Value)
{
    sub_018d9b70(Value, 1);
}

struct C_018de3d0
{
    float Value_00;
    float Value_04;
    char pad_08[4];
    float Value_0c;

    float sub_018de3d0();
};

// @baa 0x018de3d0
float C_018de3d0::sub_018de3d0()
{
    return Value_0c - Value_04;
}
