// UnParticleComponents.cpp (part 1 of 4): 235 functions
// Placed here by: neighbours 143, class 74, callers 9, file 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

inline void* operator new(unsigned int, void* Where) throw() { return Where; }

struct FTickableObject_ : public FTickableObject {
    FTickableObject_();
    virtual void Tick(FLOAT DeltaTime);
};

struct FTickableArray : public TArray<FTickableObject_*> {
    INT sub_0053e430(INT Count);
};

extern FTickableArray g_02676180;
// @baa 0x00546ce0
FTickableObject_::FTickableObject_()
{
    INT Index = g_02676180.sub_0053e430(1);
    new(&g_02676180.GetTypedData()[Index]) FTickableObject_*(this);
}

typedef uint size_t;

struct C {
    int sub_007b1c20(int);
    int sub_007a8510(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x007b1c20
int C::sub_007b1c20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_007a8510(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_00b39570 {
    int sub_00b39570(int);
    int sub_00b34a30(int);
};

// @baa 0x00b39570
int C_00b39570::sub_00b39570(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00b39570 *)(this))->sub_00b34a30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

// @baa 0x00b511a0
IMPLEMENT_CLASS_AT(UParticleSystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 20);

// @baa 0x00b512b0
int UParticleSystem::vf_000(void) { return 1; }

// @baa 0x00b512c0
bool UParticleSystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b51300
IMPLEMENT_CLASS_AT(UParticleEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 21);

// @baa 0x00b51410
int UParticleEmitter::vf_000(void) { return 1; }

// @baa 0x00b51420
bool UParticleEmitter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b51460
int UParticleSpriteEmitter::vf_000(void) { return 1; }

// @baa 0x00b51470
IMPLEMENT_CLASS_AT(UParticleSystemComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 23);

// @baa 0x00b51580
int UParticleSystemComponent::vf_000(void) { return 1; }

// @baa 0x00b51590
bool UParticleSystemComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b515d0
IMPLEMENT_CLASS_AT(UParticleLODLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 24);

// @baa 0x00b516e0
int UParticleLODLevel::vf_000(void) { return 1; }

// @baa 0x00b516f0
bool UParticleLODLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b51730
IMPLEMENT_CLASS_AT(UParticleSystemReplay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 25);

// @baa 0x00b51840
int UParticleSystemReplay::vf_000(void) { return 1; }

// @baa 0x00b51850
bool UParticleSystemReplay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b51890
int UPhysXParticleSystemComponent::vf_000(void) { return 1; }

// @baa 0x00b51920
uint AEmitter::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1a8) + 0x194) >> 9 & 1;
}

// @baa 0x00b519d0
void UParticleEmitter::sub_00b519d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}

// @baa 0x00b519f0
char* UParticleEmitter::sub_00b519f0(void) { return (char*)this + 48; }

// @baa 0x00b51a00
void UParticleEmitter::vf_118(int a0) {  }

// @baa 0x00b51a10
void __stdcall sub_00b51a10(int a0) {  }

// @baa 0x00b51a20
undefined1 UParticleSystem::vf_10c(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x31);
}

// @baa 0x00b51a30
void UParticleSystem::vf_118(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x31) = param_2;
  return;
}

// @baa 0x00b51a40
void sub_00b51a40(void) {  }

// @baa 0x00b51a80
int UParticleSystemComponent::vf_024(void) { return 1; }

// @baa 0x00b51ba0
void UParticleSystemComponent::sub_00b51ba0(int param_2)
{
    int param_1 = (int)this;

  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x20c) = param_2;
  return;
}

// @baa 0x00b51bc0
int UParticleSystemComponent::sub_00b51bc0(void) { return *(int*)((char*)this + 516); }

// @baa 0x00b51bd0
int UParticleSystemComponent::sub_00b51bd0(void) { return *(int*)((char*)this + 524); }

// @baa 0x00b51c00
uint UParticleSystemComponent::sub_00b51c00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1cc) >> 0xb & 1;
}

// @baa 0x00b57ac0
int UParticleSystem::vf_110(void) { return *(int*)((char*)this + 116); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b57ad0(INT Index);
};

// @baa 0x00b57ad0
DWORD* S::sub_00b57ad0(INT Index)
{
    return &Items(Index);
}

struct C_00b57b20{
int sub_00b57b20(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00b57b20
int C_00b57b20::sub_00b57b20(undefined4*param_2)
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

struct S_00b57b80 {
    TArray<E> Items; // 0x00
    E* sub_00b57b80(INT Index);
};

// @baa 0x00b57b80
E* S_00b57b80::sub_00b57b80(INT Index)
{
    return &Items(Index);
}

struct E_00b57bd0 { BYTE Bytes[44]; };

struct S_00b57bd0 {
    TArray<E_00b57bd0> Items; // 0x00
    E_00b57bd0* sub_00b57bd0(INT Index);
};

// @baa 0x00b57bd0
E_00b57bd0* S_00b57bd0::sub_00b57bd0(INT Index)
{
    return &Items(Index);
}

struct E_00b57c20 { BYTE Bytes[40]; };

struct S_00b57c20 {
    TArray<E_00b57c20> Items; // 0x00
    E_00b57c20* sub_00b57c20(INT Index);
};

// @baa 0x00b57c20
E_00b57c20* S_00b57c20::sub_00b57c20(INT Index)
{
    return &Items(Index);
}

struct C_00b57c70{
int sub_00b57c70(undefined4*);
};

// @baa 0x00b57c70
int C_00b57c70::sub_00b57c70(undefined4*param_2)
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

struct C_00b57cd0 {
    int sub_00b57cd0(int);
    int sub_00b520f0(int);
};

// @baa 0x00b57cd0
int C_00b57cd0::sub_00b57cd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00b57cd0 *)(this))->sub_00b520f0(param_2);
  sub_01a37612((void *)(iVar1 * 0x2c + *param_1),0,param_2 * 0x2c);
  return iVar1;
}

struct S_00b57d00 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b57d00(INT Index);
};

// @baa 0x00b57d00
DWORD* S_00b57d00::sub_00b57d00(INT Index)
{
    return &Items(Index);
}

struct C_00b57d50 {
    int sub_00b57d50(int);
    int sub_00b52180(int);
};

// @baa 0x00b57d50
int C_00b57d50::sub_00b57d50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00b57d50 *)(this))->sub_00b52180(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct S_00b57d90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b57d90(INT Index);
};

// @baa 0x00b57d90
DWORD* S_00b57d90::sub_00b57d90(INT Index)
{
    return &Items(Index);
}

struct C_00b57de0{
int sub_00b57de0(undefined4*);
};

// @baa 0x00b57de0
int C_00b57de0::sub_00b57de0(undefined4*param_2)
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

struct C_00b57e80 {
    void sub_00b57e80(int, int);
    int sub_00b52350(int, int);
};

// @baa 0x00b57e80
void C_00b57e80::sub_00b57e80(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00b57e80 *)(this))->sub_00b52350(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct C_00b57ec0 {
    int sub_00b57ec0(undefined4 *, int);
    int sub_00b52350(int, int);
};

// @baa 0x00b57ec0
int C_00b57ec0::sub_00b57ec0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_00b57ec0 *)(this))->sub_00b52350(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_00b57ef0{
int sub_00b57ef0(undefined4*);
};

// @baa 0x00b57ef0
int C_00b57ef0::sub_00b57ef0(undefined4*param_2)
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

struct C_00b58000{
int sub_00b58000(undefined4*);
};

// @baa 0x00b58000
int C_00b58000::sub_00b58000(undefined4*param_2)
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

struct C_00b58060{
int sub_00b58060(undefined4*);
};

// @baa 0x00b58060
int C_00b58060::sub_00b58060(undefined4*param_2)
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

struct C_00b580c0{
int sub_00b580c0(undefined4*);
};

// @baa 0x00b580c0
int C_00b580c0::sub_00b580c0(undefined4*param_2)
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

struct C_00b58120 {
    int sub_00b58120(int);
    int sub_00b52600(int);
};

// @baa 0x00b58120
int C_00b58120::sub_00b58120(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00b58120 *)(this))->sub_00b52600(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_00b58160 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00b58160(INT Index) const;
};

// @baa 0x00b58160
const DWORD* S_00b58160::sub_00b58160(INT Index) const
{
    return &Items(Index);
}

struct C_00b581b0 {
    void sub_00b581b0(int, int);
    int sub_00b52690(int, int);
};

// @baa 0x00b581b0
void C_00b581b0::sub_00b581b0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00b581b0 *)(this))->sub_00b52690(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct S_00b581f0 {
    TArray<E> Items; // 0x00
    E* sub_00b581f0(INT Index);
};

// @baa 0x00b581f0
E* S_00b581f0::sub_00b581f0(INT Index)
{
    return &Items(Index);
}

struct S_00b58240 {
    TArray<E> Items; // 0x00
    const E* sub_00b58240(INT Index) const;
};

// @baa 0x00b58240
const E* S_00b58240::sub_00b58240(INT Index) const
{
    return &Items(Index);
}

struct S_00b58290 {
    TArray<E> Items; // 0x00
    E* sub_00b58290(INT Index);
};

// @baa 0x00b58290
E* S_00b58290::sub_00b58290(INT Index)
{
    return &Items(Index);
}

struct S_00b58480 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b58480(INT Index);
};

// @baa 0x00b58480
DWORD* S_00b58480::sub_00b58480(INT Index)
{
    return &Items(Index);
}

// @baa 0x00b584d0
int ULensFlare::sub_00b584d0(undefined4*param_2)
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

struct S_00b58530 {
    TArray<E> Items; // 0x00
    E* sub_00b58530(INT Index);
};

// @baa 0x00b58530
E* S_00b58530::sub_00b58530(INT Index)
{
    return &Items(Index);
}

struct C_view {
    int sub_00b52930(int);
};

// @baa 0x00b58580
int ULensFlare::sub_00b58580(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00b52930(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

int sub_0053dfa0(...);
int sub_00b582e0(void);
// @baa 0x00b585c0
undefined4 ULensFlare::sub_00b585c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b582e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b58340(void);
// @baa 0x00b58600
undefined4 ULensFlare::sub_00b58600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b58340();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b583b0(void);
// @baa 0x00b58640
undefined4 ULensFlare::sub_00b58640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b583b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b58410(void);
// @baa 0x00b58680
undefined4 ULensFlare::sub_00b58680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b58410();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b586c0 {
    int sub_00b586c0(int);
};

// @baa 0x00b586c0
int C_00b586c0::sub_00b586c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b586d0
void __stdcall sub_00b586d0(int a0, int a1) {  }

struct C_00b586e0 {
    int sub_00b586e0(int);
};

// @baa 0x00b586e0
int C_00b586e0::sub_00b586e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00b586f0
void __stdcall sub_00b586f0(int a0, int a1) {  }

struct C_00b58700 {
    int sub_00b58700(int);
};

// @baa 0x00b58700
int C_00b58700::sub_00b58700(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58710
void __stdcall sub_00b58710(int a0, int a1) {  }

struct C_00b58720 {
    int sub_00b58720(int);
};

// @baa 0x00b58720
int C_00b58720::sub_00b58720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58730
void __stdcall sub_00b58730(int a0, int a1) {  }

struct C_00b58740 {
    int sub_00b58740(int);
};

// @baa 0x00b58740
int C_00b58740::sub_00b58740(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x00b58750
void __stdcall sub_00b58750(int a0, int a1) {  }

struct C_00b58760 {
    int sub_00b58760(int);
};

// @baa 0x00b58760
int C_00b58760::sub_00b58760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58770
void __stdcall sub_00b58770(int a0, int a1) {  }

struct C_00b58780 {
    int sub_00b58780(int);
};

// @baa 0x00b58780
int C_00b58780::sub_00b58780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58790
void __stdcall sub_00b58790(int a0, int a1) {  }

struct C_00b587a0 {
    int sub_00b587a0(int);
};

// @baa 0x00b587a0
int C_00b587a0::sub_00b587a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

// @baa 0x00b587b0
void __stdcall sub_00b587b0(int a0, int a1) {  }

struct C_00b587c0 {
    int sub_00b587c0(int);
};

// @baa 0x00b587c0
int C_00b587c0::sub_00b587c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x00b587e0
void __stdcall sub_00b587e0(int a0, int a1) {  }

struct C_00b587f0 {
    int sub_00b587f0(int);
};

// @baa 0x00b587f0
int C_00b587f0::sub_00b587f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00b58800
void __stdcall sub_00b58800(int a0, int a1) {  }

struct C_00b58810 {
    int sub_00b58810(int);
};

// @baa 0x00b58810
int C_00b58810::sub_00b58810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_00b58830 {
    int sub_00b58830(int);
};

// @baa 0x00b58830
int C_00b58830::sub_00b58830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58840
void __stdcall sub_00b58840(int a0, int a1) {  }

struct C_00b58850 {
    int sub_00b58850(int);
};

// @baa 0x00b58850
int C_00b58850::sub_00b58850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58860
void __stdcall sub_00b58860(int a0, int a1) {  }

struct C_00b58870 {
    int sub_00b58870(int);
};

// @baa 0x00b58870
int C_00b58870::sub_00b58870(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b58880
void __stdcall sub_00b58880(int a0, int a1) {  }

// @baa 0x00b58890
void __stdcall sub_00b58890(int a0, int a1) {  }

struct C_00b588a0 {
    int sub_00b588a0(int);
};

// @baa 0x00b588a0
int C_00b588a0::sub_00b588a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00b588b0 {
    int sub_00b588b0(int);
};

// @baa 0x00b588b0
int C_00b588b0::sub_00b588b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00b588c0
void __stdcall sub_00b588c0(int a0, int a1) {  }

struct S_00b588d0 { int sub_00544d40(int); };

// @baa 0x00b588d0
int sub_00b588d0(S_00b588d0 *s, int a) { return s->sub_00544d40(a); }

struct C_00b588e0 { int sub_00b588e0(void); };

// @baa 0x00b588e0
int C_00b588e0::sub_00b588e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00b58940 {
    int sub_00b58940(int);
};

// @baa 0x00b58940
int C_00b58940::sub_00b58940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00b58950 { int sub_00b58950(void); };

// @baa 0x00b58950
int C_00b58950::sub_00b58950(void) { return *(int*)((char*)this + 20); }

struct C_00b58960 {
    int sub_00b58960();
};

// @baa 0x00b58960
int C_00b58960::sub_00b58960(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b58980 {
    int sub_00b58980(int);
};

// @baa 0x00b58980
int C_00b58980::sub_00b58980(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00b5f1b0 { void* Data; int Num; int Max; void sub_00b5f1b0(); };

// @baa 0x00b5f1b0
void C_00b5f1b0::sub_00b5f1b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f250 { void* Data; int Num; int Max; void sub_00b5f250(); };

// @baa 0x00b5f250
void C_00b5f250::sub_00b5f250() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f2b0 { void* Data; int Num; int Max; void sub_00b5f2b0(); };

// @baa 0x00b5f2b0
void C_00b5f2b0::sub_00b5f2b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f310 { void* Data; int Num; int Max; void sub_00b5f310(); };

// @baa 0x00b5f310
void C_00b5f310::sub_00b5f310() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f3b0 { void* Data; int Num; int Max; void sub_00b5f3b0(); };

// @baa 0x00b5f3b0
void C_00b5f3b0::sub_00b5f3b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f4f0 { void* Data; int Num; int Max; void sub_00b5f4f0(); };

// @baa 0x00b5f4f0
void C_00b5f4f0::sub_00b5f4f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f590 { void* Data; int Num; int Max; void sub_00b5f590(); };

// @baa 0x00b5f590
void C_00b5f590::sub_00b5f590() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f5f0 { void* Data; int Num; int Max; void sub_00b5f5f0(); };

// @baa 0x00b5f5f0
void C_00b5f5f0::sub_00b5f5f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f690 { void* Data; int Num; int Max; void sub_00b5f690(); };

// @baa 0x00b5f690
void C_00b5f690::sub_00b5f690() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f740 { void* Data; int Num; int Max; void sub_00b5f740(); };

// @baa 0x00b5f740
void C_00b5f740::sub_00b5f740() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f7e0 { void* Data; int Num; int Max; void sub_00b5f7e0(); };

// @baa 0x00b5f7e0
void C_00b5f7e0::sub_00b5f7e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00b5f880;
// @baa 0x00b5f880
template INT TArray<T_00b5f880*>::RemoveItem(T_00b5f880* const&);

struct C_00b5f900 { void* Data; int Num; int Max; void sub_00b5f900(); };

// @baa 0x00b5f900
void C_00b5f900::sub_00b5f900() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5f9a0 { void* Data; int Num; int Max; void sub_00b5f9a0(); };

// @baa 0x00b5f9a0
void C_00b5f9a0::sub_00b5f9a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5fa40 { void* Data; int Num; int Max; void sub_00b5fa40(); };

// @baa 0x00b5fa40
void C_00b5fa40::sub_00b5fa40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5fb20 { void* Data; int Num; int Max; void sub_00b5fb20(); };

// @baa 0x00b5fb20
void C_00b5fb20::sub_00b5fb20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b5fea0 { void* Data; int Num; int Max; void sub_00b5fea0(); };

// @baa 0x00b5fea0
void C_00b5fea0::sub_00b5fea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00b60020
void __stdcall sub_00b60020(int a0, int a1) {  }

int sub_0040fcc0(void);
// @baa 0x00b60940
undefined4 UObject::sub_00b60940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b60ab0
int UObject::sub_00b60ab0(void) { return *(int*)((char*)this + 4); }

struct C_view_00b63e50 {
    int sub_00b5d240();
    int sub_00b5cdb0(int, int);
    int sub_006e49d0(int);
};

// @baa 0x00b63e50
void UParticleSystemComponent::PostEditChange(UProperty* param_2)
{
    int param_1 = (int)this;
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) | 0x10000;
  ((C_view_00b63e50 *)(this))->sub_00b5d240();
  if ((*(byte *)(param_1 + 0x1cc) & 1) != 0) {
    ((C_view_00b63e50 *)(this))->sub_00b5cdb0(0, 0);
  }
  Super::PostEditChange(param_2);
  return;
}

struct C_00b64aa0 { C_00b64aa0* sub_00b64aa0(void); };

// @baa 0x00b64aa0
C_00b64aa0* C_00b64aa0::sub_00b64aa0(void) { return this; }

struct C_00b64ab0 { C_00b64ab0* sub_00b64ab0(void); };

// @baa 0x00b64ab0
C_00b64ab0* C_00b64ab0::sub_00b64ab0(void) { return this; }

struct C_00b64ac0 { C_00b64ac0* sub_00b64ac0(void); };

// @baa 0x00b64ac0
C_00b64ac0* C_00b64ac0::sub_00b64ac0(void) { return this; }

struct C_00b64ad0 { C_00b64ad0* sub_00b64ad0(void); };

// @baa 0x00b64ad0
C_00b64ad0* C_00b64ad0::sub_00b64ad0(void) { return this; }

struct C_00b64ae0 { C_00b64ae0* sub_00b64ae0(void); };

// @baa 0x00b64ae0
C_00b64ae0* C_00b64ae0::sub_00b64ae0(void) { return this; }

struct C_00b64af0 { C_00b64af0* sub_00b64af0(void); };

// @baa 0x00b64af0
C_00b64af0* C_00b64af0::sub_00b64af0(void) { return this; }

struct C_00b64b00 { C_00b64b00* sub_00b64b00(void); };

// @baa 0x00b64b00
C_00b64b00* C_00b64b00::sub_00b64b00(void) { return this; }

struct C_00b64b10 { C_00b64b10* sub_00b64b10(void); };

// @baa 0x00b64b10
C_00b64b10* C_00b64b10::sub_00b64b10(void) { return this; }

struct C_00b64b20 { void* Data; int Num; int Max; void sub_00b64b20(); };

// @baa 0x00b64b20
void C_00b64b20::sub_00b64b20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b64bc0 { C_00b64bc0* sub_00b64bc0(void); };

// @baa 0x00b64bc0
C_00b64bc0* C_00b64bc0::sub_00b64bc0(void) { return this; }

struct C_00b64bd0 { C_00b64bd0* sub_00b64bd0(void); };

// @baa 0x00b64bd0
C_00b64bd0* C_00b64bd0::sub_00b64bd0(void) { return this; }

struct C_00b64be0 { C_00b64be0* sub_00b64be0(void); };

// @baa 0x00b64be0
C_00b64be0* C_00b64be0::sub_00b64be0(void) { return this; }

struct C_00b64bf0 { C_00b64bf0* sub_00b64bf0(void); };

// @baa 0x00b64bf0
C_00b64bf0* C_00b64bf0::sub_00b64bf0(void) { return this; }

struct C_00b64c00 { C_00b64c00* sub_00b64c00(void); };

// @baa 0x00b64c00
C_00b64c00* C_00b64c00::sub_00b64c00(void) { return this; }

// @baa 0x00b64c10
int UParticleSystemComponent::sub_00b64c10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00b64cb0 {
    int sub_00b64cb0(int);
};

// @baa 0x00b64cb0
int C_00b64cb0::sub_00b64cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00b64cc0
undefined4 UObject::sub_00b64cc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
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

struct TConstSetBitIterator_00b64e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b64e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b64e10& operator++();
};

TConstSetBitIterator_00b64e10::TConstSetBitIterator_00b64e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b64e10
TConstSetBitIterator_00b64e10& TConstSetBitIterator_00b64e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b64e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b64e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b64e30& operator++();
};

TConstSetBitIterator_00b64e30::TConstSetBitIterator_00b64e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b64e30
TConstSetBitIterator_00b64e30& TConstSetBitIterator_00b64e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b64e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b64e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b64e80& operator++();
};

TConstSetBitIterator_00b64e80::TConstSetBitIterator_00b64e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b64e80
TConstSetBitIterator_00b64e80& TConstSetBitIterator_00b64e80::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b651c0 {
    undefined4 * sub_00b651c0();
    int sub_00b64f30();
};

extern undefined * g_01ff9664;
// @baa 0x00b651c0
undefined4 * C_00b651c0::sub_00b651c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = param_1[1] & 0xfffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (undefined4)(&g_01ff9664);
  ((C_00b651c0 *)(((char *)this + 0x14)))->sub_00b64f30();
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0xffffffff;
  return param_1;
}

// @baa 0x00b65220
char* UObject::sub_00b65220(void) { return (char*)this + 20; }

// @baa 0x00b65230
void sub_00b65230(void) {  }

int sub_00b65240(void);
// @baa 0x00b652e0
undefined4 UObject::sub_00b652e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b65240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b65300(void);
// @baa 0x00b65360
undefined4 UObject::sub_00b65360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b65300();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_01ff9688;
// @baa 0x00b65380
undefined4 * UObject::sub_00b65380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ff9688);
  return param_1;
}

// @baa 0x00b653a0
// @baa 0x00b65440
void sub_00b64b20();
// @baa 0x00b65470
void sub_00b65470(void) { sub_00b64b20(); }

extern undefined * g_01ff97b0;
// @baa 0x00b65480
undefined4 * UObject::sub_00b65480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ff97b0);
  return param_1;
}

// @baa 0x00b654a0
// @baa 0x00b65550
// @baa 0x00b65580
// @baa 0x00b65640
void UParticleEmitter::vf_110(void) {  }

// @baa 0x00b65650
struct C_00b65fd0 { C_00b65fd0* sub_00b65fd0(void); };

// @baa 0x00b65fd0
C_00b65fd0* C_00b65fd0::sub_00b65fd0(void) { return this; }

struct C_view_00b65fe0 {
    int sub_00b64c20(int, int);
};

// @baa 0x00b65fe0
int UParticleSystemComponent::sub_00b65fe0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00b65fe0 *)(this))->sub_00b64c20((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_00b660a0 {
    undefined4 sub_00b660a0(byte);
};

int sub_00553720(void);
// @baa 0x00b660a0
undefined4 C_00b660a0::sub_00b660a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00b66140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b66140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b66140& operator++();
};

TConstSetBitIterator_00b66140::TConstSetBitIterator_00b66140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b66140
TConstSetBitIterator_00b66140& TConstSetBitIterator_00b66140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b66160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b66160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b66160& operator++();
};

TConstSetBitIterator_00b66160::TConstSetBitIterator_00b66160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b66160
TConstSetBitIterator_00b66160& TConstSetBitIterator_00b66160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b66270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b66270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b66270& operator++();
};

TConstSetBitIterator_00b66270::TConstSetBitIterator_00b66270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b66270
TConstSetBitIterator_00b66270& TConstSetBitIterator_00b66270::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00b662c0
// @baa 0x00b662e0
// @baa 0x00b66500
int sub_006f7810(void);
extern undefined * g_01ff9b60;
// @baa 0x00b66530
undefined4 * UPrimitiveComponent::sub_00b66530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01ff9b60);
  return param_1;
}

extern undefined * g_01ff9e48;
// @baa 0x00b66550
undefined4 * UPrimitiveComponent::sub_00b66550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01ff9e48);
  return param_1;
}

// @baa 0x00b66570
IMPLEMENT_CLASS_AT(UPhysXParticleSystemComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 27);

// @baa 0x00b665d0
// @baa 0x00b66600
// @baa 0x00b68d60
// @baa 0x00b68e20
struct C_view_00b69270 {
    int sub_00b64c20(int, int);
};

// @baa 0x00b69270
int UParticleSystemComponent::sub_00b69270(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00b69270 *)(this))->sub_00b64c20((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_view_00b69390 {
    int sub_00b660c0(int);
};

// @baa 0x00b69390
void UParticleSystemComponent::sub_00b69390(void)
{
    int param_1 = (int)this;
  ((C_view_00b69390 *)((*(char **)((char *)this + 0x10))))->sub_00b660c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00b69650
// @baa 0x00b69670
// @baa 0x00b69690
// @baa 0x00b696b0
IMPLEMENT_CLASS_AT(UParticleSpriteEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 22);

// @baa 0x00b6a600
// @baa 0x00b6a6c0
// @baa 0x00b6a780
// @baa 0x00b6a840
struct C_00b6a950 { void sub_00b69210(int); C_00b6a950 *sub_00b6a950(int); };

// @baa 0x00b6a950
C_00b6a950 *C_00b6a950::sub_00b6a950(int a) { sub_00b69210(a); return this; }

struct C_view_00b6a970 {
    int sub_00b69210(int);
};

// @baa 0x00b6a970
int UParticleSystemComponent::sub_00b6a970(int param_2)
{
    int param_1 = (int)this;
  ((C_view_00b6a970 *)(this))->sub_00b69210(param_2);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  return param_1;
}

struct C_00b6c040 { C_00b6c040* sub_00b6c040(void); };

// @baa 0x00b6c040
C_00b6c040* C_00b6c040::sub_00b6c040(void) { return this; }

struct C_00b6c2b0 {
    int sub_00b6c2b0(undefined4, undefined4);
    int sub_00b6b160(int, int);
};

// @baa 0x00b6c2b0
int C_00b6c2b0::sub_00b6c2b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00b6c2b0 *)(this))->sub_00b6b160(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

void sub_00b6ad50();
// @baa 0x00b6c2d0
void sub_00b6c2d0(void) { sub_00b6ad50(); }

struct C_00b6c2e0 {
    int sub_00b6c2e0();
};

int sub_00b661b0(void);
// @baa 0x00b6c2e0
int C_00b6c2e0::sub_00b6c2e0(void)
{
    int param_1 = (int)this;

  sub_00b661b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00b6c300 {
    int sub_00b6c300();
};

int sub_00b66210(void);
// @baa 0x00b6c300
int C_00b6c300::sub_00b6c300(void)
{
    int param_1 = (int)this;

  sub_00b66210();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00b6c550 {
    undefined4 sub_00b6c550();
};

int sub_00b51470(void);
int sub_00b6a780(...);
int sub_00b6c59f(...);
extern undefined4 g_026bf5ac;
// @baa 0x00b6c550
undefined4 C_00b6c550::sub_00b6c550(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026bf5ac == 0) {
      g_026bf5ac = sub_00b6a780(L"Engine");
      sub_00b51470();
      if (g_026bf5ac == 0) {
sub_00b6c59f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026bf5ac) goto sub_00b6c59f;
    }
  }
  return 0;
}

// @baa 0x00b6c5b0
IMPLEMENT_CLASS_AT(AEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 17);

// @baa 0x00b6c5e0
IMPLEMENT_CLASS_AT(AEmitterCameraLensEffectBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 18);

struct C_00b6c610 { C_00b6c610* sub_00b6c610(void); };

// @baa 0x00b6c610
C_00b6c610* C_00b6c610::sub_00b6c610(void) { return this; }

struct C_00b6c620 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00b6c620& sub_00b6c620(int Arg);
};

// @baa 0x00b6c620
C_00b6c620& C_00b6c620::sub_00b6c620(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x00b6c630
// @baa 0x00b6c6f0
void sub_00b6bfd0();
// @baa 0x00b6c7b0
void sub_00b6c7b0(void) { sub_00b6bfd0(); }

void sub_00b6c130();
// @baa 0x00b6c7c0
void sub_00b6c7c0(void) { sub_00b6c130(); }

struct C_00b6dda0 {
    int sub_00b6dda0();
};

// @baa 0x00b6dda0
int C_00b6dda0::sub_00b6dda0(void)
{
    int param_1 = (int)this;

  sub_00b661b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00b6ddc0 {
    int sub_00b6ddc0();
};

// @baa 0x00b6ddc0
int C_00b6ddc0::sub_00b6ddc0(void)
{
    int param_1 = (int)this;

  sub_00b66210();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00b6e050
// @baa 0x00b6e160
bool AEmitterCameraLensEffectBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b6e1a0
void sub_00b6e1a0(void) { sub_00b6bfd0(); }

// @baa 0x00b6e380
void sub_00b6e380(void) { sub_00b6c130(); }

struct C_00b6f6f0 {
    int sub_00b6f6f0();
};

// @baa 0x00b6f6f0
int C_00b6f6f0::sub_00b6f6f0(void)
{
    int param_1 = (int)this;

  sub_00b661b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00b6f710 {
    int sub_00b6f710();
};

// @baa 0x00b6f710
int C_00b6f710::sub_00b6f710(void)
{
    int param_1 = (int)this;

  sub_00b66210();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00b6f910
void sub_00b6f910(void) { sub_00b6bfd0(); }

// @baa 0x00b6f920
void sub_00b6f920(void) { sub_00b6c130(); }

void sub_00b6fc10();
// @baa 0x00b6fd70
void sub_00b6fd70(void) { sub_00b6fc10(); }

struct M_00b6fdb0 { void sub_00b6bfd0(); };

struct C_00b6fdb0 { char pad[4]; M_00b6fdb0 m; void sub_00b6fdb0(); };

// @baa 0x00b6fdb0
void C_00b6fdb0::sub_00b6fdb0() { m.sub_00b6bfd0(); }

// @baa 0x00b6fe30
float10 sub_00b6fe30(double param_1)
{
  return (float10)param_1;
}

struct C_00b6fe40 {
    void sub_00b6fe40(undefined4, float, float, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00b6fe40
void C_00b6fe40::sub_00b6fe40(undefined4 param_2, float param_3, float param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,(double)param_3,(double)param_4,param_5,param_6,param_7,param_8);
  return;
}

// @baa 0x00b6fe80
int UParticleSystemComponent::sub_00b6fe80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00b6fea0
int UParticleSystemComponent::sub_00b6fea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x00b6feb0
int UParticleSystemComponent::sub_00b6feb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00b6fed0
int UParticleSystemComponent::sub_00b6fed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x00b6fee0
int UParticleSystemComponent::sub_00b6fee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x00b6fef0
int UParticleSystemComponent::sub_00b6fef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x28;
}

struct TConstSetBitIterator_00b6ff00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b6ff00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b6ff00& operator++();
};

TConstSetBitIterator_00b6ff00::TConstSetBitIterator_00b6ff00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b6ff00
TConstSetBitIterator_00b6ff00& TConstSetBitIterator_00b6ff00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b6ff20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b6ff20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b6ff20& operator++();
};

TConstSetBitIterator_00b6ff20::TConstSetBitIterator_00b6ff20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b6ff20
TConstSetBitIterator_00b6ff20& TConstSetBitIterator_00b6ff20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b6ff70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b6ff70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b6ff70& operator++();
};

TConstSetBitIterator_00b6ff70::TConstSetBitIterator_00b6ff70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b6ff70
TConstSetBitIterator_00b6ff70& TConstSetBitIterator_00b6ff70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b6ff90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b6ff90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b6ff90& operator++();
};

TConstSetBitIterator_00b6ff90::TConstSetBitIterator_00b6ff90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b6ff90
TConstSetBitIterator_00b6ff90& TConstSetBitIterator_00b6ff90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b70040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b70040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b70040& operator++();
};

TConstSetBitIterator_00b70040::TConstSetBitIterator_00b70040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b70040
TConstSetBitIterator_00b70040& TConstSetBitIterator_00b70040::operator++()
{
    It.Advance();
    return *this;
}

void sub_00b6ffe0();
// @baa 0x00b70090
void sub_00b70090(void) { sub_00b6ffe0(); }

struct TConstSetBitIterator_00b700a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b700a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b700a0& operator++();
};

TConstSetBitIterator_00b700a0::TConstSetBitIterator_00b700a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b700a0
TConstSetBitIterator_00b700a0& TConstSetBitIterator_00b700a0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00b702a0(void);
// @baa 0x00b70300
undefined4 UParticleSystemComponent::sub_00b70300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b702a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b710b0 { C_00b710b0* sub_00b710b0(void); };

// @baa 0x00b710b0
C_00b710b0* C_00b710b0::sub_00b710b0(void) { return this; }

extern undefined * g_01ffaea8;
// @baa 0x00b711d0
undefined4 * UObject::sub_00b711d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffaea8);
  return param_1;
}

// @baa 0x00b711f0
// @baa 0x00b71260
// @baa 0x00b712b0
// @baa 0x00b712d0
int sub_00b51730(void);
int sub_00b712d0(...);
extern undefined4 g_026bf5b4;
// @baa 0x00b71390
int sub_00b71390(void)
{
  if (g_026bf5b4 == 0) {
    g_026bf5b4 = sub_00b712d0(L"Engine");
    sub_00b51730();
  }
  return g_026bf5b4;
}
