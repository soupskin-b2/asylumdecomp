// fmod_soundbank.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    C* First;
    C* Second;
    INT Value_08;

    C* sub_017e25f0();
};

// @baa 0x017e25f0
C* C::sub_017e25f0()
{
    First = this;
    Second = this;
    Value_08 = 0;
    return this;
}

void __stdcall sub_017e27e0(INT A, INT B);
// @baa 0x017e3580
void __stdcall sub_017e3580(INT Value)
{
    sub_017e27e0(Value, 1);
}

// @baa 0x017e3590
void __stdcall sub_017e3590(INT Value)
{
    sub_017e27e0(Value, -1);
}
