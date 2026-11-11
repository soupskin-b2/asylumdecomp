// ApexSupport.cpp (part 1 of 4): 155 functions
// Placed here by: neighbours 103, class 30, file 12, callers 10.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009d7040
IMPLEMENT_CLASS_AT(UApexAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 44);

// @baa 0x009d7150
int UApexAsset::vf_000(void) { return 1; }

// @baa 0x009d7160
bool UApexAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d71b0
int UApexDestructibleAsset::vf_000(void) { return 1; }

// @baa 0x009d7210
int UApexRenderMeshAsset::vf_000(void) { return 1; }

// @baa 0x009d7240
int UApexParticleSystemAsset::vf_000(void) { return 1; }

// @baa 0x009d7290
int UApexMeshParticleFactoryAsset::vf_000(void) { return 1; }

// @baa 0x009d72e0
IMPLEMENT_CLASS_AT(UApexComponentBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1218);

// @baa 0x009d73f0
int UApexComponentBase::vf_000(void) { return 1; }

// @baa 0x009d7400
bool UApexComponentBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d7490
void UApexComponentBase::vf_134(int a0) {  }

// @baa 0x009d74a0
void UApexComponentBase::vf_13c(int a0) {  }

// @baa 0x009d74f0
void __stdcall sub_009d74f0(int a0) {  }

// @baa 0x009d7530
int UApexStaticComponent::vf_000(void) { return 1; }

// @baa 0x009d7560
int UApexDynamicComponent::vf_000(void) { return 1; }

// @baa 0x009d7570
int UApexStaticDestructibleComponent::vf_000(void) { return 1; }

// @baa 0x009d7580
void sub_009d7580(void) {  }

int sub_006311e0(...);
extern undefined4 g_01f9ec14;
// @baa 0x009d7590
int UApexStaticDestructibleComponent::vf_260(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x1c8) != 0) && (*(int *)(param_1 + 0x1c4) != 0)) {
    sub_006311e0("!ApexDestructiblePreview || !ApexDestructibleActor",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp"
                 ,0x59f,&g_01f9ec14);
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    return *(int *)(param_1 + 0x1c8) + 8;
  }
  if (*(int *)(param_1 + 0x1c4) != 0) {
    return *(int *)(param_1 + 0x1c4) + 0xc;
  }
  return 0;
}

int sub_00759550(void);
// @baa 0x009d7620
undefined4 UApexStaticDestructibleComponent::vf_12c(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x1b8) != 0) {
    iVar1 = sub_00759550();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x009d7640
void sub_009d7640(void) {  }

// @baa 0x009d7650
void sub_009d7650(void) {  }

struct C{
int sub_009df610(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x009df610
int C::sub_009df610(undefined4*param_2)
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
    DWORD* sub_009df670(INT Index);
};

// @baa 0x009df670
DWORD* S::sub_009df670(INT Index)
{
    return &Items(Index);
}

struct C_009df6c0{
int sub_009df6c0(undefined4*);
};

// @baa 0x009df6c0
int C_009df6c0::sub_009df6c0(undefined4*param_2)
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

struct C_009e36f0 {
    void sub_009e36f0();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x009e36f0
void C_009e36f0::sub_009e36f0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    free(*(void **)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_009e70f0 { void* Data; int Num; int Max; void sub_009e70f0(); };

// @baa 0x009e70f0
void C_009e70f0::sub_009e70f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e7230 { void* Data; int Num; int Max; void sub_009e7230(); };

// @baa 0x009e7230
void C_009e7230::sub_009e7230() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e72d0 { void* Data; int Num; int Max; void sub_009e72d0(); };

// @baa 0x009e72d0
void C_009e72d0::sub_009e72d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e7370 { void* Data; int Num; int Max; void sub_009e7370(); };

// @baa 0x009e7370
void C_009e7370::sub_009e7370() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e7410 { void* Data; int Num; int Max; void sub_009e7410(); };

// @baa 0x009e7410
void C_009e7410::sub_009e7410() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x009e7470
void __stdcall sub_009e7470(int, int)
{
}

// @baa 0x009e74b0
void __stdcall sub_009e74b0(int a0, int a1) {  }

// @baa 0x009e74c0
void __stdcall sub_009e74c0(int a0, int a1) {  }

// @baa 0x009e74d0
void __stdcall sub_009e74d0(int a0, int a1) {  }

// @baa 0x009e74e0
void __stdcall sub_009e74e0(int a0, int a1) {  }

// @baa 0x009e74f0
void __stdcall sub_009e74f0(int a0, int a1) {  }

// @baa 0x009e7500
void __stdcall sub_009e7500(int a0, int a1) {  }

// @baa 0x009e7510
void __stdcall sub_009e7510(int a0, int a1) {  }

// @baa 0x009e7520
void __stdcall sub_009e7520(int a0, int a1) {  }

// @baa 0x009e7530
void __stdcall sub_009e7530(int a0, int a1) {  }

// @baa 0x009e7540
void __stdcall sub_009e7540(int a0, int a1) {  }

// @baa 0x009e75c0
void __stdcall sub_009e75c0(int a0, int a1) {  }

// @baa 0x009e7650
void __stdcall sub_009e7650(int a0, int a1) {  }

struct C_009e84f0 { void* Data; int Num; int Max; void sub_009e84f0(); };

// @baa 0x009e84f0
void C_009e84f0::sub_009e84f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8550 {
    undefined4 sub_009e8550();
};

// @baa 0x009e8550
undefined4 C_009e8550::sub_009e8550(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_009e8560 { C_009e8560* sub_009e8560(void); };

// @baa 0x009e8560
C_009e8560* C_009e8560::sub_009e8560(void) { return this; }

struct C_009e85d0 { C_009e85d0* sub_009e85d0(void); };

// @baa 0x009e85d0
C_009e85d0* C_009e85d0::sub_009e85d0(void) { return this; }

struct C_009e85e0 { C_009e85e0* sub_009e85e0(void); };

// @baa 0x009e85e0
C_009e85e0* C_009e85e0::sub_009e85e0(void) { return this; }

struct C_009e85f0 { C_009e85f0* sub_009e85f0(void); };

// @baa 0x009e85f0
C_009e85f0* C_009e85f0::sub_009e85f0(void) { return this; }

struct C_009e8640 { void* Data; int Num; int Max; void sub_009e8640(); };

// @baa 0x009e8640
void C_009e8640::sub_009e8640() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e86a0 { void* Data; int Num; int Max; void sub_009e86a0(); };

// @baa 0x009e86a0
void C_009e86a0::sub_009e86a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8700 { void* Data; int Num; int Max; void sub_009e8700(); };

// @baa 0x009e8700
void C_009e8700::sub_009e8700() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8760 { void* Data; int Num; int Max; void sub_009e8760(); };

// @baa 0x009e8760
void C_009e8760::sub_009e8760() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e87c0 { void* Data; int Num; int Max; void sub_009e87c0(); };

// @baa 0x009e87c0
void C_009e87c0::sub_009e87c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8820 { void* Data; int Num; int Max; void sub_009e8820(); };

// @baa 0x009e8820
void C_009e8820::sub_009e8820() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8880 { void* Data; int Num; int Max; void sub_009e8880(); };

// @baa 0x009e8880
void C_009e8880::sub_009e8880() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e88e0 { void* Data; int Num; int Max; void sub_009e88e0(); };

// @baa 0x009e88e0
void C_009e88e0::sub_009e88e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8940 { void* Data; int Num; int Max; void sub_009e8940(); };

// @baa 0x009e8940
void C_009e8940::sub_009e8940() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e89a0 { void* Data; int Num; int Max; void sub_009e89a0(); };

// @baa 0x009e89a0
void C_009e89a0::sub_009e89a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8a40 { void* Data; int Num; int Max; void sub_009e8a40(); };

// @baa 0x009e8a40
void C_009e8a40::sub_009e8a40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8d00 { void* Data; int Num; int Max; void sub_009e8d00(); };

// @baa 0x009e8d00
void C_009e8d00::sub_009e8d00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e8d60 { void sub_009e79a0(int); C_009e8d60 *sub_009e8d60(int); };

// @baa 0x009e8d60
C_009e8d60 *C_009e8d60::sub_009e8d60(int a) { sub_009e79a0(a); return this; }

struct C_009e8e10 {
    int sub_009e8e10();
};

// @baa 0x009e8e10
int C_009e8e10::sub_009e8e10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009e8e30 {
    int sub_009e8e30();
};

// @baa 0x009e8e30
int C_009e8e30::sub_009e8e30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
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

struct TConstSetBitIterator_009e8f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009e8f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009e8f40& operator++();
};

TConstSetBitIterator_009e8f40::TConstSetBitIterator_009e8f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009e8f40
TConstSetBitIterator_009e8f40& TConstSetBitIterator_009e8f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009e8f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009e8f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009e8f60& operator++();
};

TConstSetBitIterator_009e8f60::TConstSetBitIterator_009e8f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009e8f60
TConstSetBitIterator_009e8f60& TConstSetBitIterator_009e8f60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009e8fb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009e8fb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009e8fb0& operator++();
};

TConstSetBitIterator_009e8fb0::TConstSetBitIterator_009e8fb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009e8fb0
TConstSetBitIterator_009e8fb0& TConstSetBitIterator_009e8fb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009e9000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009e9000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009e9000& operator++();
};

TConstSetBitIterator_009e9000::TConstSetBitIterator_009e9000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009e9000
TConstSetBitIterator_009e9000& TConstSetBitIterator_009e9000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009e9020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009e9020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009e9020& operator++();
};

TConstSetBitIterator_009e9020::TConstSetBitIterator_009e9020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009e9020
TConstSetBitIterator_009e9020& TConstSetBitIterator_009e9020::operator++()
{
    It.Advance();
    return *this;
}

struct C_009e9180 { int a, b, c; C_009e9180(); };

// @baa 0x009e9180
C_009e9180::C_009e9180() : a(0), b(0), c(0) {}

void sub_009e84f0();
// @baa 0x009e91c0
void sub_009e91c0(void) { sub_009e84f0(); }

struct M_009e9200 { void sub_009e84f0(); };

struct C_009e9200 { char pad[8]; M_009e9200 m; void sub_009e9200(); };

// @baa 0x009e9200
void C_009e9200::sub_009e9200() { m.sub_009e84f0(); }

// @baa 0x009e9210
// @baa 0x009e9280
int UApexAsset::vf_110(void) { return 0; }

// @baa 0x009e9290
int UApexAsset::vf_114(int a0) { return 0; }

// @baa 0x009e92a0
void UApexAsset::vf_118(void) {  }

// @baa 0x009e92b0
void UApexAsset::vf_11c(void) {  }

// @baa 0x009e92c0
int sub_005c7a20(void);
extern undefined * g_01fa45a0;
// @baa 0x009e92e0
undefined4 * UObject::sub_009e92e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fa45a0);
  return param_1;
}

extern undefined * g_01fa46c0;
// @baa 0x009e9300
undefined4 * UObject::sub_009e9300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fa46c0);
  return param_1;
}

// @baa 0x009e9320
int UApexDestructibleAsset::vf_110(void) { return *(int*)((char*)this + 72); }

// @baa 0x009e9390
IMPLEMENT_CLASS_AT(UApexDestructibleAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 96);

// @baa 0x009e9420
extern undefined * g_01fa47e8;
// @baa 0x009e9440
undefined4 * UObject::sub_009e9440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fa47e8);
  return param_1;
}

// @baa 0x009e9460
IMPLEMENT_CLASS_AT(UApexMeshParticleFactoryAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1016);

// @baa 0x009e94d0
extern undefined * g_01fa4908;
// @baa 0x009e94f0
undefined4 * UObject::sub_009e94f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fa4908);
  return param_1;
}

// @baa 0x009e9510
IMPLEMENT_CLASS_AT(UApexParticleSystemAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 879);

// @baa 0x009e9570
extern undefined * g_01fa4a28;
// @baa 0x009e9590
undefined4 * UObject::sub_009e9590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fa4a28);
  return param_1;
}

// @baa 0x009e95b0
IMPLEMENT_CLASS_AT(UApexRenderMeshAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 601);

// @baa 0x009e9620
struct C_009e9640 {
    undefined4 sub_009e9640();
};

// @baa 0x009e9640
undefined4 C_009e9640::sub_009e9640(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_009e96f0 { void sub_009e8570(int); C_009e96f0 *sub_009e96f0(int); };

// @baa 0x009e96f0
C_009e96f0 *C_009e96f0::sub_009e96f0(int a) { sub_009e8570(a); return this; }

struct C_009e9d70 { void sub_009e9070(int); C_009e9d70 *sub_009e9d70(int); };

// @baa 0x009e9d70
C_009e9d70 *C_009e9d70::sub_009e9d70(int a) { sub_009e9070(a); return this; }

struct C_009e9d90 { void sub_009e79a0(int); C_009e9d90 *sub_009e9d90(int); };

// @baa 0x009e9d90
C_009e9d90 *C_009e9d90::sub_009e9d90(int a) { sub_009e79a0(a); return this; }

struct C_009e9e00 { int a, b, c; C_009e9e00(); };

// @baa 0x009e9e00
C_009e9e00::C_009e9e00() : a(0), b(0), c(0) {}

struct C_009e9e80 { int a, b, c; C_009e9e80(); };

// @baa 0x009e9e80
C_009e9e80::C_009e9e80() : a(0), b(0), c(0) {}

struct C_009e9e90 {
    int sub_009e9e90();
};

// @baa 0x009e9e90
int C_009e9e90::sub_009e9e90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009e9eb0 {
    int sub_009e9eb0();
};

// @baa 0x009e9eb0
int C_009e9eb0::sub_009e9eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + 4 + *(int *)*param_1;
}

struct C_009e9ec0 {
    int sub_009e9ec0(int);
    int sub_009e8e40(int, int);
};

// @baa 0x009e9ec0
int C_009e9ec0::sub_009e9ec0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_009e9ec0 *)(this))->sub_009e8e40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x2c + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_009ea000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009ea000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009ea000& operator++();
};

TConstSetBitIterator_009ea000::TConstSetBitIterator_009ea000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009ea000
TConstSetBitIterator_009ea000& TConstSetBitIterator_009ea000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009ea020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009ea020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009ea020& operator++();
};

TConstSetBitIterator_009ea020::TConstSetBitIterator_009ea020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009ea020
TConstSetBitIterator_009ea020& TConstSetBitIterator_009ea020::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009ea070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009ea070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009ea070& operator++();
};

TConstSetBitIterator_009ea070::TConstSetBitIterator_009ea070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009ea070
TConstSetBitIterator_009ea070& TConstSetBitIterator_009ea070::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009ea180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009ea180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009ea180& operator++();
};

TConstSetBitIterator_009ea180::TConstSetBitIterator_009ea180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009ea180
TConstSetBitIterator_009ea180& TConstSetBitIterator_009ea180::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x009ea240
// @baa 0x009ea260
// @baa 0x009ea280
// @baa 0x009ea2a0
// @baa 0x009ea2c0
// @baa 0x009ea2e0
// @baa 0x009ea340
int UApexComponentBase::vf_260(void) { return 0; }

// @baa 0x009ea350
void UApexComponentBase::vf_264(int a0) {  }

extern undefined2 g_01e3f3dc;
extern undefined2 g_01fa4458;
// @baa 0x009ea360
void sub_009ea360(void)
{
  sub_006311e0(&g_01fa4458,"Engine/Inc\\EngineMeshClasses.h",0x104,&g_01e3f3dc);
  return;
}

// @baa 0x009ea380
void UApexComponentBase::vf_26c(void) {
  sub_006311e0(&g_01fa4458,"Engine/Inc\\EngineMeshClasses.h",0x105,&g_01e3f3dc);
  return;
}

// @baa 0x009ea3a0
struct C_009ea3d0 {
    undefined4 * sub_009ea3d0();
};

int sub_006f7810(void);
extern undefined * g_01fa4b48;
// @baa 0x009ea3d0
undefined4 * C_009ea3d0::sub_009ea3d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01fa4b48);
  param_1[0x6d] = 0;
  return param_1;
}

// @baa 0x009ea420
IMPLEMENT_CLASS_AT(UApexDynamicComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1367);

// @baa 0x009ea480
// @baa 0x009ea4b0
IMPLEMENT_CLASS_AT(UApexStaticComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1350);

// @baa 0x009ea510
int UApexStaticComponent::vf_204(void) { return 0; }

// @baa 0x009ea520
// @baa 0x009ea5b0
IMPLEMENT_CLASS_AT(UApexStaticDestructibleComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1375);

// @baa 0x009ea610
struct C_009ea640 {
    undefined4 sub_009ea640(byte);
};

int sub_0053dfa0(...);
int sub_009e9690(void);
// @baa 0x009ea640
undefined4 C_009ea640::sub_009ea640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009e9690();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009ea660
struct FData {
    INT X;
    INT Y;
    INT Z;
};

struct C_009ea720 {
    void sub_009ea720(FData *p);
};

// @baa 0x009ea720
void C_009ea720::sub_009ea720(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

// @baa 0x009ea840
// @baa 0x009eb300
// @baa 0x009ebac0
// @baa 0x009ebe80
int sub_009d7040(void);
int sub_009ea660(...);
extern undefined4 g_026b63b4;
// @baa 0x009eda40
int sub_009eda40(void)
{
  if (g_026b63b4 == 0) {
    g_026b63b4 = sub_009ea660(L"Engine");
    sub_009d7040();
  }
  return g_026b63b4;
}

// @baa 0x009eda70
// @baa 0x009edaa0
// @baa 0x009edad0
// @baa 0x009edb00
struct FPhysXVolumeFill_ {
    ~FPhysXVolumeFill_(); /* 0x009e9690 */
};

struct APhysXEmitterSpawnable_ : public APhysXEmitterSpawnable {
    void sub_009edd80();
};

// @baa 0x009edd80
void APhysXEmitterSpawnable_::sub_009edd80()
{
    FPhysXVolumeFill_* Fill = (FPhysXVolumeFill_*)VolumeFill.Dummy;
    if (Fill)
    {
        delete Fill;
        VolumeFill.Dummy = 0;
    }
}

// @baa 0x009eddb0
// @baa 0x009edec0
bool UApexDestructibleAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009ee310
// @baa 0x009ee420
bool UApexRenderMeshAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009ee5a0
// @baa 0x009ee6b0
bool UApexParticleSystemAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009ee820
// @baa 0x009ee930
bool UApexMeshParticleFactoryAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009eeb40
// @baa 0x009eec00
// @baa 0x009eecc0
// @baa 0x009eed80
// @baa 0x009f1900
IMPLEMENT_CLASS_AT(AApexDestructibleActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1912);

// @baa 0x009f1c90
IMPLEMENT_CLASS_AT(APhysXEmitterSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 28);

// @baa 0x009f1cc0
// @baa 0x009f2390
// @baa 0x009f24a0
bool UApexStaticDestructibleComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f2640
