// GFx_1950000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int __stdcall sub_018d7170(int);
// @baa 0x0195ccf0
void sub_0195ccf0(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C
{
    INT pad_00;
    INT pad_04;
    INT pad_08;
    INT Value;

    INT* sub_0195b160(INT* Out);
};

// @baa 0x0195b160
INT* C::sub_0195b160(INT* Out)
{
    *Out = Value;
    return Out;
}
