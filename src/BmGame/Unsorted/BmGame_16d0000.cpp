// BmGame_16d0000.cpp (part 1 of 9): 146 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016d09c0
int sub_016d09c0(void) { return 1; }

// @baa 0x016d09d0
int sub_016d09d0(void) { return 1; }

// @baa 0x016d09e0
IMPLEMENT_CLASS_AT(ARWindVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RWindVolume.cpp", 13);

// @baa 0x016d0af0
int ARWindVolume::vf_000(void) { return 1; }

// @baa 0x016d0b00
bool ARWindVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d0b40
void ARWindVolume::vf_364(void) {  }

// @baa 0x016d0ef0
IMPLEMENT_CLASS_AT(ARMedicalPlasticFlapsBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RMedicalPlasticFlapsBase.cpp", 10);

// @baa 0x016d1000
int ARMedicalPlasticFlapsBase::vf_000(void) { return 1; }

// @baa 0x016d1050
IMPLEMENT_CLASS_AT(ARCrowdManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCrowd.cpp", 12);

// @baa 0x016d1160
int ARCrowdManager::vf_000(void) { return 1; }

// @baa 0x016d1170
bool ARCrowdManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d11b0
IMPLEMENT_CLASS_AT(ARCrowdAgent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCrowd.cpp", 13);

// @baa 0x016d12c0
int ARCrowdAgent::vf_000(void) { return 1; }

// @baa 0x016d12d0
bool ARCrowdAgent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d1310
IMPLEMENT_CLASS_AT(ARCrowdSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCrowd.cpp", 14);

// @baa 0x016d1420
int ARCrowdSequence::vf_000(void) { return 1; }

// @baa 0x016d1430
bool ARCrowdSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d1470
IMPLEMENT_CLASS_AT(ARCrowdAttractor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCrowd.cpp", 15);

// @baa 0x016d1580
int ARCrowdAttractor::vf_000(void) { return 1; }

// @baa 0x016d1590
bool ARCrowdAttractor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d15d0
int ARCrowdAttractor_Cylinder::vf_000(void) { return 1; }

// @baa 0x016d1a10
int ARCrowdAgent::vf_174(int a0, int a1) { return 1; }

// @baa 0x016d1a20
int sub_016d1a20(int a0, int a1) { return a1; }

// @baa 0x016d1a30
int sub_016d1a30(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_023a2a40;
// @baa 0x016d1a40
undefined4 * UObject::sub_016d1a40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a2a40);
  return param_1;
}

// @baa 0x016d1a60
IMPLEMENT_CLASS_AT(URGFxFSCmdHandler_PlayMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 568);

// @baa 0x016d1ac0
// @baa 0x016d1b10
int sub_016d1b10(int a0, int a1) { return a1; }

// @baa 0x016d1fd0
int URGFxMovieHUD::vf_000(void) { return 1; }

// @baa 0x016d29a0
void URPersistentOptions::vf_10c(void) {  }

// @baa 0x016d29b0
void URPersistentOptions::vf_110(void) {  }

// @baa 0x016d29c0
void URPersistentOptions::vf_114(void) {  }

struct C_016d2a40 { int sub_016d2a40(void); };

// @baa 0x016d2a40
int C_016d2a40::sub_016d2a40(void) { return *(int*)((char*)this + 4); }

struct C_016d2a50 { int sub_016d2a50(void); };

// @baa 0x016d2a50
int C_016d2a50::sub_016d2a50(void) { return *(int*)((char*)this + 4); }

struct C_016d2a60 { int sub_016d2a60(void); };

// @baa 0x016d2a60
int C_016d2a60::sub_016d2a60(void) { return *(int*)((char*)this + 4); }

struct C_016d2a70 { int a, b, c; C_016d2a70(); };

// @baa 0x016d2a70
C_016d2a70::C_016d2a70() : a(0), b(0), c(0) {}

struct C_016d2a80 { int sub_016d2a80(void); };

// @baa 0x016d2a80
int C_016d2a80::sub_016d2a80(void) { return *(int*)((char*)this + 4); }

struct C_016d2a90 { int sub_016d2a90(void); };

// @baa 0x016d2a90
int C_016d2a90::sub_016d2a90(void) { return *(int*)((char*)this + 4); }

struct C_016d2aa0 { int sub_016d2aa0(void); };

// @baa 0x016d2aa0
int C_016d2aa0::sub_016d2aa0(void) { return *(int*)((char*)this + 4); }

struct C_016d2ab0 { int sub_016d2ab0(void); };

// @baa 0x016d2ab0
int C_016d2ab0::sub_016d2ab0(void) { return *(int*)((char*)this + 4); }

struct C_016d2ac0 { int sub_016d2ac0(void); };

// @baa 0x016d2ac0
int C_016d2ac0::sub_016d2ac0(void) { return *(int*)((char*)this + 4); }

struct C_016d2ad0 { int sub_016d2ad0(void); };

// @baa 0x016d2ad0
int C_016d2ad0::sub_016d2ad0(void) { return *(int*)((char*)this + 4); }

struct C_016d2ae0 { int sub_016d2ae0(void); };

// @baa 0x016d2ae0
int C_016d2ae0::sub_016d2ae0(void) { return *(int*)((char*)this + 4); }

void * sub_01a37612(void *, int, size_t);
// @baa 0x016d3360
void sub_016d3360(void * param_1)
{
  sub_01a37612(param_1,0,0x30);
  return;
}

struct FCapePhysics_ {
    void sub_016bcf30(FLOAT DeltaTime);
};

struct URCapeComponent_ : public URCapeComponent {
    UBOOL sub_016ae4d0();
    void sub_016b93f0();
    void sub_016b8cd0();
};

struct URCapeRenderingComponent_ : public URCapeRenderingComponent {
    void sub_016cdf80();
    void sub_016d3660(FLOAT DeltaTime);
};

// @baa 0x016d3660
void URCapeRenderingComponent_::sub_016d3660(FLOAT DeltaTime)
{
    if (CapeComponent && ((URCapeComponent_*)CapeComponent)->sub_016ae4d0())
    {
        if (CapeComponent->IsPhysicsPostProcessEnabled && CapeComponent->CapeStateController->IsInitialised)
        {
            ((FCapePhysics_*)CapeComponent->CapeStateController->CapePhysicsRef.Dummy)->sub_016bcf30(DeltaTime);
        }
        ((URCapeComponent_*)CapeComponent)->sub_016b93f0();
        ((URCapeComponent_*)CapeComponent)->sub_016b8cd0();
        sub_016cdf80();
    }
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016d4f70(INT Index);
};

// @baa 0x016d4f70
DWORD* S::sub_016d4f70(INT Index)
{
    return &Items(Index);
}

struct S_016d4fc0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016d4fc0(INT Index);
};

// @baa 0x016d4fc0
DWORD* S_016d4fc0::sub_016d4fc0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[16]; };

struct S_016d5010 {
    TArray<E> Items; // 0x00
    const E* sub_016d5010(INT Index) const;
};

// @baa 0x016d5010
const E* S_016d5010::sub_016d5010(INT Index) const
{
    return &Items(Index);
}

struct E_016d5060 { BYTE Bytes[12]; };

struct S_016d5060 {
    TArray<E_016d5060> Items; // 0x00
    const E_016d5060* sub_016d5060(INT Index) const;
};

// @baa 0x016d5060
const E_016d5060* S_016d5060::sub_016d5060(INT Index) const
{
    return &Items(Index);
}

struct C_016d50b0{
int sub_016d50b0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x016d50b0
int C_016d50b0::sub_016d50b0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=1+iVar2;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct E_016d5120 { BYTE Bytes[48]; };

struct S_016d5120 {
    TArray<E_016d5120> Items; // 0x00
    E_016d5120* sub_016d5120(INT Index);
};

// @baa 0x016d5120
E_016d5120* S_016d5120::sub_016d5120(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_016d5170 {
    int sub_016d5170(int);
    int sub_016d2d60(int);
};

// @baa 0x016d5170
int C_016d5170::sub_016d5170(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016d5170 *)(this))->sub_016d2d60(param_2);
  sub_01a37612((void *)(iVar1 * 0x30 + *param_1),0,param_2 * 0x30);
  return iVar1;
}

struct E_016d51b0 { BYTE Bytes[12]; };

struct S_016d51b0 {
    TArray<E_016d51b0> Items; // 0x00
    const E_016d51b0* sub_016d51b0(INT Index) const;
};

// @baa 0x016d51b0
const E_016d51b0* S_016d51b0::sub_016d51b0(INT Index) const
{
    return &Items(Index);
}

struct C_016d5200 {
    int sub_016d5200(int);
    int sub_016d2e00(int);
};

// @baa 0x016d5200
int C_016d5200::sub_016d5200(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016d5200 *)(this))->sub_016d2e00(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct E_016d5240 { BYTE Bytes[32]; };

struct S_016d5240 {
    TArray<E_016d5240> Items; // 0x00
    E_016d5240* sub_016d5240(INT Index);
};

// @baa 0x016d5240
E_016d5240* S_016d5240::sub_016d5240(INT Index)
{
    return &Items(Index);
}

struct E_016d5290 { BYTE Bytes[32]; };

struct S_016d5290 {
    TArray<E_016d5290> Items; // 0x00
    const E_016d5290* sub_016d5290(INT Index) const;
};

// @baa 0x016d5290
const E_016d5290* S_016d5290::sub_016d5290(INT Index) const
{
    return &Items(Index);
}

struct C_016d52e0 {
    int sub_016d52e0(int);
    int sub_016d2ea0(int);
};

// @baa 0x016d52e0
int C_016d52e0::sub_016d52e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016d52e0 *)(this))->sub_016d2ea0(param_2);
  sub_01a37612((void *)(iVar1 * 0x20 + *param_1),0,param_2 << 5);
  return iVar1;
}

struct S_016d5310 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016d5310(INT Index);
};

// @baa 0x016d5310
DWORD* S_016d5310::sub_016d5310(INT Index)
{
    return &Items(Index);
}

struct C_016d5360 {
    int sub_016d5360(int);
    int sub_016d2f40(int);
};

// @baa 0x016d5360
int C_016d5360::sub_016d5360(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016d5360 *)(this))->sub_016d2f40(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct S_016d53a0 {
    TArray<E> Items; // 0x00
    E* sub_016d53a0(INT Index);
};

// @baa 0x016d53a0
E* S_016d53a0::sub_016d53a0(INT Index)
{
    return &Items(Index);
}

struct S_016d53f0 {
    TArray<E> Items; // 0x00
    const E* sub_016d53f0(INT Index) const;
};

// @baa 0x016d53f0
const E* S_016d53f0::sub_016d53f0(INT Index) const
{
    return &Items(Index);
}

struct C_016d5440 {
    int sub_016d5440(int);
    int sub_016d2fe0(int);
};

// @baa 0x016d5440
int C_016d5440::sub_016d5440(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016d5440 *)(this))->sub_016d2fe0(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct S_016d5470 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016d5470(INT Index);
};

// @baa 0x016d5470
DWORD* S_016d5470::sub_016d5470(INT Index)
{
    return &Items(Index);
}

struct S_016d5560 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016d5560(INT Index);
};

// @baa 0x016d5560
DWORD* S_016d5560::sub_016d5560(INT Index)
{
    return &Items(Index);
}

struct S_016d55b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_016d55b0(INT Index) const;
};

// @baa 0x016d55b0
const DWORD* S_016d55b0::sub_016d55b0(INT Index) const
{
    return &Items(Index);
}

struct C_016d5600 {
    int sub_016d5600(size_t);
    int sub_00947d10(int);
};

// @baa 0x016d5600
int C_016d5600::sub_016d5600(size_t param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016d5600 *)(this))->sub_00947d10(param_2);
  sub_01a37612((void *)(*param_1 + iVar1),0,param_2);
  return iVar1;
}

struct C_016d56f0 {
    int sub_016d56f0(int);
};

// @baa 0x016d56f0
int C_016d56f0::sub_016d56f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016d5700
void __stdcall sub_016d5700(int a0, int a1) {  }

struct C_016d5710 {
    int sub_016d5710(int);
};

// @baa 0x016d5710
int C_016d5710::sub_016d5710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016d5720
void __stdcall sub_016d5720(int a0, int a1) {  }

struct C_016d5730 {
    int sub_016d5730(int);
};

// @baa 0x016d5730
int C_016d5730::sub_016d5730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016d5740
void __stdcall sub_016d5740(int a0, int a1) {  }

struct C_016d5750 {
    int sub_016d5750(int);
};

// @baa 0x016d5750
int C_016d5750::sub_016d5750(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_016d5760 {
    int sub_016d5760(int);
};

// @baa 0x016d5760
int C_016d5760::sub_016d5760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016d5770
void __stdcall sub_016d5770(int a0, int a1) {  }

// @baa 0x016d5780
void __stdcall sub_016d5780(int a0, int a1) {  }

struct C_016d5790 { int sub_016d5790(void); };

// @baa 0x016d5790
int C_016d5790::sub_016d5790(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x016d57a0
void __stdcall sub_016d57a0(int a0, int a1) {  }

struct C_016d57b0 {
    int sub_016d57b0(int);
};

// @baa 0x016d57b0
int C_016d57b0::sub_016d57b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x016d57d0
void __stdcall sub_016d57d0(int a0, int a1) {  }

struct C_016d57e0 {
    undefined4 sub_016d57e0(byte);
};

int sub_0053dfa0(...);
// @baa 0x016d57e0
undefined4 C_016d57e0::sub_016d57e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_016d5800 {
    TArray<E> Items; // 0x00
    E* sub_016d5800(INT Index);
};

// @baa 0x016d5800
E* S_016d5800::sub_016d5800(INT Index)
{
    return &Items(Index);
}

struct E_016d5850 { BYTE Bytes[60]; };

struct S_016d5850 {
    TArray<E_016d5850> Items; // 0x00
    E_016d5850* sub_016d5850(INT Index);
};

// @baa 0x016d5850
E_016d5850* S_016d5850::sub_016d5850(INT Index)
{
    return &Items(Index);
}

struct S_016d58a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016d58a0(INT Index);
};

// @baa 0x016d58a0
DWORD* S_016d58a0::sub_016d58a0(INT Index)
{
    return &Items(Index);
}

struct M_016d6370 { void sub_016d5680(); };

struct C_016d6370 { char pad[648]; M_016d6370 m; void sub_016d6370(); };

// @baa 0x016d6370
void C_016d6370::sub_016d6370() { m.sub_016d5680(); }

struct V4 { float x,y,z,w; };

struct I3 { int x,y,z; };

struct Comp { int sub_016ae4d0(); void sub_016c6430(FRWindConfig c, FRWindState* s); };

struct Q { I3* sub_0058e400(); };

struct P { Q* sub_005c9a10(V4* b, FVector* a, FVector v); };

void sub_016d4390(FRWindState*, FRWindConfig*, float);
struct R { char pad[0xaa0]; Comp* c; };

struct S_016d6d50 { char pad[0x220]; Comp* c; };

R* sub_015e32f0(AActor*);
S_016d6d50* sub_016d3440(AActor*);
// @baa 0x016d6d50
void ARWindVolume::vf_360(float dt)
{
    int n = Touching.Num();
    if (n > 0) {
        sub_016d4390(&WindState, &GeneratedWindConfig, dt);
        FRWindState st = WindState;
        if (WindRotationParentActor) {
            FVector a; V4 b;
            I3* r = ((P*)((char*)WindRotationParentActor + 0x60))->sub_005c9a10(&b, &a, *(FVector*)&st)->sub_0058e400();
            I3* d = (I3*)&st;
            d->x = r->x; d->y = r->y; d->z = r->z;
        }
        for (int i = 0; i < n; i++) {
            AActor* a = Touching(i);
            R* r = sub_015e32f0(a);
            if (r) { Comp* c = r->c;
              if (c && c->sub_016ae4d0())
                c->sub_016c6430(GeneratedWindConfig, &st); }
            S_016d6d50* s = sub_016d3440(a);
            if (s) { Comp* c = s->c;
              if (c && c->sub_016ae4d0())
                c->sub_016c6430(GeneratedWindConfig, &st); }
        }
    }
}

int sub_016d22c0(void);
int sub_016d4cd0(...);
extern undefined4 g_026e2320;
// @baa 0x016d7ce0
int sub_016d7ce0(void)
{
  if (g_026e2320 == 0) {
    g_026e2320 = sub_016d4cd0(L"BmGame");
    sub_016d22c0();
  }
  return g_026e2320;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_016d8130 { void* Data; int Num; int Max; void sub_016d8130(); };

// @baa 0x016d8130
void C_016d8130::sub_016d8130() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016d8190 { void* Data; int Num; int Max; void sub_016d8190(); };

// @baa 0x016d8190
void C_016d8190::sub_016d8190() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016d81f0 { void* Data; int Num; int Max; void sub_016d81f0(); };

// @baa 0x016d81f0
void C_016d81f0::sub_016d81f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016d8430 {
    void sub_016d8430(int);
};

// @baa 0x016d8430
void C_016d8430::sub_016d8430(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_016d8470 { void* Data; int Num; int Max; void sub_016d8470(); };

// @baa 0x016d8470
void C_016d8470::sub_016d8470() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016d8530 {
    void sub_016d8530(int);
};

// @baa 0x016d8530
void C_016d8530::sub_016d8530(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x016d8570
void __stdcall sub_016d8570(int a0, int a1) {  }

// @baa 0x016d8580
void __stdcall sub_016d8580(int a0, int a1) {  }

// @baa 0x016d85e0
void __stdcall sub_016d85e0(int a, int b) {}

struct C_016d85f0 {
    int sub_016d85f0();
};

// @baa 0x016d85f0
int C_016d85f0::sub_016d85f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

void sub_016d84d0();
// @baa 0x016d8e80
void sub_016d8e80(void) { sub_016d84d0(); }

struct C_016dafd0 { C_016dafd0* sub_016dafd0(void); };

// @baa 0x016dafd0
C_016dafd0* C_016dafd0::sub_016dafd0(void) { return this; }

struct C_016dafe0 { C_016dafe0* sub_016dafe0(void); };

// @baa 0x016dafe0
C_016dafe0* C_016dafe0::sub_016dafe0(void) { return this; }

struct C_016daff0 { void* Data; int Num; int Max; void sub_016daff0(); };

// @baa 0x016daff0
void C_016daff0::sub_016daff0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016db050 { void* Data; int Num; int Max; void sub_016db050(); };

// @baa 0x016db050
void C_016db050::sub_016db050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016db220 { C_016db220* sub_016db220(void); };

// @baa 0x016db220
C_016db220* C_016db220::sub_016db220(void) { return this; }

struct C_016db230 { C_016db230* sub_016db230(void); };

// @baa 0x016db230
C_016db230* C_016db230::sub_016db230(void) { return this; }

struct C_016db240 { C_016db240* sub_016db240(void); };

// @baa 0x016db240
C_016db240* C_016db240::sub_016db240(void) { return this; }

struct C_016db250 { void* Data; int Num; int Max; void sub_016db250(); };

// @baa 0x016db250
void C_016db250::sub_016db250() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016db2b0 {
    undefined4 sub_016db2b0();
};

// @baa 0x016db2b0
undefined4 C_016db2b0::sub_016db2b0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_016db2c0 {
    int sub_016db2c0();
};

// @baa 0x016db2c0
int C_016db2c0::sub_016db2c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_016db2e0 {
    int sub_016db2e0();
};

// @baa 0x016db2e0
int C_016db2e0::sub_016db2e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_016db2f0 {
    undefined4 sub_016db2f0(byte);
    int sub_016d81f0();
};

// @baa 0x016db2f0
undefined4 C_016db2f0::sub_016db2f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_016db2f0 *)(((char *)this + 8)))->sub_016d81f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_016db320 {
    undefined4 sub_016db320(byte);
    int sub_016bdd40();
};

// @baa 0x016db320
undefined4 C_016db320::sub_016db320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_016db320 *)(((char *)this + 0x14)))->sub_016bdd40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_016daff0();
// @baa 0x016db490
void sub_016db490(void) { sub_016daff0(); }

void sub_016db050();
// @baa 0x016db4a0
void sub_016db4a0(void) { sub_016db050(); }

struct C_016db4c0 { C_016db4c0* sub_016db4c0(void); };

// @baa 0x016db4c0
C_016db4c0* C_016db4c0::sub_016db4c0(void) { return this; }

void sub_016db0e0();
// @baa 0x016db4d0
void sub_016db4d0(void) { sub_016db0e0(); }

extern undefined * g_023a2c78;
// @baa 0x016db4e0
undefined4 * UObject::sub_016db4e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a2c78);
  return param_1;
}

void sub_016db250();
// @baa 0x016db5a0
void sub_016db5a0(void) { sub_016db250(); }

int sub_009369a0(void);
extern undefined * g_023a3378;
// @baa 0x016dc100
undefined4 * USkeletalMeshComponent::sub_016dc100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_023a3378);
  return param_1;
}

// @baa 0x016dc120
IMPLEMENT_CLASS_AT(URCapeSkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeSkeletalMeshComponent.cpp", 12);

// @baa 0x016dc190
extern undefined * g_023a35e8;
// @baa 0x016dc1e0
undefined4 * UObject::sub_016dc1e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a35e8);
  return param_1;
}

// @baa 0x016dc200
IMPLEMENT_CLASS_AT(URCapeCollisionConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 16);

// @baa 0x016dc280
int sub_016ce8f0(void);
int sub_016db600(...);
extern undefined4 g_026e22c4;
// @baa 0x016dc2a0
int sub_016dc2a0(void)
{
  if (g_026e22c4 == 0) {
    g_026e22c4 = sub_016db600(L"BmGame");
    sub_016ce8f0();
  }
  return g_026e22c4;
}

struct C_016dd730 { void sub_016db350(int); C_016dd730 *sub_016dd730(int); };

// @baa 0x016dd730
C_016dd730 *C_016dd730::sub_016dd730(int a) { sub_016db350(a); return this; }

void sub_016dd750();
// @baa 0x016ddc00
void sub_016ddc00(void) { sub_016dd750(); }

void sub_016dd8b0();
// @baa 0x016ddc10
void sub_016ddc10(void) { sub_016dd8b0(); }

struct C_016df850 { C_016df850* sub_016df850(void); };

// @baa 0x016df850
C_016df850* C_016df850::sub_016df850(void) { return this; }

void sub_016dda10();
// @baa 0x016df860
void sub_016df860(void) { sub_016dda10(); }

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

struct TConstSetBitIterator_016df8e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016df8e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016df8e0& operator++();
};

TConstSetBitIterator_016df8e0::TConstSetBitIterator_016df8e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016df8e0
TConstSetBitIterator_016df8e0& TConstSetBitIterator_016df8e0::operator++()
{
    It.Advance();
    return *this;
}

struct M_016df930 { void sub_016dd750(); };

struct C_016df930 { char pad[4]; M_016df930 m; void sub_016df930(); };

// @baa 0x016df930
void C_016df930::sub_016df930() { m.sub_016dd750(); }

// @baa 0x016df970
// @baa 0x016df9d0
// @baa 0x016dfa00
// @baa 0x016dfa90
// @baa 0x016dfaf0
IMPLEMENT_CLASS_AT(ARCrowdAttractor_Cylinder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCrowd.cpp", 16);

// @baa 0x016dfb50
// @baa 0x016dfbb0
// @baa 0x016dfc30
// @baa 0x016dfc90
// @baa 0x016dfcf0
// @baa 0x016dfd50
// @baa 0x016dfdb0
// @baa 0x016dfe10
// @baa 0x016dfe70
int sub_016ce2f0(void);
int sub_016ddd00(...);
extern undefined4 g_026e22b4;
// @baa 0x016dfea0
int sub_016dfea0(void)
{
  if (g_026e22b4 == 0) {
    g_026e22b4 = sub_016ddd00(L"BmGame");
    sub_016ce2f0();
  }
  return g_026e22b4;
}
