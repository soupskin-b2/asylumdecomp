// Engine_0ae0000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00aec2c0(byte);
};

int sub_0053dfa0(...);
int sub_00ae5e50(void);
// @baa 0x00aec2c0
undefined4 C::sub_00aec2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae5e50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00aec2e0 {
    undefined4 sub_00aec2e0(byte);
};

int sub_00ae5ed0(void);
// @baa 0x00aec2e0
undefined4 C_00aec2e0::sub_00aec2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae5ed0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00aec300 {
    undefined4 sub_00aec300(byte);
};

int sub_00ae5f50(void);
// @baa 0x00aec300
undefined4 C_00aec300::sub_00aec300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae5f50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
