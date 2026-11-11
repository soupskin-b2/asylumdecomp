// fmod_musicsystemi.cpp (part 1 of 3): 11 functions
// Placed here by: neighbours 7, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017e0ba0(undefined4);
};

// @baa 0x017e0ba0
undefined4 C::sub_017e0ba0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  return 0;
}

extern char g_023dfba4[];
struct C_017e0de0 { C_017e0de0* sub_017e0de0(void); };

// @baa 0x017e0de0
C_017e0de0* C_017e0de0::sub_017e0de0(void) { *(int*)((char*)this + 0) = (int)g_023dfba4; return this; }

struct C_017e0df0 {
    undefined4 sub_017e0df0(undefined4);
};

// @baa 0x017e0df0
undefined4 C_017e0df0::sub_017e0df0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = param_2;
  return 0;
}

struct C_017e0f40 {
    bool sub_017e0f40();
};

// @baa 0x017e0f40
bool C_017e0f40::sub_017e0f40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) != 0;
}

struct C_017e1440 {
    undefined4 * sub_017e1440(byte);
};

int sub_00402660(...);
extern undefined4 g_023dfbfc;
// @baa 0x017e1440
undefined4 * C_017e1440::sub_017e1440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfbfc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e1490 {
    undefined4 * sub_017e1490(byte);
};

// @baa 0x017e1490
undefined4 * C_017e1490::sub_017e1490(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfbfc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e1510 { void sub_017e1510(void); };

// @baa 0x017e1510
void C_017e1510::sub_017e1510(void) { *(int*)((char*)this + 0) = (int)g_023dfba4; }

struct C_017e1520 {
    undefined4 * sub_017e1520(byte);
};

// @baa 0x017e1520
undefined4 * C_017e1520::sub_017e1520(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfba4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017fadf0 {
    undefined4 sub_017fadf0();
};

// @baa 0x017fadf0
undefined4 C_017fadf0::sub_017fadf0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x30);
  }
  return 0;
}

struct C_017fae10 {
    undefined8 sub_017fae10();
};

// @baa 0x017fae10
undefined8 C_017fae10::sub_017fae10(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return *(undefined8 *)(*param_1 + 0x18);
  }
  return 0;
}

struct C_017fae30 {
    undefined8 sub_017fae30();
};

// @baa 0x017fae30
undefined8 C_017fae30::sub_017fae30(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return *(undefined8 *)(*param_1 + 0x20);
  }
  return 0;
}
