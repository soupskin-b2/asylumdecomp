// UnFracturedStaticMesh.cpp (part 1 of 6): 150 functions
// Placed here by: neighbours 113, class 21, callers 8, file 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_0076b860(int); C *sub_00770500(int); };

// @baa 0x00770500
C *C::sub_00770500(int a) { sub_0076b860(a); return this; }

// @baa 0x007a4f40
int sub_007a4f40(int a0, int a1) { return a1; }

extern char g_01ebc268[];
// @baa 0x007a4f50
int sub_007a4f50(void) { return (int)g_01ebc268; }

struct C_007a4fe0 { char* sub_007a4fe0(void); };

// @baa 0x007a4fe0
char* C_007a4fe0::sub_007a4fe0(void) { return (char*)this + 560; }

// @baa 0x007a4ff0
int sub_007a4ff0(void) { return 4; }

extern char g_01f22974[];
// @baa 0x007a5010
int sub_007a5010(void) { return (int)g_01f22974; }

// @baa 0x007a5020
int UFracturedSkinnedMeshComponent::vf_200(void) { return 0; }

extern char g_01f22cfc[];
// @baa 0x007a5060
int sub_007a5060(void) { return (int)g_01f22cfc; }

extern char g_01ebb554[];
struct C_007a5070 { void sub_007a5070(void); };

// @baa 0x007a5070
void C_007a5070::sub_007a5070(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_007a5080 {
    undefined4 * sub_007a5080(byte);
};

int sub_0053dfa0(...);
// @baa 0x007a5080
undefined4 * C_007a5080::sub_007a5080(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01f22f80[];
// @baa 0x007a50a0
int sub_007a50a0(void) { return (int)g_01f22f80; }

int sub_00b511a0(void);
int sub_00b68d60(...);
extern undefined4 g_026bf5a0;
// @baa 0x007a50b0
int sub_007a50b0(void)
{
  if (g_026bf5a0 == 0) {
    g_026bf5a0 = sub_00b68d60(L"Engine");
    sub_00b511a0();
  }
  return g_026bf5a0;
}

struct C_007a5150 { C_007a5150* sub_007a5150(void); };

// @baa 0x007a5150
C_007a5150* C_007a5150::sub_007a5150(void) { return this; }

struct C_007a51e0 { C_007a51e0* sub_007a51e0(void); };

// @baa 0x007a51e0
C_007a51e0* C_007a51e0::sub_007a51e0(void) { return this; }

// @baa 0x007a51f0
void sub_007a51f0(void) {  }

// @baa 0x007a5260
void sub_007a5260(void) {  }

struct C_007a5320 { C_007a5320* sub_007a5320(void); };

// @baa 0x007a5320
C_007a5320* C_007a5320::sub_007a5320(void) { return this; }

// @baa 0x007a5330
void sub_007a5330(void) {  }

struct C_007a5340 { int sub_007a5340(void); };

// @baa 0x007a5340
int C_007a5340::sub_007a5340(void) { return *(int*)((char*)this + 4); }

extern char g_02406e04[];
struct C_007a5350 { void sub_007a5350(void); };

// @baa 0x007a5350
void C_007a5350::sub_007a5350(void) { *(int*)((char*)this + 0) = (int)g_02406e04; }

extern "C" __declspec(dllimport) int _fpclass(...);
// @baa 0x007a5360
bool sub_007a5360(float param_1)
{
  uint uVar1;
  uVar1 = _fpclass((double)param_1);
  return (uVar1 & 0x207) == 0;
}

// @baa 0x007a5870
IMPLEMENT_CLASS_AT(UFracturedStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 21);

// @baa 0x007a5980
int UFracturedStaticMesh::vf_000(void) { return 1; }

// @baa 0x007a5990
bool UFracturedStaticMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a59d0
IMPLEMENT_CLASS_AT(UFracturedBaseComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 22);

// @baa 0x007a5ae0
int UFracturedBaseComponent::vf_000(void) { return 1; }

// @baa 0x007a5af0
bool UFracturedBaseComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a5b30
int UFracturedStaticMeshComponent::vf_000(void) { return 1; }

// @baa 0x007a5b40
int UFracturedSkinnedMeshComponent::vf_000(void) { return 1; }

// @baa 0x007a5b50
IMPLEMENT_CLASS_AT(AFracturedStaticMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 25);

// @baa 0x007a5c60
int AFracturedStaticMeshActor::vf_000(void) { return 1; }

// @baa 0x007a5c70
bool AFracturedStaticMeshActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a5cb0
int AFracturedStaticMeshPart::vf_000(void) { return 1; }

// @baa 0x007a5cc0
IMPLEMENT_CLASS_AT(AFractureManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 27);

// @baa 0x007a5df0
bool AFractureManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007a6fa0
char* UFracturedStaticMesh::sub_007a6fa0(void) { return (char*)this + 476; }

struct C_007a7090 {
    uint sub_007a7090();
};

// @baa 0x007a7090
uint C_007a7090::sub_007a7090(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1fc) >> 2 & 1;
}

struct C_007a70a0 {
    int sub_007a70a0(ushort);
};

// @baa 0x007a70a0
int C_007a70a0::sub_007a70a0(ushort param_2)
{
    int param_1 = (int)this;

  return (uint)param_2 * *(int *)(*(int *)(param_1 + 0xc) + 0x24) +
         *(int *)(*(int *)(param_1 + 0xc) + 0x20);
}

struct C_007a7120 {
    int sub_007a7120();
};

// @baa 0x007a7120
int C_007a7120::sub_007a7120(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + 0x68;
}

struct C_007a7130 {
    int sub_007a7130();
};

// @baa 0x007a7130
int C_007a7130::sub_007a7130(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x50;
}

struct C_007a7180 {
    float10 sub_007a7180();
};

// @baa 0x007a7180
float10 C_007a7180::sub_007a7180(void)
{
    int * param_1 = (int *)this;

  return (float10)*(float *)(*param_1 + 0xd4);
}

extern char g_01f258d0[];
// @baa 0x007a7260
int sub_007a7260(void) { return (int)g_01f258d0; }

// @baa 0x007a7290
int sub_007a7290(void) { return 0; }

// @baa 0x007a72f0
void AFracturedStaticMeshPart::vf_384(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {  }

struct C_007b1240 {
    undefined4 * sub_007b1240(byte);
};

// @baa 0x007b1240
undefined4 * C_007b1240::sub_007b1240(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007b1310 { void sub_007b1310(void); };

// @baa 0x007b1310
void C_007b1310::sub_007b1310(void) { *(int*)((char*)this + 0) = (int)g_02406e04; }

struct C_007b14f0 {
    undefined4 * sub_007b14f0(byte);
};

// @baa 0x007b14f0
undefined4 * C_007b14f0::sub_007b14f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007b15c0
int UFracturedStaticMesh::sub_007b15c0(void) { return *(int*)((char*)this + 480); }

struct C_007b1860 {
    int sub_007b1860();
};

// @baa 0x007b1860
int C_007b1860::sub_007b1860(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = 0;
  if ((*(int *)(param_1 + 0x1b4) != 0) && ((*(byte *)(param_1 + 0x1fc) & 8) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x20) / 3;
  }
  return iVar1;
}

// @baa 0x007b1960
undefined4 AFracturedStaticMeshActor::vf_178(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x1c0) & 1) != 0) || (*(int *)(param_1 + 0xa4) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_007b2480{
int sub_007b2480(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x007b2480
int C_007b2480::sub_007b2480(undefined4*param_2)
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

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_007b24e0(INT Index);
};

// @baa 0x007b24e0
E* S::sub_007b24e0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_007b2530 {
    int sub_007b2530(int);
    int sub_007a92d0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x007b2530
int C_007b2530::sub_007b2530(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b2530 *)(this))->sub_007a92d0(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct S_007b2560 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b2560(INT Index);
};

// @baa 0x007b2560
DWORD* S_007b2560::sub_007b2560(INT Index)
{
    return &Items(Index);
}

struct S_007b25b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_007b25b0(INT Index) const;
};

// @baa 0x007b25b0
const DWORD* S_007b25b0::sub_007b25b0(INT Index) const
{
    return &Items(Index);
}

struct C_007b2600{
int sub_007b2600(undefined4*);
};

// @baa 0x007b2600
int C_007b2600::sub_007b2600(undefined4*param_2)
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

struct C_007b2660 {
    int sub_007b2660(int);
    int sub_007a9370(int);
};

// @baa 0x007b2660
int C_007b2660::sub_007b2660(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b2660 *)(this))->sub_007a9370(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct E_007b26a0 { BYTE Bytes[36]; };

struct S_007b26a0 {
    TArray<E_007b26a0> Items; // 0x00
    E_007b26a0* sub_007b26a0(INT Index);
};

// @baa 0x007b26a0
E_007b26a0* S_007b26a0::sub_007b26a0(INT Index)
{
    return &Items(Index);
}

struct C_007b26f0{
int sub_007b26f0(undefined4*);
};

// @baa 0x007b26f0
int C_007b26f0::sub_007b26f0(undefined4*param_2)
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

struct C_007b82c0 {
    undefined4 sub_007b82c0();
};

int sub_007b80e0(...);
// @baa 0x007b82c0
undefined4 C_007b82c0::sub_007b82c0(void)
{
    int param_1 = (int)this;

  sub_007b80e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  return 0x10;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007bd190 { void* Data; int Num; int Max; void sub_007bd190(); };

// @baa 0x007bd190
void C_007bd190::sub_007bd190() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd2e0 { C_007bd2e0* sub_007bd2e0(void); };

// @baa 0x007bd2e0
C_007bd2e0* C_007bd2e0::sub_007bd2e0(void) { return this; }

struct C_007bd2f0 { void* Data; int Num; int Max; void sub_007bd2f0(); };

// @baa 0x007bd2f0
void C_007bd2f0::sub_007bd2f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd350 {
    void sub_007bd350();
};

// @baa 0x007bd350
void C_007bd350::sub_007bd350(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_007bd360 { void* Data; int Num; int Max; void sub_007bd360(); };

// @baa 0x007bd360
void C_007bd360::sub_007bd360() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd4b0 { C_007bd4b0* sub_007bd4b0(void); };

// @baa 0x007bd4b0
C_007bd4b0* C_007bd4b0::sub_007bd4b0(void) { return this; }

struct C_007bd4c0 { void* Data; int Num; int Max; void sub_007bd4c0(); };

// @baa 0x007bd4c0
void C_007bd4c0::sub_007bd4c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd520 { void* Data; int Num; int Max; void sub_007bd520(); };

// @baa 0x007bd520
void C_007bd520::sub_007bd520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd690 { void* Data; int Num; int Max; void sub_007bd690(); };

// @baa 0x007bd690
void C_007bd690::sub_007bd690() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007bd6f0 { void* Data; int Num; int Max; void sub_007bd6f0(); };

// @baa 0x007bd6f0
void C_007bd6f0::sub_007bd6f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x007bd8b0
void __stdcall sub_007bd8b0(int a0, int a1) {  }

// @baa 0x007bd8c0
void __stdcall sub_007bd8c0(int a0, int a1) {  }

// @baa 0x007bd950
void __stdcall sub_007bd950(int a0, int a1) {  }

// @baa 0x007bd960
void __stdcall sub_007bd960(int a0, int a1) {  }

struct C_007be470 {
    int sub_007be470();
};

// @baa 0x007be470
int C_007be470::sub_007be470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_007be480 { void* Data; int Num; int Max; void sub_007be480(); };

// @baa 0x007be480
void C_007be480::sub_007be480() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007be4e0 { void* Data; int Num; int Max; void sub_007be4e0(); };

// @baa 0x007be4e0
void C_007be4e0::sub_007be4e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007be780 {
    int sub_007be780(int);
};

// @baa 0x007be780
int C_007be780::sub_007be780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

int sub_007c2c10(...);
// @baa 0x007c2d30
undefined4 UFracturedBaseComponent::sub_007c2d30(void)
{
    int param_1 = (int)this;

  sub_007c2c10(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0xc);
  return 0x18;
}

struct C_007c2fb0 {
    undefined4 sub_007c2fb0();
};

int sub_007c2df0(...);
// @baa 0x007c2fb0
undefined4 C_007c2fb0::sub_007c2fb0(void)
{
    int param_1 = (int)this;

  sub_007c2df0(*(undefined4 *)(param_1 + 4),param_1 + 8);
  return 0x14;
}

struct M_007c3270 { void sub_00665e00(); };

struct C_007c3270 { char pad[16]; M_007c3270 m; void sub_007c3270(); };

// @baa 0x007c3270
void C_007c3270::sub_007c3270() { m.sub_00665e00(); }

struct C_007c4130 { void* Data; int Num; int Max; void sub_007c4130(); };

// @baa 0x007c4130
void C_007c4130::sub_007c4130() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007c4190 { void sub_007becf0(int); C_007c4190 *sub_007c4190(int); };

// @baa 0x007c4190
C_007c4190 *C_007c4190::sub_007c4190(int a) { sub_007becf0(a); return this; }

struct C_007c5640 { void sub_007c3740(int); C_007c5640 *sub_007c5640(int); };

// @baa 0x007c5640
C_007c5640 *C_007c5640::sub_007c5640(int a) { sub_007c3740(a); return this; }

struct C_007c5660 { void sub_00792b40(int); C_007c5660 *sub_007c5660(int); };

// @baa 0x007c5660
C_007c5660 *C_007c5660::sub_007c5660(int a) { sub_00792b40(a); return this; }

int sub_007c2bc0(void);
// @baa 0x007c58b0
undefined4 UFracturedBaseComponent::sub_007c58b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c2bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_007c2d50(void);
// @baa 0x007c5940
undefined4 UFracturedBaseComponent::sub_007c5940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c2d50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_007c2fd0(void);
// @baa 0x007c59d0
undefined4 UFracturedBaseComponent::sub_007c59d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c2fd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007c59f0 { void sub_007becf0(int); C_007c59f0 *sub_007c59f0(int); };

// @baa 0x007c59f0
C_007c59f0 *C_007c59f0::sub_007c59f0(int a) { sub_007becf0(a); return this; }

struct C_007c8310 { C_007c8310* sub_007c8310(void); };

// @baa 0x007c8310
C_007c8310* C_007c8310::sub_007c8310(void) { return this; }

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

struct TConstSetBitIterator_007c8520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c8520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c8520& operator++();
};

TConstSetBitIterator_007c8520::TConstSetBitIterator_007c8520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c8520
TConstSetBitIterator_007c8520& TConstSetBitIterator_007c8520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007c86b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007c86b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007c86b0& operator++();
};

TConstSetBitIterator_007c86b0::TConstSetBitIterator_007c86b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007c86b0
TConstSetBitIterator_007c86b0& TConstSetBitIterator_007c86b0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x007c87f0
// @baa 0x007c8860
int sub_009799d0(void);
extern undefined * g_01f29ec0;
// @baa 0x007c8890
undefined4 * UStaticMeshComponent::sub_007c8890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009799d0();
  *param_1 = (undefined4)(&g_01f29ec0);
  param_1[0x7b] = 0;
  return param_1;
}

// @baa 0x007c88e0
IMPLEMENT_CLASS_AT(UFracturedSkinnedMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 24);

// @baa 0x007c8960
// @baa 0x007c89c0
int UFracturedStaticMeshComponent::vf_204(void) { return 0; }

// @baa 0x007c89d0
IMPLEMENT_CLASS_AT(UFracturedStaticMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 23);

// @baa 0x007c8a40
// @baa 0x007c8a70
// @baa 0x007c8c10
// @baa 0x007c8ca0
IMPLEMENT_CLASS_AT(AFracturedStaticMeshPart, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp", 26);

// @baa 0x007c8d00
// @baa 0x007c8d60
// @baa 0x007c8df0
struct C_007c8fc0 {
    undefined4 sub_007c8fc0(byte);
};

int sub_007c8f70(void);
// @baa 0x007c8fc0
undefined4 C_007c8fc0::sub_007c8fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c8f70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_007c92b0 { void sub_0068a360(); };

struct C_007c92b0 { char pad[144]; M_007c92b0 m; void sub_007c92b0(); };

// @baa 0x007c92b0
void C_007c92b0::sub_007c92b0() { m.sub_0068a360(); }

struct C_007c94a0 {
    undefined4 sub_007c94a0(byte);
};

int sub_007c8700(void);
// @baa 0x007c94a0
undefined4 C_007c94a0::sub_007c94a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c8700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_007c92c0();
// @baa 0x007c94c0
void sub_007c94c0(void) { sub_007c92c0(); }

// @baa 0x007c94d0
// @baa 0x007c9500
// @baa 0x007c9530
// @baa 0x007c9560
// @baa 0x007c9590
// @baa 0x007c95c0
// @baa 0x007c95f0
// @baa 0x007c96b0
// @baa 0x007c9770
// @baa 0x007c9830
// @baa 0x007c98f0
// @baa 0x007c99b0
// @baa 0x007c9d50
void sub_007c9d50(void) { sub_007c92c0(); }

int sub_007a59d0(void);
int sub_007c95f0(...);
extern undefined4 g_026b5320;
// @baa 0x007c9d60
int sub_007c9d60(void)
{
  if (g_026b5320 == 0) {
    g_026b5320 = sub_007c95f0(L"Engine");
    sub_007a59d0();
  }
  return g_026b5320;
}

int sub_007a5b50(void);
int sub_007c9830(...);
extern undefined4 g_026b532c;
// @baa 0x007c9d90
int sub_007c9d90(void)
{
  if (g_026b532c == 0) {
    g_026b532c = sub_007c9830(L"Engine");
    sub_007a5b50();
  }
  return g_026b532c;
}

// @baa 0x007c9dc0
// @baa 0x007c9ed0
bool UFracturedStaticMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007c9f10
// @baa 0x007ca020
bool UFracturedSkinnedMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007ca060
// @baa 0x007ca170
bool AFracturedStaticMeshPart::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007ca3e0
UStaticMesh::UStaticMesh()
{
    *(DWORD*)((BYTE*)this + 0x3c) = 0;
    *(DWORD*)((BYTE*)this + 0x40) = 0;
    *(DWORD*)((BYTE*)this + 0x44) = 0;
    *(DWORD*)((BYTE*)this + 0x68) = 0;
    *(DWORD*)((BYTE*)this + 0x6c) = 0;
    *(DWORD*)((BYTE*)this + 0x70) = 0;
    *(DWORD*)((BYTE*)this + 0x74) = 0;
    *(DWORD*)((BYTE*)this + 0x78) = 0;
    *(DWORD*)((BYTE*)this + 0x7c) = 0;
    *(DWORD*)((BYTE*)this + 0xa0) = 0;
    *(DWORD*)((BYTE*)this + 0xa4) = 0;
    *(DWORD*)((BYTE*)this + 0xa8) = 0;
    *(DWORD*)((BYTE*)this + 0xac) = 0;
    *(DWORD*)((BYTE*)this + 0xb0) = 0;
    *(DWORD*)((BYTE*)this + 0xb4) = 0;
    *(DWORD*)((BYTE*)this + 0xd8) = 0;
    *(DWORD*)((BYTE*)this + 0xdc) = 0;
    *(DWORD*)((BYTE*)this + 0xe0) = 0;
    *(DWORD*)((BYTE*)this + 0x104) = 0;
    *(DWORD*)((BYTE*)this + 0x108) = 0;
    *(DWORD*)((BYTE*)this + 0x10c) = 0;
    *(DWORD*)((BYTE*)this + 0x110) = 0;
    *(DWORD*)((BYTE*)this + 0x114) = 0;
    *(DWORD*)((BYTE*)this + 0x118) = 0;
    *(DWORD*)((BYTE*)this + 0x11c) = 0;
}

int sub_005c7a70(...);
int sub_007ca3e0(void);
// @baa 0x007ca4e0
undefined4 UStaticMesh::sub_007ca4e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007ca3e0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x128);
  }
  return param_1;
}

// @baa 0x007ca510
// @baa 0x007ca5b0
void sub_007ca5b0(void) { sub_007c92c0(); }

// @baa 0x007ca5f0
// @baa 0x007ca670
int sub_007c96b0(...);
int sub_007c9dc0(void);
extern undefined4 g_026b5324;
// @baa 0x007ca6a0
int sub_007ca6a0(void)
{
  if (g_026b5324 == 0) {
    g_026b5324 = sub_007c96b0(L"Engine");
    sub_007c9dc0();
  }
  return g_026b5324;
}

int sub_007c98f0(...);
int sub_007ca060(void);
extern undefined4 g_026b5330;
// @baa 0x007ca6d0
int sub_007ca6d0(void)
{
  if (g_026b5330 == 0) {
    g_026b5330 = sub_007c98f0(L"Engine");
    sub_007ca060();
  }
  return g_026b5330;
}

struct M_007cab80 { void sub_007c92c0(); };

struct C_007cab80 { char pad[28]; M_007cab80 m; void sub_007cab80(); };

// @baa 0x007cab80
void C_007cab80::sub_007cab80() { m.sub_007c92c0(); }

// @baa 0x007cae20
// @baa 0x007cae60
int sub_007cb750(...);
// @baa 0x007cc990
undefined4 UFracturedBaseComponent::vf_280(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_007cb750(*(undefined4 *)(param_1 + 0x1b4));
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x1e0);
  }
  return 0;
}

struct C_view {
    int sub_007b1a70(int);
    int sub_00723aa0(int);
};

int sub_006311e0(...);
int sub_007cb3b0(...);
extern undefined4 g_01f246d4;
// @baa 0x007cc9b0
void UFracturedBaseComponent::vf_294(int param_2, int param_3)
{
    int param_1 = (int)this;
  int iVar1;
  int iVar2;
  if ((*(int *)(param_1 + 0x1b4) != 0) &&
     ((iVar1 = sub_007cb3b0(*(int *)(param_1 + 0x1b4)), param_3 != 0 ||
      (iVar2 = ((C_view *)(((char *)this + 0x1f0)))->sub_007b1a70(param_2), iVar2 != 0)))) {
    if (*(int *)(param_2 + 4) != *(int *)(iVar1 + 0x1e0)) {
      sub_006311e0("NewVisibleFragments.Num() == FracturedStaticMesh->GetNumFragments()",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp"
                   ,0x2ee,&g_01f246d4);
    }
    *(uint *)(param_1 + 0x1fc) = *(uint *)(param_1 + 0x1fc) | 1;
    ((C_view *)(((char *)this + 0x1f0)))->sub_00723aa0(param_2);
  }
  return;
}

// @baa 0x007ce040
undefined4 UFracturedStaticMeshComponent::vf_2b0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_007cb750(*(undefined4 *)(param_1 + 0x1b4));
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x1e8);
  }
  return 0xffffffff;
}

struct T {
    void sub_007c5b60();
};

struct S_007cf3f0 {
    void sub_007cf3f0();
};

// @baa 0x007cf3f0
void S_007cf3f0::sub_007cf3f0()
{
    return ((T*)(reinterpret_cast<void*>((char*)this - 4)))->sub_007c5b60();
}

struct C_007cf400 {
    void sub_007cf400();
    int sub_007c5b60();
};

extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x007cf400
void C_007cf400::sub_007cf400(void)
{
    int param_1 = (int)this;
  ((C_007cf400 *)(((char *)this + 0xa8)))->sub_007c5b60();
  *(undefined ***)(param_1 + 0xac) = (undefined **)(&g_01ec1274);
  if (*(int *)(param_1 + 0xb0) != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

// @baa 0x00947280
undefined4 UStaticMeshComponent::vf_250(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0xbc);
  }
  return 0;
}

// @baa 0x009472e0
undefined4 UStaticMeshComponent::vf_254(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0xb8);
  }
  return 0;
}

struct C_00eaa380 { void sub_00ea5ad0(int); C_00eaa380 *sub_00eaa380(int); };

// @baa 0x00eaa380
C_00eaa380 *C_00eaa380::sub_00eaa380(int a) { sub_00ea5ad0(a); return this; }
