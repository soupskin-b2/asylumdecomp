// MaterialInstance.cpp (part 1 of 3): 88 functions
// Placed here by: neighbours 65, class 21, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006ae990
IMPLEMENT_CLASS_AT(UMaterialInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstance.cpp", 10);

// @baa 0x006aeaa0
int UMaterialInstance::vf_000(void) { return 1; }

// @baa 0x006aeab0
bool UMaterialInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006aeb10
undefined4 UMaterialInstance::sub_006aeb10(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  return 0xc;
}

extern char g_01ecb0e4[];
// @baa 0x006aeb20
int sub_006aeb20(void) { return (int)g_01ecb0e4; }

extern char g_01ebb554[];
// @baa 0x006aeb30
void UMaterialInstance::sub_006aeb30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x006aeb40
undefined4 * UMaterialInstance::sub_006aeb40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006311e0(...);
extern undefined4 g_01ecb624;
// @baa 0x006aed10
undefined4 UMaterialInstance::GetRenderProxy(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    sub_006311e0("!Selected || GIsEditor",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstance.cpp"
                 ,0x146,&g_01ecb624);
  }
  return *(undefined4 *)(param_1 + 0x5c + param_2 * 4);
}

// @baa 0x006aef80
void UMaterialInstance::vf_184(void) {  }

// @baa 0x006aef90
void UMaterialInstance::SetParent(class UMaterialInterface* NewParent) { Parent = NewParent; }

// @baa 0x006aefa0
void UMaterialInstance::vf_164(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x006aefb0
void UMaterialInstance::SetScalarParameterValue(FName ParameterName, FLOAT Value) {  }

// @baa 0x006aefc0
void UMaterialInstance::SetTextureParameterValue(FName ParameterName, UTexture* Value) {  }

// @baa 0x006aefd0
void UMaterialInstance::vf_174(int a0, int a1, int a2, int a3) {  }

// @baa 0x006aefe0
void UMaterialInstance::vf_178(void) {  }

int sub_006be6a0(void);
// @baa 0x006c47a0
undefined4 UMaterialInstance::sub_006c47a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Obj { void* p; void sub_006c4cf0(); };

// @baa 0x006cba10
void __stdcall sub_006cba10(int a1, int a2, Obj o, int a4, int a5, int a6)
{
    o.sub_006c4cf0();
}

int sub_005c7a70(...);
int sub_006d5aa0(void);
// @baa 0x006d5b10
undefined4 UMaterialInstance::sub_006d5b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006d5aa0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x006d6300
// @baa 0x006d6500
int sub_00702e60(void);
// @baa 0x006d69d0
undefined4 UMaterialInstance::sub_006d69d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00702e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006da480
int __stdcall sub_006da480(int a0, int a1, int a2) { return 1; }

// @baa 0x007272e0
int UTexture2D::sub_007272e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x007273e0
int UTexture2D::sub_007273e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x007273f0
int UTexture2D::sub_007273f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C {
    int sub_00727490(int);
};

// @baa 0x00727490
int C::sub_00727490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_007274a0 {
    int sub_007274a0(int);
};

// @baa 0x007274a0
int C_007274a0::sub_007274a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_007274b0 {
    int sub_007274b0(int);
};

// @baa 0x007274b0
int C_007274b0::sub_007274b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view {
    int sub_007274c0(int);
};

// @baa 0x00727560
int UObject::sub_00727560(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_007274c0(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

// @baa 0x00727580
int UObject::sub_00727580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

int sub_0040fcc0(void);
// @baa 0x00727590
undefined4 UObject::sub_00727590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00722cf0(void);
// @baa 0x007275b0
undefined4 UObject::sub_007275b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00722cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007275d0
undefined4 UObject::sub_007275d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_007271f0();
// @baa 0x007275f0
void sub_007275f0(void) { sub_007271f0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00727e40 { void* Data; int Num; int Max; void sub_00727e40(); };

// @baa 0x00727e40
void C_00727e40::sub_00727e40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727ea0 { void* Data; int Num; int Max; void sub_00727ea0(); };

// @baa 0x00727ea0
void C_00727ea0::sub_00727ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727f00 { void* Data; int Num; int Max; void sub_00727f00(); };

// @baa 0x00727f00
void C_00727f00::sub_00727f00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727f60 { void* Data; int Num; int Max; void sub_00727f60(); };

// @baa 0x00727f60
void C_00727f60::sub_00727f60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727fc0 { void* Data; int Num; int Max; void sub_00727fc0(); };

// @baa 0x00727fc0
void C_00727fc0::sub_00727fc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00728020 { void* Data; int Num; int Max; void sub_00728020(); };

// @baa 0x00728020
void C_00728020::sub_00728020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
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

struct TConstSetBitIterator_00728080 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728080(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728080& operator++();
};

TConstSetBitIterator_00728080::TConstSetBitIterator_00728080(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728080
TConstSetBitIterator_00728080& TConstSetBitIterator_00728080::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007280a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007280a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007280a0& operator++();
};

TConstSetBitIterator_007280a0::TConstSetBitIterator_007280a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007280a0
TConstSetBitIterator_007280a0& TConstSetBitIterator_007280a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007280c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007280c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007280c0& operator++();
};

TConstSetBitIterator_007280c0::TConstSetBitIterator_007280c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007280c0
TConstSetBitIterator_007280c0& TConstSetBitIterator_007280c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007280e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007280e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007280e0& operator++();
};

TConstSetBitIterator_007280e0::TConstSetBitIterator_007280e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007280e0
TConstSetBitIterator_007280e0& TConstSetBitIterator_007280e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728100& operator++();
};

TConstSetBitIterator_00728100::TConstSetBitIterator_00728100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728100
TConstSetBitIterator_00728100& TConstSetBitIterator_00728100::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728120 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728120(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728120& operator++();
};

TConstSetBitIterator_00728120::TConstSetBitIterator_00728120(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728120
TConstSetBitIterator_00728120& TConstSetBitIterator_00728120::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728140& operator++();
};

TConstSetBitIterator_00728140::TConstSetBitIterator_00728140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728140
TConstSetBitIterator_00728140& TConstSetBitIterator_00728140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728160& operator++();
};

TConstSetBitIterator_00728160::TConstSetBitIterator_00728160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728160
TConstSetBitIterator_00728160& TConstSetBitIterator_00728160::operator++()
{
    It.Advance();
    return *this;
}

struct C_00728180 {
    int sub_00728180();
};

// @baa 0x00728180
int C_00728180::sub_00728180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00728190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728190& operator++();
};

TConstSetBitIterator_00728190::TConstSetBitIterator_00728190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728190
TConstSetBitIterator_00728190& TConstSetBitIterator_00728190::operator++()
{
    It.Advance();
    return *this;
}

struct C_007281b0 {
    int sub_007281b0();
};

// @baa 0x007281b0
int C_007281b0::sub_007281b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_007281c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007281c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007281c0& operator++();
};

TConstSetBitIterator_007281c0::TConstSetBitIterator_007281c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007281c0
TConstSetBitIterator_007281c0& TConstSetBitIterator_007281c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_007281e0 {
    int sub_007281e0();
};

// @baa 0x007281e0
int C_007281e0::sub_007281e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_007281f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007281f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007281f0& operator++();
};

TConstSetBitIterator_007281f0::TConstSetBitIterator_007281f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007281f0
TConstSetBitIterator_007281f0& TConstSetBitIterator_007281f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00728210 {
    int sub_00728210();
};

// @baa 0x00728210
int C_00728210::sub_00728210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00728220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728220& operator++();
};

TConstSetBitIterator_00728220::TConstSetBitIterator_00728220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728220
TConstSetBitIterator_00728220& TConstSetBitIterator_00728220::operator++()
{
    It.Advance();
    return *this;
}

struct C_00728240 {
    int sub_00728240();
};

// @baa 0x00728240
int C_00728240::sub_00728240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00728250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728250& operator++();
};

TConstSetBitIterator_00728250::TConstSetBitIterator_00728250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728250
TConstSetBitIterator_00728250& TConstSetBitIterator_00728250::operator++()
{
    It.Advance();
    return *this;
}

struct C_00728270 {
    int sub_00728270();
};

// @baa 0x00728270
int C_00728270::sub_00728270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_00728280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728280& operator++();
};

TConstSetBitIterator_00728280::TConstSetBitIterator_00728280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728280
TConstSetBitIterator_00728280& TConstSetBitIterator_00728280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728510& operator++();
};

TConstSetBitIterator_00728510::TConstSetBitIterator_00728510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728510
TConstSetBitIterator_00728510& TConstSetBitIterator_00728510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728560& operator++();
};

TConstSetBitIterator_00728560::TConstSetBitIterator_00728560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728560
TConstSetBitIterator_00728560& TConstSetBitIterator_00728560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007285b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007285b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007285b0& operator++();
};

TConstSetBitIterator_007285b0::TConstSetBitIterator_007285b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007285b0
TConstSetBitIterator_007285b0& TConstSetBitIterator_007285b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728600& operator++();
};

TConstSetBitIterator_00728600::TConstSetBitIterator_00728600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728600
TConstSetBitIterator_00728600& TConstSetBitIterator_00728600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728650 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728650(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728650& operator++();
};

TConstSetBitIterator_00728650::TConstSetBitIterator_00728650(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728650
TConstSetBitIterator_00728650& TConstSetBitIterator_00728650::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007286a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007286a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007286a0& operator++();
};

TConstSetBitIterator_007286a0::TConstSetBitIterator_007286a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007286a0
TConstSetBitIterator_007286a0& TConstSetBitIterator_007286a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007286f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007286f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007286f0& operator++();
};

TConstSetBitIterator_007286f0::TConstSetBitIterator_007286f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007286f0
TConstSetBitIterator_007286f0& TConstSetBitIterator_007286f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728740& operator++();
};

TConstSetBitIterator_00728740::TConstSetBitIterator_00728740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728740
TConstSetBitIterator_00728740& TConstSetBitIterator_00728740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728790& operator++();
};

TConstSetBitIterator_00728790::TConstSetBitIterator_00728790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728790
TConstSetBitIterator_00728790& TConstSetBitIterator_00728790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007287e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007287e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007287e0& operator++();
};

TConstSetBitIterator_007287e0::TConstSetBitIterator_007287e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007287e0
TConstSetBitIterator_007287e0& TConstSetBitIterator_007287e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728830& operator++();
};

TConstSetBitIterator_00728830::TConstSetBitIterator_00728830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728830
TConstSetBitIterator_00728830& TConstSetBitIterator_00728830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728880& operator++();
};

TConstSetBitIterator_00728880::TConstSetBitIterator_00728880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728880
TConstSetBitIterator_00728880& TConstSetBitIterator_00728880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007288d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007288d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007288d0& operator++();
};

TConstSetBitIterator_007288d0::TConstSetBitIterator_007288d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007288d0
TConstSetBitIterator_007288d0& TConstSetBitIterator_007288d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728920& operator++();
};

TConstSetBitIterator_00728920::TConstSetBitIterator_00728920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728920
TConstSetBitIterator_00728920& TConstSetBitIterator_00728920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728940 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728940(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728940& operator++();
};

TConstSetBitIterator_00728940::TConstSetBitIterator_00728940(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728940
TConstSetBitIterator_00728940& TConstSetBitIterator_00728940::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728960& operator++();
};

TConstSetBitIterator_00728960::TConstSetBitIterator_00728960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728960
TConstSetBitIterator_00728960& TConstSetBitIterator_00728960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728980& operator++();
};

TConstSetBitIterator_00728980::TConstSetBitIterator_00728980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728980
TConstSetBitIterator_00728980& TConstSetBitIterator_00728980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007289a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007289a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007289a0& operator++();
};

TConstSetBitIterator_007289a0::TConstSetBitIterator_007289a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007289a0
TConstSetBitIterator_007289a0& TConstSetBitIterator_007289a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007289c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007289c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007289c0& operator++();
};

TConstSetBitIterator_007289c0::TConstSetBitIterator_007289c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007289c0
TConstSetBitIterator_007289c0& TConstSetBitIterator_007289c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728a10& operator++();
};

TConstSetBitIterator_00728a10::TConstSetBitIterator_00728a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728a10
TConstSetBitIterator_00728a10& TConstSetBitIterator_00728a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728a60& operator++();
};

TConstSetBitIterator_00728a60::TConstSetBitIterator_00728a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728a60
TConstSetBitIterator_00728a60& TConstSetBitIterator_00728a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728ab0& operator++();
};

TConstSetBitIterator_00728ab0::TConstSetBitIterator_00728ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728ab0
TConstSetBitIterator_00728ab0& TConstSetBitIterator_00728ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728b00& operator++();
};

TConstSetBitIterator_00728b00::TConstSetBitIterator_00728b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728b00
TConstSetBitIterator_00728b00& TConstSetBitIterator_00728b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728b50& operator++();
};

TConstSetBitIterator_00728b50::TConstSetBitIterator_00728b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728b50
TConstSetBitIterator_00728b50& TConstSetBitIterator_00728b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00728ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00728ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00728ba0& operator++();
};

TConstSetBitIterator_00728ba0::TConstSetBitIterator_00728ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00728ba0
TConstSetBitIterator_00728ba0& TConstSetBitIterator_00728ba0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00728bf0 {
    int sub_00728bf0();
};

// @baa 0x00728bf0
int C_00728bf0::sub_00728bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00a49040
undefined4 UMaterialInstance::sub_00a49040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a4a800
undefined4 UMaterialInstance::sub_00a4a800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
