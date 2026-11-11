// UnrealEd_0510000.cpp (part 3 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0051c660(byte);
};

int sub_00402660(...);
int sub_005193b0(void);
// @baa 0x0051c660
undefined4 C::sub_0051c660(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005193b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0051c680 {
    undefined4 sub_0051c680(byte);
};

int sub_005196d0(void);
// @baa 0x0051c680
undefined4 C_0051c680::sub_0051c680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005196d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
