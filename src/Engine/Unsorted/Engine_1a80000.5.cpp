// Engine_1a80000.cpp (part 5 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01a84ec0(byte);
};

int sub_00402660(...);
int sub_01a826e0(void);
// @baa 0x01a84ec0
undefined4 C::sub_01a84ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a826e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a878c0 {
    undefined4 sub_01a878c0(byte);
};

int sub_01a76030(void);
// @baa 0x01a878c0
undefined4 C_01a878c0::sub_01a878c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a76030();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a878e0 {
    undefined4 sub_01a878e0(byte);
};

// @baa 0x01a878e0
undefined4 C_01a878e0::sub_01a878e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a76030();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
