// Editor_1270000.cpp: 56 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01277a00();
};

int sub_00f4d500(void);
extern undefined * g_0221716c;
// @baa 0x01277a00
undefined4 * C::sub_01277a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00f4d500();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (undefined4)(&g_0221716c);
  param_1[1] = 0xb;
  return param_1;
}

struct C_01277a30 {
    void sub_01277a30();
};

int sub_00f4d520(void);
// @baa 0x01277a30
void C_01277a30::sub_01277a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0221716c);
  sub_00f4d520();
  return;
}

extern char g_02212f1c[];
// @baa 0x01277a40
int sub_01277a40(void) { return (int)g_02212f1c; }

extern char g_026d50a8[];
// @baa 0x01277a50
int sub_01277a50(void) { return (int)g_026d50a8; }

struct C_01277a60 {
    void sub_01277a60();
};

int sub_011c1130(void);
extern undefined * g_022171a0;
// @baa 0x01277a60
void C_01277a60::sub_01277a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022171a0);
  sub_011c1130();
  return;
}

struct C_01277a70 {
    undefined4 * sub_01277a70();
};

int sub_0142d7c0(void);
extern undefined * g_02217460;
// @baa 0x01277a70
undefined4 * C_01277a70::sub_01277a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0142d7c0();
  *param_1 = (undefined4)(&g_02217460);
  return param_1;
}

struct C_01277aa0 { void sub_01277aa0(int a0); };

// @baa 0x01277aa0
void C_01277aa0::sub_01277aa0(int a0) { *(int*)((char*)this + 392) = a0; }

struct C_01277ab0 { int sub_01277ab0(void); };

// @baa 0x01277ab0
int C_01277ab0::sub_01277ab0(void) { return *(int*)((char*)this + 420); }

struct C_01277ac0 {
    void sub_01277ac0();
};

// @baa 0x01277ac0
void C_01277ac0::sub_01277ac0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a4);
  *(undefined4 *)(iVar1 + 400) = 0;
  *(undefined4 *)(iVar1 + 0x1b4) = 0;
  return;
}

// @baa 0x01277ae0
int __stdcall sub_01277ae0(int a0, int a1, int a2) { return 2; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x01279a60
void sub_01279a60(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_012512a0(...);
int sub_0125dda0(void);
extern undefined4 g_026d40dc;
// @baa 0x01279a80
int sub_01279a80(void)
{
  if (g_026d40dc == 0) {
    g_026d40dc = sub_012512a0(L"UnrealEd");
    sub_0125dda0();
  }
  return g_026d40dc;
}

int sub_01251420(...);
int sub_0125e040(void);
extern undefined4 g_026d40e4;
// @baa 0x01279ab0
int sub_01279ab0(void)
{
  if (g_026d40e4 == 0) {
    g_026d40e4 = sub_01251420(L"UnrealEd");
    sub_0125e040();
  }
  return g_026d40e4;
}

int sub_012514e0(...);
int sub_0125e190(void);
extern undefined4 g_026d40e8;
// @baa 0x01279ae0
int sub_01279ae0(void)
{
  if (g_026d40e8 == 0) {
    g_026d40e8 = sub_012514e0(L"UnrealEd");
    sub_0125e190();
  }
  return g_026d40e8;
}

int sub_0125e4f0(...);
int sub_012603a0(void);
extern undefined4 g_026d411c;
// @baa 0x01279b10
int sub_01279b10(void)
{
  if (g_026d411c == 0) {
    g_026d411c = sub_0125e4f0(L"UnrealEd");
    sub_012603a0();
  }
  return g_026d411c;
}

int sub_0125e5b0(...);
int sub_012604f0(void);
extern undefined4 g_026d4120;
// @baa 0x01279b40
int sub_01279b40(void)
{
  if (g_026d4120 == 0) {
    g_026d4120 = sub_0125e5b0(L"UnrealEd");
    sub_012604f0();
  }
  return g_026d4120;
}

int sub_0125e7c0(...);
int sub_01260640(void);
extern undefined4 g_026d4128;
// @baa 0x01279b70
int sub_01279b70(void)
{
  if (g_026d4128 == 0) {
    g_026d4128 = sub_0125e7c0(L"UnrealEd");
    sub_01260640();
  }
  return g_026d4128;
}

int sub_01251de0(...);
int sub_0125e670(void);
extern undefined4 g_026d4124;
// @baa 0x01279ba0
int sub_01279ba0(void)
{
  if (g_026d4124 == 0) {
    g_026d4124 = sub_01251de0(L"UnrealEd");
    sub_0125e670();
  }
  return g_026d4124;
}

int sub_01251f60(...);
int sub_0125e880(void);
extern undefined4 g_026d4130;
// @baa 0x01279bd0
int sub_01279bd0(void)
{
  if (g_026d4130 == 0) {
    g_026d4130 = sub_01251f60(L"UnrealEd");
    sub_0125e880();
  }
  return g_026d4130;
}

int sub_01251360(...);
int sub_0125def0(void);
extern undefined4 g_026d40e0;
// @baa 0x01279c00
int sub_01279c00(void)
{
  if (g_026d40e0 == 0) {
    g_026d40e0 = sub_01251360(L"UnrealEd");
    sub_0125def0();
  }
  return g_026d40e0;
}

int sub_01251120(...);
int sub_0125dc50(void);
extern undefined4 g_026d40d4;
// @baa 0x01279c30
int sub_01279c30(void)
{
  if (g_026d40d4 == 0) {
    g_026d40d4 = sub_01251120(L"UnrealEd");
    sub_0125dc50();
  }
  return g_026d40d4;
}

int sub_0149cea0(void);
int sub_0149fbd0(...);
extern undefined4 g_026dd924;
// @baa 0x01279c60
int sub_01279c60(void)
{
  if (g_026dd924 == 0) {
    g_026dd924 = sub_0149fbd0(L"UnrealEd");
    sub_0149cea0();
  }
  return g_026dd924;
}

struct C_01279c90 { C_01279c90* sub_01279c90(void); };

// @baa 0x01279c90
C_01279c90* C_01279c90::sub_01279c90(void) { return this; }

// @baa 0x01279ca0
int sub_01279ca0(int a0, int a1) { return a1; }

extern char g_02217a84[];
// @baa 0x01279cb0
int sub_01279cb0(void) { return (int)g_02217a84; }

// @baa 0x01279cc0
int sub_01279cc0(int a0, int a1) { return a1; }

extern char g_02019ce8[];
// @baa 0x01279cd0
int sub_01279cd0(void) { return (int)g_02019ce8; }

int sub_0149d2d0(void);
int sub_014ba350(...);
extern undefined4 g_026dd930;
// @baa 0x01279ce0
int sub_01279ce0(void)
{
  if (g_026dd930 == 0) {
    g_026dd930 = sub_014ba350(L"UnrealEd");
    sub_0149d2d0();
  }
  return g_026dd930;
}

int sub_014ba410(...);
int sub_014bb110(void);
extern undefined4 g_026dd934;
// @baa 0x01279d10
int sub_01279d10(void)
{
  if (g_026dd934 == 0) {
    g_026dd934 = sub_014ba410(L"UnrealEd");
    sub_014bb110();
  }
  return g_026dd934;
}

int sub_014ba4d0(...);
int sub_014bb260(void);
extern undefined4 g_026dd938;
// @baa 0x01279d40
int sub_01279d40(void)
{
  if (g_026dd938 == 0) {
    g_026dd938 = sub_014ba4d0(L"UnrealEd");
    sub_014bb260();
  }
  return g_026dd938;
}

int sub_0149d450(void);
int sub_014ba590(...);
extern undefined4 g_026dd93c;
// @baa 0x01279d70
int sub_01279d70(void)
{
  if (g_026dd93c == 0) {
    g_026dd93c = sub_014ba590(L"UnrealEd");
    sub_0149d450();
  }
  return g_026dd93c;
}

int sub_012a0c90(void);
int sub_012b5f00(...);
extern undefined4 g_026d5608;
// @baa 0x01279da0
int sub_01279da0(void)
{
  if (g_026d5608 == 0) {
    g_026d5608 = sub_012b5f00(L"UnrealEd");
    sub_012a0c90();
  }
  return g_026d5608;
}

// @baa 0x01279dd0
int sub_01279dd0(int a0, int a1) { return a1; }

struct C_01279de0 { int a, b, c; C_01279de0(); };

// @baa 0x01279de0
C_01279de0::C_01279de0() : a(0), b(0), c(0) {}

struct C_01279df0 { int a, b, c; C_01279df0(); };

// @baa 0x01279df0
C_01279df0::C_01279df0() : a(0), b(0), c(0) {}

struct C_01279e00 { int a, b, c; C_01279e00(); };

// @baa 0x01279e00
C_01279e00::C_01279e00() : a(0), b(0), c(0) {}

struct C_01279e10 { int a, b, c; C_01279e10(); };

// @baa 0x01279e10
C_01279e10::C_01279e10() : a(0), b(0), c(0) {}

struct C_01279e20 { C_01279e20* sub_01279e20(int a0); };

// @baa 0x01279e20
C_01279e20* C_01279e20::sub_01279e20(int a0) { return this; }

struct C_01279e30 { C_01279e30* sub_01279e30(int a0); };

// @baa 0x01279e30
C_01279e30* C_01279e30::sub_01279e30(int a0) { return this; }

struct C_01279e40 { C_01279e40* sub_01279e40(int a0); };

// @baa 0x01279e40
C_01279e40* C_01279e40::sub_01279e40(int a0) { return this; }

struct C_01279e50 { int sub_01279e50(void); };

// @baa 0x01279e50
int C_01279e50::sub_01279e50(void) { return *(int*)((char*)this + 0); }

struct C_01279e60 { int sub_01279e60(void); };

// @baa 0x01279e60
int C_01279e60::sub_01279e60(void) { return *(int*)((char*)this + 0); }

struct C_01279e70 { int sub_01279e70(void); };

// @baa 0x01279e70
int C_01279e70::sub_01279e70(void) { return *(int*)((char*)this + 0); }

struct C_01279e80 { int sub_01279e80(void); };

// @baa 0x01279e80
int C_01279e80::sub_01279e80(void) { return *(int*)((char*)this + 0); }

struct C_01279e90 { int sub_01279e90(void); };

// @baa 0x01279e90
int C_01279e90::sub_01279e90(void) { return *(int*)((char*)this + 0); }

struct C_01279ea0 { int sub_01279ea0(void); };

// @baa 0x01279ea0
int C_01279ea0::sub_01279ea0(void) { return *(int*)((char*)this + 0); }

struct C_01279eb0 { int sub_01279eb0(void); };

// @baa 0x01279eb0
int C_01279eb0::sub_01279eb0(void) { return *(int*)((char*)this + 0); }

struct C_01279ec0 { int sub_01279ec0(void); };

// @baa 0x01279ec0
int C_01279ec0::sub_01279ec0(void) { return *(int*)((char*)this + 0); }

struct C_01279ed0 { int sub_01279ed0(void); };

// @baa 0x01279ed0
int C_01279ed0::sub_01279ed0(void) { return *(int*)((char*)this + 0); }

struct C_01279ee0 { int sub_01279ee0(void); };

// @baa 0x01279ee0
int C_01279ee0::sub_01279ee0(void) { return *(int*)((char*)this + 0); }

struct C_01279ef0 { int sub_01279ef0(void); };

// @baa 0x01279ef0
int C_01279ef0::sub_01279ef0(void) { return *(int*)((char*)this + 0); }

struct C_01279f00 { int sub_01279f00(void); };

// @baa 0x01279f00
int C_01279f00::sub_01279f00(void) { return *(int*)((char*)this + 0); }

struct C_01279f10 { int sub_01279f10(void); };

// @baa 0x01279f10
int C_01279f10::sub_01279f10(void) { return *(int*)((char*)this + 0); }

struct C_01279f20 { int sub_01279f20(void); };

// @baa 0x01279f20
int C_01279f20::sub_01279f20(void) { return *(int*)((char*)this + 0); }

struct C_01279f30 {
    undefined4 * sub_01279f30(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_022170c0;
// @baa 0x01279f30
undefined4 * C_01279f30::sub_01279f30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022170c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01279f70 {
    void sub_01279f70();
};

// @baa 0x01279f70
void C_01279f70::sub_01279f70(void)
{
    int param_1 = (int)this;
  int *piVar1;
  piVar1 = (int *)(param_1 + 0x1b0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1a4) + -1;
  }
  return;
}
