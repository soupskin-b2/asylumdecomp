// GFxUI_0e40000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C
{
    long Counter;

    INT sub_00e4b900(INT Value);
};

// @baa 0x00e4b900
INT C::sub_00e4b900(INT Value)
{
    return InterlockedExchangeAdd(&Counter, Value);
}

struct C_018daa80 {
    void SetIdentity();
};

struct C_00e433b0 {
    int A;
    int B;
    int C;
    C_018daa80 Sub;

    C_00e433b0* sub_00e433b0();
};

// @baa 0x00e433b0
C_00e433b0* C_00e433b0::sub_00e433b0()
{
    A = 0;
    B = 0;
    C = 0;
    Sub.SetIdentity();
    return this;
}

void ForceSub()
{
    C_00e433b0 O;
    O.sub_00e433b0();
}

struct S_00e483e0 {
    DWORD a;
    DWORD b;
    DWORD c;
    S_00e483e0& sub_00e483e0(const S_00e483e0& src);
};

// @baa 0x00e483e0
S_00e483e0& S_00e483e0::sub_00e483e0(const S_00e483e0& src)
{
    a = src.a;
    b = src.b;
    c = src.c;
    return *this;
}
