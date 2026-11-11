// D3D9Drv_0c20000.cpp (part 1 of 2): 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_02041f24[];
// @baa 0x00c20c30
int sub_00c20c30(void) { return (int)g_02041f24; }

extern char g_01ebb554[];
struct C { void sub_00c20c40(void); };

// @baa 0x00c20c40
void C::sub_00c20c40(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c20c50 {
    undefined4 * sub_00c20c50(byte);
};

int sub_0053dfa0(...);
// @baa 0x00c20c50
undefined4 * C_00c20c50::sub_00c20c50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c20ca0 {
    int sub_00c20ca0(int);
};

int sub_006311e0(...);
extern undefined4 g_02041fd8;
// @baa 0x00c20ca0
int C_00c20ca0::sub_00c20ca0(int param_2)
{
    int param_1 = (int)this;

  if ((param_2 < 1) || (5 < param_2)) {
    sub_006311e0("Level>=FSL_Level1 && Level<=FSL_Level5",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SystemSettings.cpp"
                 ,0x51c,&g_02041fd8);
  }
  return (*(int *)(param_1 + 0x2d8) + param_2 * 2) * 0x2ac + -0x27c + param_1;
}

struct C_00c20cf0 { int sub_00c20cf0(void); };

// @baa 0x00c20cf0
int C_00c20cf0::sub_00c20cf0(void) { return *(int*)((char*)this + 8); }

struct T_00c20d00 { int x; };

// @baa 0x00c20d00
template T_00c20d00& TIndirectArray<T_00c20d00>::operator()(INT);

struct C_00c20d80 {
    int sub_00c20d80();
};

// @baa 0x00c20d80
int C_00c20d80::sub_00c20d80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x1c;
}

struct C_00c20da0 { int sub_00c20da0(void); };

// @baa 0x00c20da0
int C_00c20da0::sub_00c20da0(void) { return *(int*)((char*)this + 4); }

struct C_00c20db0 { int sub_00c20db0(void); };

// @baa 0x00c20db0
int C_00c20db0::sub_00c20db0(void) { return *(int*)((char*)this + 4); }

struct C_00c20dc0 { int a, b, c; C_00c20dc0(); };

// @baa 0x00c20dc0
C_00c20dc0::C_00c20dc0() : a(0), b(0), c(0) {}

struct C_00c20dd0 { int sub_00c20dd0(void); };

// @baa 0x00c20dd0
int C_00c20dd0::sub_00c20dd0(void) { return *(int*)((char*)this + 4); }

struct C_00c20de0 { int a, b; C_00c20de0(const C_00c20de0 &); };

// @baa 0x00c20de0
C_00c20de0::C_00c20de0(const C_00c20de0 &o) : a(o.a), b(o.b) {}

struct C_00c20e00 { int sub_00c20e00(void); };

// @baa 0x00c20e00
int C_00c20e00::sub_00c20e00(void) { return *(int*)((char*)this + 0); }

struct C_00c20e10 { int sub_00c20e10(void); };

// @baa 0x00c20e10
int C_00c20e10::sub_00c20e10(void) { return *(int*)((char*)this + 0); }

struct C_00c20e20 { int sub_00c20e20(void); };

// @baa 0x00c20e20
int C_00c20e20::sub_00c20e20(void) { return *(int*)((char*)this + 0); }

struct C_00c20e30 { int a, b, c; C_00c20e30(); };

// @baa 0x00c20e30
C_00c20e30::C_00c20e30() : a(0), b(0), c(0) {}

struct C_00c20e40 { int sub_00c20e40(void); };

// @baa 0x00c20e40
int C_00c20e40::sub_00c20e40(void) { return *(int*)((char*)this + 4); }

struct C_00c20e50 { int a, b, c; C_00c20e50(); };

// @baa 0x00c20e50
C_00c20e50::C_00c20e50() : a(0), b(0), c(0) {}

struct C_00c20e60 { int sub_00c20e60(void); };

// @baa 0x00c20e60
int C_00c20e60::sub_00c20e60(void) { return *(int*)((char*)this + 4); }

struct C_00c20e70 { int a, b, c; C_00c20e70(); };

// @baa 0x00c20e70
C_00c20e70::C_00c20e70() : a(0), b(0), c(0) {}

struct C_00c20e80 { int sub_00c20e80(void); };

// @baa 0x00c20e80
int C_00c20e80::sub_00c20e80(void) { return *(int*)((char*)this + 4); }

struct C_00c20f10 { int sub_00c20f10(void); };

// @baa 0x00c20f10
int C_00c20f10::sub_00c20f10(void) { return *(int*)((char*)this + 0); }

struct C_00c20f50 { int sub_00c20f50(void); };

// @baa 0x00c20f50
int C_00c20f50::sub_00c20f50(void) { return *(int*)((char*)this + 0); }

struct C_00c20f60 { C_00c20f60* sub_00c20f60(int a0); };

// @baa 0x00c20f60
C_00c20f60* C_00c20f60::sub_00c20f60(int a0) { return this; }

struct C_00c20f70 { int sub_00c20f70(void); };

// @baa 0x00c20f70
int C_00c20f70::sub_00c20f70(void) { return *(int*)((char*)this + 0); }

struct C_00c20f80 { int sub_00c20f80(void); };

// @baa 0x00c20f80
int C_00c20f80::sub_00c20f80(void) { return *(int*)((char*)this + 0); }

struct C_00c20f90 { int sub_00c20f90(void); };

// @baa 0x00c20f90
int C_00c20f90::sub_00c20f90(void) { return *(int*)((char*)this + 0); }

struct C_00c20fa0 { int sub_00c20fa0(void); };

// @baa 0x00c20fa0
int C_00c20fa0::sub_00c20fa0(void) { return *(int*)((char*)this + 0); }

struct C_00c20fb0 { int sub_00c20fb0(void); };

// @baa 0x00c20fb0
int C_00c20fb0::sub_00c20fb0(void) { return *(int*)((char*)this + 0); }

int sub_00c20fc0(void);
// @baa 0x00c21040
undefined4 ULensFlare::sub_00c21040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c20fc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c21060 { int sub_00c21060(void); };

// @baa 0x00c21060
int C_00c21060::sub_00c21060(void) { return *(int*)((char*)this + 0); }

struct C_00c21070 { int sub_00c21070(void); };

// @baa 0x00c21070
int C_00c21070::sub_00c21070(void) { return *(int*)((char*)this + 0); }

struct C_00c21080 { int sub_00c21080(void); };

// @baa 0x00c21080
int C_00c21080::sub_00c21080(void) { return *(int*)((char*)this + 0); }

struct C_00c21090 { int sub_00c21090(void); };

// @baa 0x00c21090
int C_00c21090::sub_00c21090(void) { return *(int*)((char*)this + 0); }

struct C_00c21110 { int sub_00c21110(void); };

// @baa 0x00c21110
int C_00c21110::sub_00c21110(void) { return *(int*)((char*)this + 0); }

struct C_00c21190 { int sub_00c21190(void); };

// @baa 0x00c21190
int C_00c21190::sub_00c21190(void) { return *(int*)((char*)this + 0); }

int sub_005eae70(...);
int sub_00754f50(void);
int sub_00767250(...);
extern undefined4 g_026b3b34;
// @baa 0x00c211a0
void sub_00c211a0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b3b34 == 0) {
    g_026b3b34 = sub_00767250(L"Engine");
    sub_00754f50();
  }
  sub_005eae70(g_026b3b34,param_1,param_2,param_3,param_4,param_5,1);
  return;
}
