// UnAnimTree.cpp (part 1 of 4): 251 functions
// Placed here by: neighbours 121, class 74, file 25, callers 19.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00c6b6a0(...);
int sub_00c75900(void);
extern undefined4 g_026c2b64;
// @baa 0x00404d70
int sub_00404d70(void)
{
  if (g_026c2b64 == 0) {
    g_026c2b64 = sub_00c6b6a0(L"Engine");
    sub_00c75900();
  }
  return g_026c2b64;
}

// @baa 0x00c4b320
int UAnimNode::vf_000(void) { return 1; }

// @baa 0x00c4b330
int UAnimNodeBlendBase::vf_000(void) { return 1; }

// @baa 0x00c4b3e0
int UAnimNodeMirror::vf_000(void) { return 1; }

// @baa 0x00c4b3f0
int UAnimNodeBlendMultiBone::vf_000(void) { return 1; }

// @baa 0x00c4b400
int UAnimNodeAimOffset::vf_000(void) { return 1; }

// @baa 0x00c4b410
int UAnimNodeSynch::vf_000(void) { return 1; }

// @baa 0x00c4b420
int UAnimNodeScalePlayRate::vf_000(void) { return 1; }

// @baa 0x00c4b430
int UAnimNodeScaleRateBySpeed::vf_000(void) { return 1; }

// @baa 0x00c4b440
int UAnimNodePlayCustomAnim::vf_000(void) { return 1; }

// @baa 0x00c4b450
int UAnimNodeSlot::vf_000(void) { return 1; }

// @baa 0x00c4b460
int UAnimTree::vf_000(void) { return 1; }

// @baa 0x00c4b470
int UAnimNodeAdditiveBlending::vf_000(void) { return 1; }

// @baa 0x00c4b480
void sub_00c4b480(void) {  }

extern "C" int g_026c4610;
extern "C" int g_026c4614;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00c4b490();
};

// @baa 0x00c4b490
void UObjectThunk::sub_00c4b490()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4610, g_026c4614, 0), 0, 0);
}

extern "C" int g_026c42a8;
extern "C" int g_026c42ac;
struct UObjectThunk_00c4b4c0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00c4b4c0();
};

// @baa 0x00c4b4c0
void UObjectThunk_00c4b4c0::sub_00c4b4c0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c42a8, g_026c42ac, 0), 0, 0);
}

// @baa 0x00c4b590
void UAnimNode::PlayAnim(UBOOL bLoop, FLOAT Rate, FLOAT StartTime) {  }

// @baa 0x00c4b5a0
void sub_00c4b5a0(void) {  }

// @baa 0x00c4b5b0
void UAnimNode::vf_11c()
{
    NodeTotalWeight = 0.0f;
}

int sub_006311e0(...);
extern undefined4 g_02053398;
// @baa 0x00c4b5e0
FLOAT UAnimNodeBlendList::GetSliderPosition(INT param_2, INT param_3) {
    int param_1 = (int)this;

  if ((param_2 != 0) || (param_3 != 0)) {
    sub_006311e0("0 == SliderIndex && 0 == ValueIndex",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
                 ,0x886,&g_02053398);
  }
  return (float10)*(float *)(param_1 + 0xe0);
}

extern undefined4 g_02054520;
extern undefined4 g_02054610;
// @baa 0x00c4ba80
void UAnimNodeAimOffset::HandleSliderMove(INT param_2, INT param_3, FLOAT param_4)
{
    int param_1 = (int)this;
  if (param_2 != 0) {
    sub_006311e0("SliderIndex == 0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
                 ,0x1039,&g_02054520);
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      sub_006311e0("ValueIndex == 0 || ValueIndex == 1",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
                   ,0x103a,&g_02054610);
    }
    *(float *)(param_1 + 0xcc) = (param_4 - 0.5) * -2.0;
    return;
  }
  *(float *)(param_1 + 200) = (param_4 - 0.5) * 2.0;
  return;
}

// @baa 0x00c4bb30
float UAnimNodeScalePlayRate::vf_19c(void) { return *(float*)((char*)this + 200); }

struct C { C* sub_00c4c2f0(int a0); };

// @baa 0x00c4c2f0
C* C::sub_00c4c2f0(int a0) { return this; }

struct C_00c4c300 { int sub_00c4c300(void); };

// @baa 0x00c4c300
int C_00c4c300::sub_00c4c300(void) { return *(int*)((char*)this + 0); }

struct C_00c4c380 { C_00c4c380* sub_00c4c380(int a0); };

// @baa 0x00c4c380
C_00c4c380* C_00c4c380::sub_00c4c380(int a0) { return this; }

struct C_00c4c390 { int sub_00c4c390(void); };

// @baa 0x00c4c390
int C_00c4c390::sub_00c4c390(void) { return *(int*)((char*)this + 0); }

struct C_00c4c3a0 { C_00c4c3a0* sub_00c4c3a0(int a0); };

// @baa 0x00c4c3a0
C_00c4c3a0* C_00c4c3a0::sub_00c4c3a0(int a0) { return this; }

struct C_00c4c3b0 { int sub_00c4c3b0(void); };

// @baa 0x00c4c3b0
int C_00c4c3b0::sub_00c4c3b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00c50070
bool UAnimNode::vf_14c(void)
{
    int param_1 = (int)this;

  return 1 < *(int *)(param_1 + 0x6c);
}

typedef uint size_t;

struct C_00c50450 {
    void sub_00c50450(int, int);
    int sub_00c4bdb0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00c50450
void C_00c50450::sub_00c50450(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00c50450 *)(this))->sub_00c4bdb0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00c50490(INT Index) const;
};

// @baa 0x00c50490
const DWORD* S::sub_00c50490(INT Index) const
{
    return &Items(Index);
}

struct C_00c504e0{
int sub_00c504e0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00c504e0
int C_00c504e0::sub_00c504e0(undefined4*param_2)
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

struct E { BYTE Bytes[68]; };

struct S_00c50540 {
    TArray<E> Items; // 0x00
    E* sub_00c50540(INT Index);
};

// @baa 0x00c50540
E* S_00c50540::sub_00c50540(INT Index)
{
    return &Items(Index);
}

struct E_00c50590 { BYTE Bytes[260]; };

struct S_00c50590 {
    TArray<E_00c50590> Items; // 0x00
    E_00c50590* sub_00c50590(INT Index);
};

// @baa 0x00c50590
E_00c50590* S_00c50590::sub_00c50590(INT Index)
{
    return &Items(Index);
}

struct C_00c505e0 {
    void sub_00c505e0(int, int);
    int sub_00c4bfa0(int, int);
};

// @baa 0x00c505e0
void C_00c505e0::sub_00c505e0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00c505e0 *)(this))->sub_00c4bfa0(param_2, param_3);
  sub_01a37612((void *)(param_2 * 0x104 + *param_1),0,param_3 * 0x104);
  return;
}

struct E_00c50620 { BYTE Bytes[108]; };

struct S_00c50620 {
    TArray<E_00c50620> Items; // 0x00
    E_00c50620* sub_00c50620(INT Index);
};

// @baa 0x00c50620
E_00c50620* S_00c50620::sub_00c50620(INT Index)
{
    return &Items(Index);
}

struct C_00c50710 {
    void sub_00c50710(int, int);
    int sub_00c4c1b0(int, int);
};

// @baa 0x00c50710
void C_00c50710::sub_00c50710(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00c50710 *)(this))->sub_00c4c1b0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x1c),0,param_3 * 0x1c);
  return;
}

struct C_00c50760 {
    int sub_00c50760(int);
    int sub_00c4c130(int);
};

// @baa 0x00c50760
int C_00c50760::sub_00c50760(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00c50760 *)(this))->sub_00c4c130(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct E_00c507a0 { BYTE Bytes[48]; };

struct S_00c507a0 {
    TArray<E_00c507a0> Items; // 0x00
    E_00c507a0* sub_00c507a0(INT Index);
};

// @baa 0x00c507a0
E_00c507a0* S_00c507a0::sub_00c507a0(INT Index)
{
    return &Items(Index);
}

struct C_00c507f0{
int sub_00c507f0(undefined4*);
};

// @baa 0x00c507f0
int C_00c507f0::sub_00c507f0(undefined4*param_2)
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

struct E_00c50900 { BYTE Bytes[32]; };

struct S_00c50900 {
    TArray<E_00c50900> Items; // 0x00
    E_00c50900* sub_00c50900(INT Index);
};

// @baa 0x00c50900
E_00c50900* S_00c50900::sub_00c50900(INT Index)
{
    return &Items(Index);
}

struct E_00c50950 { BYTE Bytes[36]; };

struct S_00c50950 {
    TArray<E_00c50950> Items; // 0x00
    E_00c50950* sub_00c50950(INT Index);
};

// @baa 0x00c50950
E_00c50950* S_00c50950::sub_00c50950(INT Index)
{
    return &Items(Index);
}

struct C_00c509a0 {
    int sub_00c509a0(int);
    int sub_00c4c3c0(int);
};

// @baa 0x00c509a0
int C_00c509a0::sub_00c509a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00c509a0 *)(this))->sub_00c4c3c0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x24),0,param_2 * 0x24);
  return iVar1;
}

struct S_00c509e0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00c509e0(INT Index) const;
};

// @baa 0x00c509e0
const DWORD* S_00c509e0::sub_00c509e0(INT Index) const
{
    return &Items(Index);
}

struct S_00c50a30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00c50a30(INT Index);
};

// @baa 0x00c50a30
DWORD* S_00c50a30::sub_00c50a30(INT Index)
{
    return &Items(Index);
}

struct S_00c50a80 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00c50a80(INT Index) const;
};

// @baa 0x00c50a80
const DWORD* S_00c50a80::sub_00c50a80(INT Index) const
{
    return &Items(Index);
}

struct C_00c50ad0{
int sub_00c50ad0(undefined4*);
};

// @baa 0x00c50ad0
int C_00c50ad0::sub_00c50ad0(undefined4*param_2)
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

struct T_00c57140;
// @baa 0x00c57140
template INT TArray<T_00c57140*>::RemoveItem(T_00c57140* const&);

struct C_00c571c0 { void sub_00c571c0(void); };

// @baa 0x00c571c0
void C_00c571c0::sub_00c571c0(void) { *(int*)((char*)this + 4) = 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00c571d0 { void* Data; int Num; int Max; void sub_00c571d0(); };

// @baa 0x00c571d0
void C_00c571d0::sub_00c571d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00c57230 {
    undefined4 sub_00c57230();
};

// @baa 0x00c57230
undefined4 C_00c57230::sub_00c57230(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00c57240 { void* Data; int Num; int Max; void sub_00c57240(); };

// @baa 0x00c57240
void C_00c57240::sub_00c57240() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00c572a0 { void* Data; int Num; int Max; void sub_00c572a0(); };

// @baa 0x00c572a0
void C_00c572a0::sub_00c572a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00c57540;
// @baa 0x00c57540
template INT TArray<T_00c57540*>::RemoveItem(T_00c57540* const&);

struct C_00c57600 { void* Data; int Num; int Max; void sub_00c57600(); };

// @baa 0x00c57600
void C_00c57600::sub_00c57600() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00c57660 { void* Data; int Num; int Max; void sub_00c57660(); };

// @baa 0x00c57660
void C_00c57660::sub_00c57660() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_0040fcc0();
// @baa 0x00c57700
void sub_00c57700(void) { sub_0040fcc0(); }

struct C_00c57800 {
    int sub_00c57800(int);
};

// @baa 0x00c57800
int C_00c57800::sub_00c57800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c57900 {
    int sub_00c57900(int);
};

// @baa 0x00c57900
int C_00c57900::sub_00c57900(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00c5eac0
IMPLEMENT_CLASS_AT(UAnimObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 9);

struct C_00c633f0 { C_00c633f0* sub_00c633f0(void); };

// @baa 0x00c633f0
C_00c633f0* C_00c633f0::sub_00c633f0(void) { return this; }

struct C_00c63400 { C_00c63400* sub_00c63400(void); };

// @baa 0x00c63400
C_00c63400* C_00c63400::sub_00c63400(void) { return this; }

struct C_00c63410 { C_00c63410* sub_00c63410(void); };

// @baa 0x00c63410
C_00c63410* C_00c63410::sub_00c63410(void) { return this; }

struct C_00c63420 { C_00c63420* sub_00c63420(void); };

// @baa 0x00c63420
C_00c63420* C_00c63420::sub_00c63420(void) { return this; }

struct C_00c63430 { C_00c63430* sub_00c63430(void); };

// @baa 0x00c63430
C_00c63430* C_00c63430::sub_00c63430(void) { return this; }

struct C_00c63440 { C_00c63440* sub_00c63440(void); };

// @baa 0x00c63440
C_00c63440* C_00c63440::sub_00c63440(void) { return this; }

struct C_00c63450 { void sub_00921ec0(int); C_00c63450 *sub_00c63450(int); };

// @baa 0x00c63450
C_00c63450 *C_00c63450::sub_00c63450(int a) { sub_00921ec0(a); return this; }

struct C_00c63470 { void sub_00c58e60(int); C_00c63470 *sub_00c63470(int); };

// @baa 0x00c63470
C_00c63470 *C_00c63470::sub_00c63470(int a) { sub_00c58e60(a); return this; }

struct C_00c63490 {
    int sub_00c63490(int);
};

// @baa 0x00c63490
int C_00c63490::sub_00c63490(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c634a0 {
    int sub_00c634a0(int);
    int sub_00c57710(int, int);
};

// @baa 0x00c634a0
int C_00c634a0::sub_00c634a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00c634a0 *)(this))->sub_00c57710((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00c634d0 {
    int sub_00c634d0(int);
};

// @baa 0x00c634d0
int C_00c634d0::sub_00c634d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c634e0 {
    int sub_00c634e0(int);
    int sub_00c57810(int, int);
};

// @baa 0x00c634e0
int C_00c634e0::sub_00c634e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00c634e0 *)(this))->sub_00c57810((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00c63510 {
    int sub_00c63510(int);
};

// @baa 0x00c63510
int C_00c63510::sub_00c63510(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c63520 {
    int sub_00c63520(int);
    int sub_00c57910(int, int);
};

// @baa 0x00c63520
int C_00c63520::sub_00c63520(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00c63520 *)(this))->sub_00c57910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct M_00c63570 { void sub_00c572a0(); };

struct C_00c63570 { char pad[24]; M_00c63570 m; void sub_00c63570(); };

// @baa 0x00c63570
void C_00c63570::sub_00c63570() { m.sub_00c572a0(); }

void sub_00921250();
// @baa 0x00c635e0
void sub_00c635e0(void) { sub_00921250(); }

// @baa 0x00c635f0
void sub_00c635f0(void) { sub_00921250(); }

struct C_00c63600 {
    int sub_00c63600(int);
};

// @baa 0x00c63600
int C_00c63600::sub_00c63600(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c63610 {
    int sub_00c63610(int);
};

// @baa 0x00c63610
int C_00c63610::sub_00c63610(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c63620 {
    int sub_00c63620(int);
};

// @baa 0x00c63620
int C_00c63620::sub_00c63620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00c645c0
IMPLEMENT_CLASS_AT(UAnimNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 10);

// @baa 0x00c64640
void* UAnimNode::vf_10c() { return this; }

// @baa 0x00c64650
void UAnimNode::vf_12c(void) {  }

// @baa 0x00c64660
void UAnimNode::vf_130(UINT a0) {  }

// @baa 0x00c64670
void __stdcall sub_00c64670(int a0, int a1) {  }

// @baa 0x00c64680
int UAnimNode::vf_138(void) { return 1; }

// @baa 0x00c64690
int UAnimNode::vf_13c(void) { return 1; }

// @baa 0x00c646a0
void UAnimNode::vf_140(int a0) {  }

// @baa 0x00c646b0
void* UAnimNode::vf_158() { return 0; }

// @baa 0x00c646c0
void UAnimNode::SetAnim(FName Sequence) {  }

// @baa 0x00c646d0
void UAnimNode::SetPosition(FLOAT a0, UBOOL a1) {}

struct V_00c646e0 {
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void g(int a0);
    void sub_00c646e0(int a0);
};

// @baa 0x00c646e0
void V_00c646e0::sub_00c646e0(int a0) { g(a0); }

// @baa 0x00c646f0
void UAnimNode::vf_164(int a0, int a1, int a2, int a3) {  }

// @baa 0x00c64700
UINT UAnimNode::vf_170() { return 0; }

// @baa 0x00c64710
int UAnimNode::vf_174(int a0) { return 0; }

// @baa 0x00c64720
FLOAT UAnimNode::GetSliderPosition(INT f, INT g) {
    return 0.0f;
}

// @baa 0x00c64730
void UAnimNode::HandleSliderMove(INT a0, INT a1, FLOAT a2) {  }

// @baa 0x00c64740
FString UAnimNode::vf_168()
{
    return TEXT("");
}

// @baa 0x00c647a0
int sub_005c7a20(void);
extern undefined * g_020599d8;
// @baa 0x00c647d0
undefined4 * UObject::sub_00c647d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020599d8);
  return param_1;
}

// @baa 0x00c647f0
IMPLEMENT_CLASS_AT(UAnimNodeBlendBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 12);

// @baa 0x00c64860
// @baa 0x00c64990
IMPLEMENT_CLASS_AT(UAnimNodeAdditiveBlending, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 32);

// @baa 0x00c649f0
// @baa 0x00c65410
IMPLEMENT_CLASS_AT(UAnimNodeMirror, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 23);

// @baa 0x00c65470
// @baa 0x00c654a0
IMPLEMENT_CLASS_AT(UAnimNodeScalePlayRate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 27);

// @baa 0x00c65500
extern undefined * g_0205b718;
// @baa 0x00c65530
undefined4 * UObject::sub_00c65530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b718);
  return param_1;
}

extern undefined * g_0205b8b8;
// @baa 0x00c65550
undefined4 * UObject::sub_00c65550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b8b8);
  return param_1;
}

// @baa 0x00c65570
IMPLEMENT_CLASS_AT(UAnimNodeScaleRateBySpeed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 28);

// @baa 0x00c655d0
extern undefined * g_0205ba58;
// @baa 0x00c65600
undefined4 * UObject::sub_00c65600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205ba58);
  return param_1;
}

// @baa 0x00c65620
UINT UAnimNodeSlot::vf_170() { return 0; }

// @baa 0x00c65630
IMPLEMENT_CLASS_AT(UAnimNodeSlot, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 30);

// @baa 0x00c656a0
// @baa 0x00c69780
// @baa 0x00c69890
bool UAnimNode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00c6a780 { void sub_00921ec0(int); C_00c6a780 *sub_00c6a780(int); };

// @baa 0x00c6a780
C_00c6a780 *C_00c6a780::sub_00c6a780(int a) { sub_00921ec0(a); return this; }

struct C_00c6a7a0 { void sub_00c58e60(int); C_00c6a7a0 *sub_00c6a7a0(int); };

// @baa 0x00c6a7a0
C_00c6a7a0 *C_00c6a7a0::sub_00c6a7a0(int a) { sub_00c58e60(a); return this; }

struct C_00c6a8e0 { void sub_00c640a0(int); C_00c6a8e0 *sub_00c6a8e0(int); };

// @baa 0x00c6a8e0
C_00c6a8e0 *C_00c6a8e0::sub_00c6a8e0(int a) { sub_00c640a0(a); return this; }

struct C_00c6a9c0 {
    undefined4 sub_00c6a9c0(byte);
    int sub_00c572a0();
};

int sub_0053dfa0(...);
// @baa 0x00c6a9c0
undefined4 C_00c6a9c0::sub_00c6a9c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00c6a9c0 *)(((char *)this + 0x18)))->sub_00c572a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c6a9f0 {
    undefined4 sub_00c6a9f0(byte);
};

int sub_00c63580(void);
// @baa 0x00c6a9f0
undefined4 C_00c6a9f0::sub_00c6a9f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c63580();
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

struct TConstSetBitIterator_00c6abd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c6abd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c6abd0& operator++();
};

TConstSetBitIterator_00c6abd0::TConstSetBitIterator_00c6abd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c6abd0
TConstSetBitIterator_00c6abd0& TConstSetBitIterator_00c6abd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c6ac20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c6ac20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c6ac20& operator++();
};

TConstSetBitIterator_00c6ac20::TConstSetBitIterator_00c6ac20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c6ac20
TConstSetBitIterator_00c6ac20& TConstSetBitIterator_00c6ac20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c6ac70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c6ac70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c6ac70& operator++();
};

TConstSetBitIterator_00c6ac70::TConstSetBitIterator_00c6ac70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c6ac70
TConstSetBitIterator_00c6ac70& TConstSetBitIterator_00c6ac70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c6ade0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c6ade0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c6ade0& operator++();
};

TConstSetBitIterator_00c6ade0::TConstSetBitIterator_00c6ade0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c6ade0
TConstSetBitIterator_00c6ade0& TConstSetBitIterator_00c6ade0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c6ae30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c6ae30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c6ae30& operator++();
};

TConstSetBitIterator_00c6ae30::TConstSetBitIterator_00c6ae30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c6ae30
TConstSetBitIterator_00c6ae30& TConstSetBitIterator_00c6ae30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c6ae80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c6ae80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c6ae80& operator++();
};

TConstSetBitIterator_00c6ae80::TConstSetBitIterator_00c6ae80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c6ae80
TConstSetBitIterator_00c6ae80& TConstSetBitIterator_00c6ae80::operator++()
{
    It.Advance();
    return *this;
}

struct C_00c6aed0 { void sub_00c64160(int); C_00c6aed0 *sub_00c6aed0(int); };

// @baa 0x00c6aed0
C_00c6aed0 *C_00c6aed0::sub_00c6aed0(int a) { sub_00c64160(a); return this; }

int sub_00c5b250(...);
int sub_00c668a0(void);
extern undefined4 g_026c2b34;
// @baa 0x00c6aef0
int sub_00c6aef0(void)
{
  if (g_026c2b34 == 0) {
    g_026c2b34 = sub_00c5b250(L"Engine");
    sub_00c668a0();
  }
  return g_026c2b34;
}

int sub_00c5b0d0(...);
int sub_00c66600(void);
extern undefined4 g_026c2b2c;
// @baa 0x00c6af20
int sub_00c6af20(void)
{
  if (g_026c2b2c == 0) {
    g_026c2b2c = sub_00c5b0d0(L"Engine");
    sub_00c66600();
  }
  return g_026c2b2c;
}

// @baa 0x00c6af50
// @baa 0x00c6af70
// @baa 0x00c6afb0
// @baa 0x00c6afd0
IMPLEMENT_CLASS_AT(UAnimNodeBlendPerBone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 15);

// @baa 0x00c6aff0
IMPLEMENT_CLASS_AT(UAnimNodeCrossfader, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 14);

// @baa 0x00c6b070
IMPLEMENT_CLASS_AT(UAnimNodePlayCustomAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 29);

// @baa 0x00c6b090
IMPLEMENT_CLASS_AT(UAnimNodeBlendDirectional, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 18);

// @baa 0x00c6b0b0
IMPLEMENT_CLASS_AT(UAnimNodeBlendList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 16);

// @baa 0x00c6b0d0
IMPLEMENT_CLASS_AT(UAnimNodeBlendByBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 22);

// @baa 0x00c6b0f0
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPhysics, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 20);

// @baa 0x00c6b110
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPosture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 19);

// @baa 0x00c6b130
IMPLEMENT_CLASS_AT(UAnimNodeBlendBySpeed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 21);

// @baa 0x00c6b150
IMPLEMENT_CLASS_AT(UAnimNodeRandom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 17);

// @baa 0x00c6b170
// @baa 0x00c6b190
// @baa 0x00c6b1b0
// @baa 0x00c6b1d0
// @baa 0x00c6b9f0
// @baa 0x00c6bab0
// @baa 0x00c6bb70
IMPLEMENT_CLASS_AT(UAnimNodeBlend, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 13);

// @baa 0x00c6bc30
// @baa 0x00c6bcf0
// @baa 0x00c6bdb0
// @baa 0x00c6be70
// @baa 0x00c6bf30
// @baa 0x00c6bff0
// @baa 0x00c6c0b0
// @baa 0x00c6c170
// @baa 0x00c6c230
// @baa 0x00c6c2f0
// @baa 0x00c6c3b0
// @baa 0x00c6c470
// @baa 0x00c6c530
// @baa 0x00c6c5f0
// @baa 0x00c6c6b0
struct C_00c74ca0 { void sub_00c640a0(int); C_00c74ca0 *sub_00c74ca0(int); };

// @baa 0x00c74ca0
C_00c74ca0 *C_00c74ca0::sub_00c74ca0(int a) { sub_00c640a0(a); return this; }

struct C_00c74e90 {
    void sub_00c74e90();
    int sub_00c6aa50(int);
};

// @baa 0x00c74e90
void C_00c74e90::sub_00c74e90(void)
{
    int param_1 = (int)this;
  ((C_00c74e90 *)((*(char **)((char *)this + 0x10))))->sub_00c6aa50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00c74eb0 {
    void sub_00c74eb0();
    int sub_00c6aad0(int);
};

// @baa 0x00c74eb0
void C_00c74eb0::sub_00c74eb0(void)
{
    int param_1 = (int)this;
  ((C_00c74eb0 *)((*(char **)((char *)this + 0x10))))->sub_00c6aad0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00c74ed0 {
    void sub_00c74ed0();
    int sub_00c6ab50(int);
};

// @baa 0x00c74ed0
void C_00c74ed0::sub_00c74ed0(void)
{
    int param_1 = (int)this;
  ((C_00c74ed0 *)((*(char **)((char *)this + 0x10))))->sub_00c6ab50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00c76a10
// @baa 0x00c76b20
bool UAnimNodeBlendBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00c76b60 { C_00c76b60* sub_00c76b60(void); };

// @baa 0x00c76b60
C_00c76b60* C_00c76b60::sub_00c76b60(void) { return this; }

// @baa 0x00c77e90
// @baa 0x00c77fa0
bool UAnimNodeMirror::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c77fe0
IMPLEMENT_CLASS_AT(UAnimNodeBlendMultiBone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 24);

// @baa 0x00c780f0
bool UAnimNodeBlendMultiBone::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c78130
IMPLEMENT_CLASS_AT(UAnimNodeAimOffset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 25);

// @baa 0x00c78240
bool UAnimNodeAimOffset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c78280
IMPLEMENT_CLASS_AT(UAnimNodeSynch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 26);

// @baa 0x00c78390
bool UAnimNodeSynch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c783d0
// @baa 0x00c784e0
bool UAnimNodeScalePlayRate::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c78520
// @baa 0x00c78630
bool UAnimNodeSlot::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c78670
IMPLEMENT_CLASS_AT(UAnimTree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 31);

// @baa 0x00c78780
bool UAnimTree::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00c789e0 { C_00c789e0* sub_00c789e0(void); };

// @baa 0x00c789e0
C_00c789e0* C_00c789e0::sub_00c789e0(void) { return this; }

struct C_00c789f0 { C_00c789f0* sub_00c789f0(void); };

// @baa 0x00c789f0
C_00c789f0* C_00c789f0::sub_00c789f0(void) { return this; }

struct C_00c78a00 { C_00c78a00* sub_00c78a00(void); };

// @baa 0x00c78a00
C_00c78a00* C_00c78a00::sub_00c78a00(void) { return this; }

struct C_00c78a10 { C_00c78a10* sub_00c78a10(void); };

// @baa 0x00c78a10
C_00c78a10* C_00c78a10::sub_00c78a10(void) { return this; }

// @baa 0x00c79000
void UAnimNodeAimOffset::vf_1a8(int a0) {  }

// @baa 0x00c79010
UINT UAnimNodeAimOffset::vf_170() { return 1; }

// @baa 0x00c79020
int UAnimNodeAimOffset::vf_174(int a0) { return 1; }

// @baa 0x00c79030
// @baa 0x00c790c0
int sub_00c6bb70(...);
int sub_00c77aa0(void);
extern undefined4 g_026c2b7c;
// @baa 0x00c790f0
int sub_00c790f0(void)
{
  if (g_026c2b7c == 0) {
    g_026c2b7c = sub_00c6bb70(L"Engine");
    sub_00c77aa0();
  }
  return g_026c2b7c;
}

int sub_00c6b760(...);
int sub_00c77950(void);
extern undefined4 g_026c2b68;
// @baa 0x00c79120
int sub_00c79120(void)
{
  if (g_026c2b68 == 0) {
    g_026c2b68 = sub_00c6b760(L"Engine");
    sub_00c77950();
  }
  return g_026c2b68;
}

int sub_00c6bdb0(...);
int sub_00c77bf0(void);
extern undefined4 g_026c2b88;
// @baa 0x00c79150
int sub_00c79150(void)
{
  if (g_026c2b88 == 0) {
    g_026c2b88 = sub_00c6bdb0(L"Engine");
    sub_00c77bf0();
  }
  return g_026c2b88;
}

extern undefined * g_0205bfe8;
// @baa 0x00c79180
undefined4 * UObject::sub_00c79180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205bfe8);
  return param_1;
}

// @baa 0x00c791a0
// @baa 0x00c79220
int sub_00c6c3b0(...);
int sub_00c783d0(void);
extern undefined4 g_026c2bb4;
// @baa 0x00c79250
int sub_00c79250(void)
{
  if (g_026c2bb4 == 0) {
    g_026c2bb4 = sub_00c6c3b0(L"Engine");
    sub_00c783d0();
  }
  return g_026c2bb4;
}

extern undefined * g_0205c188;
// @baa 0x00c79280
undefined4 * UObject::sub_00c79280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205c188);
  return param_1;
}

// @baa 0x00c792a0
// @baa 0x00c79310
extern undefined * g_0205c328;
// @baa 0x00c79340
undefined4 * UObject::sub_00c79340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205c328);
  return param_1;
}

// @baa 0x00c79360
void* UAnimTree::vf_158() { return this; }

// @baa 0x00c79370
// @baa 0x00c79450
// @baa 0x00c7a280
// @baa 0x00c7a390
bool UAnimNodeAdditiveBlending::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00c78a20();
// @baa 0x00c7ba80
void sub_00c7ba80(void) { sub_00c78a20(); }

void sub_00c78a90();
// @baa 0x00c7ba90
void sub_00c7ba90(void) { sub_00c78a90(); }

void sub_00c78b00();
// @baa 0x00c7baa0
void sub_00c7baa0(void) { sub_00c78b00(); }

struct C_00c7d930 {
    int sub_00c7d930();
};

int sub_00c6acc0(void);
// @baa 0x00c7d930
int C_00c7d930::sub_00c7d930(void)
{
    int param_1 = (int)this;

  sub_00c6acc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c7d950 {
    int sub_00c7d950();
};

int sub_00c6ad20(void);
// @baa 0x00c7d950
int C_00c7d950::sub_00c7d950(void)
{
    int param_1 = (int)this;

  sub_00c6ad20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c7d970 {
    int sub_00c7d970();
};

int sub_00c6ad80(void);
// @baa 0x00c7d970
int C_00c7d970::sub_00c7d970(void)
{
    int param_1 = (int)this;

  sub_00c6ad80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00c7d990
// @baa 0x00c7d9b0
// @baa 0x00c7d9d0
// @baa 0x00c7d9f0
// @baa 0x00c7dc80
// @baa 0x00c7dd40
// @baa 0x00c7de00
// @baa 0x00c7dec0
// @baa 0x00c7ecc0
void sub_00c7ecc0(void) { sub_00c78a20(); }

// @baa 0x00c7ecd0
void sub_00c7ecd0(void) { sub_00c78a90(); }

// @baa 0x00c7ece0
void sub_00c7ece0(void) { sub_00c78b00(); }

struct C_00c7f5b0 {
    int sub_00c7f5b0();
};

// @baa 0x00c7f5b0
int C_00c7f5b0::sub_00c7f5b0(void)
{
    int param_1 = (int)this;

  sub_00c6acc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c7f5d0 {
    int sub_00c7f5d0();
};

// @baa 0x00c7f5d0
int C_00c7f5d0::sub_00c7f5d0(void)
{
    int param_1 = (int)this;

  sub_00c6ad20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c7f5f0 {
    int sub_00c7f5f0();
};

// @baa 0x00c7f5f0
int C_00c7f5f0::sub_00c7f5f0(void)
{
    int param_1 = (int)this;

  sub_00c6ad80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00c78130(void);
int sub_00c7dd40(...);
extern undefined4 g_026c2bac;
// @baa 0x00c7f610
int sub_00c7f610(void)
{
  if (g_026c2bac == 0) {
    g_026c2bac = sub_00c7dd40(L"Engine");
    sub_00c78130();
  }
  return g_026c2bac;
}

int sub_00c78280(void);
int sub_00c7de00(...);
extern undefined4 g_026c2bb0;
// @baa 0x00c7f640
int sub_00c7f640(void)
{
  if (g_026c2bb0 == 0) {
    g_026c2bb0 = sub_00c7de00(L"Engine");
    sub_00c78280();
  }
  return g_026c2bb0;
}

// @baa 0x00c7f670
void sub_00c7f670(void) { sub_00c78a20(); }

// @baa 0x00c7f680
void sub_00c7f680(void) { sub_00c78a90(); }

// @baa 0x00c7f690
void sub_00c7f690(void) { sub_00c78b00(); }

struct C_view {
    int sub_00c76c40(int);
};

int sub_00c7f740(...);
// @baa 0x00c803c0
void UAnimNodeAimOffset::vf_130(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = sub_00c7f740(param_2);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  ((C_view *)(((char *)this + 0x100)))->sub_00c76c40(0);
  return;
}

#define ZERO_ANIMWEIGHT_THRESH (0.00001f)
/* UAnimNodeSlot::GetNextAvailableChild isn't declared in Classes.h. PlayCustomAnim (00c7ef60) passes it
 * the animation's name, which this build doesn't use. */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	INT GetNextAvailableChild(FName AnimToPlay);
};

// @baa 0x00c56bb0
INT UAnimNodeSlot_::GetNextAvailableChild(FName AnimToPlay)
{
	INT CurrentBestChildIndex = INDEX_NONE;
	FLOAT BestWeight = 1.f;

	// the custom channel with the least weight (child 0 is the normal animation)
	for (INT i = 1; i < Children.Num(); i++)
	{
		if (CurrentBestChildIndex == INDEX_NONE || Children(i).Weight < BestWeight)
		{
			CurrentBestChildIndex = i;
			BestWeight = Children(i).Weight;

			// a free one: no need to look further
			if (BestWeight <= ZERO_ANIMWEIGHT_THRESH)
			{
				break;
			}
		}
	}

	return CurrentBestChildIndex;
}

/* UAnimNodeBlendBase::SetChildrenTotalWeightAccumulator (vtable 0x188) isn't declared by name in Classes.h. */

// @baa 0x00c533f0
void UAnimNodeBlendBase::SetChildrenTotalWeightAccumulator(const INT Index)
{
	// the child's weight in the whole tree
	Children(Index).TotalWeight = Children(Index).Weight * NodeTotalWeight;

	// and the child node's sum over all its parents
	Children(Index).Anim->TotalWeightAccumulator += Children(Index).TotalWeight;
}

/* Callees Classes.h doesn't declare. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void sub_009357b0(UBOOL bForce);		/* refresh the preview mesh / anim sets */
};

struct UObject_ : public UObject
{
	void sub_005c1a10(UProperty* PropertyThatChanged);	/* the Super:: PostEditChange */
};

/* UAnimTree's PostEditChange (vtable 0x4c, declared only as vf_04c). */

// @baa 0x00c4b6d0
void UAnimTree::PostEditChange(UProperty* PropertyThatChanged)
{
	if (PropertyThatChanged)
	{
		// rebuild the priority list from the new branches
		if (PropertyThatChanged->GetFName() == FName(TEXT("PrioritizedSkelBranches")) && SkelComponent)
		{
			((USkeletalMeshComponent_*)SkelComponent)->sub_0092c310(PriorityList);
		}

		// a new preview mesh or anim set: refresh the preview
		if ((PropertyThatChanged->GetFName() == FName(TEXT("PreviewSkelMesh")) ||
			PropertyThatChanged->GetFName() == FName(TEXT("PreviewSkelMesh")) ||
			PropertyThatChanged->GetFName() == FName(TEXT("PreviewAnimSets"))) && SkelComponent)
		{
			((USkeletalMeshComponent_*)SkelComponent)->sub_009357b0(TRUE);
		}
	}

	((UObject_*)this)->sub_005c1a10(PropertyThatChanged);
}

/* Kit gaps, with UE3's definitions (UnName.h): FName has no EName and no comparison operators. */
enum EName_ { NAME_None_ = 0 };

inline UBOOL operator!=(const FName& A, EName_ N) { return A.Index != N || A.Number != 0; }

/* UAnimTree::GetGroupIndex isn't declared in Classes.h. */
struct UAnimTree__00c556d0 : public UAnimTree
{
	INT GetGroupIndex(FName GroupName);
};

// @baa 0x00c556d0
INT UAnimTree__00c556d0::GetGroupIndex(FName GroupName)
{
	if (GroupName != NAME_None_)
	{
		for (INT GroupIdx = 0; GroupIdx < AnimGroups.Num(); GroupIdx++)
		{
			if (AnimGroups(GroupIdx).GroupName == GroupName)
			{
				return GroupIdx;
			}
		}
	}

	return INDEX_NONE;
}

/* UAnimNodeSynch::GetMasterNodeOfSynchGroup isn't declared in Classes.h. */
struct UAnimNodeSynch_ : public UAnimNodeSynch
{
	UAnimNodeSequence* GetMasterNodeOfSynchGroup(FName GroupName);
};

// @baa 0x00c56530
UAnimNodeSequence* UAnimNodeSynch_::GetMasterNodeOfSynchGroup(FName GroupName)
{
	for (INT GroupIdx = 0; GroupIdx < Groups.Num(); GroupIdx++)
	{
		if (Groups(GroupIdx).GroupName == GroupName)
		{
			return Groups(GroupIdx).MasterNode;
		}
	}

	return NULL;
}

/* UAnimNodeSynch::SetGroupRateScale isn't declared in Classes.h. */

// @baa 0x00c565f0
void UAnimNodeSynch::SetGroupRateScale(FName GroupName, FLOAT NewRateScale)
{
	for (INT GroupIdx = 0; GroupIdx < Groups.Num(); GroupIdx++)
	{
		if (Groups(GroupIdx).GroupName == GroupName)
		{
			FSynchGroup& SynchGroup = Groups(GroupIdx);
			SynchGroup.RateScale = NewRateScale;
		}
	}
}

/* UAnimNodeBlend::SetBlendTarget (non-virtual in this build) and TickAnim (vtable 0x134, declared only as
 * vf_134), and UAnimNodeCrossfader::GetActiveChild; none is declared by name in Classes.h. */
struct UAnimNodeBlend_ : public UAnimNodeBlend
{
	void sub_00c54040(FLOAT BlendTarget, FLOAT BlendTime);		/* SetBlendTarget */
};

/* UAnimNodeCrossfader's TickAnim override. */
struct UAnimNodeCrossfader_ : public UAnimNodeCrossfader
{
	void TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight);
};

// @baa 0x00c7dfd0
void UAnimNodeCrossfader_::TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
	// a one-shot animation blends back out before it is over
	if (!bDontBlendOutOneShot && PendingBlendOutTimeOneShot > 0.f)
	{
		UAnimNodeSequence* ActiveChild = sub_00c7a590();
		if (ActiveChild && ActiveChild->AnimSeq)
		{
			FLOAT CountDown = ActiveChild->AnimSeq->SequenceLength - ActiveChild->CurrentTime;

			// time to blend out
			if (PendingBlendOutTimeOneShot >= CountDown)
			{
				((UAnimNodeBlend_*)this)->sub_00c54040(1.f - Child2WeightTarget, PendingBlendOutTimeOneShot);
				PendingBlendOutTimeOneShot = 0.f;
			}
		}
	}

	((UAnimNodeBlend_*)this)->sub_00c53f20(DeltaSeconds, TotalWeight);
}

/* UAnimNodeBlendBase::GetChildWeightTotal isn't declared in Classes.h. */
struct UAnimNodeBlendBase__00c53c40 : public UAnimNodeBlendBase
{
	FLOAT GetChildWeightTotal();
};

// @baa 0x00c53c40
FLOAT UAnimNodeBlendBase__00c53c40::GetChildWeightTotal()
{
	// the weight of the children that aren't additive
	FLOAT TotalWeight = 0.f;
	for (INT i = 0; i < Children.Num(); i++)
	{
		if (!Children(i).bIsAdditive)
		{
			TotalWeight += Children(i).Weight;
		}
	}
	return TotalWeight;
}

/* UAnimNodeSynch::UpdateMasterNodeForGroup isn't declared in Classes.h. */
struct UAnimNodeSynch__00c566c0 : public UAnimNodeSynch
{
	void UpdateMasterNodeForGroup(FSynchGroup& SynchGroup);
};

// @baa 0x00c566c0
void UAnimNodeSynch__00c566c0::UpdateMasterNodeForGroup(FSynchGroup& SynchGroup)
{
	UAnimNodeSequence* MasterNode = SynchGroup.MasterNode;
	FLOAT HighestWeight = MasterNode ? MasterNode->NodeTotalWeight : 0.f;

	// a master at full weight stays
	if (MasterNode && !(MasterNode->NodeTotalWeight < (1.f - ZERO_ANIMWEIGHT_THRESH)))
	{
		return;
	}

	// otherwise the most relevant node that may be a master
	for (INT i = 0; i < SynchGroup.SeqNodes.Num(); i++)
	{
		UAnimNodeSequence* SeqNode = SynchGroup.SeqNodes(i);
		if (SeqNode && !SeqNode->bForceAlwaysSlave && SeqNode->NodeTotalWeight >= HighestWeight)
		{
			MasterNode = SeqNode;
			HighestWeight = SeqNode->NodeTotalWeight;
		}
	}

	SynchGroup.MasterNode = MasterNode;
}

/* TArray<FBoneAtom>::operator=, out of line here. */
struct FBoneAtomArray : public TArray<FBoneAtom>
{
	FBoneAtomArray& sub_00c64160(const TArray<FBoneAtom>& Other);	/* operator= */
};

/* UAnimNode::GetCachedResults isn't declared in Classes.h. */
struct UAnimNode_ : public UAnimNode
{
	UBOOL GetCachedResults(TArray<FBoneAtom>& OutAtoms, FBoneAtom& OutRootMotionDelta, INT& bOutHasRootMotion);
};

// @baa 0x00c6c770
UBOOL UAnimNode_::GetCachedResults(TArray<FBoneAtom>& OutAtoms, FBoneAtom& OutRootMotionDelta, INT& bOutHasRootMotion)
{
#line 279 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(SkelComponent);

	// the cache is valid for this frame, and the right size
	if (NodeCachedAtomsTag == SkelComponent->CachedAtomsTag && CachedBoneAtoms.Num() == OutAtoms.Num())
	{
		((FBoneAtomArray&)OutAtoms).sub_00c64160(CachedBoneAtoms);
		// FBoneAtom::operator= (copies the members; not in the kit)
		OutRootMotionDelta.Rotation = CachedRootMotionDelta.Rotation;
		OutRootMotionDelta.Translation = CachedRootMotionDelta.Translation;
		OutRootMotionDelta.Scale = CachedRootMotionDelta.Scale;
		bOutHasRootMotion = bCachedHasRootMotion;
		return TRUE;
	}

	return FALSE;
}

#line 2132 "candidate.cpp"

/* Kit gaps: FBoneAtom::Identity (UnSkeletalMesh.h) and the static FillWithRefPose. */
struct FBoneAtom_ : public FBoneAtom
{
	static const FBoneAtom Identity;	/* 025df358 */
};

void sub_00c5eb80(TArray<FBoneAtom>& OutAtoms, const TArray<BYTE>& DesiredBones, const TArray<FMeshBone>& RefSkel);
	/* FillWithRefPose */
/* UAnimNode::GetBoneAtoms (vtable slot declared only as vf_) isn't declared by name in Classes.h. */

// @baa 0x00c5ecc0
void UAnimNode::GetBoneAtoms(TArray<FBoneAtom>& Atoms, const TArray<BYTE>& DesiredBones, FBoneAtom& RootMotionDelta, INT& bHasRootMotion)
{
	// FBoneAtom::operator= (copies the members; not in the kit)
	RootMotionDelta.Rotation = FBoneAtom_::Identity.Rotation;
	RootMotionDelta.Translation = FBoneAtom_::Identity.Translation;
	RootMotionDelta.Scale = FBoneAtom_::Identity.Scale;
	bHasRootMotion = 0;

	// the reference pose
	const INT NumAtoms = SkelComponent->SkeletalMesh->RefSkeleton.Num();
#line 269 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(NumAtoms == Atoms.Num());
	sub_00c5eb80(Atoms, DesiredBones, SkelComponent->SkeletalMesh->RefSkeleton);
}

#line 2164 "candidate.cpp"

/* UAnimNodeAimOffset's bone lookup methods aren't declared in Classes.h. */
struct UAnimNodeAimOffset_ : public UAnimNodeAimOffset
{
	FAimOffsetProfile* sub_00c55cc0();		/* GetCurrentProfile */
	UBOOL ContainsBone(const FName& BoneName);
};

// @baa 0x00c560b0
UBOOL UAnimNodeAimOffset_::ContainsBone(const FName& BoneName)
{
	FAimOffsetProfile* P = sub_00c55cc0();
	if (!P)
	{
		return FALSE;
	}

	for (INT i = 0; i < P->AimComponents.Num(); i++)
	{
		if (P->AimComponents(i).BoneName == BoneName)
		{
			return TRUE;
		}
	}

	return FALSE;
}
