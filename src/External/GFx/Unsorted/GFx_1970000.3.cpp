// GFx_1970000.cpp (part 3 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01975380(undefined4, undefined4);
};

int sub_01970dd0(...);
// @baa 0x01975380
undefined4 * C::sub_01975380(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  *param_1 = param_2;
  uVar1 = sub_01970dd0(param_2,param_3);
  param_1[1] = uVar1;
  return param_1;
}

// GFx: tests bit 7 of a 16-bit flags field.
struct GFxFlagsOwner
{
    char           Header[0x2a];
    unsigned short Flags;

    bool sub_01977d40() const;
};

// @baa 0x01977d40
bool GFxFlagsOwner::sub_01977d40() const
{
    return (Flags & 0x80) != 0;
}
