// GFxUI_0e40000.cpp: 1 function
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
