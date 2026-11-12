// GFxUI_18f0000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int __stdcall sub_018d7150(int);
// @baa 0x018f1b90
void sub_018f1b90(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

struct C
{
    INT Value_00;
    BYTE Flag_04;

    C* sub_018f0de0(INT Value);
};

// @baa 0x018f0de0
C* C::sub_018f0de0(INT Value)
{
    Value_00 = Value;
    Flag_04 = 1;
    return this;
}
