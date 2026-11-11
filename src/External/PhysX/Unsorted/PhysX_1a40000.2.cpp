// PhysX_1a40000.cpp (part 2 of 2): 93 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_01a425a0(void); };

// @baa 0x01a425a0
int C::sub_01a425a0(void) { return *(int*)((char*)this + 4); }

struct C_01a425b0 { void sub_01a425b0(void); };

// @baa 0x01a425b0
void C_01a425b0::sub_01a425b0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a425c0 { int sub_01a425c0(void); };

// @baa 0x01a425c0
int C_01a425c0::sub_01a425c0(void) { return *(int*)((char*)this + 0); }

struct C_01a425d0 { int sub_01a425d0(void); };

// @baa 0x01a425d0
int C_01a425d0::sub_01a425d0(void) { return *(int*)((char*)this + 4); }

struct C_01a425e0 {
    int sub_01a425e0(int);
};

// @baa 0x01a425e0
int C_01a425e0::sub_01a425e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01a425f0 { void sub_01a425f0(void); };

// @baa 0x01a425f0
void C_01a425f0::sub_01a425f0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a42600 { int sub_01a42600(void); };

// @baa 0x01a42600
int C_01a42600::sub_01a42600(void) { return *(int*)((char*)this + 0); }

struct C_01a42610 { int sub_01a42610(void); };

// @baa 0x01a42610
int C_01a42610::sub_01a42610(void) { return *(int*)((char*)this + 4); }

struct C_01a42620 {
    int sub_01a42620(int);
};

// @baa 0x01a42620
int C_01a42620::sub_01a42620(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a42630 { void sub_01a42630(void); };

// @baa 0x01a42630
void C_01a42630::sub_01a42630(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a428f0 { int sub_01a428f0(void); };

// @baa 0x01a428f0
int C_01a428f0::sub_01a428f0(void) { return *(int*)((char*)this + 4); }

struct C_01a42920 { int sub_01a42920(void); };

// @baa 0x01a42920
int C_01a42920::sub_01a42920(void) { return *(int*)((char*)this + 0); }

struct C_01a42930 { char* sub_01a42930(void); };

// @baa 0x01a42930
char* C_01a42930::sub_01a42930(void) { return (char*)this + 12; }

struct C_01a42940 { char* sub_01a42940(void); };

// @baa 0x01a42940
char* C_01a42940::sub_01a42940(void) { return (char*)this + 12; }

struct C_01a42950 { char* sub_01a42950(void); };

// @baa 0x01a42950
char* C_01a42950::sub_01a42950(void) { return (char*)this + 12; }

struct C_01a42960 { char* sub_01a42960(void); };

// @baa 0x01a42960
char* C_01a42960::sub_01a42960(void) { return (char*)this + 12; }

struct C_01a42970 { char* sub_01a42970(void); };

// @baa 0x01a42970
char* C_01a42970::sub_01a42970(void) { return (char*)this + 12; }

struct C_01a42980 { char* sub_01a42980(void); };

// @baa 0x01a42980
char* C_01a42980::sub_01a42980(void) { return (char*)this + 12; }

struct C_01a42990 { char* sub_01a42990(void); };

// @baa 0x01a42990
char* C_01a42990::sub_01a42990(void) { return (char*)this + 12; }

struct C_01a429a0 { char* sub_01a429a0(void); };

// @baa 0x01a429a0
char* C_01a429a0::sub_01a429a0(void) { return (char*)this + 12; }

struct C_01a429b0 { char* sub_01a429b0(void); };

// @baa 0x01a429b0
char* C_01a429b0::sub_01a429b0(void) { return (char*)this + 12; }

struct C_01a429c0 { char* sub_01a429c0(void); };

// @baa 0x01a429c0
char* C_01a429c0::sub_01a429c0(void) { return (char*)this + 12; }

struct C_01a429d0 { char* sub_01a429d0(void); };

// @baa 0x01a429d0
char* C_01a429d0::sub_01a429d0(void) { return (char*)this + 12; }

struct C_01a429e0 { char* sub_01a429e0(void); };

// @baa 0x01a429e0
char* C_01a429e0::sub_01a429e0(void) { return (char*)this + 12; }

extern char g_024070e4[];
struct C_01a44150 { void sub_01a44150(void); };

// @baa 0x01a44150
void C_01a44150::sub_01a44150(void) { *(int*)((char*)this + 0) = (int)g_024070e4; }

struct C_01a44160 {
    undefined4 * sub_01a44160(byte);
};

int sub_00402660(...);
// @baa 0x01a44160
undefined4 * C_01a44160::sub_01a44160(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024070e4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a44180 { int sub_01a44180(void); };

// @baa 0x01a44180
int C_01a44180::sub_01a44180(void) { return *(int*)((char*)this + 20); }

struct C_01a44280 {
    undefined2 sub_01a44280();
};

// @baa 0x01a44280
undefined2 C_01a44280::sub_01a44280(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0xc);
}

struct C_01a44290 { int sub_01a44290(void); };

// @baa 0x01a44290
int C_01a44290::sub_01a44290(void) { return *(int*)((char*)this + 8); }

extern char g_0240738c[];
struct C_01a44d90 { void sub_01a44d90(void); };

// @baa 0x01a44d90
void C_01a44d90::sub_01a44d90(void) { *(int*)((char*)this + 0) = (int)g_0240738c; }

struct C_01a44da0 {
    undefined4 * sub_01a44da0(byte);
};

// @baa 0x01a44da0
undefined4 * C_01a44da0::sub_01a44da0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240738c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a44dc0
void sub_01a44dc0(void) {  }

struct C_01a44f90 { int sub_01a44f90(void); };

// @baa 0x01a44f90
int C_01a44f90::sub_01a44f90(void) { return *(int*)((char*)this + 172); }

struct C_01a45080 { int sub_01a45080(void); };

// @baa 0x01a45080
int C_01a45080::sub_01a45080(void) { return *(int*)((char*)this + 12); }

// @baa 0x01a453a0
undefined4 sub_01a453a0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01a487a0 {
    int sub_01a487a0();
};

// @baa 0x01a487a0
int C_01a487a0::sub_01a487a0(void)
{
    int * param_1 = (int *)this;

  return (param_1[1] - *param_1) / 0x1c;
}

struct C_01a487c0 {
    int sub_01a487c0(int);
};

// @baa 0x01a487c0
int C_01a487c0::sub_01a487c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01a48810 { int sub_01a48810(void); };

// @baa 0x01a48810
int C_01a48810::sub_01a48810(void) { return *(int*)((char*)this + 0); }

struct C_01a48820 { int sub_01a48820(void); };

// @baa 0x01a48820
int C_01a48820::sub_01a48820(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a48850
void __stdcall sub_01a48850(int a0, int a1) {  }

struct C_01a488d0 {
    void sub_01a488d0();
};

void sub_01a376d2(void *);
// @baa 0x01a488d0
void C_01a488d0::sub_01a488d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    sub_01a376d2((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_01a48930 {
    void sub_01a48930();
};

// @baa 0x01a48930
void C_01a48930::sub_01a48930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = *param_1;
  return;
}

extern char g_024077b4[];
struct C_01a48c80 { void sub_01a48c80(void); };

// @baa 0x01a48c80
void C_01a48c80::sub_01a48c80(void) { *(int*)((char*)this + 0) = (int)g_024077b4; }

struct C_01a48c90 {
    undefined4 * sub_01a48c90(byte);
};

// @baa 0x01a48c90
undefined4 * C_01a48c90::sub_01a48c90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024077b4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a48cb0
void sub_01a48cb0(void) {  }

struct C_01a48ef0 { int sub_01a48ef0(void); };

// @baa 0x01a48ef0
int C_01a48ef0::sub_01a48ef0(void) { return *(int*)((char*)this + 188); }

struct C_01a48fe0 { int sub_01a48fe0(void); };

// @baa 0x01a48fe0
int C_01a48fe0::sub_01a48fe0(void) { return *(int*)((char*)this + 12); }

// @baa 0x01a49350
undefined4 sub_01a49350(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01a4d000 {
    int sub_01a4d000();
};

// @baa 0x01a4d000
int C_01a4d000::sub_01a4d000(void)
{
    int * param_1 = (int *)this;

  return (param_1[1] - *param_1) / 0x24;
}

struct C_01a4d020 {
    int sub_01a4d020(int);
};

// @baa 0x01a4d020
int C_01a4d020::sub_01a4d020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01a4d050 { int sub_01a4d050(void); };

// @baa 0x01a4d050
int C_01a4d050::sub_01a4d050(void) { return *(int*)((char*)this + 0); }

struct C_01a4d060 { int sub_01a4d060(void); };

// @baa 0x01a4d060
int C_01a4d060::sub_01a4d060(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a4d090
void __stdcall sub_01a4d090(int a0, int a1) {  }

struct C_01a4d0a0 {
    int sub_01a4d0a0();
};

// @baa 0x01a4d0a0
int C_01a4d0a0::sub_01a4d0a0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return 0;
  }
  return (param_1[2] - *param_1) / 0x24;
}

struct C_01a4d110 {
    void sub_01a4d110();
};

// @baa 0x01a4d110
void C_01a4d110::sub_01a4d110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    sub_01a376d2((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_01a4d160 {
    void sub_01a4d160();
};

// @baa 0x01a4d160
void C_01a4d160::sub_01a4d160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = *param_1;
  return;
}

extern char g_02407c6c[];
struct C_01a4d470 { void sub_01a4d470(void); };

// @baa 0x01a4d470
void C_01a4d470::sub_01a4d470(void) { *(int*)((char*)this + 0) = (int)g_02407c6c; }

struct C_01a4d480 {
    undefined4 * sub_01a4d480(byte);
};

// @baa 0x01a4d480
undefined4 * C_01a4d480::sub_01a4d480(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02407c6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a4d4a0
int sub_01a4d4a0(int param_1)
{
  return param_1 + 0x10;
}

struct C_01a4d4b0 { int sub_01a4d4b0(void); };

// @baa 0x01a4d4b0
int C_01a4d4b0::sub_01a4d4b0(void) { return *(int*)((char*)this + 8); }

// @baa 0x01a4d4c0
undefined4 sub_01a4d4c0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01a4d4f0 { int sub_01a4d4f0(void); };

// @baa 0x01a4d4f0
int C_01a4d4f0::sub_01a4d4f0(void) { return *(int*)((char*)this + 12); }

struct C_01a4eb50 { int sub_01a4eb50(void); };

// @baa 0x01a4eb50
int C_01a4eb50::sub_01a4eb50(void) { return *(int*)((char*)this + 44); }

struct C_01a4eb60 { int sub_01a4eb60(void); };

// @baa 0x01a4eb60
int C_01a4eb60::sub_01a4eb60(void) { return *(int*)((char*)this + 40); }

struct C_01a4f050 {
    int sub_01a4f050();
};

// @baa 0x01a4f050
int C_01a4f050::sub_01a4f050(void)
{
    int * param_1 = (int *)this;

  return (param_1[1] - *param_1) / 0x14;
}

struct C_01a4f070 {
    int sub_01a4f070(int);
};

// @baa 0x01a4f070
int C_01a4f070::sub_01a4f070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01a4f0f0 {
    int sub_01a4f0f0();
};

// @baa 0x01a4f0f0
int C_01a4f0f0::sub_01a4f0f0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return 0;
  }
  return (param_1[2] - *param_1) / 0x14;
}

struct C_01a4f110 { int sub_01a4f110(void); };

// @baa 0x01a4f110
int C_01a4f110::sub_01a4f110(void) { return *(int*)((char*)this + 0); }

struct C_01a4f120 { int sub_01a4f120(void); };

// @baa 0x01a4f120
int C_01a4f120::sub_01a4f120(void) { return *(int*)((char*)this + 4); }

// @baa 0x01a4f1b0
void __stdcall sub_01a4f1b0(int a0, int a1) {  }

struct C_01a4f1c0 { int sub_01a4f1c0(void); };

// @baa 0x01a4f1c0
int C_01a4f1c0::sub_01a4f1c0(void) { return *(int*)((char*)this + 4); }

struct C_01a4f1d0 {
    int sub_01a4f1d0(int);
};

// @baa 0x01a4f1d0
int C_01a4f1d0::sub_01a4f1d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a4f1e0 {
    void sub_01a4f1e0(int);
};

// @baa 0x01a4f1e0
void C_01a4f1e0::sub_01a4f1e0(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a4f200 { int sub_01a4f200(void); };

// @baa 0x01a4f200
int C_01a4f200::sub_01a4f200(void) { return *(int*)((char*)this + 0); }

struct C_01a4f2a0 {
    void sub_01a4f2a0();
};

// @baa 0x01a4f2a0
void C_01a4f2a0::sub_01a4f2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    sub_01a376d2((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_01a4f480 {
    void sub_01a4f480();
};

// @baa 0x01a4f480
void C_01a4f480::sub_01a4f480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = *param_1;
  return;
}

struct C_01a4f490 {
    void sub_01a4f490(int);
};

// @baa 0x01a4f490
void C_01a4f490::sub_01a4f490(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x10) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  return;
}

struct C_01a4f4d0 { int sub_01a4f4d0(void); };

// @baa 0x01a4f4d0
int C_01a4f4d0::sub_01a4f4d0(void) { return *(int*)((char*)this + 4); }

struct C_01a4f4e0 {
    undefined4 sub_01a4f4e0(int);
};

// @baa 0x01a4f4e0
undefined4 C_01a4f4e0::sub_01a4f4e0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a4f4f0 { int sub_01a4f4f0(void); };

// @baa 0x01a4f4f0
int C_01a4f4f0::sub_01a4f4f0(void) { return *(int*)((char*)this + 0); }

extern char g_02408308[];
struct C_01a4f5c0 { void sub_01a4f5c0(void); };

// @baa 0x01a4f5c0
void C_01a4f5c0::sub_01a4f5c0(void) { *(int*)((char*)this + 0) = (int)g_02408308; }

struct C_01a4f5d0 {
    undefined4 * sub_01a4f5d0(byte);
};

// @baa 0x01a4f5d0
undefined4 * C_01a4f5d0::sub_01a4f5d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02408308));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a4f5f0 { void sub_01a4f5f0(void); };

// @baa 0x01a4f5f0
void C_01a4f5f0::sub_01a4f5f0(void) { *(int*)((char*)this + 0) = (int)g_02408308; }

struct C_01a4f600 { int sub_01a4f600(void); };

// @baa 0x01a4f600
int C_01a4f600::sub_01a4f600(void) { return *(int*)((char*)this + 96); }

struct C_01a4f630 {
    undefined4 * sub_01a4f630(byte);
};

// @baa 0x01a4f630
undefined4 * C_01a4f630::sub_01a4f630(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02408308));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a4f700 {
    bool sub_01a4f700();
};

// @baa 0x01a4f700
bool C_01a4f700::sub_01a4f700(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x68) == -1;
}

struct C_01a4f710 { int sub_01a4f710(void); };

// @baa 0x01a4f710
int C_01a4f710::sub_01a4f710(void) { return *(int*)((char*)this + 100); }

// @baa 0x01a4f720
int sub_01a4f720(void) { return 0; }

struct C_01a4ffb0 { int sub_01a4ffb0(void); };

// @baa 0x01a4ffb0
int C_01a4ffb0::sub_01a4ffb0(void) { return *(int*)((char*)this + 8); }

struct C_01a4ffc0 { int sub_01a4ffc0(void); };

// @baa 0x01a4ffc0
int C_01a4ffc0::sub_01a4ffc0(void) { return *(int*)((char*)this + 4); }

struct C_01a4ffd0 { int sub_01a4ffd0(void); };

// @baa 0x01a4ffd0
int C_01a4ffd0::sub_01a4ffd0(void) { return *(int*)((char*)this + 12); }

struct C_01a4ffe0 { char* sub_01a4ffe0(void); };

// @baa 0x01a4ffe0
char* C_01a4ffe0::sub_01a4ffe0(void) { return (char*)this + 12; }

struct C_01a4fff0 { char* sub_01a4fff0(void); };

// @baa 0x01a4fff0
char* C_01a4fff0::sub_01a4fff0(void) { return (char*)this + 12; }
