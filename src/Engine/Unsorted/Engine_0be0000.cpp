// Engine_0be0000.cpp (part 1 of 4): 96 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00be0e00();
    int sub_00be0bf0(int, int);
};

// @baa 0x00be0e00
undefined4 C::sub_00be0e00(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 4))))->sub_00be0bf0(*(undefined4 *)(param_1 + 8), *(undefined4 *)(param_1 + 0xc));
  return 0x10;
}

extern char g_026c02c0[];
// @baa 0x00be23b0
int sub_00be23b0(void) { return (int)g_026c02c0; }

// @baa 0x00be2500
char* ULensFlare::sub_00be2500(void) { return (char*)this + 104; }

int sub_006efb40(void);
extern undefined * g_020202f8;
// @baa 0x00be2510
void ULensFlare::sub_00be2510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020202f8);
  sub_006efb40();
  return;
}

// @baa 0x00be25f0
int sub_00be25f0(void) { return 1670; }

// @baa 0x00be2600
int sub_00be2600(void) { return 0; }

int sub_0053dfa0(...);
// @baa 0x00be2610
undefined4 * ULensFlare::sub_00be2610(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020202f8);
  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E { BYTE Bytes[24]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00be2760(INT Index);
};

// @baa 0x00be2760
E* S::sub_00be2760(INT Index)
{
    return &Items(Index);
}

struct S_00be27b0 {
    TArray<E> Items; // 0x00
    const E* sub_00be27b0(INT Index) const;
};

// @baa 0x00be27b0
const E* S_00be27b0::sub_00be27b0(INT Index) const
{
    return &Items(Index);
}

int sub_00be2700(void);
// @baa 0x00be2860
undefined4 ULensFlare::sub_00be2860(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00be2700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00be2800(void);
// @baa 0x00be28a0
undefined4 ULensFlare::sub_00be28a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00be2800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00bdf2a0(void);
// @baa 0x00be28e0
undefined4 ULensFlare::sub_00be28e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bdf2a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00be2900
void __stdcall sub_00be2900(int a0, int a1) {  }

struct C_00be2ac0{
void sub_00be2ac0();
};

extern undefined4*g_026b0d94;
// @baa 0x00be2ac0
void C_00be2ac0::sub_00be2ac0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00be2ae0{
void sub_00be2ae0();
};

extern undefined4*g_026c00f8;
// @baa 0x00be2ae0
void C_00be2ae0::sub_00be2ae0(void)
{
int param_1=(int)this;

int iVar1;
int iVar2;

iVar2=(int)(g_026c00f8);
iVar1=*(int*)(param_1+0x19c);
if(g_026c00f8!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(g_026c00f8));
}
*(int*)(param_1+0x19c)=iVar2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

int sub_0053df40(...);
extern undefined * g_0202022c;
// @baa 0x00be2b30
undefined4 * sub_00be2b30(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x18,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_0202022c);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00be2b60 {
    FString sub_00be2b60();
};

// @baa 0x00be2b60
FString C_00be2b60::sub_00be2b60()
{
    return TEXT("FFluidGPUResource");
}

struct C_00be2b90 {
    void sub_00be2b90();
};

int sub_00656790(void);
extern undefined * g_02020298;
// @baa 0x00be2b90
void C_00be2b90::sub_00be2b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02020298);
  sub_00656790();
  return;
}

// @baa 0x00be2ba0
int __stdcall sub_00be2ba0(int a0, int a1) { return 0; }

struct C_00be5100{
void sub_00be5100();
};

// @baa 0x00be5100
void C_00be5100::sub_00be5100(void)
{
int param_1=(int)this;

int iVar1;
int iVar2;
int*piVar3;

piVar3=(int*)(param_1+0x5c);
iVar2=3;
do{
iVar1=piVar3[-3];
piVar3[-3]=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar1));
}
iVar1=*piVar3;
*piVar3=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x230))((int)(iVar1));
}
piVar3=piVar3+1;
iVar2=iVar2+-1;
}while(iVar2!=0);
iVar2=*(int*)(param_1+0x68);
*(undefined4*)(param_1+0x68)=0;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar2));
}
iVar2=*(int*)(param_1+0x6c);
*(undefined4*)(param_1+0x6c)=0;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x230))((int)(iVar2));
}
return;
}

extern undefined * g_02020264;
// @baa 0x00be51f0
undefined4 * sub_00be51f0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x3c,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *puVar1 = (undefined4)(&g_02020264);
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00be5350{
void sub_00be5350();
};

// @baa 0x00be5350
void C_00be5350::sub_00be5350(void)
{
int param_1=(uint)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_view{
int sub_00be03b0();
int sub_00be2260();
};

// @baa 0x00be57d0
void ULensFlare::sub_00be57d0(void)
{
int param_1=(int)this;
int iVar1;
if(*(int*)(param_1+0x14)!=0){
((C_view*)((*(char**)((char*)this+0x18))))->sub_00be03b0();
if(*(int*)(param_1+0x20)!=0){
((C_view*)(this))->sub_00be2260();
}
}
iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

// @baa 0x00be5810
undefined4 * ULensFlare::sub_00be5810(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02020298);
  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00be58b0 {
    FString sub_00be58b0();
};

// @baa 0x00be58b0
FString C_00be58b0::sub_00be58b0()
{
    return TEXT("Fluids Vertex Factory");
}

// @baa 0x00be58e0
undefined4 * ULensFlare::sub_00be58e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02020298);
  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00be59a0 { void* Data; int Num; int Max; void sub_00be59a0(); };

// @baa 0x00be59a0
void C_00be59a0::sub_00be59a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00be5a00 {
    void sub_00be5a00();
};

// @baa 0x00be5a00
void C_00be5a00::sub_00be5a00(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct S_00be9030 { int sub_00be8d30(); };

struct C_00be9030 { int a; C_00be9030(S_00be9030 *); };

// @baa 0x00be9030
C_00be9030::C_00be9030(S_00be9030 *s) : a(s->sub_00be8d30()) {}

struct S_00be9050 { int sub_00be8d90(); };

struct C_00be9050 { int a; C_00be9050(S_00be9050 *); };

// @baa 0x00be9050
C_00be9050::C_00be9050(S_00be9050 *s) : a(s->sub_00be8d90()) {}

struct S_00be9070 { int sub_00be8df0(); };

struct C_00be9070 { int a; C_00be9070(S_00be9070 *); };

// @baa 0x00be9070
C_00be9070::C_00be9070(S_00be9070 *s) : a(s->sub_00be8df0()) {}

struct S_00be9090 { int sub_00be8e50(); };

struct C_00be9090 { int a; C_00be9090(S_00be9090 *); };

// @baa 0x00be9090
C_00be9090::C_00be9090(S_00be9090 *s) : a(s->sub_00be8e50()) {}

struct S_00be90b0 { int sub_00be8eb0(); };

struct C_00be90b0 { int a; C_00be90b0(S_00be90b0 *); };

// @baa 0x00be90b0
C_00be90b0::C_00be90b0(S_00be90b0 *s) : a(s->sub_00be8eb0()) {}

// @baa 0x00be90d0
IMPLEMENT_CLASS_AT(AFluidSurfaceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidSurfaceActor.cpp", 9);

// @baa 0x00be9130
int AFluidSurfaceActor::vf_2dc(void) { return 1; }

// @baa 0x00be9140
void* AFluidSurfaceActor::vf_2f8() { return this; }

// @baa 0x00be9150
// @baa 0x00be91e0
IMPLEMENT_CLASS_AT(AFluidSurfaceActorMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidSurfaceActor.cpp", 8);

// @baa 0x00be9240
int sub_00bdc640(void);
int sub_00beb2d0(...);
extern undefined4 g_026c0024;
// @baa 0x00bebad0
int sub_00bebad0(void)
{
  if (g_026c0024 == 0) {
    g_026c0024 = sub_00beb2d0(L"Engine");
    sub_00bdc640();
  }
  return g_026c0024;
}

// @baa 0x00bebd90
// @baa 0x00bebea0
bool AFluidSurfaceActorMovable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bec710
void sub_00bec710(void) {  }

// @baa 0x00bec720
float10 sub_00bec720(double param_1)
{
  return (float10)param_1;
}

struct C_00bec740 { int sub_00bec740(void); };

// @baa 0x00bec740
int C_00bec740::sub_00bec740(void) { return *(int*)((char*)this + 76); }

// @baa 0x00bec750
int sub_00bec750(int a0, int a1) { return a1; }

// @baa 0x00bec760
int sub_00bec760(int a0, int a1) { return a1; }

// @baa 0x00bec770
int sub_00bec770(int a0, int a1) { return a1; }

// @baa 0x00bec780
int sub_00bec780(int a0, int a1) { return a1; }

// @baa 0x00bec830
undefined4 sub_00bec830(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00bec8e0
undefined4 sub_00bec8e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00bec910
IMPLEMENT_CLASS_AT(UDwTriovizEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DwTrioviz\\DwTriovizProcessEffect.cpp", 16);

// @baa 0x00bec970
// @baa 0x00bec990
// @baa 0x00becaa0
int UDwTriovizEffect::vf_000(void) { return 1; }

// @baa 0x00becab0
bool UDwTriovizEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00becaf0
IMPLEMENT_CLASS_AT(UFaceFXAnimSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFaceFXAnimSet.cpp", 14);

// @baa 0x00becc00
int UFaceFXAnimSet::vf_000(void) { return 1; }

// @baa 0x00becc10
bool UFaceFXAnimSet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00becc50 { int sub_00becc50(void); };

// @baa 0x00becc50
int C_00becc50::sub_00becc50(void) { return *(int*)((char*)this + 52); }

struct C_00becdc0 { int sub_00becdc0(void); };

// @baa 0x00becdc0
int C_00becdc0::sub_00becdc0(void) { return *(int*)((char*)this + 52); }

// @baa 0x00becf70
void sub_00becf70(void) {  }

// @baa 0x00bee520
int URFMODSound::vf_0d4(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x134) + 0x13c +
         ((*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0x50)) * 3 + *(int *)(param_1 + 0x98)) * 4
         + *(int *)(param_1 + 0x88);
}

struct C_00bee630{
int sub_00bee630(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00bee630
int C_00bee630::sub_00bee630(undefined4*param_2)
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

struct S_00bee690 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bee690(INT Index);
};

// @baa 0x00bee690
DWORD* S_00bee690::sub_00bee690(INT Index)
{
    return &Items(Index);
}

struct C_00bee6e0 {
    int sub_00bee6e0(int);
};

// @baa 0x00bee6e0
int C_00bee6e0::sub_00bee6e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00bee6f0 {
    int sub_00bee6f0(int);
};

// @baa 0x00bee6f0
int C_00bee6f0::sub_00bee6f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00bee700
void __stdcall sub_00bee700(int a0, int a1) {  }

struct C_00bee710 {
    int sub_00bee710(int);
};

// @baa 0x00bee710
int C_00bee710::sub_00bee710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00bee720
void __stdcall sub_00bee720(int a0, int a1) {  }

struct C_00bee730 { int sub_00bee730(void); };

// @baa 0x00bee730
int C_00bee730::sub_00bee730(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00bee740 { int sub_00bee740(void); };

// @baa 0x00bee740
int C_00bee740::sub_00bee740(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00bee780 { int sub_00544d40(int); };

// @baa 0x00bee780
int sub_00bee780(S_00bee780 *s, int a) { return s->sub_00544d40(a); }

struct C_00bee790 { int sub_00bee790(void); };

// @baa 0x00bee790
int C_00bee790::sub_00bee790(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x00bee7d0
void sub_00bee7d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00bee7e0 {
    int sub_00bee7e0(int);
};

// @baa 0x00bee7e0
int C_00bee7e0::sub_00bee7e0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00bee7f0 {
    int sub_00bee7f0(int);
};

// @baa 0x00bee7f0
int C_00bee7f0::sub_00bee7f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00bee830
void sub_00bee830(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00bee840 {
    int sub_00bee840(int);
};

// @baa 0x00bee840
int C_00bee840::sub_00bee840(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00bee850 {
    int sub_00bee850(int);
};

// @baa 0x00bee850
int C_00bee850::sub_00bee850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bee8b0 {
    int sub_00bee8b0(int);
};

// @baa 0x00bee8b0
int C_00bee8b0::sub_00bee8b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00bee8c0 {
    int sub_00bee8c0(int);
};

// @baa 0x00bee8c0
int C_00bee8c0::sub_00bee8c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00bee8d0 {
    int sub_00bee8d0();
};

// @baa 0x00bee8d0
int C_00bee8d0::sub_00bee8d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bee8f0 {
    int sub_00bee8f0();
};

// @baa 0x00bee8f0
int C_00bee8f0::sub_00bee8f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bee910 {
    int sub_00bee910();
};

// @baa 0x00bee910
int C_00bee910::sub_00bee910(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bee930 {
    int sub_00bee930();
};

// @baa 0x00bee930
int C_00bee930::sub_00bee930(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bee950 {
    int sub_00bee950();
};

// @baa 0x00bee950
int C_00bee950::sub_00bee950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bee960 {
    int sub_00bee960();
};

// @baa 0x00bee960
int C_00bee960::sub_00bee960(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bee980 {
    int sub_00bee980();
};

// @baa 0x00bee980
int C_00bee980::sub_00bee980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bee990 {
    int sub_00bee990();
};

// @baa 0x00bee990
int C_00bee990::sub_00bee990(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bee9b0 {
    int sub_00bee9b0();
};

// @baa 0x00bee9b0
int C_00bee9b0::sub_00bee9b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00bee9c0 {
    void sub_00bee9c0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00bee9c0
void C_00bee9c0::sub_00bee9c0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00beeff0 { int a, b, c; C_00beeff0(); };

// @baa 0x00beeff0
C_00beeff0::C_00beeff0() : a(0), b(0), c(0) {}

struct C_00bef830 {
    int sub_00bef830(int);
};

// @baa 0x00bef830
int C_00bef830::sub_00bef830(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bef8c0 {
    int sub_00bef8c0(int);
};

// @baa 0x00bef8c0
int C_00bef8c0::sub_00bef8c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

void sub_00bef630();
// @baa 0x00befda0
void sub_00befda0(void) { sub_00bef630(); }
