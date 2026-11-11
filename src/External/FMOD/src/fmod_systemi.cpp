// fmod_systemi.cpp (part 1 of 7): 31 functions
// Placed here by: neighbours 16, callers 15.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023db19c[];
struct C { void sub_01768449(void); };

// @baa 0x01768449
void C::sub_01768449(void) { *(int*)((char*)this + 0) = (int)g_023db19c; }

struct C_01768493 {
    undefined4 * sub_01768493();
};

int sub_0177f659(void);
extern undefined4 g_023db1a8;
// @baa 0x01768493
undefined4 * C_01768493::sub_01768493(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0177f659();
  *param_1 = (undefined4)((&g_023db1a8));
  param_1[10] = 1;
  return param_1;
}

struct C_017684b2 {
    undefined4 sub_017684b2(undefined4 *);
};

// @baa 0x017684b2
undefined4 C_017684b2::sub_017684b2(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x14);
  return 0;
}

// @baa 0x017684c0
int sub_017684c0(void) { return 0; }

struct C_0176861a {
    undefined4 * sub_0176861a();
};

extern undefined4 g_023db1d0;
// @baa 0x0176861a
undefined4 * C_0176861a::sub_0176861a(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0177f659();
  *param_1 = (undefined4)((&g_023db1d0));
  param_1[10] = 5;
  return param_1;
}

struct C_01768671 {
    undefined4 * sub_01768671();
};

extern undefined4 g_023db1f8;
// @baa 0x01768671
undefined4 * C_01768671::sub_01768671(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0177f659();
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[10] = 0;
  *param_1 = (undefined4)((&g_023db1f8));
  return param_1;
}

extern undefined1 g_0274022c;
extern undefined4 g_02740230;
extern undefined4 g_02740234;
extern undefined4 g_02740238;
extern undefined4 g_0274023c;
// @baa 0x01768733
undefined4 sub_01768733(int param_1, int param_2, int param_3, int param_4)
{
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
    param_4 = 0;
    g_0274022c = 0;
  }
  else {
    g_0274022c = 1;
  }
  g_02740230 = param_1;
  g_0274023c = param_4;
  g_02740234 = param_2;
  g_02740238 = param_3;
  return 0;
}

struct C_01769421 {
    undefined4 * sub_01769421();
};

extern undefined4 g_023db220;
// @baa 0x01769421
undefined4 * C_01769421::sub_01769421(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0177f659();
  *param_1 = (undefined4)((&g_023db220));
  return param_1;
}

struct C_0176a086 {
    undefined4 sub_0176a086(undefined4 *, uint *);
};

// @baa 0x0176a086
undefined4 C_0176a086::sub_0176a086(undefined4 * param_2, uint * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x510);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = *(uint *)(param_1 + 0x514) / *(uint *)(param_1 + 0x510);
  }
  return 0;
}

struct C_0176a992 {
    undefined4 sub_0176a992(undefined4);
};

// @baa 0x0176a992
undefined4 C_0176a992::sub_0176a992(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x93d0) = param_2;
  return 0;
}

struct C_0176af4c {
    undefined4 * sub_0176af4c();
};

int sub_01779bd0(void);
extern undefined4 g_023db27c;
// @baa 0x0176af4c
undefined4 * C_0176af4c::sub_0176af4c(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01779bd0();
  *param_1 = (undefined4)((&g_023db27c));
  return param_1;
}

struct C_0176b1bd {
    undefined4 sub_0176b1bd(undefined1);
};

// @baa 0x0176b1bd
undefined4 C_0176b1bd::sub_0176b1bd(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xa258) = param_2;
  return 0;
}

struct C_0176b1cc {
    undefined4 sub_0176b1cc(undefined1 *);
};

// @baa 0x0176b1cc
undefined4 C_0176b1cc::sub_0176b1cc(undefined1 * param_2)
{
    int param_1 = (int)this;

  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *(undefined1 *)(param_1 + 0xa258);
  }
  return 0;
}

struct C_0176b4b4 {
    undefined4 sub_0176b4b4(undefined4 *, undefined4 *);
};

// @baa 0x0176b4b4
undefined4 C_0176b4b4::sub_0176b4b4(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x91fc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x91f8);
  }
  return 0;
}

struct C_0176b7a7 {
    undefined4 sub_0176b7a7(undefined4 *, undefined4 *);
};

// @baa 0x0176b7a7
undefined4 C_0176b7a7::sub_0176b7a7(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x9640);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x9644);
  }
  return 0;
}

struct C_0176b7cc {
    undefined4 sub_0176b7cc(undefined4);
};

// @baa 0x0176b7cc
undefined4 C_0176b7cc::sub_0176b7cc(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x9528) = param_2;
  return 0;
}

extern undefined4 g_025f115c;
extern undefined4 g_02782a88;
// @baa 0x01782bd3
undefined4 sub_01782bd3(void)
{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (g_02782a88 != 0) {
    uVar1 = g_025f115c;
  }
  return uVar1;
}

// @baa 0x01785242
int sub_01785242(void) { return 0; }

// @baa 0x01785245
int sub_01785245(void) { return 0; }

// @baa 0x01788f28
int sub_01788f28(void) { return 0; }

// @baa 0x017892fa
int sub_017892fa(void) { return 0; }

// @baa 0x017892fd
int sub_017892fd(void) { return 0; }

// @baa 0x0178f49e
int sub_0178f49e(void) { return 0; }

// @baa 0x0179e834
undefined1 sub_0179e834(void)
{
  return 1;
}

extern char g_023dd674[];
struct C_0179e8c9 { void sub_0179e8c9(void); };

// @baa 0x0179e8c9
void C_0179e8c9::sub_0179e8c9(void) { *(int*)((char*)this + 0) = (int)g_023dd674; }

// @baa 0x0179e8d0
undefined1 sub_0179e8d0(void)
{
  return 0;
}

// @baa 0x0179e8d3
int __stdcall sub_0179e8d3(int a0, int a1, int a2) { return 0; }

int sub_017ac83c(...);
int sub_017ac855(...);
int sub_017ac876(void);
int sub_017ac8a6(...);
int sub_017ac8bb(...);
int sub_017ac8d0(...);
int sub_017ac8e5(...);
int sub_017ac8fa(...);
int sub_017ac913(...);
int sub_017ac92c(void);
int sub_017ac956(void);
int sub_017ac97a(...);
int sub_017ac993(...);
int sub_017ac9b0(...);
int sub_017ad35d(void);
int sub_017ad38d(...);
extern undefined4 g_025f3c88;
extern undefined4 g_025f3c8c;
extern undefined4 g_025f3c90;
extern undefined4 g_025f3c94;
extern undefined4 g_025f3c98;
extern undefined4 g_025f3ca0;
extern undefined4 g_025f3ca4;
extern undefined4 g_025f3ca8;
extern undefined4 g_025f3cac;
extern undefined4 g_025f3cb0;
extern undefined4 g_025f3cb4;
extern undefined4 g_025f3cb8;
extern undefined4 g_025f3cc8;
extern undefined4 g_025f3ccc;
extern undefined4 g_025f3cd8;
extern undefined4 g_025f3ce4;
extern undefined4 g_025f3cec;
extern undefined4 g_025f3cf0;
extern undefined4 g_025f3cf8;
extern undefined4 g_025f3d00;
extern undefined4 g_025f3d24;
// @baa 0x017ad3ae
undefined * sub_017ad3ae(void)
{
  g_025f3c88 = (undefined4)("FMOD OpenAL Output");
  g_025f3c8c = 0x10100;
  g_025f3cc8 = 8;
  g_025f3ccc = 0x300;
  g_025f3c90 = 1;
  g_025f3c94 = (undefined4)(&sub_017ac83c);
  g_025f3c98 = (undefined4)(&sub_017ac855);
  g_025f3ce4 = (undefined4)(sub_017ac876);
  g_025f3ca0 = (undefined4)(sub_017ad35d);
  g_025f3ca4 = (undefined4)(&sub_017ac8a6);
  g_025f3cec = (undefined4)(&sub_017ac8bb);
  g_025f3cf0 = (undefined4)(&sub_017ac8d0);
  g_025f3cac = (undefined4)(&sub_017ac8fa);
  g_025f3ca8 = (undefined4)(&sub_017ac8e5);
  g_025f3d00 = (undefined4)(&sub_017ac9b0);
  g_025f3cb0 = (undefined4)(&sub_017ac913);
  g_025f3cb4 = (undefined4)(sub_017ac92c);
  g_025f3cb8 = (undefined4)(sub_017ac956);
  g_025f3cf8 = (undefined4)(&sub_017ad38d);
  g_025f3d24 = (undefined4)(&sub_017ac97a);
  g_025f3cd8 = (undefined4)(&sub_017ac993);
  return (undefined *)(&g_025f3c88);
}

int sub_017ade4e(void);
int sub_017ade69(void);
// @baa 0x017ae461
void sub_017ae461(void)
{
  sub_017ade4e();
  sub_017ade69();
  return;
}

struct C_017af992 { float sub_017af992(void); };

// @baa 0x017af992
float C_017af992::sub_017af992(void) { return *(float*)((char*)this + 36); }

struct C_017b91b8 {
    undefined4 sub_017b91b8(undefined4 *);
};

// @baa 0x017b91b8
undefined4 C_017b91b8::sub_017b91b8(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x238);
  return 0;
}
