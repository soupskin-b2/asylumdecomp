// GFx_18d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Target, long Value);
struct C
{
    long Counter;

    INT sub_018d4840(INT Value);
};

// @baa 0x018d4840
INT C::sub_018d4840(INT Value)
{
    return InterlockedExchangeAdd(&Counter, Value);
}
