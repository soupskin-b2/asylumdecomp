// UnrealEd_14c0000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014c7550(byte);
};

int sub_0053dfa0(...);
int sub_01190580(void);
// @baa 0x014c7550
undefined4 C::sub_014c7550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01190580();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

INT sub_014ca030(void* Value);
struct C_014cb690
{
    char pad_00[0xc];
    void* Value;

    INT sub_014cb690();
};

// @baa 0x014cb690
INT C_014cb690::sub_014cb690()
{
    return sub_014ca030(Value);
}

struct sub_014c7500_C
{
    DWORD Field_00;
    DWORD Field_04;
    DWORD Field_08;
    DWORD Field_0C;
    DWORD Field_10;
    DWORD Field_14;
    int sub_014c7500();
};

// @baa 0x014c7500
int sub_014c7500_C::sub_014c7500()
{
    int result = (int)this;
    Field_00 = 0;
    Field_04 = 0;
    Field_08 = 0;
    Field_0C = -1;
    Field_10 = 0;
    Field_14 = -1;
    return result;
}
