// Editor_0ec0000.cpp (part 1 of 5): 114 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_021320b4[];
struct C { void sub_00ec13e0(void); };

// @baa 0x00ec13e0
void C::sub_00ec13e0(void) { *(int*)((char*)this + 0) = (int)g_021320b4; }

extern char g_02132108[];
struct C_00ec1440 { C_00ec1440* sub_00ec1440(void); };

// @baa 0x00ec1440
C_00ec1440* C_00ec1440::sub_00ec1440(void) { *(int*)((char*)this + 0) = (int)g_02132108; return this; }

// @baa 0x00ec1630
int sub_00ec1630(void) { return 0; }

struct C_00ec1640 {
    int sub_00ec1640();
};

// @baa 0x00ec1640
int C_00ec1640::sub_00ec1640(void)
{
    int * param_1 = (int *)this;

  return *(int *)(*param_1 + 0x18) + -1;
}

// @baa 0x00ec1650
int UBrushBuilder::vf_120(int a0) { return 0; }

// @baa 0x00ec1660
void UBrushBuilder::vf_13c(void) {  }

// @baa 0x00ec17b0
BYTE __stdcall sub_00ec17b0(UINT a1, UINT a2, UINT a3, UINT a4, UINT a5)
{
    return 0;
}

uchar __stdcall sub_00ec17c0(DWORD a1, DWORD a2, DWORD a3);
// @baa 0x00ec17c0
uchar __stdcall sub_00ec17c0(DWORD a1, DWORD a2, DWORD a3)
{
    return 0;
}

struct C_00ec2490 { int sub_00ec2490(void); };

// @baa 0x00ec2490
int C_00ec2490::sub_00ec2490(void) { return *(int*)((char*)this + 6352); }

struct C_00ec24a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00ec24a0* sub_00ec24a0(INT value);
};

// @baa 0x00ec24a0
C_00ec24a0* C_00ec24a0::sub_00ec24a0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Count;   // 0x04
    INT* Data;   // 0x08
    INT& sub_00ec2500(UINT Index);
};

// @baa 0x00ec2500
INT& FMArray::sub_00ec2500(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}

struct C_00ec2530 { int a, b, c; C_00ec2530(); };

// @baa 0x00ec2530
C_00ec2530::C_00ec2530() : a(0), b(0), c(0) {}

struct C_00ec2540 { int sub_00ec2540(void); };

// @baa 0x00ec2540
int C_00ec2540::sub_00ec2540(void) { return *(int*)((char*)this + 4); }

struct C_00ec2550 { int sub_00ec2550(void); };

// @baa 0x00ec2550
int C_00ec2550::sub_00ec2550(void) { return *(int*)((char*)this + 8); }

struct C_00ec2560 { int sub_00ec2560(void); };

// @baa 0x00ec2560
int C_00ec2560::sub_00ec2560(void) { return *(int*)((char*)this + 8); }

struct C_00ec2570 { int a, b, c; C_00ec2570(); };

// @baa 0x00ec2570
C_00ec2570::C_00ec2570() : a(0), b(0), c(0) {}

struct C_00ec2580 { int sub_00ec2580(void); };

// @baa 0x00ec2580
int C_00ec2580::sub_00ec2580(void) { return *(int*)((char*)this + 4); }

struct C_00ec2590 { int sub_00ec2590(void); };

// @baa 0x00ec2590
int C_00ec2590::sub_00ec2590(void) { return *(int*)((char*)this + 8); }

struct C_00ec25a0 { int sub_00ec25a0(void); };

// @baa 0x00ec25a0
int C_00ec25a0::sub_00ec25a0(void) { return *(int*)((char*)this + 8); }

struct C_00ec25b0 {
    int sub_00ec25b0();
};

// @baa 0x00ec25b0
int C_00ec25b0::sub_00ec25b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 2;
}

struct C_00ec25c0 {
    int sub_00ec25c0();
};

// @baa 0x00ec25c0
int C_00ec25c0::sub_00ec25c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_00ec2600 { void sub_01818fc0(int); C_00ec2600 *sub_00ec2600(int); };

// @baa 0x00ec2600
C_00ec2600 *C_00ec2600::sub_00ec2600(int a) { sub_01818fc0(a); return this; }

struct C_00ec2620 { void sub_01818ec0(int); C_00ec2620 *sub_00ec2620(int); };

// @baa 0x00ec2620
C_00ec2620 *C_00ec2620::sub_00ec2620(int a) { sub_01818ec0(a); return this; }

struct C_00ec2670 {
    int sub_00ec2670();
};

// @baa 0x00ec2670
int C_00ec2670::sub_00ec2670(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_00ec26b0 { int sub_00ec26b0(void); };

// @baa 0x00ec26b0
int C_00ec26b0::sub_00ec26b0(void) { return *(int*)((char*)this + 8); }

struct C_00ec26c0 { int a, b; C_00ec26c0(int, int); };

// @baa 0x00ec26c0
C_00ec26c0::C_00ec26c0(int x, int y) : a(x), b(y) {}

struct C_00ec26e0 { int a, b; C_00ec26e0(int, int); };

// @baa 0x00ec26e0
C_00ec26e0::C_00ec26e0(int x, int y) : a(x), b(y) {}

// @baa 0x00ec2740
int sub_00ec2740(int a0) { return *(int*)a0; }

// @baa 0x00ec2750
bool sub_00ec2750(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ec2760 { int a, b; C_00ec2760(const C_00ec2760 &); };

// @baa 0x00ec2760
C_00ec2760::C_00ec2760(const C_00ec2760 &o) : a(o.a), b(o.b) {}

// @baa 0x00ec27a0
int sub_00ec27a0(int a0) { return *(int*)a0; }

// @baa 0x00ec27b0
bool sub_00ec27b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ec27e0 {
    void sub_00ec27e0(undefined4 *);
};

// @baa 0x00ec27e0
void C_00ec27e0::sub_00ec27e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00ec2800
int sub_00ec2800(int a0) { return *(int*)a0; }

// @baa 0x00ec2810
undefined2 sub_00ec2810(undefined2 * param_1)
{
  return *param_1;
}

// @baa 0x00ec2820
bool sub_00ec2820(short param_1, short param_2)
{
  return param_1 == param_2;
}

struct C_00ec2870 {
    int sub_00ec2870();
};

// @baa 0x00ec2870
int C_00ec2870::sub_00ec2870(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4);
}

struct C_00ec28b0 {
    int sub_00ec28b0();
};

// @baa 0x00ec28b0
int C_00ec28b0::sub_00ec28b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 2;
}

struct C_00ec28f0 { int sub_00ec28f0(void); };

// @baa 0x00ec28f0
int C_00ec28f0::sub_00ec28f0(void) { return *(int*)((char*)this + 8); }

struct C_00ec2900 { int sub_00ec2900(void); };

// @baa 0x00ec2900
int C_00ec2900::sub_00ec2900(void) { return *(int*)((char*)this + 8); }

struct C_00ec2940 { int a, b; C_00ec2940(int, int); };

// @baa 0x00ec2940
C_00ec2940::C_00ec2940(int x, int y) : a(x), b(y) {}

struct C_00ec2990 { C_00ec2990* sub_00ec2990(void); };

// @baa 0x00ec2990
C_00ec2990* C_00ec2990::sub_00ec2990(void) { return this; }

struct C_00ec29d0 { C_00ec29d0* sub_00ec29d0(void); };

// @baa 0x00ec29d0
C_00ec29d0* C_00ec29d0::sub_00ec29d0(void) { return this; }

struct C_00ec29e0 {
    int sub_00ec29e0();
};

// @baa 0x00ec29e0
int C_00ec29e0::sub_00ec29e0(void)
{
    int param_1 = (int)this;

  if (1 < *(uint *)(param_1 + 4)) {
    return *(uint *)(param_1 + 4) - 1;
  }
  return 0;
}

struct C_00ec2a20 {
    int sub_00ec2a20();
};

// @baa 0x00ec2a20
int C_00ec2a20::sub_00ec2a20(void)
{
    int param_1 = (int)this;

  if (1 < *(uint *)(param_1 + 4)) {
    return *(uint *)(param_1 + 4) - 1;
  }
  return 0;
}

struct C_00ec2a90 { C_00ec2a90* sub_00ec2a90(void); };

// @baa 0x00ec2a90
C_00ec2a90* C_00ec2a90::sub_00ec2a90(void) { return this; }

// @baa 0x00ec2ae0
void sub_00ec2ae0(void) {  }

// @baa 0x00ec2af0
void sub_00ec2af0(void) {  }

// @baa 0x00ec2b20
void sub_00ec2b20(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00ec2b40
uint sub_00ec2b40(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00ec2b80
void sub_00ec2b80(undefined1 * param_1, undefined1 * param_2)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00ec2ba0
void sub_00ec2ba0(undefined2 * param_1, undefined2 * param_2)
{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00ec2bc0
uint sub_00ec2bc0(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_00ec2c00 { int a, b; C_00ec2c00(const C_00ec2c00 &); };

// @baa 0x00ec2c00
C_00ec2c00::C_00ec2c00(const C_00ec2c00 &o) : a(o.a), b(o.b) {}

struct C_00ec2ce0 { int sub_00ec2ce0(void); };

// @baa 0x00ec2ce0
int C_00ec2ce0::sub_00ec2ce0(void) { return *(int*)((char*)this + 132); }

struct C_00ec2cf0 {
    bool sub_00ec2cf0();
};

// @baa 0x00ec2cf0
bool C_00ec2cf0::sub_00ec2cf0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00ec2d00 { int sub_00ec2d00(void); };

// @baa 0x00ec2d00
int C_00ec2d00::sub_00ec2d00(void) { return *(int*)((char*)this + 0); }

struct C_00ec2d10 { char* sub_00ec2d10(void); };

// @baa 0x00ec2d10
char* C_00ec2d10::sub_00ec2d10(void) { return (char*)this + 16; }

struct C_00ec2d20 { int sub_00ec2d20(void); };

// @baa 0x00ec2d20
int C_00ec2d20::sub_00ec2d20(void) { return *(int*)((char*)this + 80); }

struct C_00ec2d30 { C_00ec2d30* sub_00ec2d30(void); };

// @baa 0x00ec2d30
C_00ec2d30* C_00ec2d30::sub_00ec2d30(void) { return this; }

int sub_00627f00(...);
// @baa 0x00ec2d40
void sub_00ec2d40(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x8c);
  return;
}

void sub_01827b10();
// @baa 0x00ec2d80
void sub_00ec2d80(void) { sub_01827b10(); }

// @baa 0x00ec2d90
void sub_00ec2d90(void) {  }

// @baa 0x00ec2da0
float10 sub_00ec2da0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00ec2db0
void sub_00ec2db0(void) {  }

struct C_00ec2df0 { int sub_00ec2df0(void); };

// @baa 0x00ec2df0
int C_00ec2df0::sub_00ec2df0(void) { return *(int*)((char*)this + 52); }

struct C_00ec2e00 { int sub_00ec2e00(void); };

// @baa 0x00ec2e00
int C_00ec2e00::sub_00ec2e00(void) { return *(int*)((char*)this + 56); }

struct C_00ec2e10 { void sub_00ec2e10(void); };

// @baa 0x00ec2e10
void C_00ec2e10::sub_00ec2e10(void) { *(int*)((char*)this + 56) = 0; }

// @baa 0x00ec2e80
undefined2 sub_00ec2e80(void)
{
  return 99;
}

// @baa 0x00ec2e90
undefined2 sub_00ec2e90(void)
{
  return 0x73;
}

int sub_005e1960(...);
int sub_00ce8aa0(void);
int sub_00d194e0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026c5640;
// @baa 0x00ec2ea0
void sub_00ec2ea0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c5640 == 0) {
    g_026c5640 = sub_00d194e0(L"Engine");
    sub_00ce8aa0();
  }
  sub_005e1960(g_026c5640,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00ec36f0
int sub_00ec36f0(int a0, int a1) { return a1; }

// @baa 0x00ec3700
int sub_00ec3700(int a0, int a1) { return a1; }

int sub_0105c990(void);
int sub_01084e70(...);
extern undefined4 g_026ce47c;
// @baa 0x00ec3710
int sub_00ec3710(void)
{
  if (g_026ce47c == 0) {
    g_026ce47c = sub_01084e70(L"Editor");
    sub_0105c990();
  }
  return g_026ce47c;
}

int sub_010c1470(void);
int sub_010ee0a0(...);
extern undefined4 g_026ce5e8;
// @baa 0x00ec4340
int sub_00ec4340(void)
{
  if (g_026ce5e8 == 0) {
    g_026ce5e8 = sub_010ee0a0(L"Editor");
    sub_010c1470();
  }
  return g_026ce5e8;
}

int sub_01103eb0(void);
int sub_011100e0(...);
extern undefined4 g_026ce62c;
// @baa 0x00ec4370
int sub_00ec4370(void)
{
  if (g_026ce62c == 0) {
    g_026ce62c = sub_011100e0(L"Editor");
    sub_01103eb0();
  }
  return g_026ce62c;
}

int sub_010c15d0(void);
int sub_010ee160(...);
extern undefined4 g_026ce5ec;
// @baa 0x00ec43a0
int sub_00ec43a0(void)
{
  if (g_026ce5ec == 0) {
    g_026ce5ec = sub_010ee160(L"Editor");
    sub_010c15d0();
  }
  return g_026ce5ec;
}

int sub_0105bff0(void);
int sub_01076020(...);
extern undefined4 g_026ce460;
// @baa 0x00ec43d0
int sub_00ec43d0(void)
{
  if (g_026ce460 == 0) {
    g_026ce460 = sub_01076020(L"Editor");
    sub_0105bff0();
  }
  return g_026ce460;
}

int sub_0105c2b0(void);
int sub_010761a0(...);
extern undefined4 g_026ce468;
// @baa 0x00ec4400
int sub_00ec4400(void)
{
  if (g_026ce468 == 0) {
    g_026ce468 = sub_010761a0(L"Editor");
    sub_0105c2b0();
  }
  return g_026ce468;
}

int sub_010c1730(void);
int sub_010ee220(...);
extern undefined4 g_026ce5f0;
// @baa 0x00ec4430
int sub_00ec4430(void)
{
  if (g_026ce5f0 == 0) {
    g_026ce5f0 = sub_010ee220(L"Editor");
    sub_010c1730();
  }
  return g_026ce5f0;
}

int sub_010f2370(void);
int sub_010fe7e0(...);
extern undefined4 g_026ce5f4;
// @baa 0x00ec4460
int sub_00ec4460(void)
{
  if (g_026ce5f4 == 0) {
    g_026ce5f4 = sub_010fe7e0(L"Editor");
    sub_010f2370();
  }
  return g_026ce5f4;
}

int sub_010f24c0(void);
int sub_010fbb00(...);
extern undefined4 g_026ce5f8;
// @baa 0x00ec4490
int sub_00ec4490(void)
{
  if (g_026ce5f8 == 0) {
    g_026ce5f8 = sub_010fbb00(L"Editor");
    sub_010f24c0();
  }
  return g_026ce5f8;
}

int sub_010c18b0(void);
int sub_010ee2e0(...);
extern undefined4 g_026ce5fc;
// @baa 0x00ec44c0
int sub_00ec44c0(void)
{
  if (g_026ce5fc == 0) {
    g_026ce5fc = sub_010ee2e0(L"Editor");
    sub_010c18b0();
  }
  return g_026ce5fc;
}

int sub_010c1a10(void);
int sub_010ee3a0(...);
extern undefined4 g_026ce600;
// @baa 0x00ec44f0
int sub_00ec44f0(void)
{
  if (g_026ce600 == 0) {
    g_026ce600 = sub_010ee3a0(L"Editor");
    sub_010c1a10();
  }
  return g_026ce600;
}

int sub_010c2130(void);
int sub_010eea80(...);
extern undefined4 g_026ce614;
// @baa 0x00ec4520
int sub_00ec4520(void)
{
  if (g_026ce614 == 0) {
    g_026ce614 = sub_010eea80(L"Editor");
    sub_010c2130();
  }
  return g_026ce614;
}

int sub_0105c410(void);
int sub_01076260(...);
extern undefined4 g_026ce46c;
// @baa 0x00ec4550
int sub_00ec4550(void)
{
  if (g_026ce46c == 0) {
    g_026ce46c = sub_01076260(L"Editor");
    sub_0105c410();
  }
  return g_026ce46c;
}

int sub_0105c570(void);
int sub_01076320(...);
extern undefined4 g_026ce470;
// @baa 0x00ec4580
int sub_00ec4580(void)
{
  if (g_026ce470 == 0) {
    g_026ce470 = sub_01076320(L"Editor");
    sub_0105c570();
  }
  return g_026ce470;
}

int sub_0105c6d0(void);
int sub_010763e0(...);
extern undefined4 g_026ce474;
// @baa 0x00ec45b0
int sub_00ec45b0(void)
{
  if (g_026ce474 == 0) {
    g_026ce474 = sub_010763e0(L"Editor");
    sub_0105c6d0();
  }
  return g_026ce474;
}

int sub_0105c830(void);
int sub_010764a0(...);
extern undefined4 g_026ce478;
// @baa 0x00ec45e0
int sub_00ec45e0(void)
{
  if (g_026ce478 == 0) {
    g_026ce478 = sub_010764a0(L"Editor");
    sub_0105c830();
  }
  return g_026ce478;
}

int sub_010c1b70(void);
int sub_010ee460(...);
extern undefined4 g_026ce604;
// @baa 0x00ec4610
int sub_00ec4610(void)
{
  if (g_026ce604 == 0) {
    g_026ce604 = sub_010ee460(L"Editor");
    sub_010c1b70();
  }
  return g_026ce604;
}

int sub_010c1cd0(void);
int sub_010ee520(...);
extern undefined4 g_026ce608;
// @baa 0x00ec4640
int sub_00ec4640(void)
{
  if (g_026ce608 == 0) {
    g_026ce608 = sub_010ee520(L"Editor");
    sub_010c1cd0();
  }
  return g_026ce608;
}

int sub_010c1e30(void);
int sub_010ee5e0(...);
extern undefined4 g_026ce60c;
// @baa 0x00ec4670
int sub_00ec4670(void)
{
  if (g_026ce60c == 0) {
    g_026ce60c = sub_010ee5e0(L"Editor");
    sub_010c1e30();
  }
  return g_026ce60c;
}

int sub_0105cb00(void);
int sub_01076560(...);
extern undefined4 g_026ce480;
// @baa 0x00ec46a0
int sub_00ec46a0(void)
{
  if (g_026ce480 == 0) {
    g_026ce480 = sub_01076560(L"Editor");
    sub_0105cb00();
  }
  return g_026ce480;
}

int sub_010c1f90(void);
int sub_010ee760(...);
extern undefined4 g_026ce610;
// @baa 0x00ec46d0
int sub_00ec46d0(void)
{
  if (g_026ce610 == 0) {
    g_026ce610 = sub_010ee760(L"Editor");
    sub_010c1f90();
  }
  return g_026ce610;
}

struct C_00ec5880 {
    undefined4 * sub_00ec5880(byte);
};

int sub_0053dfa0(...);
// @baa 0x00ec5880
undefined4 * C_00ec5880::sub_00ec5880(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021320b4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ec6410 {
    undefined4 * sub_00ec6410(byte);
};

// @baa 0x00ec6410
undefined4 * C_00ec6410::sub_00ec6410(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02132108);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00ec6430
IMPLEMENT_CLASS_AT(UEditorPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\PlayLevel.cpp", 35);

// @baa 0x00ec6540
int UEditorPlayer::vf_000(void) { return 1; }

// @baa 0x00ec6550
bool UEditorPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ec6970
int UBrushBuilder::vf_114(void) { return *(int*)((char*)this + 76); }

// @baa 0x00ec6980
int UBrushBuilder::vf_11c(void) { return *(int*)((char*)this + 88); }

// @baa 0x00ec6990
IMPLEMENT_CLASS_AT(UBrushBuilder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UBrushBuilder.cpp", 155);

// @baa 0x00ec6aa0
int UBrushBuilder::vf_000(void) { return 1; }

// @baa 0x00ec6ab0
bool UBrushBuilder::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ec6af0
int UCubeBuilder::vf_000(void) { return 1; }

struct C_00ec6b30 { int sub_00ec6b30(void); };

// @baa 0x00ec6b30
int C_00ec6b30::sub_00ec6b30(void) { return *(int*)((char*)this + 24); }

typedef uint size_t;

struct C_00ecad50 {
    int sub_00ecad50(int);
    int sub_00ced3f0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ecad50
int C_00ecad50::sub_00ecad50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00ecad50 *)(this))->sub_00ced3f0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct C_00ecad90{
int sub_00ecad90(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00ecad90
int C_00ecad90::sub_00ecad90(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_00ecc760 { C_00ecc760* sub_00ecc760(void); };

// @baa 0x00ecc760
C_00ecc760* C_00ecc760::sub_00ecc760(void) { *(int*)((char*)this + 128) = 0; return this; }

struct C_00ecc810 {
    uint sub_00ecc810();
};

// @baa 0x00ecc810
uint C_00ecc810::sub_00ecc810(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00ecc830 {
    uint sub_00ecc830();
};

// @baa 0x00ecc830
uint C_00ecc830::sub_00ecc830(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

void sub_00549160();
// @baa 0x00ecca20
void sub_00ecca20(void) { sub_00549160(); }

struct C_00ecd4b0 {
    void sub_00ecd4b0(int, int);
    int sub_00ecadf0(int);
};

// @baa 0x00ecd4b0
void C_00ecd4b0::sub_00ecd4b0(int param_2, int param_3)
{
    int param_1 = (int)this;
  ((C_00ecd4b0 *)(this))->sub_00ecadf0(*(int *)(param_1 + 0x10) * param_3 + param_2);
  return;
}

struct C_00ece0b0 {
    undefined4 sub_00ece0b0(byte);
};

int sub_00ece040(void);
// @baa 0x00ece0b0
undefined4 C_00ece0b0::sub_00ece0b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ece040();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
