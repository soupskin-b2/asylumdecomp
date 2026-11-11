// Editor_0fa0000.cpp (part 1 of 5): 148 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { int sub_00fa2ea0(void); };

// @baa 0x00fa2ea0
int C::sub_00fa2ea0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa2eb0 {
    int sub_00fa2eb0(undefined4 *, int);
    int sub_00fa0960(int, int);
};

// @baa 0x00fa2eb0
int C_00fa2eb0::sub_00fa2eb0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_00fa2eb0 *)(this))->sub_00fa0960(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

typedef uint size_t;

struct C_00fa2ee0 {
    int sub_00fa2ee0(int);
    int sub_0094a810(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00fa2ee0
int C_00fa2ee0::sub_00fa2ee0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00fa2ee0 *)(this))->sub_0094a810(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x48),0,param_2 * 0x48);
  return iVar1;
}

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00fa2f60(INT Index);
};

// @baa 0x00fa2f60
QWORD* S::sub_00fa2f60(INT Index)
{
    return &Items(Index);
}

struct C_00fa2fb0{
int sub_00fa2fb0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00fa2fb0
int C_00fa2fb0::sub_00fa2fb0(undefined4*param_2)
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

struct C_00fa3010{
int sub_00fa3010(undefined4*);
};

// @baa 0x00fa3010
int C_00fa3010::sub_00fa3010(undefined4*param_2)
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

struct C_00fa3070{
int sub_00fa3070(undefined4*);
};

// @baa 0x00fa3070
int C_00fa3070::sub_00fa3070(undefined4*param_2)
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

struct S_00fa30d0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa30d0(INT Index);
};

// @baa 0x00fa30d0
DWORD* S_00fa30d0::sub_00fa30d0(INT Index)
{
    return &Items(Index);
}

struct S_00fa3230 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa3230(INT Index);
};

// @baa 0x00fa3230
DWORD* S_00fa3230::sub_00fa3230(INT Index)
{
    return &Items(Index);
}

struct C_00fa3280{
int sub_00fa3280(undefined4*);
};

// @baa 0x00fa3280
int C_00fa3280::sub_00fa3280(undefined4*param_2)
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

struct E { BYTE Bytes[88]; };

struct S_00fa32e0 {
    TArray<E> Items; // 0x00
    E* sub_00fa32e0(INT Index);
};

// @baa 0x00fa32e0
E* S_00fa32e0::sub_00fa32e0(INT Index)
{
    return &Items(Index);
}

struct E_00fa3330 { BYTE Bytes[16]; };

struct S_00fa3330 {
    TArray<E_00fa3330> Items; // 0x00
    E_00fa3330* sub_00fa3330(INT Index);
};

// @baa 0x00fa3330
E_00fa3330* S_00fa3330::sub_00fa3330(INT Index)
{
    return &Items(Index);
}

struct E_00fa3380 { BYTE Bytes[12]; };

struct S_00fa3380 {
    TArray<E_00fa3380> Items; // 0x00
    E_00fa3380* sub_00fa3380(INT Index);
};

// @baa 0x00fa3380
E_00fa3380* S_00fa3380::sub_00fa3380(INT Index)
{
    return &Items(Index);
}

struct E_00fa33d0 { BYTE Bytes[120]; };

struct S_00fa33d0 {
    TArray<E_00fa33d0> Items; // 0x00
    E_00fa33d0* sub_00fa33d0(INT Index);
};

// @baa 0x00fa33d0
E_00fa33d0* S_00fa33d0::sub_00fa33d0(INT Index)
{
    return &Items(Index);
}

struct E_00fa3420 { BYTE Bytes[12]; };

struct S_00fa3420 {
    TArray<E_00fa3420> Items; // 0x00
    E_00fa3420* sub_00fa3420(INT Index);
};

// @baa 0x00fa3420
E_00fa3420* S_00fa3420::sub_00fa3420(INT Index)
{
    return &Items(Index);
}

struct S_00fa3470 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa3470(INT Index);
};

// @baa 0x00fa3470
DWORD* S_00fa3470::sub_00fa3470(INT Index)
{
    return &Items(Index);
}

struct S_00fa34c0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00fa34c0(INT Index) const;
};

// @baa 0x00fa34c0
const DWORD* S_00fa34c0::sub_00fa34c0(INT Index) const
{
    return &Items(Index);
}

struct E_00fa36f0 { BYTE Bytes[16]; };

struct S_00fa36f0 {
    TArray<E_00fa36f0> Items; // 0x00
    const E_00fa36f0* sub_00fa36f0(INT Index) const;
};

// @baa 0x00fa36f0
const E_00fa36f0* S_00fa36f0::sub_00fa36f0(INT Index) const
{
    return &Items(Index);
}

struct E_00fa3740 { BYTE Bytes[16]; };

struct S_00fa3740 {
    TArray<E_00fa3740> Items; // 0x00
    E_00fa3740* sub_00fa3740(INT Index);
};

// @baa 0x00fa3740
E_00fa3740* S_00fa3740::sub_00fa3740(INT Index)
{
    return &Items(Index);
}

extern "C" void sub_00fa1080();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_00fa37c0();
};

// @baa 0x00fa37c0
void CNode::sub_00fa37c0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00fa1080();
}

struct C_00fa37d0 {
    undefined4 * sub_00fa37d0(byte);
};

int sub_0053dfa0(...);
int sub_00fa0ef0(void);
extern undefined4 g_02177304;
// @baa 0x00fa37d0
undefined4 * C_00fa37d0::sub_00fa37d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02177304);
  sub_00fa0ef0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fa3800 { int sub_00fa3800(void); };

// @baa 0x00fa3800
int C_00fa3800::sub_00fa3800(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa3810 {
    int sub_00fa3810(int);
};

// @baa 0x00fa3810
int C_00fa3810::sub_00fa3810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa3820 {
    int sub_00fa3820(int);
};

// @baa 0x00fa3820
int C_00fa3820::sub_00fa3820(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00fa3890 {
    int sub_00fa3890(int);
};

// @baa 0x00fa3890
int C_00fa3890::sub_00fa3890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00fa38a0
void __stdcall sub_00fa38a0(int a0, int a1) {  }

struct C_00fa38b0 {
    int sub_00fa38b0(int);
};

// @baa 0x00fa38b0
int C_00fa38b0::sub_00fa38b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00fa38c0 {
    int sub_00fa38c0(int);
};

// @baa 0x00fa38c0
int C_00fa38c0::sub_00fa38c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00fa38d0 {
    int sub_00fa38d0(int);
};

// @baa 0x00fa38d0
int C_00fa38d0::sub_00fa38d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_00fa38f0 {
    int sub_00fa38f0(int);
};

// @baa 0x00fa38f0
int C_00fa38f0::sub_00fa38f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00fa3900
void __stdcall sub_00fa3900(int a0, int a1) {  }

struct C_00fa3910 {
    int sub_00fa3910(int);
};

// @baa 0x00fa3910
int C_00fa3910::sub_00fa3910(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00fa3920
void __stdcall sub_00fa3920(int a0, int a1) {  }

struct C_00fa3930 {
    int sub_00fa3930(int);
};

// @baa 0x00fa3930
int C_00fa3930::sub_00fa3930(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

// @baa 0x00fa3940
void __stdcall sub_00fa3940(int a0, int a1) {  }

struct C_00fa3950 {
    int sub_00fa3950(int);
};

// @baa 0x00fa3950
int C_00fa3950::sub_00fa3950(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00fa3960
void __stdcall sub_00fa3960(int a0, int a1) {  }

struct C_00fa3970 {
    int sub_00fa3970(int);
};

// @baa 0x00fa3970
int C_00fa3970::sub_00fa3970(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00fa3980
void __stdcall sub_00fa3980(int a0, int a1) {  }

struct C_00fa3990 {
    int sub_00fa3990(int);
};

// @baa 0x00fa3990
int C_00fa3990::sub_00fa3990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x78;
}

// @baa 0x00fa39b0
void __stdcall sub_00fa39b0(int a0, int a1) {  }

struct C_00fa39c0 {
    int sub_00fa39c0(int);
};

// @baa 0x00fa39c0
int C_00fa39c0::sub_00fa39c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00fa39d0
void __stdcall sub_00fa39d0(int a0, int a1) {  }

struct C_00fa39e0 {
    int sub_00fa39e0(int);
};

// @baa 0x00fa39e0
int C_00fa39e0::sub_00fa39e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00fa39f0
void __stdcall sub_00fa39f0(int a0, int a1) {  }

struct C_00fa3a00 {
    int sub_00fa3a00(int);
};

// @baa 0x00fa3a00
int C_00fa3a00::sub_00fa3a00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00fa3a10
void __stdcall sub_00fa3a10(int a0, int a1) {  }

struct C_00fa3a20 {
    int sub_00fa3a20(int);
};

// @baa 0x00fa3a20
int C_00fa3a20::sub_00fa3a20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x990 + *param_1;
}

struct C_00fa3a30 {
    int sub_00fa3a30(int);
};

// @baa 0x00fa3a30
int C_00fa3a30::sub_00fa3a30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00fa3a40
void __stdcall sub_00fa3a40(int a0, int a1) {  }

struct C_00fa3a50 {
    int sub_00fa3a50();
};

// @baa 0x00fa3a50
int C_00fa3a50::sub_00fa3a50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa3a70 { int sub_00fa3a70(void); };

// @baa 0x00fa3a70
int C_00fa3a70::sub_00fa3a70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00fa3a80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa3a80(INT Index);
};

// @baa 0x00fa3a80
DWORD* S_00fa3a80::sub_00fa3a80(INT Index)
{
    return &Items(Index);
}

struct C_00fa3b30 {
    int sub_00fa3b30(int);
};

// @baa 0x00fa3b30
int C_00fa3b30::sub_00fa3b30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00fa3b40
void __stdcall sub_00fa3b40(int a0, int a1) {  }

struct C_00fa3b50 {
    int sub_00fa3b50();
};

// @baa 0x00fa3b50
int C_00fa3b50::sub_00fa3b50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa3b60 {
    int sub_00fa3b60(int);
};

// @baa 0x00fa3b60
int C_00fa3b60::sub_00fa3b60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa3b70 {
    int sub_00fa3b70(int);
};

// @baa 0x00fa3b70
int C_00fa3b70::sub_00fa3b70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct S_00fa3b80 { int sub_00544d40(int); };

// @baa 0x00fa3b80
int sub_00fa3b80(S_00fa3b80 *s, int a) { return s->sub_00544d40(a); }

struct S_00fa3bc0 { int sub_00544d40(int); };

// @baa 0x00fa3bc0
int sub_00fa3bc0(S_00fa3bc0 *s, int a) { return s->sub_00544d40(a); }

struct C_00fa3bd0 {
    int sub_00fa3bd0();
};

// @baa 0x00fa3bd0
int C_00fa3bd0::sub_00fa3bd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa3c20 {
    int sub_00fa3c20();
};

// @baa 0x00fa3c20
int C_00fa3c20::sub_00fa3c20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct E_00fa3c40 { BYTE Bytes[16]; };

struct S_00fa3c40 {
    TArray<E_00fa3c40> Items; // 0x00
    E_00fa3c40* sub_00fa3c40(INT Index);
};

// @baa 0x00fa3c40
E_00fa3c40* S_00fa3c40::sub_00fa3c40(INT Index)
{
    return &Items(Index);
}

int sub_005413d0(...);
// @baa 0x00fa3cc0
void sub_00fa3cc0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa3cd0 {
    int sub_00fa3cd0(int);
};

// @baa 0x00fa3cd0
int C_00fa3cd0::sub_00fa3cd0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00fa3ce0 {
    int sub_00fa3ce0(int);
};

// @baa 0x00fa3ce0
int C_00fa3ce0::sub_00fa3ce0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa3cf0 {
    int sub_00fa3cf0();
};

// @baa 0x00fa3cf0
int C_00fa3cf0::sub_00fa3cf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa3d10 {
    int sub_00fa3d10();
};

// @baa 0x00fa3d10
int C_00fa3d10::sub_00fa3d10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa3d30 {
    int sub_00fa3d30(int);
};

// @baa 0x00fa3d30
int C_00fa3d30::sub_00fa3d30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa3d40 {
    int sub_00fa3d40(int);
};

// @baa 0x00fa3d40
int C_00fa3d40::sub_00fa3d40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa3dd0 {
    int sub_00fa3dd0(int);
};

// @baa 0x00fa3dd0
int C_00fa3dd0::sub_00fa3dd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00fa3e30 {
    int sub_00fa3e30(int);
};

// @baa 0x00fa3e30
int C_00fa3e30::sub_00fa3e30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00fa3e40
void sub_00fa3e40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa3e50 {
    int sub_00fa3e50(int);
};

// @baa 0x00fa3e50
int C_00fa3e50::sub_00fa3e50(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x9a0 + *param_1;
}

struct C_00fa3e60 {
    int sub_00fa3e60(int);
};

// @baa 0x00fa3e60
int C_00fa3e60::sub_00fa3e60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9a0 + *param_1;
}

// @baa 0x00fa3ea0
void sub_00fa3ea0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa3eb0 {
    int sub_00fa3eb0(int);
};

// @baa 0x00fa3eb0
int C_00fa3eb0::sub_00fa3eb0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x9d8 + *param_1;
}

struct C_00fa3ec0 {
    int sub_00fa3ec0(int);
};

// @baa 0x00fa3ec0
int C_00fa3ec0::sub_00fa3ec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9d8 + *param_1;
}

// @baa 0x00fa3f00
void sub_00fa3f00(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa3f10 {
    int sub_00fa3f10(int);
};

// @baa 0x00fa3f10
int C_00fa3f10::sub_00fa3f10(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x13bc + *param_1;
}

struct C_00fa3f20 {
    int sub_00fa3f20(int);
};

// @baa 0x00fa3f20
int C_00fa3f20::sub_00fa3f20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x13bc + *param_1;
}

// @baa 0x00fa3f60
void sub_00fa3f60(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa3f70 {
    int sub_00fa3f70(int);
};

// @baa 0x00fa3f70
int C_00fa3f70::sub_00fa3f70(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0xd0 + *param_1;
}

// @baa 0x00fa3fb0
void sub_00fa3fb0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa3fc0 {
    int sub_00fa3fc0(int);
};

// @baa 0x00fa3fc0
int C_00fa3fc0::sub_00fa3fc0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00fa3fd0 {
    int sub_00fa3fd0(int);
};

// @baa 0x00fa3fd0
int C_00fa3fd0::sub_00fa3fd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa4010 {
    int sub_00fa4010(int);
};

// @baa 0x00fa4010
int C_00fa4010::sub_00fa4010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00fa4020
void sub_00fa4020(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00fa4030 {
    int sub_00fa4030(int);
};

// @baa 0x00fa4030
int C_00fa4030::sub_00fa4030(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00fa4040 {
    int sub_00fa4040();
};

// @baa 0x00fa4040
int C_00fa4040::sub_00fa4040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4060 {
    int sub_00fa4060();
};

// @baa 0x00fa4060
int C_00fa4060::sub_00fa4060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4080 {
    int sub_00fa4080();
};

// @baa 0x00fa4080
int C_00fa4080::sub_00fa4080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00fa4090 {
    int sub_00fa4090();
};

// @baa 0x00fa4090
int C_00fa4090::sub_00fa4090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa40b0 {
    int sub_00fa40b0();
};

// @baa 0x00fa40b0
int C_00fa40b0::sub_00fa40b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00fa40c0 {
    int sub_00fa40c0(int);
};

// @baa 0x00fa40c0
int C_00fa40c0::sub_00fa40c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00fa40d0 {
    int sub_00fa40d0(int);
};

// @baa 0x00fa40d0
int C_00fa40d0::sub_00fa40d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00fa40f0 {
    int sub_00fa40f0(int);
};

// @baa 0x00fa40f0
int C_00fa40f0::sub_00fa40f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9a0 + *param_1;
}

struct E_00fa4100 { BYTE Bytes[2464]; };

struct S_00fa4100 {
    TArray<E_00fa4100> Items; // 0x00
    E_00fa4100* sub_00fa4100(INT Index);
};

// @baa 0x00fa4100
E_00fa4100* S_00fa4100::sub_00fa4100(INT Index)
{
    return &Items(Index);
}

struct C_00fa4150 {
    int sub_00fa4150(int);
};

// @baa 0x00fa4150
int C_00fa4150::sub_00fa4150(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9d8 + *param_1;
}

struct E_00fa4160 { BYTE Bytes[2520]; };

struct S_00fa4160 {
    TArray<E_00fa4160> Items; // 0x00
    E_00fa4160* sub_00fa4160(INT Index);
};

// @baa 0x00fa4160
E_00fa4160* S_00fa4160::sub_00fa4160(INT Index)
{
    return &Items(Index);
}

struct C_00fa41b0 {
    int sub_00fa41b0(int);
};

// @baa 0x00fa41b0
int C_00fa41b0::sub_00fa41b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x13bc + *param_1;
}

struct C_00fa4210 {
    int sub_00fa4210(int);
};

// @baa 0x00fa4210
int C_00fa4210::sub_00fa4210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xd0 + *param_1;
}

struct C_00fa4220 {
    int sub_00fa4220();
};

// @baa 0x00fa4220
int C_00fa4220::sub_00fa4220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4240 {
    int sub_00fa4240();
};

// @baa 0x00fa4240
int C_00fa4240::sub_00fa4240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00fa4250 {
    int sub_00fa4250();
};

// @baa 0x00fa4250
int C_00fa4250::sub_00fa4250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4270 {
    int sub_00fa4270();
};

// @baa 0x00fa4270
int C_00fa4270::sub_00fa4270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4290 {
    int sub_00fa4290();
};

// @baa 0x00fa4290
int C_00fa4290::sub_00fa4290(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa42b0 {
    int sub_00fa42b0();
};

// @baa 0x00fa42b0
int C_00fa42b0::sub_00fa42b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa42d0 {
    int sub_00fa42d0();
};

// @baa 0x00fa42d0
int C_00fa42d0::sub_00fa42d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa42f0 {
    int sub_00fa42f0();
};

// @baa 0x00fa42f0
int C_00fa42f0::sub_00fa42f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4310 {
    int sub_00fa4310();
};

// @baa 0x00fa4310
int C_00fa4310::sub_00fa4310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00fa4320 {
    int sub_00fa4320();
};

// @baa 0x00fa4320
int C_00fa4320::sub_00fa4320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4340 {
    int sub_00fa4340();
};

// @baa 0x00fa4340
int C_00fa4340::sub_00fa4340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00fa4350 {
    int sub_00fa4350();
};

// @baa 0x00fa4350
int C_00fa4350::sub_00fa4350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa4370 {
    int sub_00fa4370();
};

// @baa 0x00fa4370
int C_00fa4370::sub_00fa4370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00fa4380 {
    int sub_00fa4380();
};

// @baa 0x00fa4380
int C_00fa4380::sub_00fa4380(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa43a0 {
    int sub_00fa43a0();
};

// @baa 0x00fa43a0
int C_00fa43a0::sub_00fa43a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00fa59d0
void __stdcall sub_00fa59d0(int a0, int a1) {  }

// @baa 0x00fa59e0
void __stdcall sub_00fa59e0(int a0, int a1) {  }

struct C_00fa5a00 {
    int sub_00fa5a00();
};

// @baa 0x00fa5a00
int C_00fa5a00::sub_00fa5a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00fa9730 { int sub_00fa9730(void); };

// @baa 0x00fa9730
int C_00fa9730::sub_00fa9730(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00fa9780 { void* Data; int Num; int Max; void sub_00fa9780(); };

// @baa 0x00fa9780
void C_00fa9780::sub_00fa9780() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9960 { void* Data; int Num; int Max; void sub_00fa9960(); };

// @baa 0x00fa9960
void C_00fa9960::sub_00fa9960() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9a60 { void* Data; int Num; int Max; void sub_00fa9a60(); };

// @baa 0x00fa9a60
void C_00fa9a60::sub_00fa9a60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9ac0 { void* Data; int Num; int Max; void sub_00fa9ac0(); };

// @baa 0x00fa9ac0
void C_00fa9ac0::sub_00fa9ac0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9b20 { void* Data; int Num; int Max; void sub_00fa9b20(); };

// @baa 0x00fa9b20
void C_00fa9b20::sub_00fa9b20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9b80 { void* Data; int Num; int Max; void sub_00fa9b80(); };

// @baa 0x00fa9b80
void C_00fa9b80::sub_00fa9b80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9be0 { void* Data; int Num; int Max; void sub_00fa9be0(); };

// @baa 0x00fa9be0
void C_00fa9be0::sub_00fa9be0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00faa080 {
    int sub_00faa080();
};

// @baa 0x00faa080
int C_00faa080::sub_00faa080(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faa0a0 {
    int sub_00faa0a0();
};

// @baa 0x00faa0a0
int C_00faa0a0::sub_00faa0a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faa0c0 {
    int sub_00faa0c0();
};

// @baa 0x00faa0c0
int C_00faa0c0::sub_00faa0c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faa0e0 {
    int sub_00faa0e0(int);
};

// @baa 0x00faa0e0
int C_00faa0e0::sub_00faa0e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00faa0f0 {
    int sub_00faa0f0();
};

// @baa 0x00faa0f0
int C_00faa0f0::sub_00faa0f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faa110 {
    int sub_00faa110();
};

// @baa 0x00faa110
int C_00faa110::sub_00faa110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faa130 {
    int sub_00faa130(int);
};

// @baa 0x00faa130
int C_00faa130::sub_00faa130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct M_00faa310 { void sub_00549160(); };

struct C_00faa310 { char pad[40]; M_00faa310 m; void sub_00faa310(); };

// @baa 0x00faa310
void C_00faa310::sub_00faa310() { m.sub_00549160(); }

struct M_00faa320 { void sub_00549160(); };

struct C_00faa320 { char pad[44]; M_00faa320 m; void sub_00faa320(); };

// @baa 0x00faa320
void C_00faa320::sub_00faa320() { m.sub_00549160(); }

void sub_0040fcc0();
// @baa 0x00faa330
void sub_00faa330(void) { sub_0040fcc0(); }

struct C_00fabf60 {
    void sub_00fabf60(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00fa8cc0(...);
// @baa 0x00fabf60
void C_00fabf60::sub_00fabf60(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00fabf90 {
    void sub_00fabf90(undefined4, undefined4, undefined4, undefined4, undefined4, undefined2);
};

// @baa 0x00fabf90
void C_00fabf90::sub_00fabf90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined2 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00fabfc0 {
    void sub_00fabfc0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fabfc0
void C_00fabfc0::sub_00fabfc0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00fac010
undefined4 * UObject::sub_00fac010(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

// @baa 0x00fac090
undefined4 * UObject::sub_00fac090(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_00fac440 { void* Data; int Num; int Max; void sub_00fac440(); };

// @baa 0x00fac440
void C_00fac440::sub_00fac440() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fac4a0 { void* Data; int Num; int Max; void sub_00fac4a0(); };

// @baa 0x00fac4a0
void C_00fac4a0::sub_00fac4a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fac500 { void sub_0040fcc0(); void sub_00fac500(); };

// @baa 0x00fac500
void C_00fac500::sub_00fac500() {
    sub_0040fcc0();
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

struct TConstSetBitIterator_00fac510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fac510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fac510& operator++();
};

TConstSetBitIterator_00fac510::TConstSetBitIterator_00fac510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fac510
TConstSetBitIterator_00fac510& TConstSetBitIterator_00fac510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fac530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fac530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fac530& operator++();
};

TConstSetBitIterator_00fac530::TConstSetBitIterator_00fac530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fac530
TConstSetBitIterator_00fac530& TConstSetBitIterator_00fac530::operator++()
{
    It.Advance();
    return *this;
}
