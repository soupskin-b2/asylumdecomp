// Editor_0f90000.cpp: 78 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_00f8ebd0(int, int);
};

// @baa 0x00f91900
int UState::sub_00f91900(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00f8ebd0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00f8eb10(int, int);
};

struct C {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00f91930(void);
};

// @baa 0x00f91930
void C::sub_00f91930(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00f8eb10(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

int sub_00f88d40(void);
// @baa 0x00f91ce0
int UState::sub_00f91ce0(void)
{
    int param_1 = (int)this;

  sub_00f88d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88da0(void);
// @baa 0x00f91d00
int UState::sub_00f91d00(void)
{
    int param_1 = (int)this;

  sub_00f88da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88e00(void);
// @baa 0x00f91d20
int UState::sub_00f91d20(void)
{
    int param_1 = (int)this;

  sub_00f88e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f8fc30();
// @baa 0x00f91d40
void sub_00f91d40(void) { sub_00f8fc30(); }

int sub_00f88e60(void);
// @baa 0x00f91d50
int UState::sub_00f91d50(void)
{
    int param_1 = (int)this;

  sub_00f88e60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88ec0(void);
// @baa 0x00f91d70
int UState::sub_00f91d70(void)
{
    int param_1 = (int)this;

  sub_00f88ec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f8f470(void);
// @baa 0x00f94210
void sub_00f94210(void) {
    sub_00f8f470();
}

void sub_00f8f4e0();
// @baa 0x00f94220
void sub_00f94220(void) { sub_00f8f4e0(); }

void sub_00f8f550();
// @baa 0x00f94230
void sub_00f94230(void) { sub_00f8f550(); }

void sub_00f8f5c0();
// @baa 0x00f94240
void sub_00f94240(void) { sub_00f8f5c0(); }

void sub_00f8f630();
// @baa 0x00f94250
void sub_00f94250(void) { sub_00f8f630(); }

// @baa 0x00f94540
int UState::sub_00f94540(void)
{
    int param_1 = (int)this;

  sub_00f88d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f94560
int UState::sub_00f94560(void)
{
    int param_1 = (int)this;

  sub_00f88da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f94580
int UState::sub_00f94580(void)
{
    int param_1 = (int)this;

  sub_00f88e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f8f470();
// @baa 0x00f95360
void sub_00f95360(void) { sub_00f8f470(); }

// @baa 0x00f96190
void sub_00f96190(void) { sub_00f8f4e0(); }

// @baa 0x00f961a0
void sub_00f961a0(void) { sub_00f8f550(); }

// @baa 0x00f961b0
void sub_00f961b0(void) { sub_00f8f5c0(); }

// @baa 0x00f961c0
void sub_00f961c0(void) { sub_00f8f630(); }

struct C_00f9c390 { void sub_00f91d90(int); C_00f9c390 *sub_00f9c390(int); };

// @baa 0x00f9c390
C_00f9c390 *C_00f9c390::sub_00f9c390(int a) { sub_00f91d90(a); return this; }

int sub_005e1960(...);
int sub_00f77440(void);
int sub_00f9d320(...);
extern undefined4 g_026667a8;
extern undefined4 g_026cdad8;
// @baa 0x00f9d880
void sub_00f9d880(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cdad8 == 0) {
    g_026cdad8 = sub_00f9d320(L"Editor");
    sub_00f77440();
  }
  sub_005e1960(g_026cdad8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f9d920
int __stdcall sub_00f9d920(int a0, int a1) { return 1; }

// @baa 0x00f9d940
int __stdcall sub_00f9d940(int a0, int a1, int a2, int a3) { return 1; }

// @baa 0x00f9d950
void __stdcall sub_00f9d950(int a0, int a1) {  }

// @baa 0x00f9d960
int __stdcall sub_00f9d960(int a0, int a1) { return 0; }

extern char g_02177260[];
struct C_00f9d980 { void sub_00f9d980(void); };

// @baa 0x00f9d980
void C_00f9d980::sub_00f9d980(void) { *(int*)((char*)this + 0) = (int)g_02177260; }

struct C_00f9d9c0 {
    undefined4 sub_00f9d9c0(int);
};

// @baa 0x00f9d9c0
undefined4 C_00f9d9c0::sub_00f9d9c0(int param_2)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) ||
      (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) &&
     ((*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x38) ||
      (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x34))))) {
    return 0;
  }
  return 1;
}

struct C_00f9da00 {
    undefined4 sub_00f9da00();
};

// @baa 0x00f9da00
undefined4 C_00f9da00::sub_00f9da00(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return *(undefined4 *)(param_1 + 100);
}

extern char g_026cdbd4[];
// @baa 0x00f9da10
int sub_00f9da10(void) { return (int)g_026cdbd4; }

extern char g_025e7d40[];
// @baa 0x00f9da20
int sub_00f9da20(void) { return (int)g_025e7d40; }

extern char g_026cdbec[];
// @baa 0x00f9da30
int sub_00f9da30(void) { return (int)g_026cdbec; }

struct S {
    void sub_011c2050();
};

struct C_00f9da60 {
    char _pad[0x1b8];
    S* field_1b8;
    void sub_00f9da60();
};

// @baa 0x00f9da60
void C_00f9da60::sub_00f9da60()
{
    field_1b8->sub_011c2050();
}

struct C_00f9da70 { char* sub_00f9da70(void); };

// @baa 0x00f9da70
char* C_00f9da70::sub_00f9da70(void) { return (char*)this + 48; }

// @baa 0x00f9dc20
int sub_00f9dc20(int a0, int a1) { return a1; }

struct C_view_00f9dc80 {
    int sub_005859a0(int);
};

extern undefined * g_01f86ac0;
// @baa 0x00f9dc80
undefined4 * UTexture2D::sub_00f9dc80(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00f9dc80 *)(this))->sub_005859a0(param_2);
  *param_1 = (undefined4)(&g_01f86ac0);
  return param_1;
}

extern char g_01f3dfb4[];
struct C_00f9dca0 { C_00f9dca0* sub_00f9dca0(int a0); };

// @baa 0x00f9dca0
C_00f9dca0* C_00f9dca0::sub_00f9dca0(int a0) { *(int*)((char*)this + 0) = (int)g_01f3dfb4; return this; }

int sub_0062d6c0(...);
// @baa 0x00f9dcb0
undefined4 sub_00f9dcb0(undefined4 * param_1, undefined4 param_2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = sub_0062d6c0(param_1,L"BEGIN");
  if (iVar2 != 0) {
    iVar2 = sub_0062d6c0(param_1,param_2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  *param_1 = uVar1;
  return 0;
}

extern undefined4 g_02164fac;
// @baa 0x00f9dcf0
undefined4 sub_00f9dcf0(undefined4 * param_1, undefined4 param_2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = sub_0062d6c0(param_1,&g_02164fac);
  if (iVar2 != 0) {
    iVar2 = sub_0062d6c0(param_1,param_2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  *param_1 = uVar1;
  return 0;
}

// @baa 0x00f9dd30
int UTexture2D::sub_00f9dd30(void) { return *(int*)((char*)this + 0); }

// @baa 0x00f9f0b0
undefined2 sub_00f9f0b0(void)
{
  return 0x73;
}

struct C_00f9f0c0 { C_00f9f0c0* sub_00f9f0c0(void); };

// @baa 0x00f9f0c0
C_00f9f0c0* C_00f9f0c0::sub_00f9f0c0(void) { return this; }

// @baa 0x00f9f0d0
int sub_00f9f0d0(int a0, int a1) { return a1; }

// @baa 0x00f9f0e0
int sub_00f9f0e0(int a0, int a1) { return a1; }

// @baa 0x00f9f0f0
int sub_00f9f0f0(int a0, int a1) { return a1; }

// @baa 0x00f9f100
int sub_00f9f100(int a0, int a1) { return a1; }

// @baa 0x00f9f110
int sub_00f9f110(int a0, int a1) { return a1; }

// @baa 0x00f9f120
int sub_00f9f120(int a0, int a1) { return a1; }

// @baa 0x00f9f130
int sub_00f9f130(int a0, int a1) { return a1; }

// @baa 0x00f9f140
int sub_00f9f140(int a0, int a1) { return a1; }

// @baa 0x00f9f150
int sub_00f9f150(int a0, int a1) { return a1; }

// @baa 0x00f9f160
int sub_00f9f160(int a0, int a1) { return a1; }

// @baa 0x00f9f170
int sub_00f9f170(int a0, int a1) { return a1; }

// @baa 0x00f9f180
int sub_00f9f180(int a0, int a1) { return a1; }

struct C_00f9f190 { void sub_00f9f190(int a0); };

// @baa 0x00f9f190
void C_00f9f190::sub_00f9f190(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_00f9f1a0 { int sub_00f9f1a0(void); };

// @baa 0x00f9f1a0
int C_00f9f1a0::sub_00f9f1a0(void) { return *(int*)((char*)this + 72); }

struct C_00f9f1b0 { int sub_00f9f1b0(void); };

// @baa 0x00f9f1b0
int C_00f9f1b0::sub_00f9f1b0(void) { return *(int*)((char*)this + 36); }

// @baa 0x00f9f1e0
int sub_00f9f1e0(void) { return 0; }

struct C_00f9f1f0 { int sub_00f9f1f0(void); };

// @baa 0x00f9f1f0
int C_00f9f1f0::sub_00f9f1f0(void) { return *(int*)((char*)this + 4); }

struct C_00f9f200 {
    void sub_00f9f200(undefined4 *);
};

// @baa 0x00f9f200
void C_00f9f200::sub_00f9f200(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  return;
}

struct C_00f9f220 {
    void sub_00f9f220(undefined4 *);
};

// @baa 0x00f9f220
void C_00f9f220::sub_00f9f220(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  return;
}

struct C_00f9f250 { int a, b; C_00f9f250(int, int); };

// @baa 0x00f9f250
C_00f9f250::C_00f9f250(int x, int y) : a(x), b(y) {}

struct C_00f9f270 {
    undefined4 sub_00f9f270(int *);
};

// @baa 0x00f9f270
undefined4 C_00f9f270::sub_00f9f270(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    return 1;
  }
  return 0;
}

struct C_00f9f290 { void sub_00f9f290(void); };

// @baa 0x00f9f290
void C_00f9f290::sub_00f9f290(void) { *(int*)((char*)this + 60) = 1; }

struct C_00f9f2a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00f9f2a0* sub_00f9f2a0(INT value);
};

// @baa 0x00f9f2a0
C_00f9f2a0* C_00f9f2a0::sub_00f9f2a0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00f9f2c0 { int a, b, c; C_00f9f2c0(); };

// @baa 0x00f9f2c0
C_00f9f2c0::C_00f9f2c0() : a(0), b(0), c(0) {}

struct C_00f9f2d0 { int a, b, c; C_00f9f2d0(); };

// @baa 0x00f9f2d0
C_00f9f2d0::C_00f9f2d0() : a(0), b(0), c(0) {}

struct C_00f9f2e0 { int sub_00f9f2e0(void); };

// @baa 0x00f9f2e0
int C_00f9f2e0::sub_00f9f2e0(void) { return *(int*)((char*)this + 0); }

struct C_00f9f2f0 { int sub_00f9f2f0(void); };

// @baa 0x00f9f2f0
int C_00f9f2f0::sub_00f9f2f0(void) { return *(int*)((char*)this + 0); }

struct C_00f9f300 { int sub_00f9f300(void); };

// @baa 0x00f9f300
int C_00f9f300::sub_00f9f300(void) { return *(int*)((char*)this + 0); }

struct C_00f9f310 { int sub_00f9f310(void); };

// @baa 0x00f9f310
int C_00f9f310::sub_00f9f310(void) { return *(int*)((char*)this + 0); }

struct C_00f9f320 { int sub_00f9f320(void); };

// @baa 0x00f9f320
int C_00f9f320::sub_00f9f320(void) { return *(int*)((char*)this + 20); }

struct C_00f9f330 {
    int sub_00f9f330(int);
};

// @baa 0x00f9f330
int C_00f9f330::sub_00f9f330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f9f340 {
    undefined4 * sub_00f9f340(byte);
};

int sub_0053dfa0(...);
// @baa 0x00f9f340
undefined4 * C_00f9f340::sub_00f9f340(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02177260);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f9f720
IMPLEMENT_CLASS_AT(USkeletalMeshFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnMeshEd.cpp", 1044);

struct C_00f9fd40 {
    undefined4 sub_00f9fd40(byte);
};

int sub_00fb09d0(void);
// @baa 0x00f9fd40
undefined4 C_00f9fd40::sub_00f9fd40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fb09d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f9f1c0
void __stdcall sub_00f9f1c0(void* V)
{
	float* F = (float*)V;
	F[0] = 0.0f;
	F[1] = 0.0f;
	F[2] = 0.0f;
}
