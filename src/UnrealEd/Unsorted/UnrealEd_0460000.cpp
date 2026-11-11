// UnrealEd_0460000.cpp (part 1 of 2): 150 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C {
    undefined4 sub_00461370(byte);
};

int sub_0053dfa0(...);
int sub_01ab58f0(void);
// @baa 0x00461370
undefined4 C::sub_00461370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00461390 {
    undefined4 sub_00461390(byte);
};

int sub_0045dc50(void);
// @baa 0x00461390
undefined4 C_00461390::sub_00461390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0045dc50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004613b0 {
    undefined4 sub_004613b0(byte);
};

int sub_0045e860(void);
// @baa 0x004613b0
undefined4 C_004613b0::sub_004613b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0045e860();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00461470 {
    undefined4 sub_00461470();
};

// @baa 0x00461470
undefined4 C_00461470::sub_00461470(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_004614d0 {
    int *f;
    C_004614d0 *sub_004614d0();
};

// @baa 0x004614d0
C_004614d0 *C_004614d0::sub_004614d0()
{
    f = (int*)f[2];
    return this;
}

struct C_004614e0 { int sub_004614e0(void); };

// @baa 0x004614e0
int C_004614e0::sub_004614e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00461510
void sub_00461510(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x00461540
void sub_00461540(void) {  }

// @baa 0x00461550
void sub_00461550(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_00461830 { int a; C_00461830(int); };

// @baa 0x00461830
C_00461830::C_00461830(int x) : a(x) {}

struct C_004624a0 {
    undefined4 sub_004624a0();
};

// @baa 0x004624a0
undefined4 C_004624a0::sub_004624a0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b0) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc);
  }
  return 0;
}

struct C_004624c0 {
    undefined4 sub_004624c0();
};

// @baa 0x004624c0
undefined4 C_004624c0::sub_004624c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0xc);
  }
  return 0;
}

struct C_00462520 {
    undefined4 * sub_00462520(byte);
};

extern undefined4 g_01e52cb0;
// @baa 0x00462520
undefined4 * C_00462520::sub_00462520(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e52cb0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_0266385c;
int sub_0045f620();
// @baa 0x00462540
int sub_00462540() { if (!g_0266385c) g_0266385c = sub_0045f620(); return g_0266385c; }

struct C_004627e0 { int sub_004627e0(void); };

// @baa 0x004627e0
int C_004627e0::sub_004627e0(void) { return *(int*)((char*)this + 20); }

struct C_004627f0 {
    int sub_004627f0(int);
};

// @baa 0x004627f0
int C_004627f0::sub_004627f0(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0xc) + param_2 * 0x14;
}

struct C_00462800 {
    int sub_00462800(int);
};

// @baa 0x00462800
int C_00462800::sub_00462800(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0xc) + param_2 * 0x14;
}

struct C_004628a0 {
    undefined4 * sub_004628a0(byte);
};

extern undefined4 g_01e52cbc;
// @baa 0x004628a0
undefined4 * C_004628a0::sub_004628a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e52cbc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004628d0 {
    float10 sub_004628d0();
};

// @baa 0x004628d0
float10 C_004628d0::sub_004628d0(void)
{
    float * param_1 = (float *)this;
  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1];
}

extern undefined4 g_026638dc;
// @baa 0x004628e0
undefined4 sub_004628e0(void)
{
  return g_026638dc;
}

extern undefined4 g_026638d4;
// @baa 0x004628f0
undefined4 sub_004628f0(int param_1)
{
  return *(undefined4 *)(g_026638d4 + param_1 * 4);
}

struct C_00462da0 {
    undefined4 sub_00462da0(byte);
};

// @baa 0x00462da0
undefined4 C_00462da0::sub_00462da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00462dc0 {
    undefined4 sub_00462dc0(byte);
};

// @baa 0x00462dc0
undefined4 C_00462dc0::sub_00462dc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00462f60 {
    undefined4 * sub_00462f60(int);
};

extern undefined4 g_027be4bc;
// @baa 0x00462f60
undefined4 * C_00462f60::sub_00462f60(int param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_2 != -1)) {
    return (undefined4 *)(*(int *)(*param_1 + 0xc) + 4 + param_2 * 0x20);
  }
  return &g_027be4bc;
}

struct C_00463000 {
    int sub_00463000(int);
};

// @baa 0x00463000
int C_00463000::sub_00463000(int param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return param_2 * 0x20 + *(int *)(*param_1 + 0xc);
  }
  return 0;
}

struct C_00463020 {
    undefined4 sub_00463020();
};

// @baa 0x00463020
undefined4 C_00463020::sub_00463020(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x14);
  }
  return 0;
}

struct C_00463190 {
    undefined4 sub_00463190(int);
};

// @baa 0x00463190
undefined4 C_00463190::sub_00463190(int param_2)
{
    int * param_1 = (int *)this;
  if (((*param_1 != 0) && (param_1[1] != 0)) && (param_2 != -1)) {
    return *(undefined4 *)(*(int *)(*param_1 + 0xc) + 0x14 + param_2 * 0x20);
  }
  return 0;
}

struct C_00463950 { int sub_00463950(void); };

// @baa 0x00463950
int C_00463950::sub_00463950(void) { return *(int*)((char*)this + 12); }

extern undefined4 g_026638d0;
// @baa 0x00463960
undefined4 sub_00463960(void)
{
  return g_026638d0;
}

struct C_00463b60 {
    undefined4 sub_00463b60(byte);
};

int sub_0045d920(void);
int sub_01ab3290(...);
// @baa 0x00463b60
undefined4 C_00463b60::sub_00463b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0045d920();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x70);
  }
  return param_1;
}

extern undefined4 g_02663944;
// @baa 0x00463b80
undefined4 sub_00463b80(void)
{
  return g_02663944;
}

extern undefined4 g_0266393c;
// @baa 0x00463c00
int sub_00463c00(int param_1)
{
  return param_1 * 0x70 + g_0266393c;
}

extern undefined4 g_026639a0;
// @baa 0x00463c10
undefined4 sub_00463c10(void)
{
  return g_026639a0;
}

extern undefined4 g_02663998;
// @baa 0x00463c20
int sub_00463c20(int param_1)
{
  return param_1 * 0xe8 + 0x10 + g_02663998;
}

extern undefined4 g_02663950;
// @baa 0x00463c40
undefined4 sub_00463c40(void)
{
  return g_02663950;
}

extern undefined4 g_02663948;
// @baa 0x00463c50
int sub_00463c50(int param_1)
{
  return param_1 * 0x54 + 0x10 + g_02663948;
}

struct C_00463f00 { int sub_00463f00(void); };

// @baa 0x00463f00
int C_00463f00::sub_00463f00(void) { return *(int*)((char*)this + 16); }

struct C_00463f10 {
    int sub_00463f10(int);
};

// @baa 0x00463f10
int C_00463f10::sub_00463f10(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

extern undefined4 g_02663b50;
// @baa 0x00463f80
undefined4 sub_00463f80(void)
{
  return g_02663b50;
}

extern undefined4 g_02663b48;
// @baa 0x00464000
int sub_00464000(int param_1)
{
  return g_02663b48 + param_1 * 0x14;
}

struct C_00464020 { int sub_00464020(void); };

// @baa 0x00464020
int C_00464020::sub_00464020(void) { return *(int*)((char*)this + 12); }

struct C_00464030 {
    undefined4 sub_00464030(int);
};

// @baa 0x00464030
undefined4 C_00464030::sub_00464030(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 4));
}

struct C_00464040 {
    float10 sub_00464040(int);
};

// @baa 0x00464040
float10 C_00464040::sub_00464040(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_2 * 0x10 + 4 + *(int *)(param_1 + 4));
}

struct C_00464060 {
    float10 sub_00464060(int);
};

// @baa 0x00464060
float10 C_00464060::sub_00464060(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_2 * 0x10 + 8 + *(int *)(param_1 + 4));
}

struct C_00464080 {
    float10 sub_00464080(int);
};

// @baa 0x00464080
float10 C_00464080::sub_00464080(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_2 * 0x10 + 8 + *(int *)(param_1 + 4)) -
         (float10)*(float *)(param_2 * 0x10 + *(int *)(param_1 + 4) + 4);
}

struct C_00464110 {
    void sub_00464110(int, undefined1);
};

// @baa 0x00464110
void C_00464110::sub_00464110(int param_2, undefined1 param_3)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_2 * 0x10 + 0xc + *(int *)(param_1 + 4)) = param_3;
  return;
}

struct C_00464130 {
    void sub_00464130(int, undefined4);
};

// @baa 0x00464130
void C_00464130::sub_00464130(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 4)) = param_3;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}

struct C_004645f0 { int sub_004645f0(void); };

// @baa 0x004645f0
int C_004645f0::sub_004645f0(void) { return *(int*)((char*)this + 24); }

struct C_00464650 {
    float10 sub_00464650(int);
};

// @baa 0x00464650
float10 C_00464650::sub_00464650(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x10) + 4 + param_2 * 0xc) * 0x10 + 4 +
                            *(int *)(param_1 + 4));
}

struct C_00464670 {
    float10 sub_00464670(int);
};

// @baa 0x00464670
float10 C_00464670::sub_00464670(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x10) + 8 + param_2 * 0xc) * 0x10 + 8 +
                            *(int *)(param_1 + 4));
}

struct C_00464690 {
    float10 sub_00464690(int);
};

// @baa 0x00464690
float10 C_00464690::sub_00464690(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + param_2 * 0xc;
  return (float10)*(float *)(*(int *)(iVar1 + 8) * 0x10 + 8 + *(int *)(param_1 + 4)) -
         (float10)*(float *)(*(int *)(iVar1 + 4) * 0x10 + 4 + *(int *)(param_1 + 4));
}

struct C_00464700 {
    undefined4 sub_00464700(int);
};

// @baa 0x00464700
undefined4 C_00464700::sub_00464700(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 4 + param_2 * 0xc);
}

struct C_00464720 {
    undefined4 sub_00464720(int);
};

// @baa 0x00464720
undefined4 C_00464720::sub_00464720(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8 + param_2 * 0xc);
}

struct C_00464790 {
    void sub_00464790(int, int, undefined4);
    int sub_00464740(int, int);
};

// @baa 0x00464790
void C_00464790::sub_00464790(int param_2, int param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_3;
  if (param_2 != -1) {
    ((C_00464790 *)(this))->sub_00464740(param_2, param_4);
    return;
  }
  if (param_3 != -1) {
    *(undefined1 *)(param_3 * 0x10 + 0xc + *(int *)(param_1 + 4)) = (undefined1)param_4;
  }
  return;
}

struct C_00464ab0 {
    undefined4 sub_00464ab0(byte);
};

int sub_0045edb0(void);
// @baa 0x00464ab0
undefined4 C_00464ab0::sub_00464ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0045edb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00464f70 {
    undefined4 * sub_00464f70(byte);
};

int sub_0048b010(void);
extern undefined * g_01e52d94;
// @baa 0x00464f70
undefined4 * C_00464f70::sub_00464f70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e52d94);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00464fa0(INT Index);
};

// @baa 0x00464fa0
DWORD* S::sub_00464fa0(INT Index)
{
    return &Items(Index);
}

struct S_00464ff0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00464ff0(INT Index);
};

// @baa 0x00464ff0
DWORD* S_00464ff0::sub_00464ff0(INT Index)
{
    return &Items(Index);
}

struct S_00465040 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00465040(INT Index);
};

// @baa 0x00465040
DWORD* S_00465040::sub_00465040(INT Index)
{
    return &Items(Index);
}

struct S_00465110 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00465110(INT Index) const;
};

// @baa 0x00465110
const DWORD* S_00465110::sub_00465110(INT Index) const
{
    return &Items(Index);
}

struct C_00465160{
int sub_00465160(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00465160
int C_00465160::sub_00465160(undefined4*param_2)
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

// @baa 0x004651c0
void __stdcall sub_004651c0(int a0, int a1) {  }

// @baa 0x004653f0
void sub_004653f0(void) {  }

// @baa 0x00465400
void sub_00465400(void) {  }

// @baa 0x00465410
void sub_00465410(void) {  }

// @baa 0x00465420
void sub_00465420(void) {  }

// @baa 0x00465430
void sub_00465430(void) {  }

// @baa 0x00465440
void sub_00465440(void) {  }

// @baa 0x004654e0
void sub_004654e0(void) {  }

// @baa 0x004654f0
void sub_004654f0(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465500(volatile FFaceData *Other);
};

// @baa 0x00465500
void FFaceData::sub_00465500(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465530 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465530(volatile FFaceData_00465530 *Other);
};

// @baa 0x00465530
void FFaceData_00465530::sub_00465530(volatile FFaceData_00465530 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465560 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465560(volatile FFaceData_00465560 *Other);
};

// @baa 0x00465560
void FFaceData_00465560::sub_00465560(volatile FFaceData_00465560 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465590 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465590(volatile FFaceData_00465590 *Other);
};

// @baa 0x00465590
void FFaceData_00465590::sub_00465590(volatile FFaceData_00465590 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004655c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004655c0(volatile FFaceData_004655c0 *Other);
};

// @baa 0x004655c0
void FFaceData_004655c0::sub_004655c0(volatile FFaceData_004655c0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004655f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004655f0(volatile FFaceData_004655f0 *Other);
};

// @baa 0x004655f0
void FFaceData_004655f0::sub_004655f0(volatile FFaceData_004655f0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465620 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465620(volatile FFaceData_00465620 *Other);
};

// @baa 0x00465620
void FFaceData_00465620::sub_00465620(volatile FFaceData_00465620 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465650 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465650(volatile FFaceData_00465650 *Other);
};

// @baa 0x00465650
void FFaceData_00465650::sub_00465650(volatile FFaceData_00465650 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465680 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465680(volatile FFaceData_00465680 *Other);
};

// @baa 0x00465680
void FFaceData_00465680::sub_00465680(volatile FFaceData_00465680 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004656b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004656b0(volatile FFaceData_004656b0 *Other);
};

// @baa 0x004656b0
void FFaceData_004656b0::sub_004656b0(volatile FFaceData_004656b0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004656e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004656e0(volatile FFaceData_004656e0 *Other);
};

// @baa 0x004656e0
void FFaceData_004656e0::sub_004656e0(volatile FFaceData_004656e0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465710 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465710(volatile FFaceData_00465710 *Other);
};

// @baa 0x00465710
void FFaceData_00465710::sub_00465710(volatile FFaceData_00465710 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465740 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465740(volatile FFaceData_00465740 *Other);
};

// @baa 0x00465740
void FFaceData_00465740::sub_00465740(volatile FFaceData_00465740 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465770 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465770(volatile FFaceData_00465770 *Other);
};

// @baa 0x00465770
void FFaceData_00465770::sub_00465770(volatile FFaceData_00465770 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004657a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004657a0(volatile FFaceData_004657a0 *Other);
};

// @baa 0x004657a0
void FFaceData_004657a0::sub_004657a0(volatile FFaceData_004657a0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004657d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004657d0(volatile FFaceData_004657d0 *Other);
};

// @baa 0x004657d0
void FFaceData_004657d0::sub_004657d0(volatile FFaceData_004657d0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465800 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465800(volatile FFaceData_00465800 *Other);
};

// @baa 0x00465800
void FFaceData_00465800::sub_00465800(volatile FFaceData_00465800 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465830 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465830(volatile FFaceData_00465830 *Other);
};

// @baa 0x00465830
void FFaceData_00465830::sub_00465830(volatile FFaceData_00465830 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465860 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465860(volatile FFaceData_00465860 *Other);
};

// @baa 0x00465860
void FFaceData_00465860::sub_00465860(volatile FFaceData_00465860 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465890 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465890(volatile FFaceData_00465890 *Other);
};

// @baa 0x00465890
void FFaceData_00465890::sub_00465890(volatile FFaceData_00465890 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004658c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004658c0(volatile FFaceData_004658c0 *Other);
};

// @baa 0x004658c0
void FFaceData_004658c0::sub_004658c0(volatile FFaceData_004658c0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004658f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004658f0(volatile FFaceData_004658f0 *Other);
};

// @baa 0x004658f0
void FFaceData_004658f0::sub_004658f0(volatile FFaceData_004658f0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465920 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465920(volatile FFaceData_00465920 *Other);
};

// @baa 0x00465920
void FFaceData_00465920::sub_00465920(volatile FFaceData_00465920 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465950 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465950(volatile FFaceData_00465950 *Other);
};

// @baa 0x00465950
void FFaceData_00465950::sub_00465950(volatile FFaceData_00465950 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465980 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465980(volatile FFaceData_00465980 *Other);
};

// @baa 0x00465980
void FFaceData_00465980::sub_00465980(volatile FFaceData_00465980 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004659b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004659b0(volatile FFaceData_004659b0 *Other);
};

// @baa 0x004659b0
void FFaceData_004659b0::sub_004659b0(volatile FFaceData_004659b0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

// @baa 0x00465a60
void sub_00465a60(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0x10);
  *param_1 = 0;
  return;
}

// @baa 0x00465a80
void sub_00465a80(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

struct FFaceData_00465aa0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465aa0(volatile FFaceData_00465aa0 *Other);
};

// @baa 0x00465aa0
void FFaceData_00465aa0::sub_00465aa0(volatile FFaceData_00465aa0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465b20 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465b20(volatile FFaceData_00465b20 *Other);
};

// @baa 0x00465b20
void FFaceData_00465b20::sub_00465b20(volatile FFaceData_00465b20 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465bb0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465bb0(volatile FFaceData_00465bb0 *Other);
};

// @baa 0x00465bb0
void FFaceData_00465bb0::sub_00465bb0(volatile FFaceData_00465bb0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465be0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465be0(volatile FFaceData_00465be0 *Other);
};

// @baa 0x00465be0
void FFaceData_00465be0::sub_00465be0(volatile FFaceData_00465be0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465c60 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465c60(volatile FFaceData_00465c60 *Other);
};

// @baa 0x00465c60
void FFaceData_00465c60::sub_00465c60(volatile FFaceData_00465c60 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_00465ce0 { void sub_0045e0c0(); };

// @baa 0x00465ce0
void sub_00465ce0(S_00465ce0 *p) { if (p) p->sub_0045e0c0(); }

struct FFaceData_00465cf0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465cf0(volatile FFaceData_00465cf0 *Other);
};

// @baa 0x00465cf0
void FFaceData_00465cf0::sub_00465cf0(volatile FFaceData_00465cf0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465d20 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465d20(volatile FFaceData_00465d20 *Other);
};

// @baa 0x00465d20
void FFaceData_00465d20::sub_00465d20(volatile FFaceData_00465d20 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465d50 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465d50(volatile FFaceData_00465d50 *Other);
};

// @baa 0x00465d50
void FFaceData_00465d50::sub_00465d50(volatile FFaceData_00465d50 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00465d80 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00465d80(volatile FFaceData_00465d80 *Other);
};

// @baa 0x00465d80
void FFaceData_00465d80::sub_00465d80(volatile FFaceData_00465d80 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_00465e40 { void sub_01ab58f0(); };

// @baa 0x00465e40
void sub_00465e40(S_00465e40 *p) { if (p) p->sub_01ab58f0(); }

struct S_00465e50 { void sub_0045dc50(); };

// @baa 0x00465e50
void sub_00465e50(S_00465e50 *p) { if (p) p->sub_0045dc50(); }

struct S_00465e60 { void sub_0045e860(); };

// @baa 0x00465e60
void sub_00465e60(S_00465e60 *p) { if (p) p->sub_0045e860(); }

extern int g_02618840;
int sub_00463ad0();
// @baa 0x00466690
int sub_00466690() { if (!g_02618840) g_02618840 = sub_00463ad0(); return g_02618840; }

struct C_004666d0 {
    void sub_004666d0(undefined4);
};

int sub_00462e40(void);
// @baa 0x004666d0
void C_004666d0::sub_004666d0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  sub_00462e40();
  return;
}

extern int g_02663860;
int sub_00464ee0();
// @baa 0x00468120
int sub_00468120() { if (!g_02663860) g_02663860 = sub_00464ee0(); return g_02663860; }

struct C_00468160 {
    void sub_00468160();
};

// @baa 0x00468160
void C_00468160::sub_00468160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00468190 {
    void sub_00468190();
};

// @baa 0x00468190
void C_00468190::sub_00468190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004681c0 {
    void sub_004681c0();
};

// @baa 0x004681c0
void C_004681c0::sub_004681c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004681f0 {
    void sub_004681f0();
};

// @baa 0x004681f0
void C_004681f0::sub_004681f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x24);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00468220 {
    void sub_00468220();
};

// @baa 0x00468220
void C_00468220::sub_00468220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00468250 {
    void sub_00468250();
};

// @baa 0x00468250
void C_00468250::sub_00468250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004683b0 {
    void sub_004683b0();
};

// @baa 0x004683b0
void C_004683b0::sub_004683b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct T_00468490;
// @baa 0x00468490
template INT TArray<T_00468490*>::RemoveItem(T_00468490* const&);

struct C_00468510 {
    void sub_00468510();
};

// @baa 0x00468510
void C_00468510::sub_00468510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046a030 {
    void sub_0046a030(int);
};

// @baa 0x0046a030
void C_0046a030::sub_0046a030(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
    sub_01ab3290(param_2,0x10);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

struct C_0046a310 {
    int * sub_0046a310(int *);
    int sub_00468da0(int);
};

int sub_01ab3960(...);
// @baa 0x0046a310
int * C_0046a310::sub_0046a310(int * param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = (undefined4 *)sub_01ab3960(0x10);
  *param_1 = (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 1;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(int *)(*param_1 + 8) = *param_1;
  *(int *)(*param_1 + 0xc) = *param_1;
  if (*param_2 == 0) {
    puVar3 = (undefined4 *)sub_01ab3960(0x10);
    *param_2 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    *(int *)(*param_2 + 8) = *param_2;
    *(int *)(*param_2 + 0xc) = *param_2;
  }
  iVar1 = *(int *)(*param_2 + 8);
  if (*param_2 == 0) {
    puVar3 = (undefined4 *)sub_01ab3960(0x10);
    *param_2 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    *(int *)(*param_2 + 8) = *param_2;
    *(int *)(*param_2 + 0xc) = *param_2;
  }
  iVar2 = *param_2;
  for (; iVar1 != iVar2; iVar1 = *(int *)(iVar1 + 8)) {
    ((C_0046a310 *)(this))->sub_00468da0(iVar1);
  }
  return param_1;
}

struct C_0046a440 {
    void sub_0046a440();
};

// @baa 0x0046a440
void C_0046a440::sub_0046a440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

void sub_00468280();
// @baa 0x0046a730
void sub_0046a730(void) { sub_00468280(); }

struct C_0046a820 {
    void sub_0046a820();
};

// @baa 0x0046a820
void C_0046a820::sub_0046a820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046a890 {
    void sub_0046a890();
};

// @baa 0x0046a890
void C_0046a890::sub_0046a890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046a920 {
    void sub_0046a920();
};

// @baa 0x0046a920
void C_0046a920::sub_0046a920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046a9d0 {
    void sub_0046a9d0();
};

// @baa 0x0046a9d0
void C_0046a9d0::sub_0046a9d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046ae90 {
    void sub_0046ae90(undefined4);
    int sub_004689c0(int);
};

// @baa 0x0046ae90
void C_0046ae90::sub_0046ae90(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0046ae90 *)(((char *)this + 4)))->sub_004689c0(param_2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}

struct C_0046cf40 {
    void sub_0046cf40();
};

int sub_00469700(...);
// @baa 0x0046cf40
void C_0046cf40::sub_0046cf40(void)
{
    int * param_1 = (int *)this;

  sub_00469700(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046cfd0 {
    void sub_0046cfd0();
};

int sub_00469770(...);
// @baa 0x0046cfd0
void C_0046cfd0::sub_0046cfd0(void)
{
    int * param_1 = (int *)this;

  sub_00469770(*param_1,*param_1 + param_1[2] * 0x18);
  sub_01ab3290(*param_1,param_1[1] * 0x18);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046d010 {
    void sub_0046d010();
};

int sub_004697f0(...);
// @baa 0x0046d010
void C_0046d010::sub_0046d010(void)
{
    int * param_1 = (int *)this;

  sub_004697f0(*param_1,*param_1 + param_1[2] * 8);
  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046d0c0 {
    void sub_0046d0c0();
};

int sub_00469890(...);
// @baa 0x0046d0c0
void C_0046d0c0::sub_0046d0c0(void)
{
    int * param_1 = (int *)this;

  sub_00469890(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern TArray<int> g_026a1ca4;
struct C_0046d100 {
    int sub_0046d100();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0046d100
int C_0046d100::sub_0046d100()
{
    return g_026a1ca4(Index);
}

struct C_0046d160 {
    int sub_0046d160();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0046d160
int C_0046d160::sub_0046d160()
{
    return g_026a1ca4(Index);
}

struct C_0046d510 {
    undefined4 sub_0046d510(undefined4);
    int sub_00469f20(int, int);
};

// @baa 0x0046d510
undefined4 C_0046d510::sub_0046d510(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0046d510 *)(this))->sub_00469f20(param_2, 1);
  return param_1;
}

struct C_0046dba0 {
    void sub_0046dba0();
};

int sub_00469fe0(void);
// @baa 0x0046dba0
void C_0046dba0::sub_0046dba0(void)
{
    int * param_1 = (int *)this;

  sub_00469fe0();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0x10);
    *param_1 = 0;
  }
  return;
}

struct C_0046dbd0 {
    void sub_0046dbd0(int);
};

// @baa 0x0046dbd0
void C_0046dbd0::sub_0046dbd0(int param_2)
{
    int * param_1 = (int *)this;
  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
    sub_01ab3290(param_2,0x10);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

struct C_0046e740 {
    void sub_0046e740();
};

int sub_0046a2d0(...);
// @baa 0x0046e740
void C_0046e740::sub_0046e740(void)
{
    int * param_1 = (int *)this;

  sub_0046a2d0(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046ea50 {
    undefined4 sub_0046ea50(undefined4 *);
    int sub_00469f20(int, int);
};

// @baa 0x0046ea50
undefined4 C_0046ea50::sub_0046ea50(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0046ea50 *)(this))->sub_00469f20(*param_2, param_2[2]);
  return param_1;
}

struct C_0046ea70 {
    int sub_0046ea70(int *);
    int sub_00469fe0();
    int sub_00468da0(int);
};

// @baa 0x0046ea70
int C_0046ea70::sub_0046ea70(int * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  if (*(int *)(param_1 + 4) != 0) {
    ((C_0046ea70 *)(this))->sub_00469fe0();
  }
  if (*param_2 == 0) {
    puVar3 = (undefined4 *)sub_01ab3960(0x10);
    *param_2 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    *(int *)(*param_2 + 8) = *param_2;
    *(int *)(*param_2 + 0xc) = *param_2;
  }
  iVar1 = *(int *)(*param_2 + 8);
  if (*param_2 == 0) {
    puVar3 = (undefined4 *)sub_01ab3960(0x10);
    *param_2 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 1;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    *(int *)(*param_2 + 8) = *param_2;
    *(int *)(*param_2 + 0xc) = *param_2;
  }
  iVar2 = *param_2;
  for (; iVar1 != iVar2; iVar1 = *(int *)(iVar1 + 8)) {
    ((C_0046ea70 *)(this))->sub_00468da0(iVar1);
  }
  return param_1;
}

struct C_0046ec90 {
    undefined4 * sub_0046ec90(undefined4 *);
    int sub_0046a3d0(int);
};

// @baa 0x0046ec90
undefined4 * C_0046ec90::sub_0046ec90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0046ec90 *)(((char *)this + 4)))->sub_0046a3d0((int)(param_2 + 1));
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}

struct C_0046ecc0 {
    undefined4 * sub_0046ecc0(byte);
};

// @baa 0x0046ecc0
undefined4 * C_0046ecc0::sub_0046ecc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_027d3448;
int sub_01b8f2c0();
// @baa 0x0046edb0
int sub_0046edb0() { if (!g_027d3448) g_027d3448 = sub_01b8f2c0(); return g_027d3448; }

struct C_0046edf0 {
    void sub_0046edf0();
};

// @baa 0x0046edf0
void C_0046edf0::sub_0046edf0(void)
{
    int param_1 = (int)this;

  sub_01ab3290(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 0x24);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_0046f760 {
    void sub_0046f760();
};

// @baa 0x0046f760
void C_0046f760::sub_0046f760(void)
{
    int * param_1 = (int *)this;

  sub_00469770(*param_1,*param_1 + param_1[2] * 0x18);
  sub_01ab3290(*param_1,param_1[1] * 0x18);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct M_0046fda0 { void sub_0046fd30(); };

struct C_0046fda0 { char pad[56]; M_0046fda0 m; void sub_0046fda0(); };

// @baa 0x0046fda0
void C_0046fda0::sub_0046fda0() { m.sub_0046fd30(); }
