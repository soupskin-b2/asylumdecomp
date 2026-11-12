// GFx_19d0000.cpp (part 2 of 2): 96 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_019d0c70(int); void sub_019d0d50(); };

// @baa 0x019d0d50
void C::sub_019d0d50() { sub_019d0c70(0); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019d0c70(int NewNum);
    void sub_019d0e50();
};

void __stdcall sub_018d7170(int A);
// @baa 0x019d0e50
void S018d4a70::sub_019d0e50()
{
    S018d4a70* Self = this;
    sub_019d0c70(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019d12f0 { int a, b, c; C_019d12f0(); };

// @baa 0x019d12f0
C_019d12f0::C_019d12f0() : a(0), b(0), c(0) {}

struct S018d4a70_019d1300 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019d0c70(int NewNum);
    void sub_019d1300();
};

// @baa 0x019d1300
void S018d4a70_019d1300::sub_019d1300()
{
    S018d4a70_019d1300* Self = this;
    sub_019d0c70(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019d15a0 {
    void sub_019d15a0(float);
};

// @baa 0x019d15a0
void C_019d15a0::sub_019d15a0(float f)
{
    *(float *)(this + 0x14) = f;
}

struct C_019d15e0 {
    void sub_019d15e0();
    int sub_01922cb0(int, int, int);
};

// @baa 0x019d15e0
void C_019d15e0::sub_019d15e0(void)
{
    int param_1 = (int)this;
  ((C_019d15e0 *)(this))->sub_01922cb0(*(undefined4 *)(param_1 + 0x14), *(undefined4 *)(param_1 + 0x18), 0);
  return;
}

struct C_019d15f0 {
    void sub_019d15f0();
};

// @baa 0x019d15f0
void C_019d15f0::sub_019d15f0(void)
{
    int param_1 = (int)this;
  *(undefined1 *)(param_1 + 0x35) = 1;
  return;
}

struct C_019d16d0 {
    undefined4 * sub_019d16d0();
};

int sub_018d3d50(void);
extern undefined * g_023fec0c;
// @baa 0x019d16d0
undefined4 * C_019d16d0::sub_019d16d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fec0c);
  return param_1;
}

// @baa 0x019d1840
undefined4 UGFxDataStoreSubscriber::sub_019d1840(void)
{
    int param_1 = (int)this;

  if ((*(int *)(*(int *)(param_1 + 0x10) + 0x6c) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    return 0;
  }
  return 1;
}

struct C_019d1f50 { int a, b, c; C_019d1f50(); };

// @baa 0x019d1f50
C_019d1f50::C_019d1f50() : a(0), b(0), c(0) {}

struct C_019d1fa0 { int a, b, c; C_019d1fa0(); };

// @baa 0x019d1fa0
C_019d1fa0::C_019d1fa0() : a(0), b(0), c(0) {}

struct C_019d2000 { int a, b; C_019d2000(int, int); };

// @baa 0x019d2000
C_019d2000::C_019d2000(int x, int y) : a(x), b(y) {}

void __stdcall sub_018d7150(int Index);
// @baa 0x019d2020
void sub_019d2020(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d2040
void sub_019d2040(int Value)
{
    sub_018d7150(Value * 8);
}

struct C_019d3220 {
    void sub_019d3220();
    int sub_019d2ce0(int, int, int, int);
};

// @baa 0x019d3220
void C_019d3220::sub_019d3220(void)
{
    int param_1 = (int)this;
  ((C_019d3220 *)(this))->sub_019d2ce0(*(undefined4 *)(param_1 + 0x68), *(undefined4 *)(param_1 + 0x6c), *(undefined4 *)(param_1 + 0x60), *(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 100);
  return;
}

// @baa 0x019d35e0
void sub_019d35e0(int Value)
{
    sub_018d7150(Value * 8);
}

// @baa 0x019d3600
void sub_019d3600(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d3620
void sub_019d3620(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d3640
void sub_019d3640(int Value)
{
    sub_018d7150(Value * 4);
}

struct C_019d4240 { int a, b, c; C_019d4240(); };

// @baa 0x019d4240
C_019d4240::C_019d4240() : a(0), b(0), c(0) {}

// @baa 0x019d4270
DWORD __stdcall sub_019d4270(DWORD *param_1)
{
    return param_1[1];
}

struct C_019d4280 { int a, b, c; C_019d4280(); };

// @baa 0x019d4280
C_019d4280::C_019d4280() : a(0), b(0), c(0) {}

// @baa 0x019d42b0
DWORD __stdcall sub_019d42b0(DWORD *param_1)
{
    return param_1[1];
}

struct C_019d4340 {
    undefined4 * sub_019d4340();
};

extern undefined * g_023fec14;
// @baa 0x019d4340
undefined4 * C_019d4340::sub_019d4340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fec14);
  return param_1;
}

struct C_019d45e0 {
    int sub_019d45e0(int);
};

// @baa 0x019d45e0
int C_019d45e0::sub_019d45e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_019d45f0 {
    void sub_019d45f0(uint);
};

// @baa 0x019d45f0
void C_019d45f0::sub_019d45f0(uint param_2)
{
    uint * param_1 = (uint *)this;
  if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return;
}

void __stdcall sub_018d7170(int Obj);
// @baa 0x019d4600
void __cdecl sub_019d4600(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4610
void __cdecl sub_019d4610(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4620
void __cdecl sub_019d4620(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4630
void __cdecl sub_019d4630(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4660
void __cdecl sub_019d4660(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4670
void __cdecl sub_019d4670(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4680
void __cdecl sub_019d4680(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019d4690
void __cdecl sub_019d4690(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_019d46a0 {
    int sub_019d46a0(int);
};

// @baa 0x019d46a0
int C_019d46a0::sub_019d46a0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019d46b0 {
    int sub_019d46b0(int);
};

// @baa 0x019d46b0
int C_019d46b0::sub_019d46b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019d46c0 {
    bool sub_019d46c0();
};

// @baa 0x019d46c0
bool C_019d46c0::sub_019d46c0(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

// @baa 0x019d4700
void sub_019d4700(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d4720
void sub_019d4720(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d4740
void sub_019d4740(int Value)
{
    sub_018d7150(Value * 8);
}

// @baa 0x019d4760
void sub_019d4760(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d4780
void sub_019d4780(int Value)
{
    sub_018d7150(Value * 8);
}

// @baa 0x019d47a0
void sub_019d47a0(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d47c0
void sub_019d47c0(int Value)
{
    sub_018d7150(Value * 8);
}

// @baa 0x019d47e0
void sub_019d47e0(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019d4800
void sub_019d4800(int Value)
{
    sub_018d7150(Value * 4);
}

struct C_019d4820 { int a; C_019d4820(int); };

// @baa 0x019d4820
C_019d4820::C_019d4820(int x) : a(x) {}

struct C_019d4a30 {
    int sub_019d4a30(int param1);
};

// @baa 0x019d4a30
int C_019d4a30::sub_019d4a30(int param1)
{
    return *(int *)((char *)this + 4);
}

struct C_019d4aa0 {
    int vtable_ptr_;
    DWORD field4;
    DWORD sub_019d4aa0(DWORD arg1);
};

// @baa 0x019d4aa0
DWORD C_019d4aa0::sub_019d4aa0(DWORD arg1)
{
    return field4;
}

struct C_019d4ac0 {
    int sub_019d4ac0(int);
};

// @baa 0x019d4ac0
int C_019d4ac0::sub_019d4ac0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019d4ad0 {
    int sub_019d4ad0(int);
};

// @baa 0x019d4ad0
int C_019d4ad0::sub_019d4ad0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019d4ae0 {
    int sub_019d4ae0(int);
};

// @baa 0x019d4ae0
int C_019d4ae0::sub_019d4ae0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_019d5750{
void sub_019d5750(uint,undefined4);
};

// @baa 0x019d5750
void C_019d5750::sub_019d5750(uint param_2,undefined4 param_3)
{
int*param_1=(int*)this;

*(char*)((param_2&0xfff)+*(int*)(*(int*)(*param_1+0xc)+(param_2>>0xc)*4))=
(char)param_3;
*(char*)((param_2+1&0xfff)+*(uint*)(*(int*)(*param_1+0xc)+(param_2+1>>0xc)*4))=
(char)((UBOOL)param_3>>8);
return;
}

struct C_019d6050 {
    void sub_019d6050(undefined4 *);
    int sub_019d5070(int, int, int);
};

// @baa 0x019d6050
void C_019d6050::sub_019d6050(undefined4 * param_2)
{
    int param_1 = (int)this;
  ((C_019d6050 *)((*(char **)((char *)this + 0))))->sub_019d5070(*(undefined4 *)(param_1 + 8), *param_2, param_2[2]);
  return;
}

struct C_019d6070 {
    void sub_019d6070();
    int sub_019d56b0();
    int sub_019d5340();
};

// @baa 0x019d6070
void C_019d6070::sub_019d6070(void)
{
    int param_1 = (int)this;
  ((C_019d6070 *)(((char *)this + 0x10)))->sub_019d56b0();
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  ((C_019d6070 *)(((char *)this + 0x5c)))->sub_019d5340();
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}

struct C_019d60a0 {
    uint sub_019d60a0(uint);
    int sub_019d4f50(int);
};

// @baa 0x019d60a0
uint C_019d60a0::sub_019d60a0(uint param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar2 = 0;
  uVar1 = ((C_019d60a0 *)(this))->sub_019d4f50(param_2);
  if (param_2 < uVar1) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) +
                                      (param_2 >> 0xc) * 4) + (param_2 & 0xfff)) ^ uVar2 * 0x21;
      param_2 = param_2 + 1;
    } while (param_2 < uVar1);
  }
  return uVar2;
}

struct C_019d68f0 {
    void sub_019d68f0(undefined4 *);
    int sub_019d60f0(int, int, int);
};

// @baa 0x019d68f0
void C_019d68f0::sub_019d68f0(undefined4 * param_2)
{
    int param_1 = (int)this;
  ((C_019d68f0 *)((*(char **)((char *)this + 0))))->sub_019d60f0(*(undefined4 *)(param_1 + 8), *param_2, param_2[2]);
  return;
}

struct C_019d9020 {
    void sub_019d9020(undefined4, undefined4, undefined4);
    int sub_019d8c50(int);
    int sub_019d8430(int, int, int);
};

// @baa 0x019d9020
void C_019d9020::sub_019d9020(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_019d9020 *)(this))->sub_019d8c50(param_4);
  ((C_019d9020 *)(this))->sub_019d8430(*(int *)(param_1 + 0x60) + -1, param_2, param_3);
  return;
}

struct C_019d9070 {
    void sub_019d9070();
};

int sub_018d3de0(void);
extern undefined * g_023f8aac;
// @baa 0x019d9070
void C_019d9070::sub_019d9070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f8aac);
  sub_018d3de0();
  return;
}

void sub_019d9140();
// @baa 0x019d91b0
void sub_019d91b0() {
    sub_019d9140();
}

struct C_019d9b00 {
    char pad[0xd];
    BYTE f;
    C_019d9b00 *sub_019d9b00();
};

// @baa 0x019d9b00
C_019d9b00 *C_019d9b00::sub_019d9b00(void)
{
    C_019d9b00 *r = this;
    r->f = 0;
    return r;
}

struct C_019d9c80 {
    void sub_019d9c80();
    int sub_019d9b10();
};

// @baa 0x019d9c80
void C_019d9c80::sub_019d9c80(void)
{
    int param_1 = (int)this;
  ((C_019d9c80 *)(((char *)this + 0x10)))->sub_019d9b10();
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  *(undefined1 *)(param_1 + 0x678) = 0;
  *(undefined2 *)(param_1 + 0x679) = 0;
  *(undefined1 *)(param_1 + 0x67b) = 0;
  return;
}

struct M_019d9e50 { void sub_019d9bd0(); };

struct C_019d9e50 { char pad[16]; M_019d9e50 m; void sub_019d9e50(); };

// @baa 0x019d9e50
void C_019d9e50::sub_019d9e50() { m.sub_019d9bd0(); }

struct C_019d9e60 {
    undefined4 * sub_019d9e60();
};

extern undefined * g_023fec24;
// @baa 0x019d9e60
undefined4 * C_019d9e60::sub_019d9e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fec24);
  return param_1;
}

struct C_019d9f20 { int a, b, c; C_019d9f20(); };

// @baa 0x019d9f20
C_019d9f20::C_019d9f20() : a(0), b(0), c(0) {}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_019d9fb0();
};

// @baa 0x019d9fb0
S *S::sub_019d9fb0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_019da510 {
    void sub_019da290(int param);
    void sub_019da510(int param);
};

// @baa 0x019da510
void S_019da510::sub_019da510(int param)
{
    sub_019da290(param);
}

struct C_019da570 { void sub_019da290(int); void sub_019da570(); };

// @baa 0x019da570
void C_019da570::sub_019da570() { sub_019da290(0); }

struct S018d4a70_019da5e0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019da290(int NewNum);
    void sub_019da5e0();
};

// @baa 0x019da5e0
void S018d4a70_019da5e0::sub_019da5e0()
{
    S018d4a70_019da5e0* Self = this;
    sub_019da290(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019da850 { int a, b, c; C_019da850(); };

// @baa 0x019da850
C_019da850::C_019da850() : a(0), b(0), c(0) {}

struct S018d4a70_019da860 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019da290(int NewNum);
    void sub_019da860();
};

// @baa 0x019da860
void S018d4a70_019da860::sub_019da860()
{
    S018d4a70_019da860* Self = this;
    sub_019da290(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct A_019db220 { virtual void sub_019db230(); char pad[12]; };

struct B_019db220 { virtual void sub_019db230(); };

struct C_019db220 : A_019db220, B_019db220 { virtual void sub_019db230(); C_019db220(); };

C_019db220::C_019db220() {}

// @baa 0x019db220
void C_019db220::sub_019db230() {}

struct C_019dbec0 {
    undefined4 * sub_019dbec0(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_023fee94;
extern undefined4 g_023feeec;
// @baa 0x019dbec0
undefined4 * C_019dbec0::sub_019dbec0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019dbec0 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_023feeec));
  param_1[4] = (undefined4)((&g_023fee94));
  ((C_019dbec0 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019dbef0 { virtual void sub_019dc520(); char pad[12]; };

struct B_019dbef0 { virtual void sub_019dc520(); };

struct C_019dbef0 : A_019dbef0, B_019dbef0 { virtual void sub_019dc520(); C_019dbef0(); };

C_019dbef0::C_019dbef0() {}

// @baa 0x019dbef0
void C_019dbef0::sub_019dc520() {}

struct C_019dbf50 {
    undefined4 * sub_019dbf50(undefined4);
    int sub_019924d0(int);
    int sub_019db100(int);
};

// @baa 0x019dbf50
undefined4 * C_019dbf50::sub_019dbf50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019dbf50 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_023feeec));
  param_1[4] = (undefined4)((&g_023fee94));
  ((C_019dbf50 *)(this))->sub_019db100(param_2);
  return param_1;
}

struct A_019dc0c0 { virtual void sub_019dc500(); char pad[12]; };

struct B_019dc0c0 { virtual void sub_019dc500(); };

struct C_019dc0c0 : A_019dc0c0, B_019dc0c0 { virtual void sub_019dc500(); C_019dc0c0(); };

C_019dc0c0::C_019dc0c0() {}

// @baa 0x019dc0c0
void C_019dc0c0::sub_019dc500() {}

struct A_019dc5c0 { virtual void sub_019dc740(); char pad[12]; };

struct B_019dc5c0 { virtual void sub_019dc740(); };

struct C_019dc5c0 : A_019dc5c0, B_019dc5c0 { virtual void sub_019dc740(); C_019dc5c0(); };

C_019dc5c0::C_019dc5c0() {}

// @baa 0x019dc5c0
void C_019dc5c0::sub_019dc740() {}

void sub_01973ce0();
// @baa 0x019dd2a0
void sub_019dd2a0(void)
{
    sub_01973ce0();
}

struct A_019dd2b0 { virtual void sub_019dd2c0(); char pad[12]; };

struct B_019dd2b0 { virtual void sub_019dd2c0(); };

struct C_019dd2b0 : A_019dd2b0, B_019dd2b0 { virtual void sub_019dd2c0(); C_019dd2b0(); };

C_019dd2b0::C_019dd2b0() {}

// @baa 0x019dd2b0
void C_019dd2b0::sub_019dd2c0() {}

struct A_019dd930 { virtual void sub_019de0c0(); char pad[12]; };

struct B_019dd930 { virtual void sub_019de0c0(); };

struct C_019dd930 : A_019dd930, B_019dd930 { virtual void sub_019de0c0(); C_019dd930(); };

C_019dd930::C_019dd930() {}

// @baa 0x019dd930
void C_019dd930::sub_019de0c0() {}

struct A_019ddc60 { virtual void sub_019de0a0(); char pad[12]; };

struct B_019ddc60 { virtual void sub_019de0a0(); };

struct C_019ddc60 : A_019ddc60, B_019ddc60 { virtual void sub_019de0a0(); C_019ddc60(); };

C_019ddc60::C_019ddc60() {}

// @baa 0x019ddc60
void C_019ddc60::sub_019de0a0() {}

struct A_019de1d0 { virtual void sub_019de350(); char pad[12]; };

struct B_019de1d0 { virtual void sub_019de350(); };

struct C_019de1d0 : A_019de1d0, B_019de1d0 { virtual void sub_019de350(); C_019de1d0(); };

C_019de1d0::C_019de1d0() {}

// @baa 0x019de1d0
void C_019de1d0::sub_019de350() {}

struct A_019de810 { virtual void sub_019de840(); char pad[12]; };

struct B_019de810 { virtual void sub_019de840(); };

struct C_019de810 : A_019de810, B_019de810 { virtual void sub_019de840(); C_019de810(); };

C_019de810::C_019de810() {}

// @baa 0x019de810
void C_019de810::sub_019de840() {}

struct C_019df200 {
    undefined4 * sub_019df200(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_023ff4a4;
extern undefined4 g_023ff4fc;
// @baa 0x019df200
undefined4 * C_019df200::sub_019df200(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019df200 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_023ff4fc));
  param_1[4] = (undefined4)((&g_023ff4a4));
  ((C_019df200 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019df240 { virtual void sub_019df8a0(); char pad[12]; };

struct B_019df240 { virtual void sub_019df8a0(); };

struct C_019df240 : A_019df240, B_019df240 { virtual void sub_019df8a0(); C_019df240(); };

C_019df240::C_019df240() {}

// @baa 0x019df240
void C_019df240::sub_019df8a0() {}

struct A_019df440 { virtual void sub_019df880(); char pad[12]; };

struct B_019df440 { virtual void sub_019df880(); };

struct C_019df440 : A_019df440, B_019df440 { virtual void sub_019df880(); C_019df440(); };

C_019df440::C_019df440() {}

// @baa 0x019df440
void C_019df440::sub_019df880() {}

struct A_019df940 { virtual void sub_019dfac0(); char pad[12]; };

struct B_019df940 { virtual void sub_019dfac0(); };

struct C_019df940 : A_019df940, B_019df940 { virtual void sub_019dfac0(); C_019df940(); };

C_019df940::C_019df940() {}

// @baa 0x019df940
void C_019df940::sub_019dfac0() {}

typedef INT (__stdcall *FnType)(INT);

struct C_019da990
{
    FnType Fn;

    INT sub_019da990(INT A);
};

// @baa 0x019da990
INT C_019da990::sub_019da990(INT A)
{
    if (Fn)
        return Fn(A);
    return 0;
}

extern double g_01e729a8;
struct C_019dca80
{
    char pad_00[0x30];
    double First;
    double Second;

    void sub_019dca80();
};

// @baa 0x019dca80
void C_019dca80::sub_019dca80()
{
    double Value = g_01e729a8;
    First = Value;
    Second = Value;
}

struct C_019ddc40 {
    int sub_019729b0(int a, int b);
    int sub_019ddc40(int Arg);
};

// @baa 0x019ddc40
int C_019ddc40::sub_019ddc40(int Arg)
{
    ((C_019ddc40*)Arg)->sub_019729b0((int)((char*)this + 0x40), 0);
    return Arg;
}

class C_019df420
{
public:
	C_019df420* sub_019df420(C_019df420* Other);
	int sub_019729b0(int Arg0, int Arg1);

private:
	char pad[0x30];
	int Member_0x30;
};

// @baa 0x019df420
C_019df420* C_019df420::sub_019df420(C_019df420* Other)
{
	Other->sub_019729b0((int)&Member_0x30, 0);
	return Other;
}

struct GFx_019dc0a0
{
	void sub_019729b0(void* A, int B);
	INT sub_019dc0a0(GFx_019dc0a0* Obj);
};

// @baa 0x019dc0a0
INT GFx_019dc0a0::sub_019dc0a0(GFx_019dc0a0* Obj)
{
	Obj->sub_019729b0((void*)((char*)this + 0x30), 0);
	return (INT)Obj;
}

struct Sub_019d1910 {
    char flags[0x40];
};

struct Holder_019d1860 {
    int a, b, c, d;
    Sub_019d1910* p;
    void sub_019d1860(char bFlag);
};

// @baa 0x019d1860
void Holder_019d1860::sub_019d1860(char bFlag)
{
    if (bFlag != 0)
        p->flags[0x2c] |= 8;
    else
        p->flags[0x2c] &= 0xf7;
}

void __stdcall sub_018d7150(INT Value);
// @baa 0x019d2060
void sub_019d2060(INT Value)
{
    sub_018d7150(Value << 4);
}

typedef INT (__stdcall *FnType_019da9a0)(INT, INT);

struct C_019da9a0
{
    char pad_00[0x4];
    FnType_019da9a0 Fn;

    INT sub_019da9a0(INT A, INT B);
};

// @baa 0x019da9a0
INT C_019da9a0::sub_019da9a0(INT A, INT B)
{
    if (Fn)
        return Fn(A, B);
    return 0;
}

typedef INT (__stdcall *FnType_019da9b0)(INT, INT, INT, INT);

struct C_019da9b0
{
    char pad_00[0xc];
    FnType_019da9b0 Fn;

    INT sub_019da9b0(INT A, INT B, INT C_019da9b0, INT D);
};

// @baa 0x019da9b0
INT C_019da9b0::sub_019da9b0(INT A, INT B, INT C_019da9b0, INT D)
{
    if (Fn)
        return Fn(A, B, C_019da9b0, D);
    return 0;
}
