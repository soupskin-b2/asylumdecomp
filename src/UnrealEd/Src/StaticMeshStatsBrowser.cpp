// StaticMeshStatsBrowser.cpp (part 1 of 3): 96 functions
// Placed here by: neighbours 91, callers 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_007162d0(void);
int sub_0073e0c0(...);
extern undefined4 g_026b2238;
// @baa 0x006a90c0
int sub_006a90c0(void)
{
  if (g_026b2238 == 0) {
    g_026b2238 = sub_0073e0c0(L"Engine");
    sub_007162d0();
  }
  return g_026b2238;
}

struct T_008054a0 { int x; };

// @baa 0x008054a0
template T_008054a0& TIndirectArray<T_008054a0>::operator()(INT);

struct C {
    undefined4 sub_013a50f0(int *);
};

// @baa 0x013a50f0
undefined4 C::sub_013a50f0(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}

struct C_013a5180 { int a, b, c; C_013a5180(); };

// @baa 0x013a5180
C_013a5180::C_013a5180() : a(0), b(0), c(0) {}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_013a5190(INT Index) const;
};

// @baa 0x013a5190
const DWORD* S::sub_013a5190(INT Index) const
{
    return &Items(Index);
}

struct C_013a5360 { int a, b, c; C_013a5360(); };

// @baa 0x013a5360
C_013a5360::C_013a5360() : a(0), b(0), c(0) {}

struct C_013a5370 { int sub_013a5370(void); };

// @baa 0x013a5370
int C_013a5370::sub_013a5370(void) { return *(int*)((char*)this + 0); }

struct C_013a5380 { int a, b, c; C_013a5380(); };

// @baa 0x013a5380
C_013a5380::C_013a5380() : a(0), b(0), c(0) {}

struct C_013a5390 { int sub_013a5390(void); };

// @baa 0x013a5390
int C_013a5390::sub_013a5390(void) { return *(int*)((char*)this + 0); }

struct C_013a53f0 { int a, b, c; C_013a53f0(); };

// @baa 0x013a53f0
C_013a53f0::C_013a53f0() : a(0), b(0), c(0) {}

struct C_013a5460 {
    void sub_013a5460();
};

int sub_005fae90(void);
// @baa 0x013a5460
void C_013a5460::sub_013a5460(void)
{
    int * param_1 = (int *)this;

  if (0 < *param_1) {
    sub_005fae90();
    return;
  }
  return;
}

struct C_013a5470 { int a, b, c; C_013a5470(); };

// @baa 0x013a5470
C_013a5470::C_013a5470() : a(0), b(0), c(0) {}

struct C_013a5480 { int a, b, c; C_013a5480(); };

// @baa 0x013a5480
C_013a5480::C_013a5480() : a(0), b(0), c(0) {}

struct C_013a5490 { int a, b, c; C_013a5490(); };

// @baa 0x013a5490
C_013a5490::C_013a5490() : a(0), b(0), c(0) {}

struct C_013a54a0 { int sub_013a54a0(void); };

// @baa 0x013a54a0
int C_013a54a0::sub_013a54a0(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[60]; };

struct S_013a54b0 {
    TArray<E> Items; // 0x00
    E* sub_013a54b0(INT Index);
};

// @baa 0x013a54b0
E* S_013a54b0::sub_013a54b0(INT Index)
{
    return &Items(Index);
}

struct C_013a5500 { int a, b, c; C_013a5500(); };

// @baa 0x013a5500
C_013a5500::C_013a5500() : a(0), b(0), c(0) {}

struct C_013a5580 { int a, b, c; C_013a5580(); };

// @baa 0x013a5580
C_013a5580::C_013a5580() : a(0), b(0), c(0) {}

struct C_013a5590 { int a, b, c; C_013a5590(); };

// @baa 0x013a5590
C_013a5590::C_013a5590() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_013a5610{
void sub_013a5610(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x013a5610
void C_013a5610::sub_013a5610(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_013a5730 {
    void sub_013a5730(int, int);
};

int sub_00627f00(...);
// @baa 0x013a5730
void C_013a5730::sub_013a5730(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  return;
}

struct C_013a57d0 { int sub_013a57d0(void); };

// @baa 0x013a57d0
int C_013a57d0::sub_013a57d0(void) { return *(int*)((char*)this + 0); }

struct C_013a58e0 { int sub_013a58e0(void); };

// @baa 0x013a58e0
int C_013a58e0::sub_013a58e0(void) { return *(int*)((char*)this + 0); }

struct C_013a5960 { int sub_013a5960(void); };

// @baa 0x013a5960
int C_013a5960::sub_013a5960(void) { return *(int*)((char*)this + 0); }

struct C_013a5970 { int sub_013a5970(void); };

// @baa 0x013a5970
int C_013a5970::sub_013a5970(void) { return *(int*)((char*)this + 0); }

// @baa 0x013a5a00
void __stdcall sub_013a5a00(int a0, int a1) {  }

struct C_013a5a10 { int sub_013a5a10(void); };

// @baa 0x013a5a10
int C_013a5a10::sub_013a5a10(void) { return *(int*)((char*)this + 0); }

struct C_013a5a20 { int sub_013a5a20(void); };

// @baa 0x013a5a20
int C_013a5a20::sub_013a5a20(void) { return *(int*)((char*)this + 0); }

struct C_013a5aa0 { int sub_013a5aa0(void); };

// @baa 0x013a5aa0
int C_013a5aa0::sub_013a5aa0(void) { return *(int*)((char*)this + 0); }

struct C_013a5b20 {
    int sub_013a5b20();
};

// @baa 0x013a5b20
int C_013a5b20::sub_013a5b20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b30 {
    int sub_013a5b30();
};

// @baa 0x013a5b30
int C_013a5b30::sub_013a5b30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b40 {
    int sub_013a5b40();
};

// @baa 0x013a5b40
int C_013a5b40::sub_013a5b40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b50 {
    int sub_013a5b50();
};

// @baa 0x013a5b50
int C_013a5b50::sub_013a5b50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b60 {
    int sub_013a5b60();
};

// @baa 0x013a5b60
int C_013a5b60::sub_013a5b60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b70 {
    int sub_013a5b70();
};

// @baa 0x013a5b70
int C_013a5b70::sub_013a5b70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b80 {
    int sub_013a5b80();
};

// @baa 0x013a5b80
int C_013a5b80::sub_013a5b80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5b90 {
    int sub_013a5b90();
};

// @baa 0x013a5b90
int C_013a5b90::sub_013a5b90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013a5ba0 { int sub_013a5ba0(void); };

// @baa 0x013a5ba0
int C_013a5ba0::sub_013a5ba0(void) { return *(int*)((char*)this + 0); }

struct C_013a5bb0 { int sub_013a5bb0(void); };

// @baa 0x013a5bb0
int C_013a5bb0::sub_013a5bb0(void) { return *(int*)((char*)this + 0); }

struct C_013a5bc0 { int sub_013a5bc0(void); };

// @baa 0x013a5bc0
int C_013a5bc0::sub_013a5bc0(void) { return *(int*)((char*)this + 0); }

struct C_013a5bd0 { int sub_013a5bd0(void); };

// @baa 0x013a5bd0
int C_013a5bd0::sub_013a5bd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a5c00 { int sub_013a5c00(void); };

// @baa 0x013a5c00
int C_013a5c00::sub_013a5c00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a5c40 { int sub_013a5c40(void); };

// @baa 0x013a5c40
int C_013a5c40::sub_013a5c40(void) { return *(int*)((char*)this + 0); }

struct C_013a5c50 { int sub_013a5c50(void); };

// @baa 0x013a5c50
int C_013a5c50::sub_013a5c50(void) { return *(int*)((char*)this + 0); }

struct C_013a5c60 { int sub_013a5c60(void); };

// @baa 0x013a5c60
int C_013a5c60::sub_013a5c60(void) { return *(int*)((char*)this + 0); }

struct C_013a5c70 { int sub_013a5c70(void); };

// @baa 0x013a5c70
int C_013a5c70::sub_013a5c70(void) { return *(int*)((char*)this + 0); }

struct C_013a5c80 { int sub_013a5c80(void); };

// @baa 0x013a5c80
int C_013a5c80::sub_013a5c80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x013a5c90
undefined4 sub_013a5c90(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_013a5cb0 { int sub_013a5cb0(void); };

// @baa 0x013a5cb0
int C_013a5cb0::sub_013a5cb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a5d00 { int sub_013a5d00(void); };

// @baa 0x013a5d00
int C_013a5d00::sub_013a5d00(void) { return *(int*)((char*)this + 0); }

// @baa 0x013a5d10
undefined4 sub_013a5d10(int * param_1, int * param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
     ((char)param_1[2] == (char)param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_013a5d80 { int sub_013a5d80(void); };

// @baa 0x013a5d80
int C_013a5d80::sub_013a5d80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x013a5dd0
undefined4 sub_013a5dd0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_013a5df0 { int sub_013a5df0(void); };

// @baa 0x013a5df0
int C_013a5df0::sub_013a5df0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a5e30 { int sub_013a5e30(void); };

// @baa 0x013a5e30
int C_013a5e30::sub_013a5e30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a5e40 { int sub_013a5e40(void); };

// @baa 0x013a5e40
int C_013a5e40::sub_013a5e40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a5eb0 {
    int sub_013a5eb0(int);
};

// @baa 0x013a5eb0
int C_013a5eb0::sub_013a5eb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013a5ec0 {
    int sub_013a5ec0(int);
};

// @baa 0x013a5ec0
int C_013a5ec0::sub_013a5ec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a5ed0 { int sub_013a5ed0(void); };

// @baa 0x013a5ed0
int C_013a5ed0::sub_013a5ed0(void) { return *(int*)((char*)this + 20); }

struct C_013a5ee0 {
    int sub_013a5ee0(int);
};

// @baa 0x013a5ee0
int C_013a5ee0::sub_013a5ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013a5f10 {
    int sub_013a5f10(int);
};

// @baa 0x013a5f10
int C_013a5f10::sub_013a5f10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a5f20 { int sub_013a5f20(void); };

// @baa 0x013a5f20
int C_013a5f20::sub_013a5f20(void) { return *(int*)((char*)this + 20); }

// @baa 0x013a5f30
int* sub_013a5f30(int* a, int b)
{
  *a = b;
  return a;
}

struct C_013a5f60 {
    int sub_013a5f60(int);
};

// @baa 0x013a5f60
int C_013a5f60::sub_013a5f60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a5f70 { int sub_013a5f70(void); };

// @baa 0x013a5f70
int C_013a5f70::sub_013a5f70(void) { return *(int*)((char*)this + 20); }

struct C_013a5f80 { int sub_013a5f80(void); };

// @baa 0x013a5f80
int C_013a5f80::sub_013a5f80(void) { return *(int*)((char*)this + 20); }

struct C_013a5fb0 {
    int sub_013a5fb0(int);
};

// @baa 0x013a5fb0
int C_013a5fb0::sub_013a5fb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013a5fc0 {
    int sub_013a5fc0(int);
};

// @baa 0x013a5fc0
int C_013a5fc0::sub_013a5fc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a5fd0 {
    int sub_013a5fd0(int);
};

// @baa 0x013a5fd0
int C_013a5fd0::sub_013a5fd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a5fe0 { int sub_013a5fe0(void); };

// @baa 0x013a5fe0
int C_013a5fe0::sub_013a5fe0(void) { return *(int*)((char*)this + 20); }

struct C_013a5ff0 { int sub_013a5ff0(void); };

// @baa 0x013a5ff0
int C_013a5ff0::sub_013a5ff0(void) { return *(int*)((char*)this + 20); }

struct C_013a6000 { int sub_013a6000(void); };

// @baa 0x013a6000
int C_013a6000::sub_013a6000(void) { return *(int*)((char*)this + 20); }

struct C_013a6010 {
    int sub_013a6010(int);
};

// @baa 0x013a6010
int C_013a6010::sub_013a6010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013a6020 {
    int sub_013a6020(int);
};

// @baa 0x013a6020
int C_013a6020::sub_013a6020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013a6030 {
    int sub_013a6030(int);
};

// @baa 0x013a6030
int C_013a6030::sub_013a6030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a6040 {
    int sub_013a6040(int);
};

// @baa 0x013a6040
int C_013a6040::sub_013a6040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a6050 {
    int sub_013a6050(int);
};

// @baa 0x013a6050
int C_013a6050::sub_013a6050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013a6060 { int sub_013a6060(void); };

// @baa 0x013a6060
int C_013a6060::sub_013a6060(void) { return *(int*)((char*)this + 20); }

struct C_013a6070 { int sub_013a6070(void); };

// @baa 0x013a6070
int C_013a6070::sub_013a6070(void) { return *(int*)((char*)this + 20); }

struct C_013a6080 { int sub_013a6080(void); };

// @baa 0x013a6080
int C_013a6080::sub_013a6080(void) { return *(int*)((char*)this + 20); }

struct C_013a6090 { int sub_013a6090(void); };

// @baa 0x013a6090
int C_013a6090::sub_013a6090(void) { return *(int*)((char*)this + 20); }

struct C_013a60a0 { int sub_013a60a0(void); };

// @baa 0x013a60a0
int C_013a60a0::sub_013a60a0(void) { return *(int*)((char*)this + 20); }

struct C_013a60b0 { int sub_013a60b0(void); };

// @baa 0x013a60b0
int C_013a60b0::sub_013a60b0(void) { return *(int*)((char*)this + 20); }

struct C_013a60c0 { int sub_013a60c0(void); };

// @baa 0x013a60c0
int C_013a60c0::sub_013a60c0(void) { return *(int*)((char*)this + 20); }

struct C_013a60d0 { int sub_013a60d0(void); };

// @baa 0x013a60d0
int C_013a60d0::sub_013a60d0(void) { return *(int*)((char*)this + 20); }

struct C_013a60e0 { int sub_013a60e0(void); };

// @baa 0x013a60e0
int C_013a60e0::sub_013a60e0(void) { return *(int*)((char*)this + 20); }

struct C_013a60f0 { int sub_013a60f0(void); };

// @baa 0x013a60f0
int C_013a60f0::sub_013a60f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005d88c0(...);
int sub_00804e70(void);
int sub_00825770(...);
extern undefined4 g_026b548c;
// @baa 0x013a6160
void sub_013a6160(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b548c == 0) {
    g_026b548c = sub_00825770(L"Engine");
    sub_00804e70();
  }
  sub_005d88c0(g_026b548c,param_1,param_2,param_3);
  return;
}

int sub_00716a50(void);
int sub_0071b2d0(...);
extern undefined4 g_026b2248;
// @baa 0x013a61a0
void sub_013a61a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b2248 == 0) {
    g_026b2248 = sub_0071b2d0(L"Engine");
    sub_00716a50();
  }
  sub_005d88c0(g_026b2248,param_1,param_2,param_3);
  return;
}

// @baa 0x013a6240
void sub_013a6240(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x013a6290
void sub_013a6290(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  return;
}

// @baa 0x013a62c0
void sub_013a62c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct S_013a6360 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_013a6360(INT Index) const;
};

// @baa 0x013a6360
const DWORD* S_013a6360::sub_013a6360(INT Index) const
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_013ae9b0 { void* Data; int Num; int Max; void sub_013ae9b0(); };

// @baa 0x013ae9b0
void C_013ae9b0::sub_013ae9b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_013aea10 { void* Data; int Num; int Max; void sub_013aea10(); };

// @baa 0x013aea10
void C_013aea10::sub_013aea10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_013b7380(int, int);
};

// @baa 0x013c44e0
int UPackageMap::sub_013c44e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_013b7380((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}
