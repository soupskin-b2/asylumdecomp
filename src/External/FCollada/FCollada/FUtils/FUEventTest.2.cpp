// FUEventTest.cpp (part 2 of 2): 8 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01863420(byte);
};

int sub_00402660(...);
extern undefined4 g_023eab08;
// @baa 0x01863420
undefined4 * C::sub_01863420(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023eab08);
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863440 {
    undefined4 * sub_01863440(byte);
};

extern undefined4 g_023eab1c;
// @baa 0x01863440
undefined4 * C_01863440::sub_01863440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023eab1c);
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct D {
    void method();
};

struct C_01863810 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_01863810();
};

// @baa 0x01863810
void C_01863810::sub_01863810() { return (d->*fn)(); }

struct C_018638b0 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_018638b0();
};

// @baa 0x018638b0
void C_018638b0::sub_018638b0() { return (d->*fn)(); }

struct C_01863950 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_01863950();
};

// @baa 0x01863950
void C_01863950::sub_01863950() { return (d->*fn)(); }

struct C_018639f0 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_018639f0();
};

// @baa 0x018639f0
void C_018639f0::sub_018639f0() { return (d->*fn)(); }

struct C_01863a20 {
    undefined4 * sub_01863a20(byte);
};

// @baa 0x01863a20
undefined4 * C_01863a20::sub_01863a20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023eab1c);
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863c00 {
    undefined4 * sub_01863c00(byte);
};

// @baa 0x01863c00
undefined4 * C_01863c00::sub_01863c00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023eab08);
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
