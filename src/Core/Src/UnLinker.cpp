// UnLinker.cpp (part 1 of 3): 284 functions
// Placed here by: neighbours 227, class 40, callers 14, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern undefined4 g_025d53f4;
extern undefined4 g_026667dc;
extern undefined4 g_0268d0a8;
// @baa 0x0059a0e0
void sub_0059a0e0(void)
{
  g_0268d0a8 = g_0268d0a8 + -1;
  if (g_0268d0a8 == 0) {
    g_026667dc = 0;
    g_025d53f4 = 0xffffffff;
  }
  return;
}

// @baa 0x0059a560
void ULinkerLoad::sub_0059a560(void) { *(int*)((char*)this + 1464) = 1; }

struct V_0059a590 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void g(int a0);
};

struct O_0059a590 { char pad[1168]; V_0059a590* p; void sub_0059a590(int a0); };

// @baa 0x0059a590
void O_0059a590::sub_0059a590(int a0) { p->g(a0); }

struct V_0059a5a0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void g(int a0);
};

struct O_0059a5a0 { char pad[1168]; V_0059a5a0* p; void sub_0059a5a0(int a0); };

// @baa 0x0059a5a0
void O_0059a5a0::sub_0059a5a0(int a0) { p->g(a0); }

struct V_0059a5b0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void g();
};

struct O_0059a5b0 { char pad[1168]; V_0059a5b0* p; void sub_0059a5b0(); };

// @baa 0x0059a5b0
void O_0059a5b0::sub_0059a5b0() { p->g(); }

struct V_0059a5c0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void g();
};

struct O_0059a5c0 { char pad[1168]; V_0059a5c0* p; void sub_0059a5c0(); };

// @baa 0x0059a5c0
void O_0059a5c0::sub_0059a5c0() { p->g(); }

struct V_0059a5d0 {
    virtual void v0();
    virtual void g(int a0);
};

struct O_0059a5d0 { char pad[1168]; V_0059a5d0* p; void sub_0059a5d0(int a0); };

// @baa 0x0059a5d0
void O_0059a5d0::sub_0059a5d0(int a0) { p->g(a0); }

struct V_0059a640 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void g(int a0);
};

struct O_0059a640 { char pad[124]; V_0059a640* p; void sub_0059a640(int a0); };

// @baa 0x0059a640
void O_0059a640::sub_0059a640(int a0) { p->g(a0); }

struct Obj10 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
};

struct C {
    char pad[0x7c];
    Obj10* p;
    void sub_0059a650();
};

// @baa 0x0059a650
void C::sub_0059a650()
{
    p->f10();
}

struct V_0059a660 {
    virtual void v0();
    virtual void g(int a0);
};

struct O_0059a660 { char pad[124]; V_0059a660* p; void sub_0059a660(int a0); };

// @baa 0x0059a660
void O_0059a660::sub_0059a660(int a0) { p->g(a0); }

// @baa 0x0059a670
IMPLEMENT_CLASS_AT(ULinker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnLinker.cpp", 4461);

// @baa 0x0059a780
int ULinker::vf_000(void) { return 1; }

// @baa 0x0059a790
bool ULinker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059a7d0
int ULinkerLoad::vf_000(void) { return 1; }

typedef uint size_t;

struct C_005a0130 {
    int sub_005a0130(int);
    int sub_0059aa90(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x005a0130
int C_005a0130::sub_005a0130(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_005a0130 *)(this))->sub_0059aa90(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_005a0170 {
    int sub_005a0170(undefined4 *, int);
    int sub_0059ab00(int, int);
};

// @baa 0x005a0170
int C_005a0170::sub_005a0170(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_005a0170 *)(this))->sub_0059ab00(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_005a01a0{
int sub_005a01a0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005a01a0
int C_005a01a0::sub_005a01a0(undefined4*param_2)
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

struct C_005a0200{
int sub_005a0200(undefined4*);
};

// @baa 0x005a0200
int C_005a0200::sub_005a0200(undefined4*param_2)
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

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005a0260(INT Index);
};

// @baa 0x005a0260
DWORD* S::sub_005a0260(INT Index)
{
    return &Items(Index);
}

struct S_005a02b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_005a02b0(INT Index) const;
};

// @baa 0x005a02b0
const DWORD* S_005a02b0::sub_005a02b0(INT Index) const
{
    return &Items(Index);
}

struct S_005a0300 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005a0300(INT Index);
};

// @baa 0x005a0300
DWORD* S_005a0300::sub_005a0300(INT Index)
{
    return &Items(Index);
}

struct S_005a0350 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005a0350(INT Index);
};

// @baa 0x005a0350
DWORD* S_005a0350::sub_005a0350(INT Index)
{
    return &Items(Index);
}

extern "C" void sub_0059ae50();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_005a03d0();
};

// @baa 0x005a03d0
void CNode::sub_005a03d0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_0059ae50();
}

struct S_005a03e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005a03e0(INT Index);
};

// @baa 0x005a03e0
DWORD* S_005a03e0::sub_005a03e0(INT Index)
{
    return &Items(Index);
}

struct C_005a0430{
int sub_005a0430(undefined4*);
};

// @baa 0x005a0430
int C_005a0430::sub_005a0430(undefined4*param_2)
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

// @baa 0x005a0490
void __stdcall sub_005a0490(int a0, int a1) {  }

struct C_005a04a0 {
    int sub_005a04a0(int);
};

// @baa 0x005a04a0
int C_005a04a0::sub_005a04a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005a04b0 {
    int sub_005a04b0(int);
};

// @baa 0x005a04b0
int C_005a04b0::sub_005a04b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_005a04c0 {
    int sub_005a04c0(int);
};

// @baa 0x005a04c0
int C_005a04c0::sub_005a04c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x005a04d0
void __stdcall sub_005a04d0(int a0, int a1) {  }

struct C_005a04e0 {
    int sub_005a04e0(int);
};

// @baa 0x005a04e0
int C_005a04e0::sub_005a04e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005a0500 {
    int sub_005a0500(int);
};

// @baa 0x005a0500
int C_005a0500::sub_005a0500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0510 {
    int sub_005a0510(int);
};

// @baa 0x005a0510
int C_005a0510::sub_005a0510(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0520 {
    int sub_005a0520(int);
};

// @baa 0x005a0520
int C_005a0520::sub_005a0520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0530 {
    int sub_005a0530(int);
};

// @baa 0x005a0530
int C_005a0530::sub_005a0530(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x005a0540
void __stdcall sub_005a0540(int a0, int a1) {  }

struct C_005a0550 {
    int sub_005a0550(int);
};

// @baa 0x005a0550
int C_005a0550::sub_005a0550(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0560 {
    int sub_005a0560(int);
};

// @baa 0x005a0560
int C_005a0560::sub_005a0560(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0570 {
    int sub_005a0570(int);
};

// @baa 0x005a0570
int C_005a0570::sub_005a0570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct S_005a0580 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005a0580(INT Index);
};

// @baa 0x005a0580
DWORD* S_005a0580::sub_005a0580(INT Index)
{
    return &Items(Index);
}

struct C_005a05d0 {
    int sub_005a05d0(int);
};

// @baa 0x005a05d0
int C_005a05d0::sub_005a05d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005a05f0 { int sub_005a05f0(void); };

// @baa 0x005a05f0
int C_005a05f0::sub_005a05f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005a0630 {
    int sub_005a0630(int);
};

// @baa 0x005a0630
int C_005a0630::sub_005a0630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005a06a0
int ULinkerLoad::sub_005a06a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005a06e0
int ULinkerLoad::sub_005a06e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005a0750
int ULinkerLoad::sub_005a0750(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005a0790
int ULinkerLoad::sub_005a0790(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0800 {
    int sub_005a0800(int);
};

// @baa 0x005a0800
int C_005a0800::sub_005a0800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_005a0840 { int sub_00544d40(int); };

// @baa 0x005a0840
int sub_005a0840(S_005a0840 *s, int a) { return s->sub_00544d40(a); }

struct C_005a08a0 {
    int sub_005a08a0(int);
};

// @baa 0x005a08a0
int C_005a08a0::sub_005a08a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005a08b0 { int sub_005a08b0(void); };

// @baa 0x005a08b0
int C_005a08b0::sub_005a08b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005a08c0 {
    int sub_005a08c0();
};

// @baa 0x005a08c0
int C_005a08c0::sub_005a08c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a08d0 {
    int sub_005a08d0();
};

// @baa 0x005a08d0
int C_005a08d0::sub_005a08d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a08e0 {
    int sub_005a08e0();
};

// @baa 0x005a08e0
int C_005a08e0::sub_005a08e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0900 {
    int sub_005a0900();
};

// @baa 0x005a0900
int C_005a0900::sub_005a0900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_005a0940 {
    int sub_005a0940(int);
};

// @baa 0x005a0940
int C_005a0940::sub_005a0940(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a0950 {
    int sub_005a0950();
};

// @baa 0x005a0950
int C_005a0950::sub_005a0950(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0970 {
    int sub_005a0970();
};

// @baa 0x005a0970
int C_005a0970::sub_005a0970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_005413d0(...);
// @baa 0x005a09b0
void sub_005a09b0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005a0a50 {
    int sub_005a0a50(int);
};

// @baa 0x005a0a50
int C_005a0a50::sub_005a0a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005a0a60 { C_005a0a60* sub_005a0a60(void); };

// @baa 0x005a0a60
C_005a0a60* C_005a0a60::sub_005a0a60(void) { *(int*)((char*)this + 12) = -1; return this; }

struct C_005a0ad0 {
    int sub_005a0ad0(int);
};

// @baa 0x005a0ad0
int C_005a0ad0::sub_005a0ad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x005a0b20
void sub_005a0b20(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005a0b90 {
    int sub_005a0b90();
};

// @baa 0x005a0b90
int C_005a0b90::sub_005a0b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_005a0ba0 {
    int sub_005a0ba0();
};

// @baa 0x005a0ba0
int C_005a0ba0::sub_005a0ba0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0bc0 {
    int sub_005a0bc0();
};

// @baa 0x005a0bc0
int C_005a0bc0::sub_005a0bc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0be0 {
    int sub_005a0be0();
};

// @baa 0x005a0be0
int C_005a0be0::sub_005a0be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a0bf0 {
    int sub_005a0bf0(int);
};

// @baa 0x005a0bf0
int C_005a0bf0::sub_005a0bf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_005a0c00 {
    int sub_005a0c00(int);
};

// @baa 0x005a0c00
int C_005a0c00::sub_005a0c00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005a0c10 {
    void sub_005a0c10(int *);
};

// @baa 0x005a0c10
void C_005a0c10::sub_005a0c10(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_005a0c20 {
    int sub_005a0c20();
};

// @baa 0x005a0c20
int C_005a0c20::sub_005a0c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a0c30 {
    int sub_005a0c30();
};

// @baa 0x005a0c30
int C_005a0c30::sub_005a0c30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0c50 {
    int sub_005a0c50();
};

// @baa 0x005a0c50
int C_005a0c50::sub_005a0c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005a0c60 {
    int sub_005a0c60();
};

// @baa 0x005a0c60
int C_005a0c60::sub_005a0c60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0c80 {
    int sub_005a0c80();
};

// @baa 0x005a0c80
int C_005a0c80::sub_005a0c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005a0ca0 {
    int sub_005a0ca0();
};

// @baa 0x005a0ca0
int C_005a0ca0::sub_005a0ca0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0cc0 {
    int sub_005a0cc0();
};

// @baa 0x005a0cc0
int C_005a0cc0::sub_005a0cc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0ce0 {
    int sub_005a0ce0();
};

// @baa 0x005a0ce0
int C_005a0ce0::sub_005a0ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a0cf0 {
    int sub_005a0cf0();
};

// @baa 0x005a0cf0
int C_005a0cf0::sub_005a0cf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0d10 {
    int sub_005a0d10();
};

// @baa 0x005a0d10
int C_005a0d10::sub_005a0d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a0d20 {
    int sub_005a0d20();
};

// @baa 0x005a0d20
int C_005a0d20::sub_005a0d20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0d40 {
    int sub_005a0d40();
};

// @baa 0x005a0d40
int C_005a0d40::sub_005a0d40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a0d50 {
    int sub_005a0d50();
};

// @baa 0x005a0d50
int C_005a0d50::sub_005a0d50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0e10 { int sub_005a0e10(void); };

// @baa 0x005a0e10
int C_005a0e10::sub_005a0e10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005a0e20 {
    int sub_005a0e20(int);
};

// @baa 0x005a0e20
int C_005a0e20::sub_005a0e20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005a0e30 {
    int sub_005a0e30();
};

// @baa 0x005a0e30
int C_005a0e30::sub_005a0e30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0e50 {
    int sub_005a0e50();
};

// @baa 0x005a0e50
int C_005a0e50::sub_005a0e50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005a0e70 {
    int sub_005a0e70(int);
};

// @baa 0x005a0e70
int C_005a0e70::sub_005a0e70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005a0e80 {
    int sub_005a0e80();
};

// @baa 0x005a0e80
int C_005a0e80::sub_005a0e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005a0ea0 {
    int sub_005a0ea0();
};

// @baa 0x005a0ea0
int C_005a0ea0::sub_005a0ea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct T_005a8f50;
// @baa 0x005a8f50
template INT TArray<T_005a8f50*>::RemoveItem(T_005a8f50* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005a8fd0 { void* Data; int Num; int Max; void sub_005a8fd0(); };

// @baa 0x005a8fd0
void C_005a8fd0::sub_005a8fd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_005a9030;
// @baa 0x005a9030
template INT TArray<T_005a9030*>::RemoveItem(T_005a9030* const&);

struct T_005a90f0;
// @baa 0x005a90f0
template INT TArray<T_005a90f0*>::RemoveItem(T_005a90f0* const&);

struct C_005a9220 { void* Data; int Num; int Max; void sub_005a9220(); };

// @baa 0x005a9220
void C_005a9220::sub_005a9220() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005a9360
int UObject::sub_005a9360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005a9370
void __stdcall sub_005a9370(int a0, int a1) {  }

// @baa 0x005a9380
int UObject::sub_005a9380(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x005a9390
int UObject::sub_005a9390(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005a93a0
int UObject::sub_005a93a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005a93c0
int UObject::sub_005a93c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005a93d0
int UObject::sub_005a93d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005a93f0
int UObject::sub_005a93f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005a9400
int UObject::sub_005a9400(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005a9420
int UObject::sub_005a9420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x005a9520
int UObject::sub_005a9520(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005a9540
int UObject::sub_005a9540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005a97a0 {
    int sub_005a97a0(int);
};

// @baa 0x005a97a0
int C_005a97a0::sub_005a97a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005a9ab0 {
    int sub_005a9ab0(int);
};

// @baa 0x005a9ab0
int C_005a9ab0::sub_005a9ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x005a9c50
int ULinkerLoad::sub_005a9c50(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + *param_1;
}

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x005a9d00
undefined4 * UObject::sub_005a9d00(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  return param_1;
}

// @baa 0x005a9d50
undefined4 * UObject::sub_005a9d50(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = 0xffffffff;
  return param_1;
}

struct S_005a9da0 {
  void sub_005a96c0();
  void sub_005a9da0();
};

// @baa 0x005a9da0
void S_005a9da0::sub_005a9da0() {
  sub_005a96c0();
}

// @baa 0x005a9db0
int UObject::sub_005a9db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x005a9dc0
int UObject::sub_005a9dc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005a9dd0
int UObject::sub_005a9dd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005a9de0
int UObject::sub_005a9de0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x005a9df0
int UObject::sub_005a9df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

// @baa 0x005a9e00
int UObject::sub_005a9e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x005a9e10
int UObject::sub_005a9e10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005a9eb0
int UObject::sub_005a9eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x005a9ec0
int UObject::sub_005a9ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_view_005aa020 {
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x005aa020
undefined4 UObject::sub_005aa020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005aa020 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005a96c0(void);
// @baa 0x005aa050
undefined4 UObject::sub_005aa050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005a96c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005ab010 { void* Data; int Num; int Max; void sub_005ab010(); };

// @baa 0x005ab010
void C_005ab010::sub_005ab010() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005ac890 { void* Data; int Num; int Max; void sub_005ac890(); };

// @baa 0x005ac890
void C_005ac890::sub_005ac890() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view_005ace20 {
    int sub_005a9b30(int, int);
};

// @baa 0x005ace20
int ULinkerLoad::sub_005ace20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005ace20 *)(this))->sub_005a9b30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_005ace50 {
    int sub_005a9b90(int, int);
};

// @baa 0x005ace50
int ULinkerLoad::sub_005ace50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005ace50 *)(this))->sub_005a9b90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_005ace80 {
    int sub_005a9bf0(int, int);
};

// @baa 0x005ace80
int ULinkerLoad::sub_005ace80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005ace80 *)(this))->sub_005a9bf0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

extern TArray<int> g_026a1ca4;
struct C_005aceb0 {
    int sub_005aceb0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x005aceb0
int C_005aceb0::sub_005aceb0()
{
    return g_026a1ca4(Index);
}

// @baa 0x005ad0d0
undefined4 UObject::sub_005ad0d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005a96c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005ad810 {
    int sub_005ad810();
};

// @baa 0x005ad810
int C_005ad810::sub_005ad810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
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

struct TConstSetBitIterator_005ad820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ad820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ad820& operator++();
};

TConstSetBitIterator_005ad820::TConstSetBitIterator_005ad820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ad820
TConstSetBitIterator_005ad820& TConstSetBitIterator_005ad820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ad870 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ad870(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ad870& operator++();
};

TConstSetBitIterator_005ad870::TConstSetBitIterator_005ad870(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ad870
TConstSetBitIterator_005ad870& TConstSetBitIterator_005ad870::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ad8c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ad8c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ad8c0& operator++();
};

TConstSetBitIterator_005ad8c0::TConstSetBitIterator_005ad8c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ad8c0
TConstSetBitIterator_005ad8c0& TConstSetBitIterator_005ad8c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ad910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ad910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ad910& operator++();
};

TConstSetBitIterator_005ad910::TConstSetBitIterator_005ad910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ad910
TConstSetBitIterator_005ad910& TConstSetBitIterator_005ad910::operator++()
{
    It.Advance();
    return *this;
}

struct C_005ad960 {
    int sub_005ad960();
};

// @baa 0x005ad960
int C_005ad960::sub_005ad960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct TConstSetBitIterator_005ad970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ad970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ad970& operator++();
};

TConstSetBitIterator_005ad970::TConstSetBitIterator_005ad970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ad970
TConstSetBitIterator_005ad970& TConstSetBitIterator_005ad970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ad9c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ad9c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ad9c0& operator++();
};

TConstSetBitIterator_005ad9c0::TConstSetBitIterator_005ad9c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ad9c0
TConstSetBitIterator_005ad9c0& TConstSetBitIterator_005ad9c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ada10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ada10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ada10& operator++();
};

TConstSetBitIterator_005ada10::TConstSetBitIterator_005ada10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ada10
TConstSetBitIterator_005ada10& TConstSetBitIterator_005ada10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ada60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ada60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ada60& operator++();
};

TConstSetBitIterator_005ada60::TConstSetBitIterator_005ada60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ada60
TConstSetBitIterator_005ada60& TConstSetBitIterator_005ada60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005adab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005adab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005adab0& operator++();
};

TConstSetBitIterator_005adab0::TConstSetBitIterator_005adab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005adab0
TConstSetBitIterator_005adab0& TConstSetBitIterator_005adab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005adb00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005adb00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005adb00& operator++();
};

TConstSetBitIterator_005adb00::TConstSetBitIterator_005adb00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005adb00
TConstSetBitIterator_005adb00& TConstSetBitIterator_005adb00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005adb50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005adb50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005adb50& operator++();
};

TConstSetBitIterator_005adb50::TConstSetBitIterator_005adb50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005adb50
TConstSetBitIterator_005adb50& TConstSetBitIterator_005adb50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005adba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005adba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005adba0& operator++();
};

TConstSetBitIterator_005adba0::TConstSetBitIterator_005adba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005adba0
TConstSetBitIterator_005adba0& TConstSetBitIterator_005adba0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_005af9d0 {
    int sub_005acfe0(int, int);
};

// @baa 0x005af9d0
int ULinkerLoad::sub_005af9d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005af9d0 *)(this))->sub_005acfe0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct C_view_005afa20 {
    int sub_005ad050(int, int);
};

// @baa 0x005afa20
int ULinkerLoad::sub_005afa20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005afa20 *)(this))->sub_005ad050((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_005b0570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0570& operator++();
};

TConstSetBitIterator_005b0570::TConstSetBitIterator_005b0570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0570
TConstSetBitIterator_005b0570& TConstSetBitIterator_005b0570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0590& operator++();
};

TConstSetBitIterator_005b0590::TConstSetBitIterator_005b0590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0590
TConstSetBitIterator_005b0590& TConstSetBitIterator_005b0590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b06f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b06f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b06f0& operator++();
};

TConstSetBitIterator_005b06f0::TConstSetBitIterator_005b06f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b06f0
TConstSetBitIterator_005b06f0& TConstSetBitIterator_005b06f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0740& operator++();
};

TConstSetBitIterator_005b0740::TConstSetBitIterator_005b0740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0740
TConstSetBitIterator_005b0740& TConstSetBitIterator_005b0740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0790& operator++();
};

TConstSetBitIterator_005b0790::TConstSetBitIterator_005b0790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0790
TConstSetBitIterator_005b0790& TConstSetBitIterator_005b0790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b07e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b07e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b07e0& operator++();
};

TConstSetBitIterator_005b07e0::TConstSetBitIterator_005b07e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b07e0
TConstSetBitIterator_005b07e0& TConstSetBitIterator_005b07e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0800& operator++();
};

TConstSetBitIterator_005b0800::TConstSetBitIterator_005b0800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0800
TConstSetBitIterator_005b0800& TConstSetBitIterator_005b0800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0850 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0850(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0850& operator++();
};

TConstSetBitIterator_005b0850::TConstSetBitIterator_005b0850(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0850
TConstSetBitIterator_005b0850& TConstSetBitIterator_005b0850::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b09f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b09f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b09f0& operator++();
};

TConstSetBitIterator_005b09f0::TConstSetBitIterator_005b09f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b09f0
TConstSetBitIterator_005b09f0& TConstSetBitIterator_005b09f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0a40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0a40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0a40& operator++();
};

TConstSetBitIterator_005b0a40::TConstSetBitIterator_005b0a40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0a40
TConstSetBitIterator_005b0a40& TConstSetBitIterator_005b0a40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0a60& operator++();
};

TConstSetBitIterator_005b0a60::TConstSetBitIterator_005b0a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0a60
TConstSetBitIterator_005b0a60& TConstSetBitIterator_005b0a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0ab0& operator++();
};

TConstSetBitIterator_005b0ab0::TConstSetBitIterator_005b0ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0ab0
TConstSetBitIterator_005b0ab0& TConstSetBitIterator_005b0ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0ad0& operator++();
};

TConstSetBitIterator_005b0ad0::TConstSetBitIterator_005b0ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0ad0
TConstSetBitIterator_005b0ad0& TConstSetBitIterator_005b0ad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0b20& operator++();
};

TConstSetBitIterator_005b0b20::TConstSetBitIterator_005b0b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0b20
TConstSetBitIterator_005b0b20& TConstSetBitIterator_005b0b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0b40& operator++();
};

TConstSetBitIterator_005b0b40::TConstSetBitIterator_005b0b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0b40
TConstSetBitIterator_005b0b40& TConstSetBitIterator_005b0b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0b90& operator++();
};

TConstSetBitIterator_005b0b90::TConstSetBitIterator_005b0b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0b90
TConstSetBitIterator_005b0b90& TConstSetBitIterator_005b0b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0bb0& operator++();
};

TConstSetBitIterator_005b0bb0::TConstSetBitIterator_005b0bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0bb0
TConstSetBitIterator_005b0bb0& TConstSetBitIterator_005b0bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0c00& operator++();
};

TConstSetBitIterator_005b0c00::TConstSetBitIterator_005b0c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0c00
TConstSetBitIterator_005b0c00& TConstSetBitIterator_005b0c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0c20& operator++();
};

TConstSetBitIterator_005b0c20::TConstSetBitIterator_005b0c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0c20
TConstSetBitIterator_005b0c20& TConstSetBitIterator_005b0c20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0c70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0c70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0c70& operator++();
};

TConstSetBitIterator_005b0c70::TConstSetBitIterator_005b0c70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0c70
TConstSetBitIterator_005b0c70& TConstSetBitIterator_005b0c70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0c90& operator++();
};

TConstSetBitIterator_005b0c90::TConstSetBitIterator_005b0c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0c90
TConstSetBitIterator_005b0c90& TConstSetBitIterator_005b0c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b0ce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b0ce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b0ce0& operator++();
};

TConstSetBitIterator_005b0ce0::TConstSetBitIterator_005b0ce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b0ce0
TConstSetBitIterator_005b0ce0& TConstSetBitIterator_005b0ce0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b1690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b1690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b1690& operator++();
};

TConstSetBitIterator_005b1690::TConstSetBitIterator_005b1690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b1690
TConstSetBitIterator_005b1690& TConstSetBitIterator_005b1690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b16e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b16e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b16e0& operator++();
};

TConstSetBitIterator_005b16e0::TConstSetBitIterator_005b16e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b16e0
TConstSetBitIterator_005b16e0& TConstSetBitIterator_005b16e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_005b21f0 {
    int sub_005acfe0(int, int);
};

// @baa 0x005b21f0
int ULinkerLoad::sub_005b21f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_005b21f0 *)(this))->sub_005acfe0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_005b23a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b23a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b23a0& operator++();
};

TConstSetBitIterator_005b23a0::TConstSetBitIterator_005b23a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b23a0
TConstSetBitIterator_005b23a0& TConstSetBitIterator_005b23a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b23c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b23c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b23c0& operator++();
};

TConstSetBitIterator_005b23c0::TConstSetBitIterator_005b23c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b23c0
TConstSetBitIterator_005b23c0& TConstSetBitIterator_005b23c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b23e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b23e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b23e0& operator++();
};

TConstSetBitIterator_005b23e0::TConstSetBitIterator_005b23e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b23e0
TConstSetBitIterator_005b23e0& TConstSetBitIterator_005b23e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_005b2400 {
    void sub_005b2400();
    int sub_005afb30(int);
};

// @baa 0x005b2400
void C_005b2400::sub_005b2400(void)
{
    int param_1 = (int)this;
  ((C_005b2400 *)((*(char **)((char *)this + 0x10))))->sub_005afb30(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_005b2420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b2420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b2420& operator++();
};

TConstSetBitIterator_005b2420::TConstSetBitIterator_005b2420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b2420
TConstSetBitIterator_005b2420& TConstSetBitIterator_005b2420::operator++()
{
    It.Advance();
    return *this;
}

struct C_005b2440 {
    void sub_005b2440();
    int sub_005afc90(int);
};

// @baa 0x005b2440
void C_005b2440::sub_005b2440(void)
{
    int param_1 = (int)this;
  ((C_005b2440 *)((*(char **)((char *)this + 0x10))))->sub_005afc90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005b2460 {
    void sub_005b2460();
    int sub_005afff0(int);
};

// @baa 0x005b2460
void C_005b2460::sub_005b2460(void)
{
    int param_1 = (int)this;
  ((C_005b2460 *)((*(char **)((char *)this + 0x10))))->sub_005afff0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005b2480 {
    void sub_005b2480();
    int sub_005b0150(int);
};

// @baa 0x005b2480
void C_005b2480::sub_005b2480(void)
{
    int param_1 = (int)this;
  ((C_005b2480 *)((*(char **)((char *)this + 0x10))))->sub_005b0150(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005b24a0 {
    void sub_005b24a0();
    int sub_005b02b0(int);
};

// @baa 0x005b24a0
void C_005b24a0::sub_005b24a0(void)
{
    int param_1 = (int)this;
  ((C_005b24a0 *)((*(char **)((char *)this + 0x10))))->sub_005b02b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005b24c0 {
    void sub_005b24c0();
    int sub_005b0410(int);
};

// @baa 0x005b24c0
void C_005b24c0::sub_005b24c0(void)
{
    int param_1 = (int)this;
  ((C_005b24c0 *)((*(char **)((char *)this + 0x10))))->sub_005b0410(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_005b2810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b2810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b2810& operator++();
};

TConstSetBitIterator_005b2810::TConstSetBitIterator_005b2810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b2810
TConstSetBitIterator_005b2810& TConstSetBitIterator_005b2810::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b3310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b3310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b3310& operator++();
};

TConstSetBitIterator_005b3310::TConstSetBitIterator_005b3310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b3310
TConstSetBitIterator_005b3310& TConstSetBitIterator_005b3310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b3360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b3360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b3360& operator++();
};

TConstSetBitIterator_005b3360::TConstSetBitIterator_005b3360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b3360
TConstSetBitIterator_005b3360& TConstSetBitIterator_005b3360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b33b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b33b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b33b0& operator++();
};

TConstSetBitIterator_005b33b0::TConstSetBitIterator_005b33b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b33b0
TConstSetBitIterator_005b33b0& TConstSetBitIterator_005b33b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b3400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b3400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b3400& operator++();
};

TConstSetBitIterator_005b3400::TConstSetBitIterator_005b3400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b3400
TConstSetBitIterator_005b3400& TConstSetBitIterator_005b3400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b3420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b3420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b3420& operator++();
};

TConstSetBitIterator_005b3420::TConstSetBitIterator_005b3420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b3420
TConstSetBitIterator_005b3420& TConstSetBitIterator_005b3420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b3470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b3470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b3470& operator++();
};

TConstSetBitIterator_005b3470::TConstSetBitIterator_005b3470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b3470
TConstSetBitIterator_005b3470& TConstSetBitIterator_005b3470::operator++()
{
    It.Advance();
    return *this;
}

void sub_005b2290();
// @baa 0x005b4590
void sub_005b4590(void) { sub_005b2290(); }

void sub_005b2310();
// @baa 0x005b45a0
void sub_005b45a0(void) { sub_005b2310(); }

struct TConstSetBitIterator_005b45b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b45b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b45b0& operator++();
};

TConstSetBitIterator_005b45b0::TConstSetBitIterator_005b45b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b45b0
TConstSetBitIterator_005b45b0& TConstSetBitIterator_005b45b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b45d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b45d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b45d0& operator++();
};

TConstSetBitIterator_005b45d0::TConstSetBitIterator_005b45d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b45d0
TConstSetBitIterator_005b45d0& TConstSetBitIterator_005b45d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b45f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b45f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b45f0& operator++();
};

TConstSetBitIterator_005b45f0::TConstSetBitIterator_005b45f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b45f0
TConstSetBitIterator_005b45f0& TConstSetBitIterator_005b45f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b4800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b4800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b4800& operator++();
};

TConstSetBitIterator_005b4800::TConstSetBitIterator_005b4800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b4800
TConstSetBitIterator_005b4800& TConstSetBitIterator_005b4800::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_005b4850 {
    int sub_005b24e0(int);
};

// @baa 0x005b4850
void UTexture2D::sub_005b4850(void)
{
    int param_1 = (int)this;
  ((C_view_005b4850 *)((*(char **)((char *)this + 0x10))))->sub_005b24e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005b5470 {
    int sub_005b5470();
};

int sub_005b0870(void);
// @baa 0x005b5470
int C_005b5470::sub_005b5470(void)
{
    int param_1 = (int)this;

  sub_005b0870();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b08d0(void);
// @baa 0x005b5490
int UTexture2D::sub_005b5490(void)
{
    int param_1 = (int)this;

  sub_005b08d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b0930(void);
// @baa 0x005b54b0
int UTexture2D::sub_005b54b0(void)
{
    int param_1 = (int)this;

  sub_005b0930();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b0990(void);
// @baa 0x005b54d0
int UTexture2D::sub_005b54d0(void)
{
    int param_1 = (int)this;

  sub_005b0990();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_005b54f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b54f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b54f0& operator++();
};

TConstSetBitIterator_005b54f0::TConstSetBitIterator_005b54f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b54f0
TConstSetBitIterator_005b54f0& TConstSetBitIterator_005b54f0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x005b58e0
// @baa 0x005b58f0
IMPLEMENT_CLASS_AT(ULinkerSave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnLinker.cpp", 4463);

int sub_0059c1a0(void);
int sub_005b56d0(...);
extern undefined4 g_0268d070;
// @baa 0x005b5900
int sub_005b5900(void)
{
  if (g_0268d070 == 0) {
    g_0268d070 = sub_005b56d0(L"Core");
    sub_0059c1a0();
  }
  return g_0268d070;
}

struct TConstSetBitIterator_005b5930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b5930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b5930& operator++();
};

TConstSetBitIterator_005b5930::TConstSetBitIterator_005b5930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b5930
TConstSetBitIterator_005b5930& TConstSetBitIterator_005b5930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005b5a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b5a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b5a00& operator++();
};

TConstSetBitIterator_005b5a00::TConstSetBitIterator_005b5a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b5a00
TConstSetBitIterator_005b5a00& TConstSetBitIterator_005b5a00::operator++()
{
    It.Advance();
    return *this;
}

int sub_005ae290(void);
// @baa 0x005b5c60
int UTexture2D::sub_005b5c60(void)
{
    int param_1 = (int)this;

  sub_005ae290();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae350(void);
// @baa 0x005b5cf0
int UTexture2D::sub_005b5cf0(void)
{
    int param_1 = (int)this;

  sub_005ae350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae3b0(void);
// @baa 0x005b5d10
int UTexture2D::sub_005b5d10(void)
{
    int param_1 = (int)this;

  sub_005ae3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae410(void);
// @baa 0x005b5d30
int UTexture2D::sub_005b5d30(void)
{
    int param_1 = (int)this;

  sub_005ae410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b6980
// @baa 0x005b6a40
struct C_view_005b7470 {
    int sub_005b4ec0(int, int);
};

// @baa 0x005b7470
void ULinkerLoad::sub_005b7470(void)
{
    int param_1 = (int)this;
  ((C_view_005b7470 *)(this))->sub_005b4ec0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_005b7580 {
    int sub_005b4f80(int, int);
};

// @baa 0x005b7580
undefined4 ULinkerLoad::sub_005b7580(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005b7580 *)(this))->sub_005b4f80(param_2, param_3);
  return param_1;
}

struct C_view_005b75a0 {
    int sub_005b4fe0(int, int);
};

// @baa 0x005b75a0
undefined4 ULinkerLoad::sub_005b75a0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005b75a0 *)(this))->sub_005b4fe0(param_2, param_3);
  return param_1;
}

struct C_view_005b75c0 {
    int sub_005b5040(int, int);
};

// @baa 0x005b75c0
undefined4 ULinkerLoad::sub_005b75c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005b75c0 *)(this))->sub_005b5040(param_2, param_3);
  return param_1;
}

struct C_view_005b75e0 {
    int sub_005b50a0(int, int);
};

// @baa 0x005b75e0
int ULinkerLoad::sub_005b75e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b75e0 *)(this))->sub_005b50a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b7600 {
    int sub_005b5120(int, int);
};

// @baa 0x005b7600
int ULinkerLoad::sub_005b7600(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b7600 *)(this))->sub_005b5120(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b7620 {
    int sub_005b51a0(int, int);
};

// @baa 0x005b7620
int ULinkerLoad::sub_005b7620(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b7620 *)(this))->sub_005b51a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b7640 {
    int sub_005b5220(int, int);
};

// @baa 0x005b7640
int ULinkerLoad::sub_005b7640(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b7640 *)(this))->sub_005b5220(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b7660 {
    int sub_005b52a0(int, int);
};

// @baa 0x005b7660
int ULinkerLoad::sub_005b7660(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b7660 *)(this))->sub_005b52a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b7680 {
    int sub_005b5310(int, int);
};

// @baa 0x005b7680
int ULinkerLoad::sub_005b7680(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b7680 *)(this))->sub_005b5310(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b76a0 {
    int sub_005b5380(int, int);
};

// @baa 0x005b76a0
int ULinkerLoad::sub_005b76a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b76a0 *)(this))->sub_005b5380(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005b76c0 {
    int sub_005b53f0(int, int);
};

// @baa 0x005b76c0
int ULinkerLoad::sub_005b76c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005b76c0 *)(this))->sub_005b53f0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_005b76e0 {
    int sub_005b76e0();
};

// @baa 0x005b76e0
int C_005b76e0::sub_005b76e0(void)
{
    int param_1 = (int)this;

  sub_005b0870();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b7700
int UTexture2D::sub_005b7700(void)
{
    int param_1 = (int)this;

  sub_005b08d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b7720
int UTexture2D::sub_005b7720(void)
{
    int param_1 = (int)this;

  sub_005b0930();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b7740
int UTexture2D::sub_005b7740(void)
{
    int param_1 = (int)this;

  sub_005b0990();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b5660(int arg1, int arg2);
// @baa 0x005b7940
int sub_005b7940(int arg1, int arg2)
{
    return sub_005b5660(arg1, arg2);
}

int sub_0059a670(void);
int sub_005b6980(...);
extern undefined4 g_0268d0b0;
// @baa 0x005b79b0
int sub_005b79b0(void)
{
  if (g_0268d0b0 == 0) {
    g_0268d0b0 = sub_005b6980(L"Core");
    sub_0059a670();
  }
  return g_0268d0b0;
}

struct TConstSetBitIterator_005b7a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005b7a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005b7a50& operator++();
};

TConstSetBitIterator_005b7a50::TConstSetBitIterator_005b7a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005b7a50
TConstSetBitIterator_005b7a50& TConstSetBitIterator_005b7a50::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x005b7bf0
int UTexture2D::sub_005b7bf0(void)
{
    int param_1 = (int)this;

  sub_005ae290();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b7c10
int UTexture2D::sub_005b7c10(void)
{
    int param_1 = (int)this;

  sub_005ae350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b7c30
int UTexture2D::sub_005b7c30(void)
{
    int param_1 = (int)this;

  sub_005ae3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005b7c50
int UTexture2D::sub_005b7c50(void)
{
    int param_1 = (int)this;

  sub_005ae410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005b5c80();
// @baa 0x005b7c70
void sub_005b7c70(void) { sub_005b5c80(); }

void sub_005b6b90();
// @baa 0x005b7c80
void sub_005b7c80(void) { sub_005b6b90(); }

void sub_005b6c00();
// @baa 0x005b7c90
void sub_005b7c90(void) { sub_005b6c00(); }

// @baa 0x005b7e20
IMPLEMENT_CLASS_AT(ULinkerLoad, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnLinker.cpp", 4462);

// @baa 0x005b7f30
bool ULinkerLoad::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x005b7f70
// @baa 0x005b8080
bool ULinkerSave::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_005b6ed0();
// @baa 0x005b8140
void sub_005b8140(void) { sub_005b6ed0(); }

void sub_005b7040();
// @baa 0x005b81a0
void sub_005b81a0(void) { sub_005b7040(); }

void sub_005b70a0();
// @baa 0x005b81b0
void sub_005b81b0(void) { sub_005b70a0(); }

void sub_005b7110();
// @baa 0x005b81c0
void sub_005b81c0(void) { sub_005b7110(); }

void sub_005b7230();
// @baa 0x005b8210
void sub_005b8210(void) { sub_005b7230(); }

void sub_005b7350();
// @baa 0x005b8260
void sub_005b8260(void) { sub_005b7350(); }

struct C_view_005b82f0 {
    int sub_005b4f80(int, int);
};

// @baa 0x005b82f0
int ULinkerLoad::sub_005b82f0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005b82f0 *)(this))->sub_005b4f80(param_2, param_4);
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
    void sub_005b4870(int, int);
};

struct C_005b8320 {
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
    void sub_005b8320(void);
};

// @baa 0x005b8320
void C_005b8320::sub_005b8320(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_005b4870(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_005b8340 {
    int sub_005b4fe0(int, int);
};

// @baa 0x005b8340
int ULinkerLoad::sub_005b8340(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005b8340 *)(this))->sub_005b4fe0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_005b8370 {
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
    void sub_0057fe20(int, int);
};

struct C_005b8370 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_005b8370* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_005b8370(void);
};

// @baa 0x005b8370
void C_005b8370::sub_005b8370(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0057fe20(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_005b8390 {
    int sub_005b5040(int, int);
};

// @baa 0x005b8390
int ULinkerLoad::sub_005b8390(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005b8390 *)(this))->sub_005b5040(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

// @baa 0x005b9db0
void sub_005b9db0(void) { sub_005b6c00(); }

// @baa 0x005bad40
int UTexture2D::sub_005bad40(void)
{
    int param_1 = (int)this;

  return param_1 + -0xe8;
}

struct A_005bad50 { virtual void sub_005bb330(); char pad[228]; };

struct B_005bad50 { virtual void sub_005bb330(); };

struct C_005bad50 : A_005bad50, B_005bad50 { virtual void sub_005bb330(); C_005bad50(); };

C_005bad50::C_005bad50() {}

// @baa 0x005bad50
void C_005bad50::sub_005bb330() {}

struct C_005bafa0 { void sub_005b8460(int); C_005bafa0 *sub_005bafa0(int); };

// @baa 0x005bafa0
C_005bafa0 *C_005bafa0::sub_005bafa0(int a) { sub_005b8460(a); return this; }

struct C_view_005bb0b0 {
    int sub_005b84c0(int);
};

// @baa 0x005bb0b0
undefined4 UTexture2D::sub_005bb0b0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005bb0b0 *)(this))->sub_005b84c0(param_2);
  return param_1;
}

struct C_005bb0d0 {
    undefined4 * sub_005bb0d0(undefined4 *);
    int sub_005b8460(int);
};

// @baa 0x005bb0d0
undefined4 * C_005bb0d0::sub_005bb0d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_005bb0d0 *)(((char *)this + 4)))->sub_005b8460(param_2[1]);
  return param_1;
}

struct C_005bb0f0 {
    undefined4 * sub_005bb0f0(undefined4 *);
    int sub_005b8460(int);
};

// @baa 0x005bb0f0
undefined4 * C_005bb0f0::sub_005bb0f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_005bb0f0 *)(((char *)this + 4)))->sub_005b8460(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

struct C_005bb150 {
    undefined4 sub_005bb150(byte);
    int sub_005b5c80();
};

// @baa 0x005bb150
undefined4 C_005bb150::sub_005bb150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_005bb150 *)(((char *)this + 4)))->sub_005b5c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005bb180 {
    undefined4 * sub_005bb180(undefined4 *);
    int sub_005b8460(int);
};

// @baa 0x005bb180
undefined4 * C_005bb180::sub_005bb180(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_005bb180 *)(((char *)this + 4)))->sub_005b8460((int)(param_2 + 1));
  return param_1;
}

int sub_005bb1a0(void);
int sub_005c7a70(...);
// @baa 0x005bb330
undefined4 ULinkerLoad::sub_005bb330(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005bb1a0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x690);
  }
  return param_1;
}

struct M_005bb360 { void sub_005b5c80(); };

struct C_005bb360 { char pad[4]; M_005bb360 m; void sub_005bb360(); };

// @baa 0x005bb360
void C_005bb360::sub_005bb360() { m.sub_005b5c80(); }

// @baa 0x005bb580
struct C_view_005bb590 {
    int sub_005b5c80();
};

// @baa 0x005bb590
undefined4 ULinkerLoad::sub_005bb590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005bb590 *)(((char *)this + 4)))->sub_005b5c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x005bb5c0
int sub_005b7e20(void);
int sub_005bb5c0(...);
extern undefined4 g_0268d0b4;
// @baa 0x005bb8e0
int sub_005bb8e0(void)
{
  if (g_0268d0b4 == 0) {
    g_0268d0b4 = sub_005bb5c0(L"Core");
    sub_005b7e20();
  }
  return g_0268d0b4;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x005bb910
void sub_005bb910(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268d0b4 == 0) {
    g_0268d0b4 = sub_005bb5c0(L"Core");
    sub_005b7e20();
  }
  sub_005e1960(g_0268d0b4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_005ae2f0(void);
// @baa 0x005bbd70
int UTexture2D::sub_005bbd70(void)
{
    int param_1 = (int)this;

  sub_005ae2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005bddf0 {
    void sub_005bddf0();
    int sub_005bbae0(int);
};

// @baa 0x005bddf0
void C_005bddf0::sub_005bddf0(void)
{
    int param_1 = (int)this;
  ((C_005bddf0 *)((*(char **)((char *)this + 0x10))))->sub_005bbae0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x005bde80
int UTexture2D::sub_005bde80(void)
{
    int param_1 = (int)this;

  sub_005ae2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005bfa70
void ULinkerLoad::sub_005bfa70(void) { *(int*)((char*)this + 360) = 1; }

void sub_005bde10();
// @baa 0x005c01b0
void sub_005c01b0(void) { sub_005bde10(); }

// @baa 0x005c01c0
int ULinkerLoad::sub_005c01c0(void)
{
    int param_1 = (int)this;

  sub_005ae2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005c04c0
void sub_005c04c0(void) { sub_005bde10(); }

int __stdcall sub_005d24f0(int, int, int, int);
// @baa 0x005d5670
undefined4 UObject::sub_005d5670(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  sub_005d24f0(param_3,0,1,0);
  return param_1;
}

extern undefined4 g_026a4bac;
// @baa 0x00629b70
void sub_00629b70(void)
{
  g_026a4bac = 1;
  return;
}

struct C_00648890 { void* Data; int Num; int Max; void sub_00648890(); };

// @baa 0x00648890
void C_00648890::sub_00648890() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00648930 { void* Data; int Num; int Max; void sub_00648930(); };

// @baa 0x00648930
void C_00648930::sub_00648930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006489d0 { void* Data; int Num; int Max; void sub_006489d0(); };

// @baa 0x006489d0
void C_006489d0::sub_006489d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00648a70 { void* Data; int Num; int Max; void sub_00648a70(); };

// @baa 0x00648a70
void C_00648a70::sub_00648a70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00648ad0 { int a, b, c; C_00648ad0(); };

// @baa 0x00648ad0
C_00648ad0::C_00648ad0() : a(0), b(0), c(0) {}

struct D_01e22e50 { void sub_0054eec0(); };

extern D_01e22e50 g_0268d7ac;
// @baa 0x01e22e50
void sub_01e22e50() { g_0268d7ac.sub_0054eec0(); }
