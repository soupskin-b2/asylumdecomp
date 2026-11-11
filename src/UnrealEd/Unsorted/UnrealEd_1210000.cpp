// UnrealEd_1210000.cpp: 81 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct TConstSetBitIterator_01210f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01210f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01210f50& operator++();
};

TConstSetBitIterator_01210f50::TConstSetBitIterator_01210f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01210f50
TConstSetBitIterator_01210f50& TConstSetBitIterator_01210f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01210f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01210f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01210f70& operator++();
};

TConstSetBitIterator_01210f70::TConstSetBitIterator_01210f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01210f70
TConstSetBitIterator_01210f70& TConstSetBitIterator_01210f70::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    void sub_01211030();
    int sub_0120d9c0(int);
};

// @baa 0x01211030
void C::sub_01211030(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x1c))))->sub_0120d9c0(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct C_01211040 {
    void sub_01211040();
    int sub_0120d560(int);
};

// @baa 0x01211040
void C_01211040::sub_01211040(void)
{
    int param_1 = (int)this;
  ((C_01211040 *)((*(char **)((char *)this + 0x10))))->sub_0120d560(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01211060 {
    void sub_01211060();
    int sub_0120d6c0(int);
};

// @baa 0x01211060
void C_01211060::sub_01211060(void)
{
    int param_1 = (int)this;
  ((C_01211060 *)((*(char **)((char *)this + 0x10))))->sub_0120d6c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01211080 {
    void sub_01211080();
    int sub_0120d830(int);
};

// @baa 0x01211080
void C_01211080::sub_01211080(void)
{
    int param_1 = (int)this;
  ((C_01211080 *)((*(char **)((char *)this + 0x10))))->sub_0120d830(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_012110a0 {
    void sub_012110a0();
    int sub_0120d9c0(int);
};

// @baa 0x012110a0
void C_012110a0::sub_012110a0(void)
{
    int param_1 = (int)this;
  ((C_012110a0 *)((*(char **)((char *)this + 0x10))))->sub_0120d9c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_012110c0 {
    void sub_012110c0();
    int sub_0120db30(int);
};

// @baa 0x012110c0
void C_012110c0::sub_012110c0(void)
{
    int param_1 = (int)this;
  ((C_012110c0 *)((*(char **)((char *)this + 0x10))))->sub_0120db30(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_012110e0 {
    void sub_012110e0();
    int sub_0120dc90(int);
};

// @baa 0x012110e0
void C_012110e0::sub_012110e0(void)
{
    int param_1 = (int)this;
  ((C_012110e0 *)((*(char **)((char *)this + 0x10))))->sub_0120dc90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_01211910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01211910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01211910& operator++();
};

TConstSetBitIterator_01211910::TConstSetBitIterator_01211910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01211910
TConstSetBitIterator_01211910& TConstSetBitIterator_01211910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01211960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01211960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01211960& operator++();
};

TConstSetBitIterator_01211960::TConstSetBitIterator_01211960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01211960
TConstSetBitIterator_01211960& TConstSetBitIterator_01211960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01211ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01211ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01211ab0& operator++();
};

TConstSetBitIterator_01211ab0::TConstSetBitIterator_01211ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01211ab0
TConstSetBitIterator_01211ab0& TConstSetBitIterator_01211ab0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0120a780(...);
int sub_0120fc00(void);
extern undefined4 g_026d2a74;
// @baa 0x01211b00
int sub_01211b00(void)
{
  if (g_026d2a74 == 0) {
    g_026d2a74 = sub_0120a780(L"UnrealEd");
    sub_0120fc00();
  }
  return g_026d2a74;
}

// @baa 0x01211b30
IMPLEMENT_CLASS_AT(UPropertyInputColor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3450);

// @baa 0x01211c40
bool UPropertyInputColor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211c80
IMPLEMENT_CLASS_AT(UPropertyInputBool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3451);

// @baa 0x01211d90
bool UPropertyInputBool::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211dd0
IMPLEMENT_CLASS_AT(UPropertyInputArrayItem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3452);

// @baa 0x01211ee0
bool UPropertyInputArrayItem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211f20
IMPLEMENT_CLASS_AT(UPropertyInputText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3454);

// @baa 0x01212030
bool UPropertyInputText::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01212070
IMPLEMENT_CLASS_AT(UPropertyInputEditInline, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3457);

// @baa 0x01212180
bool UPropertyInputEditInline::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_01210f90();
// @baa 0x01212510
void sub_01212510(void) { sub_01210f90(); }

struct C_01212520 {
    void sub_01212520();
    int sub_0120d9c0(int);
};

// @baa 0x01212520
void C_01212520::sub_01212520(void)
{
    int param_1 = (int)this;
  ((C_01212520 *)((*(char **)((char *)this + 0x1c))))->sub_0120d9c0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct C_01212f90 {
    int sub_01212f90();
};

int sub_0120df40(void);
// @baa 0x01212f90
int C_01212f90::sub_01212f90(void)
{
    int param_1 = (int)this;

  sub_0120df40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01212fb0 {
    int sub_01212fb0();
};

int sub_0120dfa0(void);
// @baa 0x01212fb0
int C_01212fb0::sub_01212fb0(void)
{
    int param_1 = (int)this;

  sub_0120dfa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01212fd0 {
    int sub_01212fd0();
};

int sub_0120e000(void);
// @baa 0x01212fd0
int C_01212fd0::sub_01212fd0(void)
{
    int param_1 = (int)this;

  sub_0120e000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01212ff0 {
    int sub_01212ff0();
};

int sub_0120e060(void);
// @baa 0x01212ff0
int C_01212ff0::sub_01212ff0(void)
{
    int param_1 = (int)this;

  sub_0120e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01213010 {
    int sub_01213010();
};

int sub_0120e0c0(void);
// @baa 0x01213010
int C_01213010::sub_01213010(void)
{
    int param_1 = (int)this;

  sub_0120e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01213090
IMPLEMENT_CLASS_AT(UPropertyInputNumeric, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3453);

// @baa 0x012131a0
bool UPropertyInputNumeric::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01213d90 {
    void sub_01213d90();
    int sub_012129b0(int, int);
};

// @baa 0x01213d90
void C_01213d90::sub_01213d90(void)
{
    int param_1 = (int)this;
  ((C_01213d90 *)(this))->sub_012129b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_01213f30 {
    void sub_01213f30();
    int sub_01212a70(int, int);
};

// @baa 0x01213f30
void C_01213f30::sub_01213f30(void)
{
    int param_1 = (int)this;
  ((C_01213f30 *)(this))->sub_01212a70(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_01214000 {
    undefined4 sub_01214000(undefined4, undefined4);
    int sub_01212b30(int, int);
};

// @baa 0x01214000
undefined4 C_01214000::sub_01214000(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01214000 *)(this))->sub_01212b30(param_2, param_3);
  return param_1;
}

struct C_01214020 {
    undefined4 sub_01214020(undefined4, undefined4);
    int sub_01212b90(int, int);
};

// @baa 0x01214020
undefined4 C_01214020::sub_01214020(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01214020 *)(this))->sub_01212b90(param_2, param_3);
  return param_1;
}

struct C_01214170 {
    int sub_01214170(undefined4, undefined4);
    int sub_01212cb0(int, int);
};

// @baa 0x01214170
int C_01214170::sub_01214170(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01214170 *)(this))->sub_01212cb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01214190 {
    int sub_01214190(undefined4, undefined4);
    int sub_01212d20(int, int);
};

// @baa 0x01214190
int C_01214190::sub_01214190(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01214190 *)(this))->sub_01212d20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_012141b0 {
    int sub_012141b0(undefined4, undefined4);
    int sub_01212da0(int, int);
};

// @baa 0x012141b0
int C_012141b0::sub_012141b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_012141b0 *)(this))->sub_01212da0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_012141d0 {
    int sub_012141d0(undefined4, undefined4);
    int sub_01212e20(int, int);
};

// @baa 0x012141d0
int C_012141d0::sub_012141d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_012141d0 *)(this))->sub_01212e20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_012141f0 {
    int sub_012141f0(undefined4, undefined4);
    int sub_01212ea0(int, int);
};

// @baa 0x012141f0
int C_012141f0::sub_012141f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_012141f0 *)(this))->sub_01212ea0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01214210 {
    int sub_01214210(undefined4, undefined4);
    int sub_01212f10(int, int);
};

// @baa 0x01214210
int C_01214210::sub_01214210(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01214210 *)(this))->sub_01212f10(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01214230 {
    int sub_01214230();
};

// @baa 0x01214230
int C_01214230::sub_01214230(void)
{
    int param_1 = (int)this;

  sub_0120df40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01214250 {
    int sub_01214250();
};

// @baa 0x01214250
int C_01214250::sub_01214250(void)
{
    int param_1 = (int)this;

  sub_0120dfa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01214270 {
    int sub_01214270();
};

// @baa 0x01214270
int C_01214270::sub_01214270(void)
{
    int param_1 = (int)this;

  sub_0120e000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01214290 {
    int sub_01214290();
};

// @baa 0x01214290
int C_01214290::sub_01214290(void)
{
    int param_1 = (int)this;

  sub_0120e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_012142b0 {
    int sub_012142b0();
};

// @baa 0x012142b0
int C_012142b0::sub_012142b0(void)
{
    int param_1 = (int)this;

  sub_0120e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01214360
IMPLEMENT_CLASS_AT(UPropertyInputRotation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3455);

// @baa 0x01214470
bool UPropertyInputRotation::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012144b0
IMPLEMENT_CLASS_AT(UPropertyInputInteger, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3456);

// @baa 0x012145c0
bool UPropertyInputInteger::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_012137e0();
// @baa 0x01214600
void sub_01214600(void) { sub_012137e0(); }

void sub_01213850();
// @baa 0x01214610
void sub_01214610(void) { sub_01213850(); }

void sub_012138c0();
// @baa 0x01214620
void sub_01214620(void) { sub_012138c0(); }

void sub_01213930();
// @baa 0x01214630
void sub_01214630(void) { sub_01213930(); }

void sub_012139a0();
// @baa 0x01214640
void sub_01214640(void) { sub_012139a0(); }

void sub_01213bc0();
// @baa 0x012146d0
void sub_012146d0(void) { sub_01213bc0(); }

void sub_01213d30();
// @baa 0x01214730
void sub_01214730(void) { sub_01213d30(); }

void sub_01213ed0();
// @baa 0x01214780
void sub_01214780(void) { sub_01213ed0(); }

struct C_012147d0 {
    int sub_012147d0(undefined4, undefined4, undefined4);
    int sub_01212b30(int, int);
};

// @baa 0x012147d0
int C_012147d0::sub_012147d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_012147d0 *)(this))->sub_01212b30(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_01212a70(int, int);
};

struct C_01214800 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01214800(void);
};

// @baa 0x01214800
void C_01214800::sub_01214800(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01212a70(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_01214820 {
    int sub_01214820(undefined4, undefined4, undefined4);
    int sub_01212b90(int, int);
};

// @baa 0x01214820
int C_01214820::sub_01214820(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01214820 *)(this))->sub_01212b90(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01214850 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_012129b0(int, int);
};

struct C_01214850 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01214850* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01214850(void);
};

// @baa 0x01214850
void C_01214850::sub_01214850(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_012129b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_012148c0 {
    int sub_012148c0();
};

// @baa 0x012148c0
int C_012148c0::sub_012148c0(void)
{
    int param_1 = (int)this;

  sub_0120df40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_012148e0 {
    int sub_012148e0();
};

// @baa 0x012148e0
int C_012148e0::sub_012148e0(void)
{
    int param_1 = (int)this;

  sub_0120dfa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01214900 {
    int sub_01214900();
};

// @baa 0x01214900
int C_01214900::sub_01214900(void)
{
    int param_1 = (int)this;

  sub_0120e000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01214920 {
    int sub_01214920();
};

// @baa 0x01214920
int C_01214920::sub_01214920(void)
{
    int param_1 = (int)this;

  sub_0120e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01214940 {
    int sub_01214940();
};

// @baa 0x01214940
int C_01214940::sub_01214940(void)
{
    int param_1 = (int)this;

  sub_0120e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01214b50
void sub_01214b50(void) { sub_012137e0(); }

// @baa 0x01215360
void sub_01215360(void) { sub_01213850(); }

// @baa 0x01215370
void sub_01215370(void) { sub_012138c0(); }

// @baa 0x01215900
void sub_01215900(void) { sub_01213930(); }

struct C_01215910 {
    int sub_01215910();
};

// @baa 0x01215910
int C_01215910::sub_01215910(void)
{
    int param_1 = (int)this;

  sub_0120df40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01215930 {
    int sub_01215930();
};

// @baa 0x01215930
int C_01215930::sub_01215930(void)
{
    int param_1 = (int)this;

  sub_0120dfa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01215950 {
    int sub_01215950();
};

// @baa 0x01215950
int C_01215950::sub_01215950(void)
{
    int param_1 = (int)this;

  sub_0120e000();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01215970 {
    int sub_01215970();
};

// @baa 0x01215970
int C_01215970::sub_01215970(void)
{
    int param_1 = (int)this;

  sub_0120e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01215990 {
    int sub_01215990();
};

// @baa 0x01215990
int C_01215990::sub_01215990(void)
{
    int param_1 = (int)this;

  sub_0120e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_012159b0 { void sub_01214960(int); C_012159b0 *sub_012159b0(int); };

// @baa 0x012159b0
C_012159b0 *C_012159b0::sub_012159b0(int a) { sub_01214960(a); return this; }

extern char g_021f96f4[];
// @baa 0x0121a8c0
int sub_0121a8c0(void) { return (int)g_021f96f4; }

struct C_0121a950 {
    void sub_0121a950(int);
};

int sub_01218280(void);
// @baa 0x0121a950
void C_0121a950::sub_0121a950(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x16c) != 0) || (param_2 != 0)) {
    sub_01218280();
  }
  return;
}

struct C_0121c9d0 {
    undefined4 sub_0121c9d0(byte);
};

int sub_0053dfa0(...);
int sub_0121c840(void);
// @baa 0x0121c9d0
undefined4 C_0121c9d0::sub_0121c9d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0121c840();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
