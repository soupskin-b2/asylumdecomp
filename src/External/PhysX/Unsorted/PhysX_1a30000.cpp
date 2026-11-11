// PhysX_1a30000.cpp (part 1 of 2): 140 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_02405b6c[];
struct C { void sub_01a38d50(void); };

// @baa 0x01a38d50
void C::sub_01a38d50(void) { *(int*)((char*)this + 0) = (int)g_02405b6c; }

struct C_01a38d60 {
    undefined4 * sub_01a38d60(byte);
};

int sub_00402660(...);
// @baa 0x01a38d60
undefined4 * C_01a38d60::sub_01a38d60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405b6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a38dc0
int sub_01a38dc0(int param_1)
{
  return param_1 + 0x14;
}

// @baa 0x01a38dd0
int sub_01a38dd0(int param_1)
{
  return param_1 + 0x18;
}

struct C_01a38de0 { int sub_01a38de0(void); };

// @baa 0x01a38de0
int C_01a38de0::sub_01a38de0(void) { return *(int*)((char*)this + 8); }

// @baa 0x01a38df0
int sub_01a38df0(int param_1)
{
  return param_1 + 0x10;
}

// @baa 0x01a38e00
int sub_01a38e00(int param_1)
{
  return param_1 + 0x14;
}

extern char g_02405e04[];
struct C_01a38e10 { void sub_01a38e10(void); };

// @baa 0x01a38e10
void C_01a38e10::sub_01a38e10(void) { *(int*)((char*)this + 0) = (int)g_02405e04; }

struct C_01a38e20 {
    undefined4 * sub_01a38e20(byte);
};

// @baa 0x01a38e20
undefined4 * C_01a38e20::sub_01a38e20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_02405e1c[];
struct C_01a38e40 { void sub_01a38e40(void); };

// @baa 0x01a38e40
void C_01a38e40::sub_01a38e40(void) { *(int*)((char*)this + 0) = (int)g_02405e1c; }

struct C_01a38e50 {
    undefined4 * sub_01a38e50(byte);
};

// @baa 0x01a38e50
undefined4 * C_01a38e50::sub_01a38e50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405e1c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a38e70 { void sub_01a38e70(int a0); };

// @baa 0x01a38e70
void C_01a38e70::sub_01a38e70(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01a38e80 { int sub_01a38e80(void); };

// @baa 0x01a38e80
int C_01a38e80::sub_01a38e80(void) { return *(int*)((char*)this + 4); }

struct C_01a38e90 { void sub_01a38e90(int a0); };

// @baa 0x01a38e90
void C_01a38e90::sub_01a38e90(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01a38ea0 { int sub_01a38ea0(void); };

// @baa 0x01a38ea0
int C_01a38ea0::sub_01a38ea0(void) { return *(int*)((char*)this + 4); }

extern char g_02405e10[];
struct C_01a38eb0 { void sub_01a38eb0(void); };

// @baa 0x01a38eb0
void C_01a38eb0::sub_01a38eb0(void) { *(int*)((char*)this + 0) = (int)g_02405e10; }

struct C_01a38ec0 { void sub_01a38ec0(int a0); };

// @baa 0x01a38ec0
void C_01a38ec0::sub_01a38ec0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01a38ed0 { int sub_01a38ed0(void); };

// @baa 0x01a38ed0
int C_01a38ed0::sub_01a38ed0(void) { return *(int*)((char*)this + 4); }

struct C_01a38ee0 { C_01a38ee0* sub_01a38ee0(void); };

// @baa 0x01a38ee0
C_01a38ee0* C_01a38ee0::sub_01a38ee0(void) { *(int*)((char*)this + 0) = (int)g_02405e04; return this; }

struct C_01a38ef0 { void sub_01a38ef0(void); };

// @baa 0x01a38ef0
void C_01a38ef0::sub_01a38ef0(void) { *(int*)((char*)this + 0) = (int)g_02405e04; }

struct C_01a38f00 { void sub_01a38f00(int a0); };

// @baa 0x01a38f00
void C_01a38f00::sub_01a38f00(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_01a38f10 { int sub_01a38f10(void); };

// @baa 0x01a38f10
int C_01a38f10::sub_01a38f10(void) { return *(int*)((char*)this + 4); }

extern char g_02405df8[];
struct C_01a38f20 { void sub_01a38f20(void); };

// @baa 0x01a38f20
void C_01a38f20::sub_01a38f20(void) { *(int*)((char*)this + 0) = (int)g_02405df8; }

struct C_01a38f30 { void sub_01a38f30(int a0); };

// @baa 0x01a38f30
void C_01a38f30::sub_01a38f30(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_01a38f40 { int sub_01a38f40(void); };

// @baa 0x01a38f40
int C_01a38f40::sub_01a38f40(void) { return *(int*)((char*)this + 28); }

struct C_01a38f50 { C_01a38f50* sub_01a38f50(void); };

// @baa 0x01a38f50
C_01a38f50* C_01a38f50::sub_01a38f50(void) { *(int*)((char*)this + 0) = (int)g_02405e1c; return this; }

// @baa 0x01a38f60
int sub_01a38f60(int param_1)
{
  return param_1 + 0x68;
}

// @baa 0x01a38f70
int sub_01a38f70(int param_1)
{
  return param_1 + 0x6c;
}

// @baa 0x01a38f80
int sub_01a38f80(int param_1)
{
  return param_1 + 0x48;
}

// @baa 0x01a38f90
int sub_01a38f90(int param_1)
{
  return param_1 + 0x14;
}

// @baa 0x01a38fa0
int sub_01a38fa0(int param_1)
{
  return param_1 + 0x10;
}

// @baa 0x01a38fb0
int sub_01a38fb0(int param_1)
{
  return param_1 + 0x10;
}

// @baa 0x01a38fc0
int sub_01a38fc0(int param_1)
{
  return param_1 + 0x14;
}

// @baa 0x01a38fd0
int sub_01a38fd0(int param_1)
{
  return param_1 + 0x10;
}

// @baa 0x01a38fe0
int sub_01a38fe0(int param_1)
{
  return param_1 + 0x14;
}

struct C_01a38ff0 { int sub_01a38ff0(void); };

// @baa 0x01a38ff0
int C_01a38ff0::sub_01a38ff0(void) { return *(int*)((char*)this + 16); }

struct C_01a393e0 { void sub_01a393e0(void); };

// @baa 0x01a393e0
void C_01a393e0::sub_01a393e0(void) { *(int*)((char*)this + 100) = 0; }

struct C_01a393f0 { void sub_01a393f0(void); };

// @baa 0x01a393f0
void C_01a393f0::sub_01a393f0(void) { *(int*)((char*)this + 128) = 0; }

struct C_01a39490 { int sub_01a39490(void); };

// @baa 0x01a39490
int C_01a39490::sub_01a39490(void) { return *(int*)((char*)this + 168); }

// @baa 0x01a399e0
undefined4 sub_01a399e0(int param_1)
{
  return *(undefined4 *)(param_1 + 8);
}

struct C_01a3c800 { int sub_01a3c800(void); };

// @baa 0x01a3c800
int C_01a3c800::sub_01a3c800(void) { return *(int*)((char*)this + 4); }

struct C_01a3c810 {
    int sub_01a3c810(int);
};

// @baa 0x01a3c810
int C_01a3c810::sub_01a3c810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3c820 { void sub_01a3c820(void); };

// @baa 0x01a3c820
void C_01a3c820::sub_01a3c820(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3c850 {
    undefined4 sub_01a3c850(int);
};

// @baa 0x01a3c850
undefined4 C_01a3c850::sub_01a3c850(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3c8d0 { int sub_01a3c8d0(void); };

// @baa 0x01a3c8d0
int C_01a3c8d0::sub_01a3c8d0(void) { return *(int*)((char*)this + 4); }

struct C_01a3c8e0 {
    int sub_01a3c8e0(int);
};

// @baa 0x01a3c8e0
int C_01a3c8e0::sub_01a3c8e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3c8f0 { void sub_01a3c8f0(void); };

// @baa 0x01a3c8f0
void C_01a3c8f0::sub_01a3c8f0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3c920 {
    undefined4 sub_01a3c920(int);
};

// @baa 0x01a3c920
undefined4 C_01a3c920::sub_01a3c920(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3c9a0 { int sub_01a3c9a0(void); };

// @baa 0x01a3c9a0
int C_01a3c9a0::sub_01a3c9a0(void) { return *(int*)((char*)this + 4); }

struct C_01a3c9b0 {
    int sub_01a3c9b0(int);
};

// @baa 0x01a3c9b0
int C_01a3c9b0::sub_01a3c9b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3c9c0 { void sub_01a3c9c0(void); };

// @baa 0x01a3c9c0
void C_01a3c9c0::sub_01a3c9c0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3c9f0 {
    undefined4 sub_01a3c9f0(int);
};

// @baa 0x01a3c9f0
undefined4 C_01a3c9f0::sub_01a3c9f0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3ca60 { int sub_01a3ca60(void); };

// @baa 0x01a3ca60
int C_01a3ca60::sub_01a3ca60(void) { return *(int*)((char*)this + 4); }

struct C_01a3ca70 {
    int sub_01a3ca70(int);
};

// @baa 0x01a3ca70
int C_01a3ca70::sub_01a3ca70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3ca80 { void sub_01a3ca80(void); };

// @baa 0x01a3ca80
void C_01a3ca80::sub_01a3ca80(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3cac0 { int sub_01a3cac0(void); };

// @baa 0x01a3cac0
int C_01a3cac0::sub_01a3cac0(void) { return *(int*)((char*)this + 4); }

struct C_01a3cad0 {
    int sub_01a3cad0(int);
};

// @baa 0x01a3cad0
int C_01a3cad0::sub_01a3cad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_01a3cae0 {
    void sub_01a3cae0(int);
};

// @baa 0x01a3cae0
void C_01a3cae0::sub_01a3cae0(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined2 *)(*param_1 + param_2 * 2) = *(undefined2 *)(*param_1 + param_1[1] * 2);
  return;
}

struct C_01a3cb20 {
    undefined4 sub_01a3cb20(int);
};

// @baa 0x01a3cb20
undefined4 C_01a3cb20::sub_01a3cb20(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3cc80 { int sub_01a3cc80(void); };

// @baa 0x01a3cc80
int C_01a3cc80::sub_01a3cc80(void) { return *(int*)((char*)this + 0); }

struct C_01a3ccf0 {
    void sub_01a3ccf0(int);
};

// @baa 0x01a3ccf0
void C_01a3ccf0::sub_01a3ccf0(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a3cd70 {
    void sub_01a3cd70(int);
};

// @baa 0x01a3cd70
void C_01a3cd70::sub_01a3cd70(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a3ceb0 { int sub_01a3ceb0(void); };

// @baa 0x01a3ceb0
int C_01a3ceb0::sub_01a3ceb0(void) { return *(int*)((char*)this + 4); }

struct C_01a3cec0 {
    int sub_01a3cec0(int);
};

// @baa 0x01a3cec0
int C_01a3cec0::sub_01a3cec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01a3ced0 {
    int sub_01a3ced0(int);
};

// @baa 0x01a3ced0
int C_01a3ced0::sub_01a3ced0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01a3cee0 { void sub_01a3cee0(void); };

// @baa 0x01a3cee0
void C_01a3cee0::sub_01a3cee0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3cef0 { int sub_01a3cef0(void); };

// @baa 0x01a3cef0
int C_01a3cef0::sub_01a3cef0(void) { return *(int*)((char*)this + 0); }

struct C_01a3cf10 { int sub_01a3cf10(void); };

// @baa 0x01a3cf10
int C_01a3cf10::sub_01a3cf10(void) { return *(int*)((char*)this + 4); }

struct C_01a3cf20 {
    int sub_01a3cf20(int);
};

// @baa 0x01a3cf20
int C_01a3cf20::sub_01a3cf20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01a3cf30 {
    int sub_01a3cf30(int);
};

// @baa 0x01a3cf30
int C_01a3cf30::sub_01a3cf30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01a3cf40 { int sub_01a3cf40(void); };

// @baa 0x01a3cf40
int C_01a3cf40::sub_01a3cf40(void) { return *(int*)((char*)this + 4); }

struct C_01a3cf50 {
    int sub_01a3cf50(int);
};

// @baa 0x01a3cf50
int C_01a3cf50::sub_01a3cf50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3cf60 { void sub_01a3cf60(void); };

// @baa 0x01a3cf60
void C_01a3cf60::sub_01a3cf60(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3cf70 {
    void sub_01a3cf70(int);
};

// @baa 0x01a3cf70
void C_01a3cf70::sub_01a3cf70(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a3cf90 { int sub_01a3cf90(void); };

// @baa 0x01a3cf90
int C_01a3cf90::sub_01a3cf90(void) { return *(int*)((char*)this + 0); }

struct C_01a3cfa0 { int sub_01a3cfa0(void); };

// @baa 0x01a3cfa0
int C_01a3cfa0::sub_01a3cfa0(void) { return *(int*)((char*)this + 4); }

struct C_01a3cfb0 {
    int sub_01a3cfb0(int);
};

// @baa 0x01a3cfb0
int C_01a3cfb0::sub_01a3cfb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3cfc0 { void sub_01a3cfc0(void); };

// @baa 0x01a3cfc0
void C_01a3cfc0::sub_01a3cfc0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3cfd0 {
    void sub_01a3cfd0(int);
};

// @baa 0x01a3cfd0
void C_01a3cfd0::sub_01a3cfd0(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a3cff0 { int sub_01a3cff0(void); };

// @baa 0x01a3cff0
int C_01a3cff0::sub_01a3cff0(void) { return *(int*)((char*)this + 0); }

struct C_01a3d000 { int sub_01a3d000(void); };

// @baa 0x01a3d000
int C_01a3d000::sub_01a3d000(void) { return *(int*)((char*)this + 4); }

struct C_01a3d010 {
    int sub_01a3d010(int);
};

// @baa 0x01a3d010
int C_01a3d010::sub_01a3d010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a3d020 { void sub_01a3d020(void); };

// @baa 0x01a3d020
void C_01a3d020::sub_01a3d020(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3d030 {
    void sub_01a3d030(int);
};

// @baa 0x01a3d030
void C_01a3d030::sub_01a3d030(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a3d050 { int sub_01a3d050(void); };

// @baa 0x01a3d050
int C_01a3d050::sub_01a3d050(void) { return *(int*)((char*)this + 0); }

struct C_01a3d060 { int sub_01a3d060(void); };

// @baa 0x01a3d060
int C_01a3d060::sub_01a3d060(void) { return *(int*)((char*)this + 0); }

struct C_01a3d070 { int sub_01a3d070(void); };

// @baa 0x01a3d070
int C_01a3d070::sub_01a3d070(void) { return *(int*)((char*)this + 4); }

struct C_01a3d0d0 {
    int sub_01a3d0d0();
};

// @baa 0x01a3d0d0
int C_01a3d0d0::sub_01a3d0d0(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 2;
}

struct C_01a3d0e0 { int sub_01a3d0e0(void); };

// @baa 0x01a3d0e0
int C_01a3d0e0::sub_01a3d0e0(void) { return *(int*)((char*)this + 0); }

struct C_01a3d0f0 { int sub_01a3d0f0(void); };

// @baa 0x01a3d0f0
int C_01a3d0f0::sub_01a3d0f0(void) { return *(int*)((char*)this + 4); }

struct C_01a3d260 { void sub_01a3d260(void); };

// @baa 0x01a3d260
void C_01a3d260::sub_01a3d260(void) { *(int*)((char*)this + 4) = 0; }

struct C_01a3d490 {
    undefined4 * sub_01a3d490(byte);
};

// @baa 0x01a3d490
undefined4 * C_01a3d490::sub_01a3d490(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405e10));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a3d4c0 {
    undefined4 * sub_01a3d4c0(byte);
};

// @baa 0x01a3d4c0
undefined4 * C_01a3d4c0::sub_01a3d4c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a3d4f0 {
    undefined4 * sub_01a3d4f0(byte);
};

// @baa 0x01a3d4f0
undefined4 * C_01a3d4f0::sub_01a3d4f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02405df8));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a3d880 {
    void sub_01a3d880(int);
};

// @baa 0x01a3d880
void C_01a3d880::sub_01a3d880(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x14) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  return;
}

struct C_01a3d8c0 { int sub_01a3d8c0(void); };

// @baa 0x01a3d8c0
int C_01a3d8c0::sub_01a3d8c0(void) { return *(int*)((char*)this + 4); }

struct C_01a3d8d0 {
    undefined4 sub_01a3d8d0(int);
};

// @baa 0x01a3d8d0
undefined4 C_01a3d8d0::sub_01a3d8d0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3d8e0 { int sub_01a3d8e0(void); };

// @baa 0x01a3d8e0
int C_01a3d8e0::sub_01a3d8e0(void) { return *(int*)((char*)this + 0); }

struct C_01a3d960 {
    void sub_01a3d960(int);
};

// @baa 0x01a3d960
void C_01a3d960::sub_01a3d960(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x18);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x18) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  return;
}

struct C_01a3d9a0 {
    void sub_01a3d9a0(int);
};

// @baa 0x01a3d9a0
void C_01a3d9a0::sub_01a3d9a0(int param_2)
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

struct C_01a3d9e0 { int sub_01a3d9e0(void); };

// @baa 0x01a3d9e0
int C_01a3d9e0::sub_01a3d9e0(void) { return *(int*)((char*)this + 4); }

struct C_01a3d9f0 {
    undefined4 sub_01a3d9f0(int);
};

// @baa 0x01a3d9f0
undefined4 C_01a3d9f0::sub_01a3d9f0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3da70 {
    void sub_01a3da70(int);
};

// @baa 0x01a3da70
void C_01a3da70::sub_01a3da70(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x14) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  return;
}

struct C_01a3dab0 {
    void sub_01a3dab0(int);
};

// @baa 0x01a3dab0
void C_01a3dab0::sub_01a3dab0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x68);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x68) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
  return;
}

struct C_01a3daf0 { int sub_01a3daf0(void); };

// @baa 0x01a3daf0
int C_01a3daf0::sub_01a3daf0(void) { return *(int*)((char*)this + 4); }

struct C_01a3db00 {
    undefined4 sub_01a3db00(int);
};

// @baa 0x01a3db00
undefined4 C_01a3db00::sub_01a3db00(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3db80 {
    void sub_01a3db80(int);
};

// @baa 0x01a3db80
void C_01a3db80::sub_01a3db80(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x6c);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x6c);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x6c) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x6c) = 0xffffffff;
  return;
}

struct C_01a3dc60 {
    void sub_01a3dc60();
};

// @baa 0x01a3dc60
void C_01a3dc60::sub_01a3dc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  param_1[0x101] = 0;
  return;
}

struct C_01a3dc80 { int sub_01a3dc80(void); };

// @baa 0x01a3dc80
int C_01a3dc80::sub_01a3dc80(void) { return *(int*)((char*)this + 1024); }

struct C_01a3dc90 { int sub_01a3dc90(void); };

// @baa 0x01a3dc90
int C_01a3dc90::sub_01a3dc90(void) { return *(int*)((char*)this + 1028); }

struct C_01a3dca0 {
    void sub_01a3dca0(int);
};

// @baa 0x01a3dca0
void C_01a3dca0::sub_01a3dca0(int param_2)
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

struct C_01a3dce0 { int sub_01a3dce0(void); };

// @baa 0x01a3dce0
int C_01a3dce0::sub_01a3dce0(void) { return *(int*)((char*)this + 4); }

struct C_01a3dcf0 {
    undefined4 sub_01a3dcf0(int);
};

// @baa 0x01a3dcf0
undefined4 C_01a3dcf0::sub_01a3dcf0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3dd00 { int sub_01a3dd00(void); };

// @baa 0x01a3dd00
int C_01a3dd00::sub_01a3dd00(void) { return *(int*)((char*)this + 0); }

struct C_01a3dd10 {
    void sub_01a3dd10(int);
};

// @baa 0x01a3dd10
void C_01a3dd10::sub_01a3dd10(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x14) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  return;
}

struct C_01a3dd50 { int sub_01a3dd50(void); };

// @baa 0x01a3dd50
int C_01a3dd50::sub_01a3dd50(void) { return *(int*)((char*)this + 4); }

struct C_01a3dd60 {
    undefined4 sub_01a3dd60(int);
};

// @baa 0x01a3dd60
undefined4 C_01a3dd60::sub_01a3dd60(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3dda0 {
    void sub_01a3dda0(int);
};

// @baa 0x01a3dda0
void C_01a3dda0::sub_01a3dda0(int param_2)
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

struct C_01a3dde0 { int sub_01a3dde0(void); };

// @baa 0x01a3dde0
int C_01a3dde0::sub_01a3dde0(void) { return *(int*)((char*)this + 4); }

struct C_01a3ddf0 {
    undefined4 sub_01a3ddf0(int);
};

// @baa 0x01a3ddf0
undefined4 C_01a3ddf0::sub_01a3ddf0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3de00 { int sub_01a3de00(void); };

// @baa 0x01a3de00
int C_01a3de00::sub_01a3de00(void) { return *(int*)((char*)this + 0); }

struct C_01a3de10 {
    void sub_01a3de10(int);
};

// @baa 0x01a3de10
void C_01a3de10::sub_01a3de10(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x14) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  return;
}

struct C_01a3de50 { int sub_01a3de50(void); };

// @baa 0x01a3de50
int C_01a3de50::sub_01a3de50(void) { return *(int*)((char*)this + 4); }

struct C_01a3de60 {
    undefined4 sub_01a3de60(int);
};

// @baa 0x01a3de60
undefined4 C_01a3de60::sub_01a3de60(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3dea0 {
    void sub_01a3dea0(int);
};

// @baa 0x01a3dea0
void C_01a3dea0::sub_01a3dea0(int param_2)
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

struct C_01a3dee0 { int sub_01a3dee0(void); };

// @baa 0x01a3dee0
int C_01a3dee0::sub_01a3dee0(void) { return *(int*)((char*)this + 4); }

struct C_01a3def0 {
    undefined4 sub_01a3def0(int);
};

// @baa 0x01a3def0
undefined4 C_01a3def0::sub_01a3def0(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3df00 { int sub_01a3df00(void); };

// @baa 0x01a3df00
int C_01a3df00::sub_01a3df00(void) { return *(int*)((char*)this + 0); }

struct C_01a3df10 {
    void sub_01a3df10(int);
};

// @baa 0x01a3df10
void C_01a3df10::sub_01a3df10(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + iVar1 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != param_1[1]) {
    *(int *)(*(int *)(*param_1 + iVar1 * 4) + 0x14) = iVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  return;
}

struct C_01a3df50 { int sub_01a3df50(void); };

// @baa 0x01a3df50
int C_01a3df50::sub_01a3df50(void) { return *(int*)((char*)this + 4); }

struct C_01a3df60 {
    undefined4 sub_01a3df60(int);
};

// @baa 0x01a3df60
undefined4 C_01a3df60::sub_01a3df60(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01a3e280 {
    undefined4 sub_01a3e280(byte);
};

int sub_01a3d420(void);
// @baa 0x01a3e280
undefined4 C_01a3e280::sub_01a3e280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a3d420();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a3e2a0 {
    undefined4 sub_01a3e2a0(byte);
};

int sub_01a3d530(void);
// @baa 0x01a3e2a0
undefined4 C_01a3e2a0::sub_01a3e2a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a3d530();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_024066a4[];
struct C_01a3eb40 { void sub_01a3eb40(void); };

// @baa 0x01a3eb40
void C_01a3eb40::sub_01a3eb40(void) { *(int*)((char*)this + 0) = (int)g_024066a4; }

struct C_01a3eb50 {
    undefined4 * sub_01a3eb50(byte);
};

// @baa 0x01a3eb50
undefined4 * C_01a3eb50::sub_01a3eb50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024066a4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a3eb70 { int sub_01a3eb70(void); };

// @baa 0x01a3eb70
int C_01a3eb70::sub_01a3eb70(void) { return *(int*)((char*)this + 8); }

struct C_01a3eb80 {
    void sub_01a3eb80();
};

// @baa 0x01a3eb80
void C_01a3eb80::sub_01a3eb80(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x2000;
  return;
}

struct C_01a3ecb0 {
    bool sub_01a3ecb0();
};

// @baa 0x01a3ecb0
bool C_01a3ecb0::sub_01a3ecb0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) != 0;
}

struct C_01a3ed30 { int sub_01a3ed30(void); };

// @baa 0x01a3ed30
int C_01a3ed30::sub_01a3ed30(void) { return *(int*)((char*)this + 16); }

struct C_01a3ed40 { int sub_01a3ed40(void); };

// @baa 0x01a3ed40
int C_01a3ed40::sub_01a3ed40(void) { return *(int*)((char*)this + 12); }
