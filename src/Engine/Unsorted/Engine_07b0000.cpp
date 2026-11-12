// Engine_07b0000.cpp (part 1 of 3): 101 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_00656490();
// @baa 0x007b1140
void sub_007b1140(void) { sub_00656490(); }

struct E { BYTE Bytes[60]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_007b1b80(INT Index) const;
};

// @baa 0x007b1b80
const E* S::sub_007b1b80(INT Index) const
{
    return &Items(Index);
}

struct S_007b1bd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b1bd0(INT Index);
};

// @baa 0x007b1bd0
DWORD* S_007b1bd0::sub_007b1bd0(INT Index)
{
    return &Items(Index);
}

struct C_007b1c60{
int sub_007b1c60(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x007b1c60
int C_007b1c60::sub_007b1c60(undefined4*param_2)
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

struct S_007b1cc0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b1cc0(INT Index);
};

// @baa 0x007b1cc0
QWORD* S_007b1cc0::sub_007b1cc0(INT Index)
{
    return &Items(Index);
}

struct C_007b1d10 {
    int sub_007b1d10(undefined4 *, int);
    int sub_007a8600(int, int);
};

// @baa 0x007b1d10
int C_007b1d10::sub_007b1d10(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_007b1d10 *)(this))->sub_007a8600(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_007b1d40{
int sub_007b1d40(undefined4*);
};

// @baa 0x007b1d40
int C_007b1d40::sub_007b1d40(undefined4*param_2)
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

struct E_007b1da0 { BYTE Bytes[32]; };

struct S_007b1da0 {
    TArray<E_007b1da0> Items; // 0x00
    E_007b1da0* sub_007b1da0(INT Index);
};

// @baa 0x007b1da0
E_007b1da0* S_007b1da0::sub_007b1da0(INT Index)
{
    return &Items(Index);
}

struct E_007b1df0 { BYTE Bytes[80]; };

struct S_007b1df0 {
    TArray<E_007b1df0> Items; // 0x00
    E_007b1df0* sub_007b1df0(INT Index);
};

// @baa 0x007b1df0
E_007b1df0* S_007b1df0::sub_007b1df0(INT Index)
{
    return &Items(Index);
}

struct S_007b2270 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b2270(INT Index);
};

// @baa 0x007b2270
DWORD* S_007b2270::sub_007b2270(INT Index)
{
    return &Items(Index);
}

struct C_007b22c0{
int sub_007b22c0(undefined4*);
};

// @baa 0x007b22c0
int C_007b22c0::sub_007b22c0(undefined4*param_2)
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

struct E_007b2320 { BYTE Bytes[188]; };

struct S_007b2320 {
    TArray<E_007b2320> Items; // 0x00
    E_007b2320* sub_007b2320(INT Index);
};

// @baa 0x007b2320
E_007b2320* S_007b2320::sub_007b2320(INT Index)
{
    return &Items(Index);
}

struct E_007b2370 { BYTE Bytes[188]; };

struct S_007b2370 {
    TArray<E_007b2370> Items; // 0x00
    const E_007b2370* sub_007b2370(INT Index) const;
};

// @baa 0x007b2370
const E_007b2370* S_007b2370::sub_007b2370(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_007b23c0 {
    int sub_007b23c0(int);
    int sub_007a9180(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x007b23c0
int C_007b23c0::sub_007b23c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b23c0 *)(this))->sub_007a9180(param_2);
  sub_01a37612((void *)(iVar1 * 0xbc + *param_1),0,param_2 * 0xbc);
  return iVar1;
}

struct S_007b2400 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b2400(INT Index);
};

// @baa 0x007b2400
DWORD* S_007b2400::sub_007b2400(INT Index)
{
    return &Items(Index);
}

struct E_007b2750 { BYTE Bytes[48]; };

struct S_007b2750 {
    TArray<E_007b2750> Items; // 0x00
    E_007b2750* sub_007b2750(INT Index);
};

// @baa 0x007b2750
E_007b2750* S_007b2750::sub_007b2750(INT Index)
{
    return &Items(Index);
}

struct E_007b2890 { BYTE Bytes[576]; };

struct S_007b2890 {
    TArray<E_007b2890> Items; // 0x00
    E_007b2890* sub_007b2890(INT Index);
};

// @baa 0x007b2890
E_007b2890* S_007b2890::sub_007b2890(INT Index)
{
    return &Items(Index);
}

struct E_007b28e0 { BYTE Bytes[576]; };

struct S_007b28e0 {
    TArray<E_007b28e0> Items; // 0x00
    const E_007b28e0* sub_007b28e0(INT Index) const;
};

// @baa 0x007b28e0
const E_007b28e0* S_007b28e0::sub_007b28e0(INT Index) const
{
    return &Items(Index);
}

struct E_007b2930 { BYTE Bytes[12]; };

struct S_007b2930 {
    TArray<E_007b2930> Items; // 0x00
    E_007b2930* sub_007b2930(INT Index);
};

// @baa 0x007b2930
E_007b2930* S_007b2930::sub_007b2930(INT Index)
{
    return &Items(Index);
}

struct E_007b2980 { BYTE Bytes[12]; };

struct S_007b2980 {
    TArray<E_007b2980> Items; // 0x00
    const E_007b2980* sub_007b2980(INT Index) const;
};

// @baa 0x007b2980
const E_007b2980* S_007b2980::sub_007b2980(INT Index) const
{
    return &Items(Index);
}

struct C_007b29d0 {
    int sub_007b29d0(int);
    int sub_007a9580(int);
};

// @baa 0x007b29d0
int C_007b29d0::sub_007b29d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b29d0 *)(this))->sub_007a9580(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_007b2a10 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b2a10(INT Index);
};

// @baa 0x007b2a10
QWORD* S_007b2a10::sub_007b2a10(INT Index)
{
    return &Items(Index);
}

struct S_007b2a60 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_007b2a60(INT Index) const;
};

// @baa 0x007b2a60
const QWORD* S_007b2a60::sub_007b2a60(INT Index) const
{
    return &Items(Index);
}

struct E_007b2b10 { BYTE Bytes[12]; };

struct S_007b2b10 {
    TArray<E_007b2b10> Items; // 0x00
    const E_007b2b10* sub_007b2b10(INT Index) const;
};

// @baa 0x007b2b10
const E_007b2b10* S_007b2b10::sub_007b2b10(INT Index) const
{
    return &Items(Index);
}

struct C_007b2bd0 {
    void sub_007b2bd0();
};

// @baa 0x007b2bd0
void C_007b2bd0::sub_007b2bd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = *param_1;
  return;
}

struct E_007b2be0 { BYTE Bytes[172]; };

struct S_007b2be0 {
    TArray<E_007b2be0> Items; // 0x00
    E_007b2be0* sub_007b2be0(INT Index);
};

// @baa 0x007b2be0
E_007b2be0* S_007b2be0::sub_007b2be0(INT Index)
{
    return &Items(Index);
}

struct E_007b2c30 { BYTE Bytes[32]; };

struct S_007b2c30 {
    TArray<E_007b2c30> Items; // 0x00
    const E_007b2c30* sub_007b2c30(INT Index) const;
};

// @baa 0x007b2c30
const E_007b2c30* S_007b2c30::sub_007b2c30(INT Index) const
{
    return &Items(Index);
}

struct S_007b3310 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b3310(INT Index);
};

// @baa 0x007b3310
QWORD* S_007b3310::sub_007b3310(INT Index)
{
    return &Items(Index);
}

struct C_007b3360 {
    int sub_007b3360(int);
    int sub_007a98f0(int);
};

// @baa 0x007b3360
int C_007b3360::sub_007b3360(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b3360 *)(this))->sub_007a98f0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

int sub_0053dfa0(...);
int sub_007b2830(void);
// @baa 0x007b33a0
undefined4 ULensFlare::sub_007b33a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007b2830();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007b3540 { int sub_007b3540(void); };

// @baa 0x007b3540
int C_007b3540::sub_007b3540(void) { return *(int*)((char*)this + 0); }

struct C_007b3550 {
    int sub_007b3550(int);
};

// @baa 0x007b3550
int C_007b3550::sub_007b3550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_007b3560 {
    int sub_007b3560(int);
};

// @baa 0x007b3560
int C_007b3560::sub_007b3560(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007b3570
void __stdcall sub_007b3570(int a0, int a1) {  }

struct C_007b3580 {
    int sub_007b3580(int);
};

// @baa 0x007b3580
int C_007b3580::sub_007b3580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x007b3590
void __stdcall sub_007b3590(int a0, int a1) {  }

struct E_007b35a0 { BYTE Bytes[32]; };

struct S_007b35a0 {
    TArray<E_007b35a0> Items; // 0x00
    const E_007b35a0* sub_007b35a0(INT Index) const;
};

// @baa 0x007b35a0
const E_007b35a0* S_007b35a0::sub_007b35a0(INT Index) const
{
    return &Items(Index);
}

struct C_007b35f0 {
    int sub_007b35f0(int);
};

// @baa 0x007b35f0
int C_007b35f0::sub_007b35f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x007b3600
void __stdcall sub_007b3600(int a0, int a1) {  }

struct E_007b3610 { BYTE Bytes[80]; };

struct S_007b3610 {
    TArray<E_007b3610> Items; // 0x00
    const E_007b3610* sub_007b3610(INT Index) const;
};

// @baa 0x007b3610
const E_007b3610* S_007b3610::sub_007b3610(INT Index) const
{
    return &Items(Index);
}

struct C_007b3660 {
    int sub_007b3660(int);
};

// @baa 0x007b3660
int C_007b3660::sub_007b3660(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007b3670
void __stdcall sub_007b3670(int a0, int a1) {  }

struct C_007b3680 {
    int sub_007b3680(int);
};

// @baa 0x007b3680
int C_007b3680::sub_007b3680(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_007b3690 {
    int sub_007b3690(int);
};

// @baa 0x007b3690
int C_007b3690::sub_007b3690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007b36a0
void __stdcall sub_007b36a0(int a0, int a1) {  }

// @baa 0x007b36b0
void __stdcall sub_007b36b0(int a0, int a1) {  }

struct S_007b36c0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b36c0(INT Index);
};

// @baa 0x007b36c0
QWORD* S_007b36c0::sub_007b36c0(INT Index)
{
    return &Items(Index);
}

// @baa 0x007b3710
void __stdcall sub_007b3710(int a0, int a1) {  }

struct E_007b3720 { BYTE Bytes[12]; };

struct S_007b3720 {
    TArray<E_007b3720> Items; // 0x00
    E_007b3720* sub_007b3720(INT Index);
};

// @baa 0x007b3720
E_007b3720* S_007b3720::sub_007b3720(INT Index)
{
    return &Items(Index);
}

struct C_007b3770 {
    int sub_007b3770(int);
};

// @baa 0x007b3770
int C_007b3770::sub_007b3770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007b3780 {
    int sub_007b3780(int);
};

// @baa 0x007b3780
int C_007b3780::sub_007b3780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_007b3790 {
    int sub_007b3790(int);
};

// @baa 0x007b3790
int C_007b3790::sub_007b3790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007b37a0 {
    int sub_007b37a0(int);
};

// @baa 0x007b37a0
int C_007b37a0::sub_007b37a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007b37b0
void __stdcall sub_007b37b0(int a0, int a1) {  }

struct C_007b37c0 { int sub_007b37c0(void); };

// @baa 0x007b37c0
int C_007b37c0::sub_007b37c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct E_007b37d0 { BYTE Bytes[368]; };

struct S_007b37d0 {
    TArray<E_007b37d0> Items; // 0x00
    const E_007b37d0* sub_007b37d0(INT Index) const;
};

// @baa 0x007b37d0
const E_007b37d0* S_007b37d0::sub_007b37d0(INT Index) const
{
    return &Items(Index);
}

struct C_007b3820 {
    int sub_007b3820(int);
};

// @baa 0x007b3820
int C_007b3820::sub_007b3820(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x170 + *param_1;
}

// @baa 0x007b3830
void __stdcall sub_007b3830(int a0, int a1) {  }

struct C_007b3840 {
    int sub_007b3840(int);
};

// @baa 0x007b3840
int C_007b3840::sub_007b3840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007b3850
void __stdcall sub_007b3850(int a0, int a1) {  }

// @baa 0x007b3860
void __stdcall sub_007b3860(int a0, int a1) {  }

struct C_007b3870 {
    int sub_007b3870(int);
};

// @baa 0x007b3870
int C_007b3870::sub_007b3870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x007b3880
void __stdcall sub_007b3880(int a0, int a1) {  }

struct C_007b3890 {
    int sub_007b3890(int);
};

// @baa 0x007b3890
int C_007b3890::sub_007b3890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x007b38a0
void __stdcall sub_007b38a0(int a0, int a1) {  }

struct C_007b38b0 {
    int sub_007b38b0(int);
};

// @baa 0x007b38b0
int C_007b38b0::sub_007b38b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007b38c0
void __stdcall sub_007b38c0(int a0, int a1) {  }

struct C_007b38d0 {
    int sub_007b38d0(int);
};

// @baa 0x007b38d0
int C_007b38d0::sub_007b38d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x007b38e0
void __stdcall sub_007b38e0(int a0, int a1) {  }

// @baa 0x007b3960
void __stdcall sub_007b3960(int a0, int a1) {  }

struct C_007b3cc0 {
    int sub_007b3cc0(int);
};

// @baa 0x007b3cc0
int C_007b3cc0::sub_007b3cc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x007b3cd0
void __stdcall sub_007b3cd0(int a0, int a1) {  }

struct S_007b3d70 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b3d70(INT Index);
};

// @baa 0x007b3d70
QWORD* S_007b3d70::sub_007b3d70(INT Index)
{
    return &Items(Index);
}

struct E_007b3dc0 { BYTE Bytes[12]; };

struct S_007b3dc0 {
    TArray<E_007b3dc0> Items; // 0x00
    E_007b3dc0* sub_007b3dc0(INT Index);
};

// @baa 0x007b3dc0
E_007b3dc0* S_007b3dc0::sub_007b3dc0(INT Index)
{
    return &Items(Index);
}

struct S_007b3e10 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b3e10(INT Index);
};

// @baa 0x007b3e10
QWORD* S_007b3e10::sub_007b3e10(INT Index)
{
    return &Items(Index);
}

// @baa 0x007b3e60
void __stdcall sub_007b3e60(int a0, int a1) {  }

struct E_007b3e70 { BYTE Bytes[32]; };

struct S_007b3e70 {
    TArray<E_007b3e70> Items; // 0x00
    E_007b3e70* sub_007b3e70(INT Index);
};

// @baa 0x007b3e70
E_007b3e70* S_007b3e70::sub_007b3e70(INT Index)
{
    return &Items(Index);
}

struct S_007b3ec0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b3ec0(INT Index);
};

// @baa 0x007b3ec0
DWORD* S_007b3ec0::sub_007b3ec0(INT Index)
{
    return &Items(Index);
}

struct C_007b3f10 {
    int sub_007b3f10(int);
};

// @baa 0x007b3f10
int C_007b3f10::sub_007b3f10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007b4290 {
    int sub_007b4290(int);
};

// @baa 0x007b4290
int C_007b4290::sub_007b4290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007b42a0 {
    int sub_007b42a0(int);
};

// @baa 0x007b42a0
int C_007b42a0::sub_007b42a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x007b42b0
void __stdcall sub_007b42b0(int a0, int a1) {  }

// @baa 0x007b42c0
void __stdcall sub_007b42c0(int a0, int a1) {  }

struct C_007b43a0 {
    int sub_007b43a0();
};

// @baa 0x007b43a0
int C_007b43a0::sub_007b43a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007b43c0 {
    int sub_007b43c0();
};

// @baa 0x007b43c0
int C_007b43c0::sub_007b43c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007b43e0 {
    int sub_007b43e0();
};

// @baa 0x007b43e0
int C_007b43e0::sub_007b43e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_007b43f0 {
    int sub_007b43f0(int);
};

// @baa 0x007b43f0
int C_007b43f0::sub_007b43f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x007b4ae0
void sub_007b4ae0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x007b4ba0
void sub_007b4ba0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_007b4dd0 {
    undefined4 * sub_007b4dd0(undefined4);
    int sub_00417ef0(int);
};

extern undefined2 g_01e3f3dc;
extern undefined4 g_01f29724;
// @baa 0x007b4dd0
undefined4 * C_007b4dd0::sub_007b4dd0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_007b4dd0 *)(((char *)this + 0x10)))->sub_00417ef0((int)(&g_01e3f3dc));
  param_1[1] = 1;
  param_1[3] = 1;
  param_1[7] = param_2;
  param_1[2] = 0;
  *param_1 = (undefined4)(&g_01f29724);
  return param_1;
}

struct C_view {
    int sub_007a8600(int, int);
};

// @baa 0x007b5410
void AController::vf_360(int param_2, int param_3)
{
    int param_1 = (int)this;
  int *piVar1;
  if (param_2 != 0) {
    ((C_view *)(((char *)this + 0x280)))->sub_007a8600(param_3, 1);
    piVar1 = (int *)(*(int *)(param_1 + 0x280) + param_3 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_2;
    }
  }
  return;
}

extern undefined4*g_026b0d94;
// @baa 0x007b78c0
void ULensFlare::sub_007b78c0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_007b7900{
void sub_007b7900();
};

// @baa 0x007b7900
void C_007b7900::sub_007b7900(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct S_007b9300 {
    TArray<WORD> Items; // 0x00
    const WORD* sub_007b9300(INT Index) const;
};

// @baa 0x007b9300
const WORD* S_007b9300::sub_007b9300(INT Index) const
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007bce90 { void* Data; int Num; int Max; void sub_007bce90(); };

// @baa 0x007bce90
void C_007bce90::sub_007bce90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bcef0 { void* Data; int Num; int Max; void sub_007bcef0(); };

// @baa 0x007bcef0
void C_007bcef0::sub_007bcef0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bcf90 { void* Data; int Num; int Max; void sub_007bcf90(); };

// @baa 0x007bcf90
void C_007bcf90::sub_007bcf90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bcff0 { void* Data; int Num; int Max; void sub_007bcff0(); };

// @baa 0x007bcff0
void C_007bcff0::sub_007bcff0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd050 { void* Data; int Num; int Max; void sub_007bd050(); };

// @baa 0x007bd050
void C_007bd050::sub_007bd050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd120 { void* Data; int Num; int Max; void sub_007bd120(); };

// @baa 0x007bd120
void C_007bd120::sub_007bd120() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd180 {
    undefined4 sub_007bd180();
};

// @baa 0x007bd180
undefined4 C_007bd180::sub_007bd180(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}
