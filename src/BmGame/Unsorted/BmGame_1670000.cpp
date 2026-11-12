// BmGame_1670000.cpp (part 1 of 4): 94 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_01670060(int a0); };

// @baa 0x01670060
C* C::sub_01670060(int a0) { return this; }

struct C_01670070 { int sub_01670070(void); };

// @baa 0x01670070
int C_01670070::sub_01670070(void) { return *(int*)((char*)this + 0); }

struct C_01670080 { C_01670080* sub_01670080(int a0); };

// @baa 0x01670080
C_01670080* C_01670080::sub_01670080(int a0) { return this; }

struct C_01670090 { int sub_01670090(void); };

// @baa 0x01670090
int C_01670090::sub_01670090(void) { return *(int*)((char*)this + 0); }

struct C_016700a0 { int sub_016700a0(void); };

// @baa 0x016700a0
int C_016700a0::sub_016700a0(void) { return *(int*)((char*)this + 0); }

struct C_016700b0 {
    int sub_016700b0(int);
};

// @baa 0x016700b0
int C_016700b0::sub_016700b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_016700c0 { C_016700c0* sub_016700c0(int a0); };

// @baa 0x016700c0
C_016700c0* C_016700c0::sub_016700c0(int a0) { return this; }

struct C_016700d0 { int sub_016700d0(void); };

// @baa 0x016700d0
int C_016700d0::sub_016700d0(void) { return *(int*)((char*)this + 0); }

struct C_016700e0 { int sub_016700e0(void); };

// @baa 0x016700e0
int C_016700e0::sub_016700e0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016700f0(INT Index);
};

// @baa 0x016700f0
DWORD* S::sub_016700f0(INT Index)
{
    return &Items(Index);
}

// @baa 0x01670140
void __stdcall sub_01670140(int a0, int a1) {  }

struct C_01670150 { int sub_01670150(void); };

// @baa 0x01670150
int C_01670150::sub_01670150(void) { return *(int*)((char*)this + 0); }

struct C_01670160 { int sub_01670160(void); };

// @baa 0x01670160
int C_01670160::sub_01670160(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_01670170{
void sub_01670170(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01670170
void C_01670170::sub_01670170(int param_2,int param_3)
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

struct C_01670290 {
    int sub_01670290(int);
};

// @baa 0x01670290
int C_01670290::sub_01670290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016702a0 { int sub_016702a0(void); };

// @baa 0x016702a0
int C_016702a0::sub_016702a0(void) { return *(int*)((char*)this + 0); }

struct C_01670320 { C_01670320* sub_01670320(int a0); };

// @baa 0x01670320
C_01670320* C_01670320::sub_01670320(int a0) { return this; }

struct C_016703a0 { int sub_016703a0(void); };

// @baa 0x016703a0
int C_016703a0::sub_016703a0(void) { return *(int*)((char*)this + 0); }

struct C_016703b0 { int sub_016703b0(void); };

// @baa 0x016703b0
int C_016703b0::sub_016703b0(void) { return *(int*)((char*)this + 0); }

struct C_016703c0 { int sub_016703c0(void); };

// @baa 0x016703c0
int C_016703c0::sub_016703c0(void) { return *(int*)((char*)this + 0); }

struct C_01670440 { int sub_01670440(void); };

// @baa 0x01670440
int C_01670440::sub_01670440(void) { return *(int*)((char*)this + 0); }

struct C_01670450 { int sub_01670450(void); };

// @baa 0x01670450
int C_01670450::sub_01670450(void) { return *(int*)((char*)this + 0); }

struct C_01670460 { int sub_01670460(void); };

// @baa 0x01670460
int C_01670460::sub_01670460(void) { return *(int*)((char*)this + 0); }

struct C_016704d0 {
    bool sub_016704d0();
};

// @baa 0x016704d0
bool C_016704d0::sub_016704d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 1;
}

extern char g_02359c2c[];
struct C_01671640 { void sub_01671640(void); };

// @baa 0x01671640
void C_01671640::sub_01671640(void) { *(int*)((char*)this + 0) = (int)g_02359c2c; }

struct C_01671fd0 { void sub_0166a300(); void sub_01671fd0(int); };

// @baa 0x01671fd0
void C_01671fd0::sub_01671fd0(int) { sub_0166a300(); }

struct C_01671fe0 { int sub_01671fe0(void); };

// @baa 0x01671fe0
int C_01671fe0::sub_01671fe0(void) { return *(int*)((char*)this + 24); }

void sub_01670500();
// @baa 0x01672280
void sub_01672280(void) { sub_01670500(); }

struct S_01673ba0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01673ba0(INT Index);
};

// @baa 0x01673ba0
DWORD* S_01673ba0::sub_01673ba0(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_01673bf0(INT Index);
};

// @baa 0x01673bf0
FFaceFXElement* UFxRenderWidget::sub_01673bf0(INT Index)
{
	return &BoneArray(Index);
}

struct E { BYTE Bytes[20]; };

struct S_01673c40 {
    TArray<E> Items; // 0x00
    const E* sub_01673c40(INT Index) const;
};

// @baa 0x01673c40
const E* S_01673c40::sub_01673c40(INT Index) const
{
    return &Items(Index);
}

struct S_01673c90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01673c90(INT Index);
};

// @baa 0x01673c90
DWORD* S_01673c90::sub_01673c90(INT Index)
{
    return &Items(Index);
}

struct T_01673ce0;
// @baa 0x01673ce0
template INT TArray<T_01673ce0*>::RemoveItem(T_01673ce0* const&);

struct S_01673d60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01673d60(INT Index);
};

// @baa 0x01673d60
DWORD* S_01673d60::sub_01673d60(INT Index)
{
    return &Items(Index);
}

struct S_01673db0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01673db0(INT Index) const;
};

// @baa 0x01673db0
const DWORD* S_01673db0::sub_01673db0(INT Index) const
{
    return &Items(Index);
}

struct C_01673e00 {
    int sub_01673e00(undefined4 *, int);
    int sub_01670170(int, int);
};

// @baa 0x01673e00
int C_01673e00::sub_01673e00(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_01673e00 *)(this))->sub_01670170(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct S_01673e30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01673e30(INT Index);
};

// @baa 0x01673e30
DWORD* S_01673e30::sub_01673e30(INT Index)
{
    return &Items(Index);
}

struct C_01673f40 {
    int sub_01673f40(int);
};

// @baa 0x01673f40
int C_01673f40::sub_01673f40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01673f50
void __stdcall sub_01673f50(int a0, int a1) {  }

// @baa 0x01673f60
void __stdcall sub_01673f60(int a0, int a1) {  }

struct C_01673f70 {
    int sub_01673f70(int);
};

// @baa 0x01673f70
int C_01673f70::sub_01673f70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01673f80
void __stdcall sub_01673f80(int a0, int a1) {  }

struct C_01673ff0 {
    int sub_01673ff0(int);
};

// @baa 0x01673ff0
int C_01673ff0::sub_01673ff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01674000
void __stdcall sub_01674000(int a0, int a1) {  }

struct C_01674010 {
    int sub_01674010(int);
};

// @baa 0x01674010
int C_01674010::sub_01674010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01674020
void __stdcall sub_01674020(int a0, int a1) {  }

struct C_01674030 {
    int sub_01674030(int);
};

// @baa 0x01674030
int C_01674030::sub_01674030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S_01674040 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01674040(INT Index);
};

// @baa 0x01674040
DWORD* S_01674040::sub_01674040(INT Index)
{
    return &Items(Index);
}

int sub_0166cf40(void);
int sub_016730b0(...);
extern undefined4 g_026e1d7c;
// @baa 0x01674180
int sub_01674180(void)
{
  if (g_026e1d7c == 0) {
    g_026e1d7c = sub_016730b0(L"BmGame");
    sub_0166cf40();
  }
  return g_026e1d7c;
}

int sub_005c7a20(void);
extern undefined * g_02376168;
// @baa 0x016741b0
undefined4 * UObject::sub_016741b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02376168);
  return param_1;
}

// @baa 0x016741d0
IMPLEMENT_CLASS_AT(UREvidence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 7);

// @baa 0x01674260
struct C_016742a0 {
    undefined4 * sub_016742a0(byte);
};

int sub_0053dfa0(...);
// @baa 0x016742a0
undefined4 * C_016742a0::sub_016742a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02359c2c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01674590 {
    int sub_01674590();
};

// @baa 0x01674590
int C_01674590::sub_01674590(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (*(int *)(param_1 + 4) == 0) {
    for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != *(int *)(param_1 + 0x20);
        iVar1 = *(int *)(iVar1 + 0x1c)) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

extern undefined * g_023762b8;
// @baa 0x01675240
undefined4 * UObject::sub_01675240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023762b8);
  return param_1;
}

// @baa 0x01675260
IMPLEMENT_CLASS_AT(URActorFactoryXrayInterItem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 21);

// @baa 0x01675300
IMPLEMENT_CLASS_AT(URActorFactoryXrayMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 19);

// @baa 0x016753a0
IMPLEMENT_CLASS_AT(URActorFactoryXrayWire, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 20);

// @baa 0x01675400
// @baa 0x01675420
IMPLEMENT_CLASS_AT(URActorFactoryForensicsDna, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 17);

// @baa 0x01675480
int URActorFactoryForensicsDna::vf_120(void) { return 0; }

// @baa 0x016754f0
IMPLEMENT_CLASS_AT(URActorFactoryForensicsDnaNonScan, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 18);

// @baa 0x01675550
void sub_01673ee0();
// @baa 0x01676d30
void sub_01676d30(void) { sub_01673ee0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01676d80 { void* Data; int Num; int Max; void sub_01676d80(); };

// @baa 0x01676d80
void C_01676d80::sub_01676d80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01676de0 { void* Data; int Num; int Max; void sub_01676de0(); };

// @baa 0x01676de0
void C_01676de0::sub_01676de0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01676ea0 { void* Data; int Num; int Max; void sub_01676ea0(); };

// @baa 0x01676ea0
void C_01676ea0::sub_01676ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01676fb0 { void* Data; int Num; int Max; void sub_01676fb0(); };

// @baa 0x01676fb0
void C_01676fb0::sub_01676fb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016770f0 { void* Data; int Num; int Max; void sub_016770f0(); };

// @baa 0x016770f0
void C_016770f0::sub_016770f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01677150
void __stdcall sub_01677150(INT a, INT b)
{
}

void sub_01676d80();
// @baa 0x01677240
void sub_01677240(void) { sub_01676d80(); }

void sub_01676de0();
// @baa 0x01677250
void sub_01677250(void) { sub_01676de0(); }

void sub_01676e40();
// @baa 0x01677260
void sub_01677260(void) { sub_01676e40(); }

struct C_view {
    AActor* sub_016765c0(INT, ANavigationPoint*&);
};

// @baa 0x0167ba30
AActor* ARPawn::GetRoamPoint(INT param_2, ANavigationPoint*& param_3)
{
    int param_1 = (int)this;
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) | 0x80000;
  AActor* Result = ((C_view *)(this))->sub_016765c0(param_2, param_3);
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) & 0xfff7ffff;
  return Result;
}

struct C_0167bd40 { C_0167bd40* sub_0167bd40(void); };

// @baa 0x0167bd40
C_0167bd40* C_0167bd40::sub_0167bd40(void) { return this; }

struct C_0167bd50 { C_0167bd50* sub_0167bd50(void); };

// @baa 0x0167bd50
C_0167bd50* C_0167bd50::sub_0167bd50(void) { return this; }

struct C_0167bd60 { C_0167bd60* sub_0167bd60(void); };

// @baa 0x0167bd60
C_0167bd60* C_0167bd60::sub_0167bd60(void) { return this; }

struct C_0167bd70 { void* Data; int Num; int Max; void sub_0167bd70(); };

// @baa 0x0167bd70
void C_0167bd70::sub_0167bd70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_0167bdd0 {
    int sub_0167bdd0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0167bdd0
int C_0167bdd0::sub_0167bdd0()
{
    return g_026a1ca4(Index);
}

extern undefined * g_023768c8;
// @baa 0x0167be30
undefined4 * UObject::sub_0167be30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023768c8);
  return param_1;
}

// @baa 0x0167be50
IMPLEMENT_CLASS_AT(URDummyEvidenceConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 40);

// @baa 0x0167bec0
int sub_0166c960(void);
int sub_0167b3b0(...);
extern undefined4 g_026e1d6c;
// @baa 0x0167bee0
int sub_0167bee0(void)
{
  if (g_026e1d6c == 0) {
    g_026e1d6c = sub_0167b3b0(L"BmGame");
    sub_0166c960();
  }
  return g_026e1d6c;
}

extern undefined * g_023769d8;
// @baa 0x0167bf10
undefined4 * UObject::sub_0167bf10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023769d8);
  return param_1;
}

// @baa 0x0167bf30
IMPLEMENT_CLASS_AT(URSmashablePropConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp", 18);

// @baa 0x0167bfb0
struct C_0167f8f0 {
    int sub_0167f8f0(byte);
};

int sub_0167aa60(void);
// @baa 0x0167f8f0
int C_0167f8f0::sub_0167f8f0(byte param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) != 0) {
    sub_0167aa60();
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01672fd0
{
    DWORD A;
    DWORD B;
    C_01672fd0* sub_01672fd0(UINT P);
};

// @baa 0x01672fd0
C_01672fd0* C_01672fd0::sub_01672fd0(UINT P)
{
    A = 0;
    B = 0;
    return this;
}

struct C_01672ff0
{
    DWORD A;
    DWORD B;
    C_01672ff0* sub_01672ff0(UINT P);
};

// @baa 0x01672ff0
C_01672ff0* C_01672ff0::sub_01672ff0(UINT P)
{
    A = 0;
    B = 0;
    return this;
}

struct C_P8_a00
{
    BYTE Pad[8];
    DWORD V8;
    C_P8_a00* sub_0163f860();
};

struct C_01674a00
{
    DWORD sub_01674a00();
};

// @baa 0x01674a00
DWORD C_01674a00::sub_01674a00()
{
    C_P8_a00* P = ((C_P8_a00*)this)->sub_0163f860();
    return P->V8 == 1 ? (DWORD)P : 0;
}

struct C_P8_a20
{
    BYTE Pad[8];
    DWORD V8;
    C_P8_a20* sub_0163f890();
};

struct C_01674a20
{
    DWORD sub_01674a20();
};

// @baa 0x01674a20
DWORD C_01674a20::sub_01674a20()
{
    C_P8_a20* P = ((C_P8_a20*)this)->sub_0163f890();
    return P->V8 == 1 ? (DWORD)P : 0;
}
