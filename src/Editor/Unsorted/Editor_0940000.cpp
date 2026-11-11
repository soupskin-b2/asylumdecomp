// Editor_0940000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_009435e0(int a0); };

// @baa 0x009435e0
void C::sub_009435e0(int a0) { *(int*)((char*)this + 68) = a0; }

struct C_009436e0 {
    undefined4 * sub_009436e0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
    int sub_0062dc50(int, int, int, int, int);
};

extern undefined * g_01eafe78;
// @baa 0x009436e0
undefined4 * C_009436e0::sub_009436e0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_009436e0 *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01eafe78);
  param_1[0x1c] = param_7;
  return param_1;
}

struct C_00943840 {
    undefined4 sub_00943840(int);
};

// @baa 0x00943840
undefined4 C_00943840::sub_00943840(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + param_2 * 4);
}

struct C_00943850 {
    void sub_00943850(undefined4);
};

// @baa 0x00943850
void C_00943850::sub_00943850(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

// @baa 0x00943870
int sub_00943870(int a0, int a1) { return a1; }
