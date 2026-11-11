// UnrealEd_0d40000.cpp (part 1 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00d40080(byte);
};

int sub_0053dfa0(...);
int sub_00d3fd20(void);
// @baa 0x00d40080
undefined4 C::sub_00d40080(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d3fd20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d40100 { void sub_00d3f4a0(int); C_00d40100 *sub_00d40100(int); };

// @baa 0x00d40100
C_00d40100 *C_00d40100::sub_00d40100(int a) { sub_00d3f4a0(a); return this; }
