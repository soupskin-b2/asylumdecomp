// D3D9Drv_0ea0000.cpp (part 1 of 2): 72 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 * sub_00ea00b0(byte);
};

int sub_0053dfa0(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00ea00b0
undefined4 * C::sub_00ea00b0(byte param_2)
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

struct C_00ea0230 {
    undefined4 * sub_00ea0230(byte);
};

// @baa 0x00ea0230
undefined4 * C_00ea0230::sub_00ea0230(byte param_2)
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

struct C_00ea0350 {
    undefined4 * sub_00ea0350(byte);
};

// @baa 0x00ea0350
undefined4 * C_00ea0350::sub_00ea0350(byte param_2)
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

struct C_00ea0500 {
    undefined4 * sub_00ea0500(byte);
};

// @baa 0x00ea0500
undefined4 * C_00ea0500::sub_00ea0500(byte param_2)
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

struct C_00ea0580 {
    undefined4 sub_00ea0580(int);
};

int sub_0053de70(...);
// @baa 0x00ea0580
undefined4 C_00ea0580::sub_00ea0580(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x88) == *(int *)(param_2 + 0x88)) {
    iVar1 = sub_0053de70(param_2,param_1,*(int *)(param_1 + 0x88) * 8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

struct C_00ea0750{
int*sub_00ea0750(int*);
};

// @baa 0x00ea0750
int*C_00ea0750::sub_00ea0750(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

param_2=(int*)*param_2;
piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00ea07a0{
int*sub_00ea07a0();
};

// @baa 0x00ea07a0
int*C_00ea07a0::sub_00ea07a0(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ea07e0(INT Index);
};

// @baa 0x00ea07e0
DWORD* S::sub_00ea07e0(INT Index)
{
    return &Items(Index);
}

extern undefined4*g_026b0d94;
// @baa 0x00ea0950
void ULensFlare::sub_00ea0950(void)
{
int param_1=(int)this;

int iVar1;
int*piVar2;
int iVar3;

piVar2=(int*)(param_1+0x14);
iVar3=0x400;
do{
iVar1=*piVar2;
*piVar2=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(iVar1));
}
piVar2=piVar2+1;
iVar3=iVar3+-1;
}while(0!=iVar3);
return;
}

// @baa 0x00ea0b60
int*ULensFlare::sub_00ea0b60(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct S_00ea0ca0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ea0ca0(INT Index);
};

// @baa 0x00ea0ca0
DWORD* S_00ea0ca0::sub_00ea0ca0(INT Index)
{
    return &Items(Index);
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00ea0cf0
int ULensFlare::sub_00ea0cf0(undefined4*param_2)
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

struct E { BYTE Bytes[12]; };

struct S_00ea0d50 {
    TArray<E> Items; // 0x00
    E* sub_00ea0d50(INT Index);
};

// @baa 0x00ea0d50
E* S_00ea0d50::sub_00ea0d50(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_view {
    int sub_00e9d780(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ea0da0
int ULensFlare::sub_00ea0da0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00e9d780(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

// @baa 0x00ea0de0
int*ULensFlare::sub_00ea0de0(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct E_00ea0e00 { BYTE Bytes[96]; };

struct S_00ea0e00 {
    TArray<E_00ea0e00> Items; // 0x00
    E_00ea0e00* sub_00ea0e00(INT Index);
};

// @baa 0x00ea0e00
E_00ea0e00* S_00ea0e00::sub_00ea0e00(INT Index)
{
    return &Items(Index);
}

// @baa 0x00ea0ec0
int*ULensFlare::sub_00ea0ec0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

param_2=(int*)*param_2;
piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00ea0ef0
int*ULensFlare::sub_00ea0ef0(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct S_00ea0f10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00ea0f10(INT Index) const;
};

// @baa 0x00ea0f10
const DWORD* S_00ea0f10::sub_00ea0f10(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00ea0f60
int ULensFlare::sub_00ea0f60(undefined4*param_2)
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

// @baa 0x00ea0fc0
int*ULensFlare::sub_00ea0fc0(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct S_00ea0fe0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ea0fe0(INT Index);
};

// @baa 0x00ea0fe0
QWORD* S_00ea0fe0::sub_00ea0fe0(INT Index)
{
    return &Items(Index);
}

struct C_view_00ea1030 {
    int sub_00e9d9c0(int);
};

// @baa 0x00ea1030
int ULensFlare::sub_00ea1030(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view_00ea1030 *)(this))->sub_00e9d9c0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct S_00ea1070 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ea1070(INT Index);
};

// @baa 0x00ea1070
QWORD* S_00ea1070::sub_00ea1070(INT Index)
{
    return &Items(Index);
}

struct S_00ea10c0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00ea10c0(INT Index) const;
};

// @baa 0x00ea10c0
const QWORD* S_00ea10c0::sub_00ea10c0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00ea1110
int*ULensFlare::sub_00ea1110(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct E_00ea1130 { BYTE Bytes[176]; };

struct S_00ea1130 {
    TArray<E_00ea1130> Items; // 0x00
    E_00ea1130* sub_00ea1130(INT Index);
};

// @baa 0x00ea1130
E_00ea1130* S_00ea1130::sub_00ea1130(INT Index)
{
    return &Items(Index);
}

// @baa 0x00ea11f0
int*ULensFlare::sub_00ea11f0(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00ea1210
int*ULensFlare::sub_00ea1210(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct E_00ea1230 { BYTE Bytes[24]; };

struct S_00ea1230 {
    TArray<E_00ea1230> Items; // 0x00
    const E_00ea1230* sub_00ea1230(INT Index) const;
};

// @baa 0x00ea1230
const E_00ea1230* S_00ea1230::sub_00ea1230(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00ea1280
int*ULensFlare::sub_00ea1280(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

int sub_00ea0890(void);
// @baa 0x00ea12a0
undefined4 ULensFlare::sub_00ea12a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ea0890();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ea0a20(void);
// @baa 0x00ea12c0
undefined4 ULensFlare::sub_00ea12c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ea0a20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ea0c10(void);
// @baa 0x00ea12e0
undefined4 ULensFlare::sub_00ea12e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ea0c10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00ea1390
int ULensFlare::sub_00ea1390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ea13a0
void __stdcall sub_00ea13a0(int a0, int a1) {  }

int sub_00e9d4d0(void);
// @baa 0x00ea1430
undefined4 ULensFlare::sub_00ea1430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e9d4d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ea1450 {
    int sub_00ea1450(int);
};

// @baa 0x00ea1450
int C_00ea1450::sub_00ea1450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ea1460
void __stdcall sub_00ea1460(int a0, int a1) {  }

struct C_00ea1f60 {
    void sub_00ea1f60(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00ea1f60
void C_00ea1f60::sub_00ea1f60(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00ea1f90 {
    void sub_00ea1f90(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00ea1f90
void C_00ea1f90::sub_00ea1f90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  return;
}

// @baa 0x00ea2130
void sub_00ea2130(undefined4 * param_1, undefined4 * param_2)
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

struct C_00ea2160 {
    undefined4 sub_00ea2160(byte);
};

int sub_00e9e160(void);
// @baa 0x00ea2160
undefined4 C_00ea2160::sub_00ea2160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e9e160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ea2180 {
    undefined4 sub_00ea2180(byte);
};

int sub_00e9e390(void);
// @baa 0x00ea2180
undefined4 C_00ea2180::sub_00ea2180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e9e390();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e9e4c0(void);
// @baa 0x00ea21a0
undefined4 ULensFlare::sub_00ea21a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e9e4c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ea2810 {
    undefined4 sub_00ea2810(byte);
};

int sub_00e9fcd0(void);
// @baa 0x00ea2810
undefined4 C_00ea2810::sub_00ea2810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e9fcd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0094d9d0();
// @baa 0x00ea2c80
void sub_00ea2c80(void) { sub_0094d9d0(); }

struct C_00ea2c90 { void sub_00ea1fe0(int); C_00ea2c90 *sub_00ea2c90(int); };

// @baa 0x00ea2c90
C_00ea2c90 *C_00ea2c90::sub_00ea2c90(int a) { sub_00ea1fe0(a); return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00ea2cb0 { void* Data; int Num; int Max; void sub_00ea2cb0(); };

// @baa 0x00ea2cb0
void C_00ea2cb0::sub_00ea2cb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00ea2d10;
// @baa 0x00ea2d10
template INT TArray<T_00ea2d10*>::RemoveItem(T_00ea2d10* const&);

struct C_00ea2e10 { void* Data; int Num; int Max; void sub_00ea2e10(); };

// @baa 0x00ea2e10
void C_00ea2e10::sub_00ea2e10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ea2e70 { void* Data; int Num; int Max; void sub_00ea2e70(); };

// @baa 0x00ea2e70
void C_00ea2e70::sub_00ea2e70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ea2ed0 {
    int sub_00ea1470(unsigned int*);
};

struct D_00ea2ed0 {
    int sub_00ea2ed0(unsigned int*);
};

// @baa 0x00ea2ed0
int D_00ea2ed0::sub_00ea2ed0(unsigned int* p)
{
    return ((C_00ea2ed0*)this)->sub_00ea1470(p);
}

struct C_00ea2ee0 { void* Data; int Num; int Max; void sub_00ea2ee0(); };

// @baa 0x00ea2ee0
void C_00ea2ee0::sub_00ea2ee0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ea2f40 { void* Data; int Num; int Max; void sub_00ea2f40(); };

// @baa 0x00ea2f40
void C_00ea2f40::sub_00ea2f40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00ea1300(void);
// @baa 0x00ea30e0
undefined4 ULensFlare::sub_00ea30e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ea1300();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ea3170 {
    int sub_00ea3170(int);
};

// @baa 0x00ea3170
int C_00ea3170::sub_00ea3170(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct C_00ea3180 {
    int sub_00ea3180(int);
};

// @baa 0x00ea3180
int C_00ea3180::sub_00ea3180(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

// @baa 0x00ea3190
void __stdcall sub_00ea3190(int a0, int a1) {  }

struct C_00ea31a0 {
    int sub_00ea31a0();
};

// @baa 0x00ea31a0
int C_00ea31a0::sub_00ea31a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9c + *(int *)*param_1;
}

struct C_00ea31b0 {
    int sub_00ea31b0();
};

// @baa 0x00ea31b0
int C_00ea31b0::sub_00ea31b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9c + *(int *)*param_1;
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

struct TConstSetBitIterator_00eaa580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00eaa580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00eaa580& operator++();
};

TConstSetBitIterator_00eaa580::TConstSetBitIterator_00eaa580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00eaa580
TConstSetBitIterator_00eaa580& TConstSetBitIterator_00eaa580::operator++()
{
    It.Advance();
    return *this;
}

struct C_00eaaf70 {
    int sub_00eaaf70();
};

int sub_00eaa520(void);
// @baa 0x00eaaf70
int C_00eaaf70::sub_00eaaf70(void)
{
    int param_1 = (int)this;

  sub_00eaa520();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ead330 {
    int sub_00ead330(undefined4, undefined4);
    int sub_00eaaf00(int, int);
};

// @baa 0x00ead330
int C_00ead330::sub_00ead330(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00ead330 *)(this))->sub_00eaaf00(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00ead350 {
    int sub_00ead350();
};

// @baa 0x00ead350
int C_00ead350::sub_00ead350(void)
{
    int param_1 = (int)this;

  sub_00eaa520();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00ead130();
// @baa 0x00ead370
void sub_00ead370(void) { sub_00ead130(); }

struct C_00ead3d0 {
    int sub_00ead3d0();
};

// @baa 0x00ead3d0
int C_00ead3d0::sub_00ead3d0(void)
{
    int param_1 = (int)this;

  sub_00eaa520();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ead3f0
void sub_00ead3f0(void) { sub_00ead130(); }

struct C_00eae220 {
    int sub_00eae220();
};

// @baa 0x00eae220
int C_00eae220::sub_00eae220(void)
{
    int param_1 = (int)this;

  sub_00eaa520();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00eae240
void sub_00eae240(void) { sub_00ead130(); }

struct M_00eae250 { void sub_00ead130(); };

struct C_00eae250 { char pad[4]; M_00eae250 m; void sub_00eae250(); };

// @baa 0x00eae250
void C_00eae250::sub_00eae250() { m.sub_00ead130(); }

struct C_00eaf2f0 {
    undefined4 sub_00eaf2f0(byte);
};

int sub_00eae260(void);
// @baa 0x00eaf2f0
undefined4 C_00eaf2f0::sub_00eaf2f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00eae260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
