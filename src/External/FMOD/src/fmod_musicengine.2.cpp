// fmod_musicengine.cpp (part 2 of 2): 10 functions
// Placed here by: neighbours 8, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023e0820[];
struct C { C* sub_017f6af0(void); };

// @baa 0x017f6af0
C* C::sub_017f6af0(void) { *(int*)((char*)this + 0) = (int)g_023e0820; return this; }

struct C_017f73f0 {
    void sub_017f73f0(undefined4);
};

int __stdcall sub_01767376(int, int);
// @baa 0x017f73f0
void C_017f73f0::sub_017f73f0(undefined4 param_2)
{
    int param_1 = (int)this;
  sub_01767376(*(undefined4 *)(param_1 + 0x80),param_2);
  return;
}

struct C_017f7470 {
    void sub_017f7470(undefined4);
};

int __stdcall sub_01767487(int, int);
// @baa 0x017f7470
void C_017f7470::sub_017f7470(undefined4 param_2)
{
    int param_1 = (int)this;
  sub_01767487(*(undefined4 *)(param_1 + 0x80),param_2);
  return;
}

struct C_017f7490 {
    void sub_017f7490(undefined4);
};

int __stdcall sub_017674ad(int, int);
// @baa 0x017f7490
void C_017f7490::sub_017f7490(undefined4 param_2)
{
    int param_1 = (int)this;
  sub_017674ad(*(undefined4 *)(param_1 + 0x80),param_2);
  return;
}

struct C_017f7c10 {
    undefined4 * sub_017f7c10(undefined4);
    int sub_017f6960(int);
};

extern undefined4 g_023e0814;
// @baa 0x017f7c10
undefined4 * C_017f7c10::sub_017f7c10(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((&g_023e0814));
  ((C_017f7c10 *)(this))->sub_017f6960(param_2);
  return param_1;
}

struct M_017f7c70 { void sub_017f7b50(); };

struct C_017f7c70 { char pad[32]; M_017f7c70 m; void sub_017f7c70(); };

// @baa 0x017f7c70
void C_017f7c70::sub_017f7c70() { m.sub_017f7b50(); }

struct M_017f7c80 { void sub_017f7bd0(); };

struct C_017f7c80 { char pad[32]; M_017f7c80 m; void sub_017f7c80(); };

// @baa 0x017f7c80
void C_017f7c80::sub_017f7c80() { m.sub_017f7bd0(); }

struct C_017f7cb0 {
    undefined4 * sub_017f7cb0();
    int sub_017f7c40();
    int sub_017f6d50();
};

extern undefined4 g_023e0890;
// @baa 0x017f7cb0
undefined4 * C_017f7cb0::sub_017f7cb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0890));
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  ((C_017f7cb0 *)(((char *)this + 0x20)))->sub_017f7c40();
  ((C_017f7cb0 *)(((char *)this + 0x58)))->sub_017f6d50();
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}

struct C_017fb200 {
    int sub_017fb200(undefined4);
    int sub_017fab40(int);
};

// @baa 0x017fb200
int C_017fb200::sub_017fb200(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017fb200 *)(this))->sub_017fab40(param_2);
  return param_1 + iVar1 * 4;
}

struct M_017fb7d0 { void sub_017fb170(); };

struct C_017fb7d0 { char pad[44]; M_017fb7d0 m; void sub_017fb7d0(); };

// @baa 0x017fb7d0
void C_017fb7d0::sub_017fb7d0() { m.sub_017fb170(); }
