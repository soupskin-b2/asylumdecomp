// CommonGame_1540000.cpp (part 1 of 2): 131 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_022e5908;
// @baa 0x01540000
undefined4 * UObject::sub_01540000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5908);
  return param_1;
}

// @baa 0x01540060
int URSeqVar_RandomVector::vf_198(int a0) { return 0; }

// @baa 0x01540070
IMPLEMENT_CLASS_AT(URSeqVar_RandomVector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 10);

// @baa 0x015400d0
extern undefined * g_022e5ab8;
// @baa 0x01540570
undefined4 * UObject::sub_01540570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5ab8);
  return param_1;
}

// @baa 0x01540590
int URSeqVar_GlobalFlag::vf_198(int a0) { return 0; }

// @baa 0x015405a0
IMPLEMENT_CLASS_AT(URSeqVar_GlobalFlag, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 19);

// @baa 0x01540600
extern undefined * g_022e5c68;
// @baa 0x01540630
undefined4 * UObject::sub_01540630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5c68);
  return param_1;
}

// @baa 0x01540650
int URSeqVar_LocalFlag::vf_198(int a0) { return 0; }

// @baa 0x01540660
IMPLEMENT_CLASS_AT(URSeqVar_LocalFlag, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 18);

// @baa 0x015406c0
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01541690(); };

// @baa 0x01541690
void C::sub_01541690() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_015417a0;
// @baa 0x015417a0
template INT TArray<T_015417a0*>::RemoveItem(T_015417a0* const&);

struct C_01541930 { void* Data; int Num; int Max; void sub_01541930(); };

// @baa 0x01541930
void C_01541930::sub_01541930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01541990 { void* Data; int Num; int Max; void sub_01541990(); };

// @baa 0x01541990
void C_01541990::sub_01541990() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015419f0 { void* Data; int Num; int Max; void sub_015419f0(); };

// @baa 0x015419f0
void C_015419f0::sub_015419f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01541a50 { void* Data; int Num; int Max; void sub_01541a50(); };

// @baa 0x01541a50
void C_01541a50::sub_01541a50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01541ab0
void __stdcall sub_01541ab0(DWORD a, DWORD b)
{
}

struct C_01541b30 {
    int sub_01541b30(int);
};

// @baa 0x01541b30
int C_01541b30::sub_01541b30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01541b40 {
    int sub_01541b40(int);
};

// @baa 0x01541b40
int C_01541b40::sub_01541b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01541b50 {
    int sub_01541b50();
};

// @baa 0x01541b50
int C_01541b50::sub_01541b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01541b60 {
    int sub_01541b60();
};

// @baa 0x01541b60
int C_01541b60::sub_01541b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01541bd0 {
    void sub_01541bd0(int);
};

int sub_0053df70(...);
// @baa 0x01541bd0
void C_01541bd0::sub_01541bd0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

extern undefined * g_022e5e18;
// @baa 0x01541c10
undefined4 * UObject::sub_01541c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5e18);
  return param_1;
}

// @baa 0x01541c30
IMPLEMENT_CLASS_AT(URInteractionComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameInteractionClasses.cpp", 7);

// @baa 0x01541ca0
void sub_01541690();
// @baa 0x01541cc0
void sub_01541cc0(void) { sub_01541690(); }

void sub_01541820();
// @baa 0x01541cd0
void sub_01541cd0(void) { sub_01541820(); }

// @baa 0x01541d20
IMPLEMENT_CLASS_AT(URParticleModuleOnDeathBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 5);

extern undefined * g_022e5f68;
// @baa 0x01541d80
undefined4 * UObject::sub_01541d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5f68);
  return param_1;
}

// @baa 0x01541da0
extern undefined * g_022e60d0;
// @baa 0x01541dc0
undefined4 * UObject::sub_01541dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e60d0);
  return param_1;
}

// @baa 0x01541de0
IMPLEMENT_CLASS_AT(URParticleModuleSpawnDecalOnDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 4);

// @baa 0x01541e40
extern undefined * g_022e6240;
// @baa 0x01541e60
undefined4 * UObject::sub_01541e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e6240);
  return param_1;
}

// @baa 0x01541e80
IMPLEMENT_CLASS_AT(URParticleModuleSpawnOnDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 6);

// @baa 0x01541ee0
extern undefined * g_022e63b0;
// @baa 0x01541f00
undefined4 * UObject::sub_01541f00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e63b0);
  return param_1;
}

// @baa 0x01541f20
IMPLEMENT_CLASS_AT(URParticleModuleWaitForDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameParticleClasses.cpp", 7);

// @baa 0x01541f80
void sub_01541930();
// @baa 0x01542240
void sub_01542240(void) { sub_01541930(); }

void sub_01541990();
// @baa 0x01542280
void sub_01542280(void) { sub_01541990(); }

void sub_015419f0();
// @baa 0x015424c0
void sub_015424c0(void) { sub_015419f0(); }

void sub_01541a50();
// @baa 0x01542850
void sub_01542850(void) { sub_01541a50(); }

struct C_01542860 { C_01542860* sub_01542860(void); };

// @baa 0x01542860
C_01542860* C_01542860::sub_01542860(void) { return this; }

struct C_01542870 { C_01542870* sub_01542870(void); };

// @baa 0x01542870
C_01542870* C_01542870::sub_01542870(void) { return this; }

struct C_01542880 { void* Data; int Num; int Max; void sub_01542880(); };

// @baa 0x01542880
void C_01542880::sub_01542880() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_015428e0 {
    undefined4 sub_015428e0();
};

// @baa 0x015428e0
undefined4 C_015428e0::sub_015428e0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_015428f0 { C_015428f0* sub_015428f0(void); };

// @baa 0x015428f0
C_015428f0* C_015428f0::sub_015428f0(void) { return this; }

struct C_01542900 { C_01542900* sub_01542900(void); };

// @baa 0x01542900
C_01542900* C_01542900::sub_01542900(void) { return this; }

struct C_01542910 { C_01542910* sub_01542910(void); };

// @baa 0x01542910
C_01542910* C_01542910::sub_01542910(void) { return this; }

struct C_01542920 {
    int sub_01542920(int);
};

// @baa 0x01542920
int C_01542920::sub_01542920(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

void sub_00665d40();
// @baa 0x01542930
void sub_01542930(void) { sub_00665d40(); }

struct C_015429c0 {
    int sub_015429c0(int);
};

// @baa 0x015429c0
int C_015429c0::sub_015429c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
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

struct TConstSetBitIterator_01542af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01542af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01542af0& operator++();
};

TConstSetBitIterator_01542af0::TConstSetBitIterator_01542af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01542af0
TConstSetBitIterator_01542af0& TConstSetBitIterator_01542af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01542b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01542b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01542b10& operator++();
};

TConstSetBitIterator_01542b10::TConstSetBitIterator_01542b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01542b10
TConstSetBitIterator_01542b10& TConstSetBitIterator_01542b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01542b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01542b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01542b60& operator++();
};

TConstSetBitIterator_01542b60::TConstSetBitIterator_01542b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01542b60
TConstSetBitIterator_01542b60& TConstSetBitIterator_01542b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01542b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01542b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01542b80& operator++();
};

TConstSetBitIterator_01542b80::TConstSetBitIterator_01542b80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01542b80
TConstSetBitIterator_01542b80& TConstSetBitIterator_01542b80::operator++()
{
    It.Advance();
    return *this;
}

void sub_01542880();
// @baa 0x01543390
void sub_01543390(void) { sub_01542880(); }

// @baa 0x01543410
IMPLEMENT_CLASS_AT(URReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameRouterClasses.cpp", 7);

// @baa 0x01543480
struct C_015434b0 {
    undefined4 * sub_015434b0();
};

extern undefined * g_022e6688;
// @baa 0x015434b0
undefined4 * C_015434b0::sub_015434b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_022e6688);
  return param_1;
}

struct C_015434d0 {
    undefined4 * sub_015434d0();
};

extern undefined * g_022e67d0;
// @baa 0x015434d0
undefined4 * C_015434d0::sub_015434d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_022e67d0);
  return param_1;
}

// @baa 0x01543510
int URForcedReachSpec::vf_11c(void) { return 1; }

// @baa 0x01543520
IMPLEMENT_CLASS_AT(URForcedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameRouterClasses.cpp", 8);

// @baa 0x01543580
struct TConstSetBitIterator_01543a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01543a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01543a30& operator++();
};

TConstSetBitIterator_01543a30::TConstSetBitIterator_01543a30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01543a30
TConstSetBitIterator_01543a30& TConstSetBitIterator_01543a30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01543ae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01543ae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01543ae0& operator++();
};

TConstSetBitIterator_01543ae0::TConstSetBitIterator_01543ae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01543ae0
TConstSetBitIterator_01543ae0& TConstSetBitIterator_01543ae0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x01543c10
// @baa 0x01543d20
bool URParticleModuleSpawnDecalOnDeath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01543d60
// @baa 0x01543e70
bool URParticleModuleSpawnOnDeath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01543eb0
// @baa 0x01543fc0
bool URParticleModuleWaitForDeath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01544000 { C_01544000* sub_01544000(void); };

// @baa 0x01544000
C_01544000* C_01544000::sub_01544000(void) { return this; }

struct C_01544400 {
    int sub_01544400(int);
    int sub_01542940(int, int);
};

// @baa 0x01544400
int C_01544400::sub_01544400(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_01544400 *)(this))->sub_01542940((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_01544440 { void sub_01542bd0(int); C_01544440 *sub_01544440(int); };

// @baa 0x01544440
C_01544440 *C_01544440::sub_01544440(int a) { sub_01542bd0(a); return this; }

struct C_015444c0 {
    void sub_015444c0();
    int sub_015439b0(int);
};

// @baa 0x015444c0
void C_015444c0::sub_015444c0(void)
{
    int param_1 = (int)this;
  ((C_015444c0 *)((*(char **)((char *)this + 0x10))))->sub_015439b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_015444e0 {
    undefined4 sub_015444e0(byte);
};

int sub_0053dfa0(...);
int sub_015433a0(void);
// @baa 0x015444e0
undefined4 C_015444e0::sub_015444e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_015433a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x015447a0
// @baa 0x015448b0
bool URForcedReachSpec::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01546150 {
    int sub_01546150(undefined4, undefined4);
    int sub_015457d0(int, int);
};

// @baa 0x01546150
int C_01546150::sub_01546150(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01546150 *)(this))->sub_015457d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01546170 {
    int sub_01546170();
};

int sub_01543a80(void);
// @baa 0x01546170
int C_01546170::sub_01546170(void)
{
    int param_1 = (int)this;

  sub_01543a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01545f40();
// @baa 0x01546440
void sub_01546440(void) { sub_01545f40(); }

struct C_015468f0 { C_015468f0* sub_015468f0(void); };

// @baa 0x015468f0
C_015468f0* C_015468f0::sub_015468f0(void) { return this; }

void sub_01035b70();
// @baa 0x01546900
void sub_01546900(void) { sub_01035b70(); }

struct C_01546910 {
    int sub_01546910();
};

// @baa 0x01546910
int C_01546910::sub_01546910(void)
{
    int param_1 = (int)this;

  sub_01543a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01546a20
IMPLEMENT_CLASS_AT(ARRainVolumeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 6);

// @baa 0x01546b30
bool ARRainVolumeBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01546b70
void sub_01546b70(void) { sub_01545f40(); }

extern undefined * g_022e8270;
// @baa 0x01546c60
undefined4 * UObject::sub_01546c60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8270);
  return param_1;
}

// @baa 0x01546c80
IMPLEMENT_CLASS_AT(URActorFactoryBreakablePropStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 6);

// @baa 0x01546d00
// @baa 0x01546d30
IMPLEMENT_CLASS_AT(ARBreakablePropStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 4);

// @baa 0x01546e40
bool ARBreakablePropStatic::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined * g_022e8398;
// @baa 0x01546e80
undefined4 * UObject::sub_01546e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8398);
  return param_1;
}

// @baa 0x01546ea0
IMPLEMENT_CLASS_AT(URSeqAct_BoolCounter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 12);

// @baa 0x01546f00
extern undefined * g_022e8538;
// @baa 0x01546f30
undefined4 * UObject::sub_01546f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8538);
  return param_1;
}

extern "C" int g_026e0f34;
extern "C" int g_026e0f38;
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
    void sub_01546f50();
};

// @baa 0x01546f50
void UObjectThunk::sub_01546f50()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e0f34, g_026e0f38, 0), 0, 0);
}

struct UObjectThunk_01546f80 {
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
    void sub_01546f80();
};

// @baa 0x01546f80
void UObjectThunk_01546f80::sub_01546f80()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e0f34, g_026e0f38, 0), 0, 0);
}

// @baa 0x01546fb0
IMPLEMENT_CLASS_AT(URSeqAct_SetFarCullDistance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 5);

// @baa 0x01547010
extern undefined * g_022e86d8;
// @baa 0x01547040
undefined4 * UObject::sub_01547040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e86d8);
  return param_1;
}

// @baa 0x01547060
IMPLEMENT_CLASS_AT(URSeqAct_EventSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 6);

// @baa 0x015470d0
extern undefined * g_022e8878;
// @baa 0x01547100
undefined4 * UObject::sub_01547100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8878);
  return param_1;
}

// @baa 0x01547120
void URSeqAct_WaitForAllInputs::vf_178(void) {  }

// @baa 0x01547510
IMPLEMENT_CLASS_AT(URSeqAct_WaitForAllInputs, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 7);

// @baa 0x01547580
extern undefined * g_022e8a28;
// @baa 0x015475b0
undefined4 * UObject::sub_015475b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8a28);
  return param_1;
}

// @baa 0x015475d0
void URSeqAct_WaitForBool::vf_174(void) {  }

// @baa 0x015475e0
void URSeqAct_WaitForBool::vf_178(void) {  }

// @baa 0x015477e0
IMPLEMENT_CLASS_AT(URSeqAct_WaitForBool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 8);

// @baa 0x01547840
extern undefined * g_022e8bd8;
// @baa 0x01547870
undefined4 * UObject::sub_01547870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8bd8);
  return param_1;
}

// @baa 0x01547890
IMPLEMENT_CLASS_AT(URSeqCond_VisibleLastFrame, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 9);

// @baa 0x015478f0
extern undefined * g_022e8d70;
// @baa 0x01547920
undefined4 * UObject::sub_01547920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8d70);
  return param_1;
}

// @baa 0x01547940
IMPLEMENT_CLASS_AT(URSeqAct_SwitchFlags, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 17);

// @baa 0x015479c0
extern undefined * g_022e8f10;
// @baa 0x015479f0
undefined4 * UObject::sub_015479f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8f10);
  return param_1;
}

// @baa 0x01547a10
IMPLEMENT_CLASS_AT(URSeqAct_SetBoolEx, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 16);

// @baa 0x01547a70
struct RFlagManager {
    char pad[0x30];
    struct {
        void sub_01035b70(int arg);
    } flags;
    void sub_01547aa0();
};

// @baa 0x01547aa0
void RFlagManager::sub_01547aa0()
{
    flags.sub_01035b70(0);
}

struct C_view {
    int sub_01547ab0(int, int, int);
};

// @baa 0x01548850
undefined4 URFlagManager::vf_118(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)((C_view *)(this))->sub_01547ab0(param_1 + 0x6c, param_2, param_3);
  return *puVar1;
}

// @baa 0x01548870
undefined4 URFlagManager::vf_11c(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  puVar2 = (undefined4 *)((C_view *)(this))->sub_01547ab0(param_1 + 0x6c, param_2, param_3);
  uVar1 = *puVar2;
  *puVar2 = param_4;
  return uVar1;
}

struct C_01548890 {
    int sub_01548890();
};

// @baa 0x01548890
int C_01548890::sub_01548890(void)
{
    int param_1 = (int)this;

  sub_01543a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01548a80
void sub_01548a80(void) { sub_01545f40(); }

// FDamageDef has no user-written destructor: the compiler generated this one from its members.
struct FDamageDef_ : public FDamageDef
{
    ~FDamageDef_();
};

// @baa 0x015433a0
FDamageDef_::~FDamageDef_()
{
}
