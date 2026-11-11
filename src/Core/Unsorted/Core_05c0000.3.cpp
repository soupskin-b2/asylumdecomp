// Core_05c0000.cpp (part 3 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x005c2960
wchar_t * sub_005c2960(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x100,param_2);
  return param_1;
}

// @baa 0x005c2dc0
wchar_t * sub_005c2dc0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x40,param_2);
  return param_1;
}

struct S
{
    char Pad[0xd8];
    unsigned Flags;

    int sub_005c3310(unsigned Mask);
};

// @baa 0x005c3310
int S::sub_005c3310(unsigned Mask)
{
    return (Flags & Mask) == Mask;
}

struct C
{
    INT field_00;
    INT field_04;
    INT field_08;

    C* sub_005c1980();
};

// @baa 0x005c1980
C* C::sub_005c1980()
{
    field_08 = 0;
    field_00 = 0;
    field_04 = 0;
    return this;
}
