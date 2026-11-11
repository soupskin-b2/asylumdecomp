// UnrealEd_0500000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    void sub_004f8980();
    void sub_004f1890();
    void sub_005010e0();
};

// @baa 0x005010e0
void S::sub_005010e0() {
    sub_004f8980();
    sub_004f1890();
}

extern char g_02665664[];
// @baa 0x00502150
int sub_00502150(void) { return (int)g_02665664; }

struct A_00502160 { virtual void sub_0050e300(); char pad[328]; };

struct B_00502160 { virtual void sub_0050e300(); };

struct C_00502160 : A_00502160, B_00502160 { virtual void sub_0050e300(); C_00502160(); };

C_00502160::C_00502160() {}

// @baa 0x00502160
void C_00502160::sub_0050e300() {}

struct C {
    undefined4 sub_005032a0(byte);
};

int sub_00402660(...);
int sub_004fb180(void);
// @baa 0x005032a0
undefined4 C::sub_005032a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004fb180();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0050dc30 {
    undefined4 sub_0050dc30(byte);
};

int sub_004eaa00(void);
// @baa 0x0050dc30
undefined4 C_0050dc30::sub_0050dc30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004eaa00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0050e300 {
    undefined4 sub_0050e300(byte);
};

int sub_005020c0(void);
// @baa 0x0050e300
undefined4 C_0050e300::sub_0050e300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005020c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
