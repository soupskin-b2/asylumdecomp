// RCapeStateController.cpp (part 1 of 6): 126 functions
// Placed here by: neighbours 86, class 13, callers 10, file 10.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_016bdd40(); };

// @baa 0x016bdd40
void C::sub_016bdd40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x016ce190
IMPLEMENT_CLASS_AT(URCapeStateController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 15);

// @baa 0x016ce2a0
int URCapeStateController::vf_000(void) { return 1; }

// @baa 0x016ce2b0
bool URCapeStateController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ce2f0
IMPLEMENT_CLASS_AT(URCapeCollisionConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 16);

// @baa 0x016ce400
int URCapeCollisionConfig::vf_000(void) { return 1; }

// @baa 0x016ce410
bool URCapeCollisionConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ce450
IMPLEMENT_CLASS_AT(URCapeCollisionConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 17);

// @baa 0x016ce560
int URCapeCollisionConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ce570
bool URCapeCollisionConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ce5f0
IMPLEMENT_CLASS_AT(URCapeStateBoneConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 18);

// @baa 0x016ce700
int URCapeStateBoneConfig::vf_000(void) { return 1; }

// @baa 0x016ce710
bool URCapeStateBoneConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ce750
IMPLEMENT_CLASS_AT(URCapeStateBoneConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 19);

// @baa 0x016ce860
int URCapeStateBoneConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ce870
bool URCapeStateBoneConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ce8f0
IMPLEMENT_CLASS_AT(URCapeCollisionShapeConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 20);

// @baa 0x016cea00
int URCapeCollisionShapeConfig::vf_000(void) { return 1; }

// @baa 0x016cea10
bool URCapeCollisionShapeConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016cea50
IMPLEMENT_CLASS_AT(URCapeCollisionShapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 21);

// @baa 0x016ceb60
int URCapeCollisionShapeConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ceb70
bool URCapeCollisionShapeConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016cebf0
uint URCapeStateController::sub_016cebf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x34) & 1;
}

// @baa 0x016cec10
void URCapeStateController::sub_016cec10(void)
{
    int param_1 = (int)this;

  if ((*(uint *)(param_1 + 0x34) & 8) == 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  }
  return;
}

// @baa 0x016cec20
void URCapeStateController::sub_016cec20(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffd;
  if ((*(uint *)(param_1 + 0x34) & 8) == 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
  }
  return;
}

int sub_006311e0(...);
extern undefined4 g_02399000;
// @baa 0x016cec40
undefined4 URCapeStateController::sub_016cec40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_006311e0("Owner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
                 ,0x179,&g_02399000);
  }
  return *(undefined4 *)(param_1 + 0x30);
}

extern undefined4 g_023990f0;
// @baa 0x016cec70
undefined4 URCapeStateController::sub_016cec70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_006311e0("Owner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
                 ,0x17f,&g_023990f0);
  }
  return *(undefined4 *)(param_1 + 0x30);
}

struct SInner {
    int sub_016bcc10();
};

struct SOuter {
    int sub_016cecd0(int arg1);
    char pad[0x40];
    SInner* inner;
};

// @baa 0x016cecd0
int SOuter::sub_016cecd0(int arg1)
{
    return ((SInner *)inner)->sub_016bcc10();
}

// @baa 0x016ced50
void URCapeStateController::sub_016ced50(int a0) { *(int*)((char*)this + 380) = a0; }

typedef uint size_t;

struct C_016d2af0{
void sub_016d2af0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
extern undefined2 g_01e3f3dc;
// @baa 0x016d2af0
void C_016d2af0::sub_016d2af0(int param_2,int param_3)
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

struct C_016d2c10 { int sub_016d2c10(void); };

// @baa 0x016d2c10
int C_016d2c10::sub_016d2c10(void) { return *(int*)((char*)this + 4); }

struct C_016d2c20 { C_016d2c20* sub_016d2c20(int a0); };

// @baa 0x016d2c20
C_016d2c20* C_016d2c20::sub_016d2c20(int a0) { return this; }

struct C_016d2c30 { int sub_016d2c30(void); };

// @baa 0x016d2c30
int C_016d2c30::sub_016d2c30(void) { return *(int*)((char*)this + 0); }

struct C_016d2c40 { C_016d2c40* sub_016d2c40(int a0); };

// @baa 0x016d2c40
C_016d2c40* C_016d2c40::sub_016d2c40(int a0) { return this; }

struct C_016d2c50 { int sub_016d2c50(void); };

// @baa 0x016d2c50
int C_016d2c50::sub_016d2c50(void) { return *(int*)((char*)this + 0); }

struct C_016d2c60 { C_016d2c60* sub_016d2c60(int a0); };

// @baa 0x016d2c60
C_016d2c60* C_016d2c60::sub_016d2c60(int a0) { return this; }

struct C_016d2c70 {
    int sub_016d2c70(int);
};

// @baa 0x016d2c70
int C_016d2c70::sub_016d2c70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_016d2c80 { C_016d2c80* sub_016d2c80(int a0); };

// @baa 0x016d2c80
C_016d2c80* C_016d2c80::sub_016d2c80(int a0) { return this; }

struct C_016d2c90 {
    int sub_016d2c90(int);
};

// @baa 0x016d2c90
int C_016d2c90::sub_016d2c90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_016d2cb0 { int sub_016d2cb0(void); };

// @baa 0x016d2cb0
int C_016d2cb0::sub_016d2cb0(void) { return *(int*)((char*)this + 0); }

struct C_016d2cc0 { int sub_016d2cc0(void); };

// @baa 0x016d2cc0
int C_016d2cc0::sub_016d2cc0(void) { return *(int*)((char*)this + 0); }

struct C_016d2d40 {
    int sub_016d2d40(int);
};

// @baa 0x016d2d40
int C_016d2d40::sub_016d2d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_016d2d50 { int sub_016d2d50(void); };

// @baa 0x016d2d50
int C_016d2d50::sub_016d2d50(void) { return *(int*)((char*)this + 0); }

struct C_016d2dd0 {
    int sub_016d2dd0(int);
};

// @baa 0x016d2dd0
int C_016d2dd0::sub_016d2dd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_016d2de0 { C_016d2de0* sub_016d2de0(int a0); };

// @baa 0x016d2de0
C_016d2de0* C_016d2de0::sub_016d2de0(int a0) { return this; }

struct C_016d2df0 { C_016d2df0* sub_016d2df0(int a0); };

// @baa 0x016d2df0
C_016d2df0* C_016d2df0::sub_016d2df0(int a0) { return this; }

struct C_016d2e70 { C_016d2e70* sub_016d2e70(int a0); };

// @baa 0x016d2e70
C_016d2e70* C_016d2e70::sub_016d2e70(int a0) { return this; }

struct C_016d2e80 { int sub_016d2e80(void); };

// @baa 0x016d2e80
int C_016d2e80::sub_016d2e80(void) { return *(int*)((char*)this + 0); }

struct C_016d2e90 { int sub_016d2e90(void); };

// @baa 0x016d2e90
int C_016d2e90::sub_016d2e90(void) { return *(int*)((char*)this + 0); }

struct C_016d2f10 {
    int sub_016d2f10(int);
};

// @baa 0x016d2f10
int C_016d2f10::sub_016d2f10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_016d2f20 { C_016d2f20* sub_016d2f20(int a0); };

// @baa 0x016d2f20
C_016d2f20* C_016d2f20::sub_016d2f20(int a0) { return this; }

struct C_016d2f30 { int sub_016d2f30(void); };

// @baa 0x016d2f30
int C_016d2f30::sub_016d2f30(void) { return *(int*)((char*)this + 0); }

struct C_016d2fb0 { C_016d2fb0* sub_016d2fb0(int a0); };

// @baa 0x016d2fb0
C_016d2fb0* C_016d2fb0::sub_016d2fb0(int a0) { return this; }

struct C_016d2fc0 { int sub_016d2fc0(void); };

// @baa 0x016d2fc0
int C_016d2fc0::sub_016d2fc0(void) { return *(int*)((char*)this + 0); }

struct C_016d2fd0 { int sub_016d2fd0(void); };

// @baa 0x016d2fd0
int C_016d2fd0::sub_016d2fd0(void) { return *(int*)((char*)this + 0); }

struct C_016d3050 {
    int sub_016d3050(int);
};

// @baa 0x016d3050
int C_016d3050::sub_016d3050(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_016d3060 { C_016d3060* sub_016d3060(int a0); };

// @baa 0x016d3060
C_016d3060* C_016d3060::sub_016d3060(int a0) { return this; }

struct C_016d3070 { int sub_016d3070(void); };

// @baa 0x016d3070
int C_016d3070::sub_016d3070(void) { return *(int*)((char*)this + 0); }

struct C_016d3080 { int sub_016d3080(void); };

// @baa 0x016d3080
int C_016d3080::sub_016d3080(void) { return *(int*)((char*)this + 0); }

struct C_016d3100 {
    int sub_016d3100(int);
};

// @baa 0x016d3100
int C_016d3100::sub_016d3100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016d3110 { C_016d3110* sub_016d3110(int a0); };

// @baa 0x016d3110
C_016d3110* C_016d3110::sub_016d3110(int a0) { return this; }

struct C_016d3120 { int sub_016d3120(void); };

// @baa 0x016d3120
int C_016d3120::sub_016d3120(void) { return *(int*)((char*)this + 0); }

struct C_016d3130 { int sub_016d3130(void); };

// @baa 0x016d3130
int C_016d3130::sub_016d3130(void) { return *(int*)((char*)this + 0); }

struct C_016d3140 {
    int sub_016d3140(int);
};

// @baa 0x016d3140
int C_016d3140::sub_016d3140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016d3150 { C_016d3150* sub_016d3150(int a0); };

// @baa 0x016d3150
C_016d3150* C_016d3150::sub_016d3150(int a0) { return this; }

struct C_016d3160 {
    int sub_016d3160(int);
};

// @baa 0x016d3160
int C_016d3160::sub_016d3160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016d3170 { C_016d3170* sub_016d3170(int a0); };

// @baa 0x016d3170
C_016d3170* C_016d3170::sub_016d3170(int a0) { return this; }

struct C_016d3180 { int sub_016d3180(void); };

// @baa 0x016d3180
int C_016d3180::sub_016d3180(void) { return *(int*)((char*)this + 0); }

// @baa 0x016d3210
void sub_016d3210(void) {  }

struct C_016d3220 { int sub_016d3220(void); };

// @baa 0x016d3220
int C_016d3220::sub_016d3220(void) { return *(int*)((char*)this + 0); }

struct C_016d3230 { int sub_016d3230(void); };

// @baa 0x016d3230
int C_016d3230::sub_016d3230(void) { return *(int*)((char*)this + 0); }

struct C_016d3240 { int sub_016d3240(void); };

// @baa 0x016d3240
int C_016d3240::sub_016d3240(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_016d3250(INT Index);
};

// @baa 0x016d3250
E* S::sub_016d3250(INT Index)
{
    return &Items(Index);
}

struct C_016d32a0 { int sub_016d32a0(void); };

// @baa 0x016d32a0
int C_016d32a0::sub_016d32a0(void) { return *(int*)((char*)this + 0); }

struct C_016d32b0 { int sub_016d32b0(void); };

// @baa 0x016d32b0
int C_016d32b0::sub_016d32b0(void) { return *(int*)((char*)this + 0); }

struct C_016d32c0 { int sub_016d32c0(void); };

// @baa 0x016d32c0
int C_016d32c0::sub_016d32c0(void) { return *(int*)((char*)this + 0); }

struct C_016d32d0 { int sub_016d32d0(void); };

// @baa 0x016d32d0
int C_016d32d0::sub_016d32d0(void) { return *(int*)((char*)this + 0); }

struct C_016d32e0 { int sub_016d32e0(void); };

// @baa 0x016d32e0
int C_016d32e0::sub_016d32e0(void) { return *(int*)((char*)this + 0); }

struct C_016d32f0 { int sub_016d32f0(void); };

// @baa 0x016d32f0
int C_016d32f0::sub_016d32f0(void) { return *(int*)((char*)this + 0); }

struct C_016d8250 { void* Data; int Num; int Max; void sub_016d8250(); };

// @baa 0x016d8250
void C_016d8250::sub_016d8250() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016d82f0 { void* Data; int Num; int Max; void sub_016d82f0(); };

// @baa 0x016d82f0
void C_016d82f0::sub_016d82f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_016d8130();
// @baa 0x016d87f0
void sub_016d87f0(void) { sub_016d8130(); }

void sub_016d8190();
// @baa 0x016d8800
void sub_016d8800(void) { sub_016d8190(); }

struct C_016d8810 { int a, b, c; C_016d8810(); };

// @baa 0x016d8810
C_016d8810::C_016d8810() : a(0), b(0), c(0) {}

void sub_016d81f0();
// @baa 0x016d8820
void sub_016d8820(void) { sub_016d81f0(); }

void sub_016bdd40();
// @baa 0x016d8830
void sub_016d8830(void) { sub_016bdd40(); }

void sub_016d8250();
// @baa 0x016d8840
void sub_016d8840(void) { sub_016d8250(); }

void sub_016d82f0();
// @baa 0x016d8850
void sub_016d8850(void) { sub_016d82f0(); }

void sub_016d8470();
// @baa 0x016d8860
void sub_016d8860(void) { sub_016d8470(); }

int sub_005c7a20(void);
extern undefined * g_023a2b60;
// @baa 0x016d8870
undefined4 * UObject::sub_016d8870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a2b60);
  return param_1;
}

// @baa 0x016d8890
// @baa 0x016d8900
struct M_016d8930 { void sub_016d81f0(); };

struct C_016d8930 { char pad[8]; M_016d8930 m; void sub_016d8930(); };

// @baa 0x016d8930
void C_016d8930::sub_016d8930() { m.sub_016d81f0(); }

struct M_016d8ac0 { void sub_016bdd40(); };

struct C_016d8ac0 { char pad[20]; M_016d8ac0 m; void sub_016d8ac0(); };

// @baa 0x016d8ac0
void C_016d8ac0::sub_016d8ac0() { m.sub_016bdd40(); }

struct C_016db0b0 { void sub_016d86a0(int); C_016db0b0 *sub_016db0b0(int); };

// @baa 0x016db0b0
C_016db0b0 *C_016db0b0::sub_016db0b0(int a) { sub_016d86a0(a); return this; }

struct C_016db0d0 { C_016db0d0* sub_016db0d0(void); };

// @baa 0x016db0d0
C_016db0d0* C_016db0d0::sub_016db0d0(void) { return this; }

// @baa 0x016db5b0
// @baa 0x016db600
struct C_016db930 { void sub_016d86a0(int); C_016db930 *sub_016db930(int); };

// @baa 0x016db930
C_016db930 *C_016db930::sub_016db930(int a) { sub_016d86a0(a); return this; }

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

struct TConstSetBitIterator_016ddaa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016ddaa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016ddaa0& operator++();
};

TConstSetBitIterator_016ddaa0::TConstSetBitIterator_016ddaa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016ddaa0
TConstSetBitIterator_016ddaa0& TConstSetBitIterator_016ddaa0::operator++()
{
    It.Advance();
    return *this;
}

struct C_016ddac0 {
    undefined4 sub_016ddac0(byte);
    int sub_016db050();
};

int sub_0053dfa0(...);
// @baa 0x016ddac0
undefined4 C_016ddac0::sub_016ddac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_016ddac0 *)(((char *)this + 8)))->sub_016db050();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_016ddaf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016ddaf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016ddaf0& operator++();
};

TConstSetBitIterator_016ddaf0::TConstSetBitIterator_016ddaf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016ddaf0
TConstSetBitIterator_016ddaf0& TConstSetBitIterator_016ddaf0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x016ddb40
// @baa 0x016ddb60
// @baa 0x016ddb80
// @baa 0x016ddc20
// @baa 0x016ddd00
// @baa 0x016dddc0
struct C_view {
    int sub_016dea80(int, int);
};

extern undefined4 g_0239c23c;
extern undefined4 g_0239c340;
// @baa 0x016e01a0
int URCapeStateController::sub_016e01a0(void)
{
    int param_1 = (int)this;
  int iVar1;
  if ((*(int *)(param_1 + 0x44) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
    sub_006311e0("CapeStateName != NAME_None",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
                 ,0x6ef,&g_0239c23c);
  }
  iVar1 = ((C_view *)(this))->sub_016dea80(*(undefined4 *)(param_1 + 0x44), *(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    sub_006311e0("pCurrentCapeStateData != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
                 ,0x6f2,&g_0239c340);
  }
  return iVar1;
}

struct C_view_016e0200 {
    int sub_016deb60(int, int);
};

extern undefined4 g_0239c44c;
extern undefined4 g_0239c550;
// @baa 0x016e0200
int URCapeStateController::sub_016e0200(void)
{
    int param_1 = (int)this;
  int iVar1;
  if ((*(int *)(param_1 + 0x44) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
    sub_006311e0("CapeStateName != NAME_None",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
                 ,0x6f9,&g_0239c44c);
  }
  iVar1 = ((C_view_016e0200 *)(this))->sub_016deb60(*(undefined4 *)(param_1 + 0x44), *(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    sub_006311e0("pCurrentCapeStateData != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
                 ,0x6fc,&g_0239c550);
  }
  return iVar1;
}

// @baa 0x016e20a0
void sub_016e2370();
// @baa 0x016e3310
void sub_016e3310(void) { sub_016e2370(); }

// @baa 0x016e6580
void sub_016e62f0();
// @baa 0x016e65a0
void sub_016e65a0(void) { sub_016e62f0(); }

// @baa 0x016e65b0
int sub_005c7a70(...);
int sub_016e6de0(void);
// @baa 0x016e6ed0
undefined4 URCapeStateController::sub_016e6ed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_016e6de0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1c0);
  }
  return param_1;
}

// @baa 0x016e7300
// @baa 0x016e7310
// @baa 0x016e73d0

// The referenced cape physics object; sub_016bcf30 takes a float by value.
struct FCapePhysics_
{
	void sub_016bcf30(float Value);
};

struct URCapeStateController_ : public URCapeStateController
{
	// If the controller is initialised, forward the value to the referenced
	// cape physics object.
	void sub_016cece0(float Value);
};

// @baa 0x016cece0
void URCapeStateController_::sub_016cece0(float Value)
{
	if (IsInitialised)
	{
		FCapePhysics_* Physics = reinterpret_cast<FCapePhysics_*>(CapePhysicsRef.Dummy);
		Physics->sub_016bcf30(Value);
	}
}

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x016dc330
void URCapeCollisionShapeConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URCapeCollisionShapeConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("CapeCollisionShapeConfig");
}

// @baa 0x016dfed0
void URCapeCollisionConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URCapeCollisionConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("CapeCollisionConfig");
}

// @baa 0x016e6f00
void URCapeStateBoneConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URCapeStateBoneConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("CapeStateBoneConfig");
}

/* Kit gap: the controller's pause/unpause helpers (RCapeStateController.cpp) aren't declared; their names aren't known.
 * The first asserts !IsCapePaused, the second IsCapePaused || IsSubUpdatePauseRequested. */
struct URCapeStateController__016e7610 : public URCapeStateController
{
	void sub_016e72b0(UBOOL bStateChanged); /* 0x016e72b0 */
	void sub_016e75b0(UBOOL bStateChanged); /* 0x016e75b0 */
};

// @baa 0x016e7610
void URCapeStateController::UpdatePauseState()
{
	if (IsInitialised)
	{
		const UBOOL bStateChanged = IsCapePauseRequested != IsCapePaused;
		if ((IsCapePauseRequested && !IsCapePaused) || IsSubUpdatePauseRequested)
		{
			((URCapeStateController__016e7610*)this)->sub_016e72b0(bStateChanged);
		}
		if ((!IsCapePauseRequested && IsCapePaused) || IsSubUpdatePauseRequested)
		{
			((URCapeStateController__016e7610*)this)->sub_016e75b0(bStateChanged);
			IsSubUpdatePauseRequested = FALSE;
		}
	}
}

/* The project's existing name for the cape physics object behind CapePhysicsRef (0x016af420 is bound as
 * S_016ceca0::sub_016af420). */
struct S_016ceca0
{
    UINT sub_016af420();
};

struct URCapeStateController__016ceca0 : public URCapeStateController
{
    UINT sub_016ceca0(); /* 0x016ceca0 */
};

// @baa 0x016ceca0
/* Unnamed in the kit: forwards to the cape physics object. */
UINT URCapeStateController__016ceca0::sub_016ceca0()
{
#line 390 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
    check(CapePhysicsRef.Dummy != NULL);
    return ((S_016ceca0*)CapePhysicsRef.Dummy)->sub_016af420();
}

#line 942 "candidate.cpp"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

struct URCapeStateController__016d6050 : public URCapeStateController
{
    INT FindBoneStateCacheIndex(URCapeStateBoneConfig* BoneConfig) const; /* 0x016d6050 */
};

// @baa 0x016d6050
/* The bone state cache entry for a bone config; the cache size when there is none yet (the slot it would take). */
INT URCapeStateController__016d6050::FindBoneStateCacheIndex(URCapeStateBoneConfig* BoneConfig) const
{
    INT Num = BoneStateCache.Num();
    for (INT Idx = 0; Idx < Num; Idx++)
    {
        if (((const TArrayAt_<FCapeBoneStateData>&)BoneStateCache).At(Idx).BoneConfig == BoneConfig)
        {
            return Idx;
        }
    }
    return Num;
}

#line 983 "candidate.cpp"
