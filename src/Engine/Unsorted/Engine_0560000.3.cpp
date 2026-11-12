// Engine_0560000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile* Value);
// @baa 0x00565f70
void sub_00565f70(long volatile* Value)
{
    InterlockedIncrement(Value);
}

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long volatile* Value);
// @baa 0x00565f80
void sub_00565f80(long volatile* Value)
{
    InterlockedDecrement(Value);
}

struct C
{
    char pad_00[0x54];
    float Value;

    void sub_00566190(float In);
};

// @baa 0x00566190
void C::sub_00566190(float In)
{
    Value = In;
}
