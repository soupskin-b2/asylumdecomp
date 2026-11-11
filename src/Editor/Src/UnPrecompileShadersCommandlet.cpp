// UnPrecompileShadersCommandlet.cpp (part 1 of 3): 104 functions
// Placed here by: neighbours 88, class 9, callers 5, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007160a0
void sub_007160a0(void) {  }

struct C {
    void sub_01103b50();
};

// @baa 0x01103b50
void C::sub_01103b50(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x01103b60
int sub_01103b60(int a0, int a1) { return a1; }

struct C_01103b70 {
    void sub_01103b70();
};

// @baa 0x01103b70
void C_01103b70::sub_01103b70(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x01103bf0
IMPLEMENT_CLASS_AT(UPrecompileShadersCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnPrecompileShadersCommandlet.cpp", 626);

// @baa 0x01103d00
int UPrecompileShadersCommandlet::vf_000(void) { return 1; }

// @baa 0x01103d10
bool UPrecompileShadersCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01103d50
IMPLEMENT_CLASS_AT(UDumpShadersCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnPrecompileShadersCommandlet.cpp", 941);

// @baa 0x01103e60
int UDumpShadersCommandlet::vf_000(void) { return 1; }

// @baa 0x01103e70
bool UDumpShadersCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01103eb0
IMPLEMENT_CLASS_AT(USetMaterialUsageCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\USetMaterialUsageCommandlet.cpp", 568);

// @baa 0x01103fc0
int USetMaterialUsageCommandlet::vf_000(void) { return 1; }

// @baa 0x01103fd0
bool USetMaterialUsageCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01104010
IMPLEMENT_CLASS_AT(UStripSourceCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UStripSourceCommandlet.cpp", 68);

// @baa 0x01104120
int UStripSourceCommandlet::vf_000(void) { return 1; }

// @baa 0x01104130
bool UStripSourceCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01104170
IMPLEMENT_CLASS_AT(URFMODSoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\FMODFact.cpp", 2080);

// @baa 0x01104280
int URFMODSoundFactory::vf_000(void) { return 1; }

// @baa 0x01104290
bool URFMODSoundFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011042d0
int URReimportFMODSoundFactory::vf_000(void) { return 1; }

struct C_011042e0 { int a, b, c; C_011042e0(); };

// @baa 0x011042e0
C_011042e0::C_011042e0() : a(0), b(0), c(0) {}

struct C_011042f0 { int a, b, c; C_011042f0(); };

// @baa 0x011042f0
C_011042f0::C_011042f0() : a(0), b(0), c(0) {}

struct C_01104370 { int sub_01104370(void); };

// @baa 0x01104370
int C_01104370::sub_01104370(void) { return *(int*)((char*)this + 0); }

struct C_011043f0 { int sub_011043f0(void); };

// @baa 0x011043f0
int C_011043f0::sub_011043f0(void) { return *(int*)((char*)this + 0); }

struct C_01104470 {
    int sub_01104470();
};

// @baa 0x01104470
int C_01104470::sub_01104470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01104480 {
    int sub_01104480();
};

// @baa 0x01104480
int C_01104480::sub_01104480(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01104490 { int sub_01104490(void); };

// @baa 0x01104490
int C_01104490::sub_01104490(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x011044c0
undefined4 sub_011044c0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_011044e0 { int sub_011044e0(void); };

// @baa 0x011044e0
int C_011044e0::sub_011044e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011044f0 { int sub_011044f0(void); };

// @baa 0x011044f0
int C_011044f0::sub_011044f0(void) { return *(int*)((char*)this + 0); }

struct C_01104500 { int sub_01104500(void); };

// @baa 0x01104500
int C_01104500::sub_01104500(void) { return *(int*)((char*)this + 0); }

// @baa 0x01104510
int sub_01104510(int a0) { return a0; }

struct C_01104520 {
    int sub_01104520(int);
};

// @baa 0x01104520
int C_01104520::sub_01104520(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01104530 { int sub_01104530(void); };

// @baa 0x01104530
int C_01104530::sub_01104530(void) { return *(int*)((char*)this + 20); }

struct C_011045d0 { int sub_011045d0(void); };

// @baa 0x011045d0
int C_011045d0::sub_011045d0(void) { return *(int*)((char*)this + 20); }

struct C_011045e0 {
    int sub_011045e0(int);
};

// @baa 0x011045e0
int C_011045e0::sub_011045e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_011045f0 { int sub_011045f0(void); };

// @baa 0x011045f0
int C_011045f0::sub_011045f0(void) { return *(int*)((char*)this + 0); }

struct C_01104600 { int sub_01104600(void); };

// @baa 0x01104600
int C_01104600::sub_01104600(void) { return *(int*)((char*)this + 0); }

struct C_01104610 { int sub_01104610(void); };

// @baa 0x01104610
int C_01104610::sub_01104610(void) { return *(int*)((char*)this + 20); }

struct C_01104620 { int sub_01104620(void); };

// @baa 0x01104620
int C_01104620::sub_01104620(void) { return *(int*)((char*)this + 20); }

struct C_01104630 { int a, b, c; C_01104630(); };

// @baa 0x01104630
C_01104630::C_01104630() : a(0), b(0), c(0) {}

struct C_01104640 { int sub_01104640(void); };

// @baa 0x01104640
int C_01104640::sub_01104640(void) { return *(int*)((char*)this + 0); }

struct C_01104650 { int sub_01104650(void); };

// @baa 0x01104650
int C_01104650::sub_01104650(void) { return *(int*)((char*)this + 0); }

int sub_005d8a20(...);
int sub_006adc00(void);
int sub_006d6b80(...);
extern undefined4 g_026b0de0;
// @baa 0x01104780
void sub_01104780(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005d8a20(g_026b0de0,param_1,param_2,param_3);
  return;
}

struct C_011047e0 {
    int sub_011047e0(int);
};

// @baa 0x011047e0
int C_011047e0::sub_011047e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_011047f0(INT Index);
};

// @baa 0x011047f0
DWORD* S::sub_011047f0(INT Index)
{
    return &Items(Index);
}

struct C_01104840{
int sub_01104840(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x01104840
int C_01104840::sub_01104840(undefined4*param_2)
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

struct C_011050d0 { int sub_011050d0(void); };

// @baa 0x011050d0
int C_011050d0::sub_011050d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_011050e0 { void* Data; int Num; int Max; void sub_011050e0(); };

// @baa 0x011050e0
void C_011050e0::sub_011050e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x011051a0
int UObject::sub_011051a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x011051b0
int UObject::sub_011051b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x011051d0
int UObject::sub_011051d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x011051f0
undefined4 UObject::sub_011051f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01105270 {
    int sub_01105270(int);
};

// @baa 0x01105270
int C_01105270::sub_01105270(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_011052e0 {
    int sub_011052e0();
};

// @baa 0x011052e0
int C_011052e0::sub_011052e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01105360 {
    int sub_01105360(int);
};

// @baa 0x01105360
int C_01105360::sub_01105360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct C_01105370 {
    int sub_01105370(int);
};

// @baa 0x01105370
int C_01105370::sub_01105370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

// @baa 0x01105380
void __stdcall sub_01105380(int a0, int a1) {  }

struct C_01105390 {
    int sub_01105390();
};

// @baa 0x01105390
int C_01105390::sub_01105390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x7c + *(int *)*param_1;
}

struct C_011053a0 {
    int sub_011053a0();
};

// @baa 0x011053a0
int C_011053a0::sub_011053a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x7c + *(int *)*param_1;
}

struct C_01105580 { void* Data; int Num; int Max; void sub_01105580(); };

// @baa 0x01105580
void C_01105580::sub_01105580() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01108120 {
    int sub_01108120();
};

// @baa 0x01108120
int C_01108120::sub_01108120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
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

struct TConstSetBitIterator_011083f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011083f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011083f0& operator++();
};

TConstSetBitIterator_011083f0::TConstSetBitIterator_011083f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011083f0
TConstSetBitIterator_011083f0& TConstSetBitIterator_011083f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01108410 {
    int sub_01108410(int);
    int sub_01107610(int, int);
};

// @baa 0x01108410
int C_01108410::sub_01108410(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01108410 *)(this))->sub_01107610((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x7c + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_01108440 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01108440(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01108440& operator++();
};

TConstSetBitIterator_01108440::TConstSetBitIterator_01108440(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01108440
TConstSetBitIterator_01108440& TConstSetBitIterator_01108440::operator++()
{
    It.Advance();
    return *this;
}

struct C_01108460 {
    int sub_01108460();
};

// @baa 0x01108460
int C_01108460::sub_01108460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x7c + *(int *)*param_1;
}

struct M_011084c0 { void sub_01108060(); };

struct C_011084c0 { char pad[8]; M_011084c0 m; void sub_011084c0(); };

// @baa 0x011084c0
void C_011084c0::sub_011084c0() { m.sub_01108060(); }

struct M_01108800 { void sub_01108060(); };

struct C_01108800 { char pad[8]; M_01108800 m; void sub_01108800(); };

// @baa 0x01108800
void C_01108800::sub_01108800() { m.sub_01108060(); }

struct TConstSetBitIterator_01108810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01108810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01108810& operator++();
};

TConstSetBitIterator_01108810::TConstSetBitIterator_01108810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01108810
TConstSetBitIterator_01108810& TConstSetBitIterator_01108810::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01108860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01108860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01108860& operator++();
};

TConstSetBitIterator_01108860::TConstSetBitIterator_01108860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01108860
TConstSetBitIterator_01108860& TConstSetBitIterator_01108860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01108910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01108910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01108910& operator++();
};

TConstSetBitIterator_01108910::TConstSetBitIterator_01108910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01108910
TConstSetBitIterator_01108910& TConstSetBitIterator_01108910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011089c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011089c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011089c0& operator++();
};

TConstSetBitIterator_011089c0::TConstSetBitIterator_011089c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011089c0
TConstSetBitIterator_011089c0& TConstSetBitIterator_011089c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01108a10 {
    undefined4 sub_01108a10(byte);
    int sub_01108060();
};

// @baa 0x01108a10
undefined4 C_01108a10::sub_01108a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01108a10 *)(((char *)this + 8)))->sub_01108060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01108a40 {
    undefined4 * sub_01108a40(undefined4 *);
    int sub_01108720(int);
};

// @baa 0x01108a40
undefined4 * C_01108a40::sub_01108a40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_01108a40 *)(((char *)this + 8)))->sub_01108720((int)(param_2 + 2));
  return param_1;
}

int sub_005c7a70(...);
int sub_0110f4f0(void);
// @baa 0x0110f570
undefined4 URFMODSoundFactory::sub_0110f570(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0110f4f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x88);
  }
  return param_1;
}

int sub_0110f610(void);
// @baa 0x0110f680
undefined4 UDumpShadersCommandlet::sub_0110f680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0110f610();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x7c);
  }
  return param_1;
}

struct TConstSetBitIterator_0110fb80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0110fb80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0110fb80& operator++();
};

TConstSetBitIterator_0110fb80::TConstSetBitIterator_0110fb80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0110fb80
TConstSetBitIterator_0110fb80& TConstSetBitIterator_0110fb80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0110fdc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0110fdc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0110fdc0& operator++();
};

TConstSetBitIterator_0110fdc0::TConstSetBitIterator_0110fdc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0110fdc0
TConstSetBitIterator_0110fdc0& TConstSetBitIterator_0110fdc0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0110ff00 {
    int sub_0110ff00();
};

int sub_011088b0(void);
// @baa 0x0110ff00
int C_0110ff00::sub_0110ff00(void)
{
    int param_1 = (int)this;

  sub_011088b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0110ff20
// @baa 0x0110ff30
// @baa 0x0110ff40
// @baa 0x0110ff50
// @baa 0x0110ff60
// @baa 0x01110020
struct TConstSetBitIterator_011104f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011104f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011104f0& operator++();
};

TConstSetBitIterator_011104f0::TConstSetBitIterator_011104f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011104f0
TConstSetBitIterator_011104f0& TConstSetBitIterator_011104f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01110700 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01110700(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01110700& operator++();
};

TConstSetBitIterator_01110700::TConstSetBitIterator_01110700(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01110700
TConstSetBitIterator_01110700& TConstSetBitIterator_01110700::operator++()
{
    It.Advance();
    return *this;
}

struct C_01110750 {
    int sub_01110750(undefined4, undefined4);
    int sub_0110fe10(int, int);
};

// @baa 0x01110750
int C_01110750::sub_01110750(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01110750 *)(this))->sub_0110fe10(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01110770 {
    int sub_01110770(undefined4, undefined4);
    int sub_0110fe80(int, int);
};

// @baa 0x01110770
int C_01110770::sub_01110770(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01110770 *)(this))->sub_0110fe80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01110790 {
    void sub_01110790();
    int sub_0110fbd0(int);
};

// @baa 0x01110790
void C_01110790::sub_01110790(void)
{
    int param_1 = (int)this;
  ((C_01110790 *)((*(char **)((char *)this + 0x10))))->sub_0110fbd0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_011107b0 {
    int sub_011107b0();
};

// @baa 0x011107b0
int C_011107b0::sub_011107b0(void)
{
    int param_1 = (int)this;

  sub_011088b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_011107d0 {
    int sub_011107d0();
};

int sub_01108960(void);
// @baa 0x011107d0
int C_011107d0::sub_011107d0(void)
{
    int param_1 = (int)this;

  sub_01108960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_011103b0();
// @baa 0x011107f0
void sub_011107f0(void) { sub_011103b0(); }

struct TConstSetBitIterator_01110840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01110840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01110840& operator++();
};

TConstSetBitIterator_01110840::TConstSetBitIterator_01110840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01110840
TConstSetBitIterator_01110840& TConstSetBitIterator_01110840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01110940 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01110940(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01110940& operator++();
};

TConstSetBitIterator_01110940::TConstSetBitIterator_01110940(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01110940
TConstSetBitIterator_01110940& TConstSetBitIterator_01110940::operator++()
{
    It.Advance();
    return *this;
}

struct C_01110990 {
    int sub_01110990();
};

// @baa 0x01110990
int C_01110990::sub_01110990(void)
{
    int param_1 = (int)this;

  sub_011088b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_011109b0 {
    int sub_011109b0();
};

// @baa 0x011109b0
int C_011109b0::sub_011109b0(void)
{
    int param_1 = (int)this;

  sub_01108960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011109d0
void sub_011109d0(void) { sub_011103b0(); }

void sub_011108d0();
// @baa 0x01110d90
void sub_01110d90(void) { sub_011108d0(); }

struct C_01110da0 {
    int sub_01110da0();
};

// @baa 0x01110da0
int C_01110da0::sub_01110da0(void)
{
    int param_1 = (int)this;

  sub_011088b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01110dc0 {
    int sub_01110dc0();
};

// @baa 0x01110dc0
int C_01110dc0::sub_01110dc0(void)
{
    int param_1 = (int)this;

  sub_01108960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01110de0
void sub_01110de0(void) { sub_011103b0(); }

// @baa 0x01110df0
void sub_01110df0(void) { sub_011108d0(); }

struct C_01110e00 {
    int sub_01110e00();
};

// @baa 0x01110e00
int C_01110e00::sub_01110e00(void)
{
    int param_1 = (int)this;

  sub_01108960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
