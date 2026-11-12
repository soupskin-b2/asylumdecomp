// Engine_0700000.cpp (part 1 of 2): 182 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00700000();
};

int sub_006f6ac0(void);
// @baa 0x00700000
int C::sub_00700000(void)
{
    int param_1 = (int)this;

  sub_006f6ac0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00700020 {
    int sub_00700020();
};

int sub_006f6b20(void);
// @baa 0x00700020
int C_00700020::sub_00700020(void)
{
    int param_1 = (int)this;

  sub_006f6b20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006fdb10();
// @baa 0x00700250
void sub_00700250(void) { sub_006fdb10(); }

void sub_006ff7a0();
// @baa 0x00700260
void sub_00700260(void) { sub_006ff7a0(); }

void sub_006ff910();
// @baa 0x00700270
void sub_00700270(void) { sub_006ff910(); }

void sub_006fdb80();
// @baa 0x00700280
void sub_00700280(void) { sub_006fdb80(); }

void sub_006fdbf0();
// @baa 0x00700290
void sub_00700290(void) { sub_006fdbf0(); }

void sub_006fdc60();
// @baa 0x007002a0
void sub_007002a0(void) { sub_006fdc60(); }

void sub_006fdcd0();
// @baa 0x007005e0
void sub_007005e0(void) { sub_006fdcd0(); }

struct S {
    void sub_006fe130(int);
};

struct T {
    void sub_007005f0();
};

// @baa 0x007005f0
void T::sub_007005f0() {
    ((S*)((char*)this + 0x10))->sub_006fe130(0);
}

// @baa 0x00700760
float10 sub_00700760(float * param_1, float * param_2)
{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}

struct C_00700790 { float sub_00700790(void); };

// @baa 0x00700790
float C_00700790::sub_00700790(void) { return *(float*)((char*)this + 560); }

// @baa 0x00701010
int sub_00701010(int param_1, int param_2)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

struct C_00701970 {
    int sub_00701970();
};

int sub_006f6940(void);
// @baa 0x00701970
int C_00701970::sub_00701970(void)
{
    int param_1 = (int)this;

  sub_006f6940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00701990 { C_00701990* sub_00701990(void); };

// @baa 0x00701990
C_00701990* C_00701990::sub_00701990(void) { return this; }

struct C_007019a0 { C_007019a0* sub_007019a0(void); };

// @baa 0x007019a0
C_007019a0* C_007019a0::sub_007019a0(void) { return this; }

struct C_007019b0 {
    int sub_007019b0();
};

int sub_006f69a0(void);
// @baa 0x007019b0
int C_007019b0::sub_007019b0(void)
{
    int param_1 = (int)this;

  sub_006f69a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007019d0 {
    int sub_007019d0();
};

int sub_006f6a00(void);
// @baa 0x007019d0
int C_007019d0::sub_007019d0(void)
{
    int param_1 = (int)this;

  sub_006f6a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007019f0 {
    int sub_007019f0();
};

int sub_006f6a60(void);
// @baa 0x007019f0
int C_007019f0::sub_007019f0(void)
{
    int param_1 = (int)this;

  sub_006f6a60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00701b80 {
    int sub_00701b80();
};

int sub_006f6b80(void);
// @baa 0x00701b80
int C_00701b80::sub_00701b80(void)
{
    int param_1 = (int)this;

  sub_006f6b80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006987b0();
// @baa 0x00701ba0
void sub_00701ba0(void) { sub_006987b0(); }

int sub_00662920(...);
int sub_006987b0(...);
// @baa 0x00701bb0
void sub_00701bb0(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_006987b0(param_1,param_2);
  return;
}

void sub_00698860();
// @baa 0x00701c00
void sub_00701c00(void) { sub_00698860(); }

int sub_00698860(...);
// @baa 0x00701c10
void sub_00701c10(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_00698860(param_1,param_2);
  return;
}

void sub_007018c0();
// @baa 0x00701c60
void sub_00701c60(void) { sub_007018c0(); }

int sub_00696b50(...);
int sub_007018c0(...);
// @baa 0x00701c70
void sub_00701c70(undefined4 param_1, undefined4 param_2)
{
  sub_00696b50(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00696c40(...);
// @baa 0x00701c90
void sub_00701c90(undefined4 param_1, undefined4 param_2)
{
  sub_00696c40(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00696d30(...);
// @baa 0x00701cb0
void sub_00701cb0(undefined4 param_1, undefined4 param_2)
{
  sub_00696d30(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00696e20(...);
// @baa 0x00701cd0
void sub_00701cd0(undefined4 param_1, undefined4 param_2)
{
  sub_00696e20(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00696f10(...);
// @baa 0x00701cf0
void sub_00701cf0(undefined4 param_1, undefined4 param_2)
{
  sub_00696f10(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

struct C_00701d10 {
    int sub_00701d10();
};

// @baa 0x00701d10
int C_00701d10::sub_00701d10(void)
{
    int param_1 = (int)this;

  sub_006f6ac0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00701d30 {
    int sub_00701d30();
};

// @baa 0x00701d30
int C_00701d30::sub_00701d30(void)
{
    int param_1 = (int)this;

  sub_006f6b20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00701ed0
void sub_00701ed0(void) { sub_006fdb10(); }

struct C_00701ee0 {
    undefined4 * sub_00701ee0();
};

int sub_005c7a20(void);
extern undefined * g_01edc498;
// @baa 0x00701ee0
undefined4 * C_00701ee0::sub_00701ee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *param_1 = (undefined4)(&g_01edc498);
  return param_1;
}

// @baa 0x00701f00
IMPLEMENT_CLASS_AT(UPointLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PointLightComponent.cpp", 11);

// @baa 0x00701f60
// @baa 0x00701f90
void sub_00701f90(void) { sub_006fdb80(); }

// @baa 0x00701fa0
void sub_00701fa0(void) { sub_006fdbf0(); }

// @baa 0x00701fb0
void sub_00701fb0(void) { sub_006fdc60(); }

void sub_00701a60();
// @baa 0x00702890
void sub_00702890(void) { sub_00701a60(); }

void sub_00701b10();
// @baa 0x007028a0
void sub_007028a0(void) { sub_00701b10(); }

// @baa 0x00702e50
void sub_00702e50() {
	sub_006fdcd0();
}

struct C_00704b50 {
    void sub_00704b50();
};

int sub_006ee9d0(...);
// @baa 0x00704b50
void C_00704b50::sub_00704b50(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ee9d0(param_1,4,0,0,L"Parameters.TangentReflectionVector");
  return;
}

struct C_00704b70 {
    void sub_00704b70();
};

// @baa 0x00704b70
void C_00704b70::sub_00704b70(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ee9d0(param_1,4,0,0,L"Parameters.TangentCameraVector");
  return;
}

struct C_00704b90 {
    void sub_00704b90();
};

// @baa 0x00704b90
void C_00704b90::sub_00704b90(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ee9d0(param_1,4,0,0,L"CameraWorldPos");
  return;
}

struct C_00704bb0 {
    void sub_00704bb0();
};

// @baa 0x00704bb0
void C_00704bb0::sub_00704bb0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ee9d0(param_1,4,0,0,L"Parameters.TangentLightVector");
  return;
}

struct C_00705c00 {
    void sub_00705c00();
};

// @baa 0x00705c00
void C_00705c00::sub_00705c00(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ee9d0(param_1,8,0,0,L"Parameters.VertexColor");
  return;
}

struct C_00706da0 {
    int sub_006e3e30(int);
    int sub_006da3e0(int);
    int sub_006eed40(int);
    int sub_006e3ef0(int);
    int sub_00706da0(int, int, int, int, int);
};

int sub_006d9380(...);
extern short g_01e3f3dc;
extern short g_01edd454;
extern short g_01edd458;
extern short g_01edd45c;
extern short g_01edd460;
// @baa 0x00706da0
int C_00706da0::sub_00706da0(int id, int a, int b, int c, int d)
{
    if (id == -1) return -1;
    int n = sub_006e3e30(id);
    if ((d && (n & 15) < 8) || (c && (n & 15) < 4) || (b && (n & 15) < 2) || (a && (n & 15) < 1)) {
        sub_006d9380(this, L"Not enough components in (%s: %s) for component mask %u%u%u%u",
            sub_006eed40(id), sub_006da3e0(sub_006e3e30(id)), a, b, c, d);
    }
    int mask;
    switch ((a != 0) + (b != 0) + (c != 0) + (d != 0) - 1) {
    case 0: mask = 0xf; break;
    case 1: mask = 2; break;
    case 2: mask = 4; break;
    case 3: mask = 8; break;
    default:
        sub_006d9380(this, L"Couldn't determine result type of component mask %u%u%u%u", a, b, c, d);
        return -1;
    }
    short *p4 = d ? &g_01edd460 : &g_01e3f3dc;
    short *p3 = c ? &g_01edd45c : &g_01e3f3dc;
    short *p2 = b ? &g_01edd458 : &g_01e3f3dc;
    short *p1 = a ? &g_01edd454 : &g_01e3f3dc;
    return sub_006ee9d0(this, mask, 0, sub_006e3ef0(id), L"%s.%s%s%s%s", sub_006eed40(id), p1, p2, p3, p4);
}

struct C_00707990 {
    void sub_00707990();
};

// @baa 0x00707990
void C_00707990::sub_00707990(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ee9d0(param_1,4,0,0,L"Parameters.TangentNormal");
  return;
}

struct C_007080d0 {
    undefined4 sub_007080d0(byte);
};

int sub_0053dfa0(...);
int sub_00694520(void);
// @baa 0x007080d0
undefined4 C_007080d0::sub_007080d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00694520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00695c20(...);
// @baa 0x00708110
void sub_00708110(undefined4 param_1, undefined4 param_2)
{
  sub_00695c20(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00695de0(...);
// @baa 0x00708130
void sub_00708130(undefined4 param_1, undefined4 param_2)
{
  sub_00695de0(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00695fa0(...);
// @baa 0x00708150
void sub_00708150(undefined4 param_1, undefined4 param_2)
{
  sub_00695fa0(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00696160(...);
// @baa 0x00708170
void sub_00708170(undefined4 param_1, undefined4 param_2)
{
  sub_00696160(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00696320(...);
// @baa 0x00708190
void sub_00708190(undefined4 param_1, undefined4 param_2)
{
  sub_00696320(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_006964e0(...);
// @baa 0x007081b0
void sub_007081b0(undefined4 param_1, undefined4 param_2)
{
  sub_006964e0(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_006956e0(...);
// @baa 0x007081d0
void sub_007081d0(undefined4 param_1, undefined4 param_2)
{
  sub_006956e0(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_006958a0(...);
// @baa 0x007081f0
void sub_007081f0(undefined4 param_1, undefined4 param_2)
{
  sub_006958a0(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

int sub_00695a60(...);
// @baa 0x00708210
void sub_00708210(undefined4 param_1, undefined4 param_2)
{
  sub_00695a60(param_1,param_2);
  sub_007018c0(param_1,param_2);
  return;
}

struct C_00708230 {
    int sub_00708230();
};

// @baa 0x00708230
int C_00708230::sub_00708230(void)
{
    int param_1 = (int)this;

  sub_006f6ac0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00708250 {
    int sub_00708250();
};

// @baa 0x00708250
int C_00708250::sub_00708250(void)
{
    int param_1 = (int)this;

  sub_006f6b20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00708270 {
    int sub_00708270();
};

int sub_006f65f0(void);
// @baa 0x00708270
int C_00708270::sub_00708270(void)
{
    int param_1 = (int)this;

  sub_006f65f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_006f6650(void);
// @baa 0x00708300
int UTexture2D::sub_00708300(void)
{
    int param_1 = (int)this;

  sub_006f6650();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_006f66b0(void);
// @baa 0x00708390
int UTexture2D::sub_00708390(void)
{
    int param_1 = (int)this;

  sub_006f66b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006d2a30();
// @baa 0x00708420
void sub_00708420(void) { sub_006d2a30(); }

// @baa 0x00708880
void sub_00708880(void) { sub_006d2a30(); }

struct A_00708970 { virtual void sub_00708a10(); };

struct B_00708970 { virtual void sub_00708a10(); };

struct C_00708970 : A_00708970, B_00708970 { virtual void sub_00708a10(); C_00708970(); };

C_00708970::C_00708970() {}

// @baa 0x00708970
void C_00708970::sub_00708a10() {}

struct C_00708a10 {
    undefined4 sub_00708a10(byte);
};

int sub_00708980(void);
// @baa 0x00708a10
undefined4 C_00708a10::sub_00708a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00708980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006b5d90(void);
int sub_00708430(...);
int sub_007084a0(...);
int sub_00708520(...);
int sub_007085a0(...);
// @baa 0x00708a30
void UMaterialInstanceConstant::vf_180(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006b5d90();
  sub_00708430(param_1);
  sub_007084a0(param_1);
  sub_00708520(param_1);
  sub_007085a0(param_1);
  return;
}

// @baa 0x00708a60
void sub_00708a60(void) { sub_00701a60(); }

// @baa 0x00708a70
void sub_00708a70(void) { sub_00701b10(); }

struct C_00709370 {
    int sub_00709370();
};

// @baa 0x00709370
int C_00709370::sub_00709370(void)
{
    int param_1 = (int)this;

  sub_006f6ac0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00709390 {
    int sub_00709390();
};

// @baa 0x00709390
int C_00709390::sub_00709390(void)
{
    int param_1 = (int)this;

  sub_006f6b20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x007095f0
void sub_007095f0(void) { sub_006d2a30(); }

int sub_005c7a70(...);
int sub_00709940(void);
// @baa 0x007099e0
undefined4 UMaterialInstanceConstant::sub_007099e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00709940();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xa0);
  }
  return param_1;
}

// @baa 0x00709a10
void sub_00709a10(void) { sub_00701a60(); }

// @baa 0x00709a20
void sub_00709a20(void) { sub_00701b10(); }

int sub_00708610(...);
int sub_00708750(...);
int sub_00709600(...);
int sub_00709740(...);
// @baa 0x00709a30
void UMaterialInstanceTimeVarying::vf_180(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_006b5d90();
  sub_00709600(param_1);
  sub_00709740(param_1);
  sub_00708610(param_1);
  sub_00708750(param_1);
  return;
}

struct S_00709ec0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00709ec0(INT Index) const;
};

// @baa 0x00709ec0
const QWORD* S_00709ec0::sub_00709ec0(INT Index) const
{
    return &Items(Index);
}

struct C_00709f10 { int sub_00709f10(void); };

// @baa 0x00709f10
int C_00709f10::sub_00709f10(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[12]; };

struct S_00709f20 {
    TArray<E> Items; // 0x00
    const E* sub_00709f20(INT Index) const;
};

// @baa 0x00709f20
const E* S_00709f20::sub_00709f20(INT Index) const
{
    return &Items(Index);
}

struct S_00709fd0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00709fd0(INT Index) const;
};

// @baa 0x00709fd0
const QWORD* S_00709fd0::sub_00709fd0(INT Index) const
{
    return &Items(Index);
}

struct C_0070a020 { int sub_0070a020(void); };

// @baa 0x0070a020
int C_0070a020::sub_0070a020(void) { return *(int*)((char*)this + 4); }

struct E_0070a030 { BYTE Bytes[24]; };

struct S_0070a030 {
    TArray<E_0070a030> Items; // 0x00
    const E_0070a030* sub_0070a030(INT Index) const;
};

// @baa 0x0070a030
const E_0070a030* S_0070a030::sub_0070a030(INT Index) const
{
    return &Items(Index);
}

struct S_0070a0e0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0070a0e0(INT Index) const;
};

// @baa 0x0070a0e0
const QWORD* S_0070a0e0::sub_0070a0e0(INT Index) const
{
    return &Items(Index);
}

struct C_0070a130 { int sub_0070a130(void); };

// @baa 0x0070a130
int C_0070a130::sub_0070a130(void) { return *(int*)((char*)this + 4); }

struct S_0070a140 {
    TArray<E> Items; // 0x00
    const E* sub_0070a140(INT Index) const;
};

// @baa 0x0070a140
const E* S_0070a140::sub_0070a140(INT Index) const
{
    return &Items(Index);
}

struct C_0070a190 {
    void sub_0070a190(int);
};

// @baa 0x0070a190
void C_0070a190::sub_0070a190(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0070a1b0 {
    void sub_0070a1b0(int);
};

// @baa 0x0070a1b0
void C_0070a1b0::sub_0070a1b0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0070a1d0 {
    void sub_0070a1d0(int);
};

// @baa 0x0070a1d0
void C_0070a1d0::sub_0070a1d0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0070a1f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0070a1f0* sub_0070a1f0(INT value);
};

// @baa 0x0070a1f0
C_0070a1f0* C_0070a1f0::sub_0070a1f0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0070a210 {
    int field0; // pad
    int field4; // incremented
    C_0070a210 * sub_0070a210();
};

// @baa 0x0070a210
C_0070a210 * C_0070a210::sub_0070a210()
{
    ++field4;
    return this;
}

struct C_0070a270 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0070a270* sub_0070a270(INT value);
};

// @baa 0x0070a270
C_0070a270* C_0070a270::sub_0070a270(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0070a290 {
    void *sub_0070a290(void);
};

// @baa 0x0070a290
void *C_0070a290::sub_0070a290(void)
{
    (*(int *)((char *)this + 4))++;
    return this;
}

struct C_0070a2f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0070a2f0* sub_0070a2f0(INT value);
};

// @baa 0x0070a2f0
C_0070a2f0* C_0070a2f0::sub_0070a2f0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0070a310 {
    char pad[4];
    int field_04;
    C_0070a310* sub_0070a310();
};

// @baa 0x0070a310
C_0070a310* C_0070a310::sub_0070a310()
{
    ++field_04;
    return this;
}

// @baa 0x0070a370
int sub_0070a370(int param_1)
{
  return param_1 + 0x18;
}

struct C_0070a380 { int a, b, c; C_0070a380(); };

// @baa 0x0070a380
C_0070a380::C_0070a380() : a(0), b(0), c(0) {}

struct C_0070a390 { int a, b, c; C_0070a390(); };

// @baa 0x0070a390
C_0070a390::C_0070a390() : a(0), b(0), c(0) {}

struct C_0070a3a0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0070a3a0(INT Index);
};

// @baa 0x0070a3a0
UBOOL C_0070a3a0::sub_0070a3a0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0070a3c0
int sub_0070a3c0(int param_1)
{
  return param_1 + 0x18;
}

struct C_0070a3d0 { int a, b, c; C_0070a3d0(); };

// @baa 0x0070a3d0
C_0070a3d0::C_0070a3d0() : a(0), b(0), c(0) {}

struct C_0070a3e0 { int a, b, c; C_0070a3e0(); };

// @baa 0x0070a3e0
C_0070a3e0::C_0070a3e0() : a(0), b(0), c(0) {}

struct C_0070a3f0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0070a3f0(INT Index);
};

// @baa 0x0070a3f0
UBOOL C_0070a3f0::sub_0070a3f0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0070a410
int sub_0070a410(int param_1)
{
  return param_1 + 0x18;
}

struct C_0070a420 { int a, b, c; C_0070a420(); };

// @baa 0x0070a420
C_0070a420::C_0070a420() : a(0), b(0), c(0) {}

struct C_0070a430 { int a, b, c; C_0070a430(); };

// @baa 0x0070a430
C_0070a430::C_0070a430() : a(0), b(0), c(0) {}

struct C_0070a440 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0070a440(INT Index);
};

// @baa 0x0070a440
UBOOL C_0070a440::sub_0070a440(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0070a5e0 { int sub_0070a5e0(void); };

// @baa 0x0070a5e0
int C_0070a5e0::sub_0070a5e0(void) { return *(int*)((char*)this + 20); }

struct C_0070a5f0 { int sub_0070a5f0(void); };

// @baa 0x0070a5f0
int C_0070a5f0::sub_0070a5f0(void) { return *(int*)((char*)this + 20); }

struct C_0070a600 { int sub_0070a600(void); };

// @baa 0x0070a600
int C_0070a600::sub_0070a600(void) { return *(int*)((char*)this + 20); }

struct C_0070a610 { int sub_0070a610(void); };

// @baa 0x0070a610
int C_0070a610::sub_0070a610(void) { return *(int*)((char*)this + 4); }

struct C_0070a700 { int sub_0070a700(void); };

// @baa 0x0070a700
int C_0070a700::sub_0070a700(void) { return *(int*)((char*)this + 4); }

struct C_0070a800 { int sub_0070a800(void); };

// @baa 0x0070a800
int C_0070a800::sub_0070a800(void) { return *(int*)((char*)this + 4); }

struct C_0070ab60 {
    undefined4 * sub_0070ab60(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01eddf2c;
// @baa 0x0070ab60
undefined4 * C_0070ab60::sub_0070ab60(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0070ab60 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01eddf2c);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct C_0070ab90 {
    undefined4 * sub_0070ab90(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01eddf30;
// @baa 0x0070ab90
undefined4 * C_0070ab90::sub_0070ab90(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0070ab90 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01eddf30);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_0070abd0 {
    undefined4 * sub_0070abd0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01eddf34;
// @baa 0x0070abd0
undefined4 * C_0070abd0::sub_0070abd0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0070abd0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01eddf34);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_0070ac40 { int sub_0070ac40(void); };

// @baa 0x0070ac40
int C_0070ac40::sub_0070ac40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0070ac80 { int sub_0070ac80(void); };

// @baa 0x0070ac80
int C_0070ac80::sub_0070ac80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0070acc0 { int sub_0070acc0(void); };

// @baa 0x0070acc0
int C_0070acc0::sub_0070acc0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0070ad00 { int sub_0070ad00(void); };

// @baa 0x0070ad00
int C_0070ad00::sub_0070ad00(void) { return *(int*)((char*)this + 0); }

struct C_0070ad10 {
    void sub_0070ad10();
};

int sub_006311e0(...);
extern undefined4 g_01ec1274;
// @baa 0x0070ad10
void C_0070ad10::sub_0070ad10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_0070ad70 { int sub_0070ad70(void); };

// @baa 0x0070ad70
int C_0070ad70::sub_0070ad70(void) { return *(int*)((char*)this + 0); }

struct C_0070ad80 {
    void sub_0070ad80();
};

// @baa 0x0070ad80
void C_0070ad80::sub_0070ad80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_0070ade0 { int sub_0070ade0(void); };

// @baa 0x0070ade0
int C_0070ade0::sub_0070ade0(void) { return *(int*)((char*)this + 0); }

struct C_0070adf0 {
    void sub_0070adf0();
};

// @baa 0x0070adf0
void C_0070adf0::sub_0070adf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

// @baa 0x0070ae20
undefined4 * UMaterialInstanceConstant::sub_0070ae20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0070ae60
undefined4 * UMaterialInstanceConstant::sub_0070ae60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0070aea0
undefined4 * UMaterialInstanceConstant::sub_0070aea0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_0070aee0 { int sub_0070a4c0(int); };

// @baa 0x0070aee0
int sub_0070aee0(S_0070aee0 *s, int a) { return s->sub_0070a4c0(a); }

int sub_0069c170(...);
// @baa 0x0070aef0
void sub_0070aef0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_0070af10 {
    int sub_0070af10(int);
};

// @baa 0x0070af10
int C_0070af10::sub_0070af10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0070af20 { int sub_0070a520(int); };

// @baa 0x0070af20
int sub_0070af20(S_0070af20 *s, int a) { return s->sub_0070a520(a); }

// @baa 0x0070af30
void sub_0070af30(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_0070af50 {
    int sub_0070af50(int);
};

// @baa 0x0070af50
int C_0070af50::sub_0070af50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0070af60 { int sub_0070a580(int); };

// @baa 0x0070af60
int sub_0070af60(S_0070af60 *s, int a) { return s->sub_0070a580(a); }

// @baa 0x0070af70
void sub_0070af70(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_0070af90 {
    int sub_0070af90(int);
};

// @baa 0x0070af90
int C_0070af90::sub_0070af90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0070afa0 {
    int sub_0070afa0();
};

// @baa 0x0070afa0
int C_0070afa0::sub_0070afa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0070afc0 {
    int sub_0070afc0();
};

// @baa 0x0070afc0
int C_0070afc0::sub_0070afc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0070afe0 {
    int sub_0070afe0();
};

// @baa 0x0070afe0
int C_0070afe0::sub_0070afe0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0070b860
int UTexture2D::sub_0070b860(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070b960
int UTexture2D::sub_0070b960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070ba60
int UTexture2D::sub_0070ba60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070bce0
int UTexture2D::sub_0070bce0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070bd60
int UTexture2D::sub_0070bd60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070bde0
int UTexture2D::sub_0070bde0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070bdf0
int UTexture2D::sub_0070bdf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x0070be00
int UTexture2D::sub_0070be00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x0070be10
int UTexture2D::sub_0070be10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

int sub_0053df70(...);
// @baa 0x0070be20
void UTexture2D::sub_0070be20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0070be60
void UTexture2D::sub_0070be60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0070bea0
void UTexture2D::sub_0070bea0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0070bee0
int UTexture2D::sub_0070bee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070c030
int UTexture2D::sub_0070c030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0070c190
int UTexture2D::sub_0070c190(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_0070c540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070c540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070c540& operator++();
};

TConstSetBitIterator_0070c540::TConstSetBitIterator_0070c540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070c540
TConstSetBitIterator_0070c540& TConstSetBitIterator_0070c540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070c560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070c560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070c560& operator++();
};

TConstSetBitIterator_0070c560::TConstSetBitIterator_0070c560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070c560
TConstSetBitIterator_0070c560& TConstSetBitIterator_0070c560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070c580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070c580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070c580& operator++();
};

TConstSetBitIterator_0070c580::TConstSetBitIterator_0070c580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070c580
TConstSetBitIterator_0070c580& TConstSetBitIterator_0070c580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070c5a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070c5a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070c5a0& operator++();
};

TConstSetBitIterator_0070c5a0::TConstSetBitIterator_0070c5a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070c5a0
TConstSetBitIterator_0070c5a0& TConstSetBitIterator_0070c5a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070c5f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070c5f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070c5f0& operator++();
};

TConstSetBitIterator_0070c5f0::TConstSetBitIterator_0070c5f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070c5f0
TConstSetBitIterator_0070c5f0& TConstSetBitIterator_0070c5f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070c640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070c640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070c640& operator++();
};

TConstSetBitIterator_0070c640::TConstSetBitIterator_0070c640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070c640
TConstSetBitIterator_0070c640& TConstSetBitIterator_0070c640::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_0070c2e0(int, int);
};

// @baa 0x0070cb70
int UTexture2D::sub_0070cb70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_0070c2e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_0070cc00 {
    int sub_0070c3a0(int, int);
};

// @baa 0x0070cc00
int UTexture2D::sub_0070cc00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0070cc00 *)(this))->sub_0070c3a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_0070cc90 {
    int sub_0070c470(int, int);
};

// @baa 0x0070cc90
int UTexture2D::sub_0070cc90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0070cc90 *)(this))->sub_0070c470((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0070d110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070d110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070d110& operator++();
};

TConstSetBitIterator_0070d110::TConstSetBitIterator_0070d110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070d110
TConstSetBitIterator_0070d110& TConstSetBitIterator_0070d110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070d160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070d160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070d160& operator++();
};

TConstSetBitIterator_0070d160::TConstSetBitIterator_0070d160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070d160
TConstSetBitIterator_0070d160& TConstSetBitIterator_0070d160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0070d1b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0070d1b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0070d1b0& operator++();
};

TConstSetBitIterator_0070d1b0::TConstSetBitIterator_0070d1b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0070d1b0
TConstSetBitIterator_0070d1b0& TConstSetBitIterator_0070d1b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0070db50 {
    undefined4 sub_0070db50(byte);
};

int sub_006f8f20(void);
// @baa 0x0070db50
undefined4 C_0070db50::sub_0070db50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f8f20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0070db70 {
    undefined4 sub_0070db70(byte);
};

int sub_006f8fa0(void);
// @baa 0x0070db70
undefined4 C_0070db70::sub_0070db70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f8fa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0070db90 {
    undefined4 sub_0070db90(byte);
};

int sub_006f9020(void);
// @baa 0x0070db90
undefined4 C_0070db90::sub_0070db90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f9020();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026b1abc[];
struct C_0070e3d0 { void sub_006fa300(int, int); void sub_0070e3d0(int); };

// @baa 0x0070e3d0
void C_0070e3d0::sub_0070e3d0(int a) { sub_006fa300((int)g_026b1abc, a); }

extern char g_026b1e04[];
struct C_0070e3f0 { void sub_006fa300(int, int); void sub_0070e3f0(int); };

// @baa 0x0070e3f0
void C_0070e3f0::sub_0070e3f0(int a) { sub_006fa300((int)g_026b1e04, a); }

extern char g_026b142c[];
struct C_0070e410 { void sub_006fa300(int, int); void sub_0070e410(int); };

// @baa 0x0070e410
void C_0070e410::sub_0070e410(int a) { sub_006fa300((int)g_026b142c, a); }

extern char g_026b1eac[];
struct C_0070e430 { void sub_006fa300(int, int); void sub_0070e430(int); };

// @baa 0x0070e430
void C_0070e430::sub_0070e430(int a) { sub_006fa300((int)g_026b1eac, a); }

extern char g_026b1384[];
struct C_0070e450 { void sub_006fa300(int, int); void sub_0070e450(int); };

// @baa 0x0070e450
void C_0070e450::sub_0070e450(int a) { sub_006fa300((int)g_026b1384, a); }

extern char g_026b20a4[];
struct C_0070e470 { void sub_006fa300(int, int); void sub_0070e470(int); };

// @baa 0x0070e470
void C_0070e470::sub_0070e470(int a) { sub_006fa300((int)g_026b20a4, a); }

struct C_0070ee60 {
    int sub_0070ee60(undefined4);
    int sub_0070e6d0(int);
};

// @baa 0x0070ee60
int C_0070ee60::sub_0070ee60(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0070ee60 *)(this))->sub_0070e6d0(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_0070efb0 {
    int sub_0070efb0(undefined4);
    int sub_0070e790(int);
};

// @baa 0x0070efb0
int C_0070efb0::sub_0070efb0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0070efb0 *)(this))->sub_0070e790(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_0070f100 {
    int sub_0070f100(undefined4);
    int sub_0070e850(int);
};

// @baa 0x0070f100
int C_0070f100::sub_0070f100(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0070f100 *)(this))->sub_0070e850(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct CA { int* sub_0070eae0(); };

struct CB { void sub_0070de50(int a, int b); };

struct CC { void sub_0070a9b0(int a, int b, int c, int d, int e); };

struct V { virtual void vf(int* a, int b); };

// @baa 0x0070f200
void __stdcall sub_0070f200(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB*)(a3 + 0x18))->sub_0070de50(a1, *((CA*)a3)->sub_0070eae0());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC*)(a3 + 0x18))->sub_0070a9b0(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

// @baa 0x00701000
INT __cdecl sub_00701000(INT A, INT B)
{
    return A <= B ? A : B;
}
