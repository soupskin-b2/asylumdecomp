// GFx_0e40000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00e489f0();
};

int sub_018d3de0(void);
extern undefined * g_023f4f44;
// @baa 0x00e489f0
void C::sub_00e489f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48a30 {
    undefined4 * sub_00e48a30();
    int sub_00e48990(int);
};

extern undefined * g_021065cc;
// @baa 0x00e48a30
undefined4 * C_00e48a30::sub_00e48a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48a30 *)(this))->sub_00e48990(3);
  *param_1 = (undefined4)(&g_021065cc);
  param_1[5] = 0;
  return param_1;
}

// @baa 0x00e48a50
int sub_00e48a50(void) { return 0; }

typedef unsigned char u8;

// @baa 0x00e48a60
u8 __stdcall sub_00e48a60(int, int) { return 0; }

struct C_00e48a70 {
    void sub_00e48a70();
};

// @baa 0x00e48a70
void C_00e48a70::sub_00e48a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48a80 {
    undefined4 * sub_00e48a80();
    int sub_00e48990(int);
};

extern undefined * g_021065dc;
// @baa 0x00e48a80
undefined4 * C_00e48a80::sub_00e48a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48a80 *)(this))->sub_00e48990(5);
  *param_1 = (undefined4)(&g_021065dc);
  return param_1;
}

struct C_00e48aa0 {
    void sub_00e48aa0();
};

// @baa 0x00e48aa0
void C_00e48aa0::sub_00e48aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}
