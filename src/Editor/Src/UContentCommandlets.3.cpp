// UContentCommandlets.cpp (part 3 of 3): 93 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x01060700
undefined4 UObject::sub_01060700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0105c2b0
IMPLEMENT_CLASS_AT(UUT3MapStatsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 4861);

// @baa 0x0105c3c0
int UUT3MapStatsCommandlet::vf_000(void) { return 1; }

// @baa 0x0105c3d0
bool UUT3MapStatsCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0105c410
IMPLEMENT_CLASS_AT(UListLoopingEmittersCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 4902);

// @baa 0x0105c520
int UListLoopingEmittersCommandlet::vf_000(void) { return 1; }

// @baa 0x0105c530
bool UListLoopingEmittersCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0105c570
IMPLEMENT_CLASS_AT(USoundGroupInfoCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 5077);

// @baa 0x0105c680
int USoundGroupInfoCommandlet::vf_000(void) { return 1; }

// @baa 0x0105c690
bool USoundGroupInfoCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0105c6d0
IMPLEMENT_CLASS_AT(UListDistanceCrossFadeNodesCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 5136);

// @baa 0x0105c7e0
int UListDistanceCrossFadeNodesCommandlet::vf_000(void) { return 1; }

// @baa 0x0105c7f0
bool UListDistanceCrossFadeNodesCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0105c830
IMPLEMENT_CLASS_AT(ULocSoundInfoCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 5242);

// @baa 0x0105c940
int ULocSoundInfoCommandlet::vf_000(void) { return 1; }

// @baa 0x0105c950
bool ULocSoundInfoCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0105c990
IMPLEMENT_CLASS_AT(UContentTagIndex, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 5359);

// @baa 0x0105cac0
bool UContentTagIndex::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0105cb00
IMPLEMENT_CLASS_AT(UBuildContentTagIndexCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 5360);

// @baa 0x0105cc10
int UBuildContentTagIndexCommandlet::vf_000(void) { return 1; }

// @baa 0x0105cc20
bool UBuildContentTagIndexCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01060130(void);
// @baa 0x01063030
undefined4 UObject::sub_01063030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01060130();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0053dfa0(void*);

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

struct TConstSetBitIterator_01063050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063050& operator++();
};

// @baa 0x01063050
TConstSetBitIterator_01063050& TConstSetBitIterator_01063050::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x010630f0
int UContentTagIndex::sub_010630f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x01063180
int UContentTagIndex::sub_01063180(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct TConstSetBitIterator_01063190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063190& operator++();
};

// @baa 0x01063190
TConstSetBitIterator_01063190& TConstSetBitIterator_01063190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010631b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010631b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010631b0& operator++();
};

// @baa 0x010631b0
TConstSetBitIterator_010631b0& TConstSetBitIterator_010631b0::operator++()
{
    It.Advance();
    return *this;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

struct C_010631d0 { void* Data; int Num; int Max; void sub_010631d0(); };

// @baa 0x010631d0
void C_010631d0::sub_010631d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct TConstSetBitIterator_01063230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063230& operator++();
};

// @baa 0x01063230
TConstSetBitIterator_01063230& TConstSetBitIterator_01063230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01063250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063250& operator++();
};

// @baa 0x01063250
TConstSetBitIterator_01063250& TConstSetBitIterator_01063250::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x01063270
undefined4 UObject::sub_01063270(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df70(...);
// @baa 0x01063690
void UContentTagIndex::sub_01063690(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xd0,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct TConstSetBitIterator_010637f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010637f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010637f0& operator++();
};

// @baa 0x010637f0
TConstSetBitIterator_010637f0& TConstSetBitIterator_010637f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010639f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010639f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010639f0& operator++();
};

// @baa 0x010639f0
TConstSetBitIterator_010639f0& TConstSetBitIterator_010639f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01063a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063a10& operator++();
};

// @baa 0x01063a10
TConstSetBitIterator_01063a10& TConstSetBitIterator_01063a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01063a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063a30& operator++();
};

// @baa 0x01063a30
TConstSetBitIterator_01063a30& TConstSetBitIterator_01063a30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01063a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063a50& operator++();
};

// @baa 0x01063a50
TConstSetBitIterator_01063a50& TConstSetBitIterator_01063a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01063bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01063bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01063bb0& operator++();
};

// @baa 0x01063bb0
TConstSetBitIterator_01063bb0& TConstSetBitIterator_01063bb0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x010688f0
int UContentTagIndex::sub_010688f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xd0 + 4 + *(int *)*param_1;
}

struct TConstSetBitIterator_01068a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01068a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01068a20& operator++();
};

// @baa 0x01068a20
TConstSetBitIterator_01068a20& TConstSetBitIterator_01068a20::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_01068a40 {
    int sub_01063070(int, int);
};

// @baa 0x01068a40
int UContentTagIndex::sub_01068a40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01068a40 *)(this))->sub_01063070((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_view_01068b30 {
    int sub_01063100(int, int);
};

// @baa 0x01068b30
int UContentTagIndex::sub_01068b30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01068b30 *)(this))->sub_01063100((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_01068b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01068b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01068b60& operator++();
};

// @baa 0x01068b60
TConstSetBitIterator_01068b60& TConstSetBitIterator_01068b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01068b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01068b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01068b80& operator++();
};

// @baa 0x01068b80
TConstSetBitIterator_01068b80& TConstSetBitIterator_01068b80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01068ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01068ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01068ba0& operator++();
};

// @baa 0x01068ba0
TConstSetBitIterator_01068ba0& TConstSetBitIterator_01068ba0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01068bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01068bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01068bc0& operator++();
};

// @baa 0x01068bc0
TConstSetBitIterator_01068bc0& TConstSetBitIterator_01068bc0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_01073ef0(int, int);
};

// @baa 0x010768f0
void UContentTagIndex::sub_010768f0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01073ef0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076a30 {
    int sub_01073fb0(int, int);
};

// @baa 0x01076a30
undefined4 UContentTagIndex::sub_01076a30(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076a30 *)(this))->sub_01073fb0(param_2, param_3);
  return param_1;
}

struct C_view_01076a50 {
    int sub_01074010(int, int);
};

// @baa 0x01076a50
void UContentTagIndex::sub_01076a50(void)
{
    int param_1 = (int)this;
  ((C_view_01076a50 *)(this))->sub_01074010(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076a60 {
    int sub_010740d0(int, int);
};

// @baa 0x01076a60
void UContentTagIndex::sub_01076a60(void)
{
    int param_1 = (int)this;
  ((C_view_01076a60 *)(this))->sub_010740d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076a70 {
    int sub_01074190(int, int);
};

// @baa 0x01076a70
undefined4 UContentTagIndex::sub_01076a70(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076a70 *)(this))->sub_01074190(param_2, param_3);
  return param_1;
}

struct C_view_01076a90 {
    int sub_010741f0(int, int);
};

// @baa 0x01076a90
undefined4 UContentTagIndex::sub_01076a90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076a90 *)(this))->sub_010741f0(param_2, param_3);
  return param_1;
}

struct C_view_01076ab0 {
    int sub_00fbc7c0(int, int);
};

// @baa 0x01076ab0
void UContentTagIndex::sub_01076ab0(void)
{
    int param_1 = (int)this;
  ((C_view_01076ab0 *)(this))->sub_00fbc7c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076ac0 {
    int sub_01074250(int, int);
};

// @baa 0x01076ac0
undefined4 UContentTagIndex::sub_01076ac0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076ac0 *)(this))->sub_01074250(param_2, param_3);
  return param_1;
}

struct C_view_01076ae0 {
    int sub_010742b0(int, int);
};

// @baa 0x01076ae0
void UContentTagIndex::sub_01076ae0(void)
{
    int param_1 = (int)this;
  ((C_view_01076ae0 *)(this))->sub_010742b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076bb0 {
    int sub_01074370(int, int);
};

// @baa 0x01076bb0
undefined4 UContentTagIndex::sub_01076bb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01076bb0 *)(this))->sub_01074370(param_2, param_3);
  return param_1;
}

struct C_view_01076bd0 {
    int sub_010743d0(int, int);
};

// @baa 0x01076bd0
int UContentTagIndex::sub_01076bd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076bd0 *)(this))->sub_010743d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01076bf0 {
    int sub_01074450(int, int);
};

// @baa 0x01076bf0
int UContentTagIndex::sub_01076bf0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076bf0 *)(this))->sub_01074450(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01076c10 {
    int sub_010744d0(int, int);
};

// @baa 0x01076c10
int UContentTagIndex::sub_01076c10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076c10 *)(this))->sub_010744d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01076c30 {
    int sub_01074550(int, int);
};

// @baa 0x01076c30
int UContentTagIndex::sub_01076c30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01076c30 *)(this))->sub_01074550(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_010695f0(void);
// @baa 0x01076c50
int UContentTagIndex::sub_01076c50(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01069770(void);
// @baa 0x01076c70
int UContentTagIndex::sub_01076c70(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_010697d0(void);
// @baa 0x01076c90
int UContentTagIndex::sub_01076c90(void)
{
    int param_1 = (int)this;

  sub_010697d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_010767a0();
// @baa 0x01076d40
void sub_01076d40(void) { sub_010767a0(); }

void sub_01076810();
// @baa 0x01076d50
void sub_01076d50(void) { sub_01076810(); }

void sub_01076880();
// @baa 0x01076d60
void sub_01076d60(void) { sub_01076880(); }

struct C_view_01076db0 {
    int sub_01073fb0(int, int);
};

// @baa 0x01076db0
int UContentTagIndex::sub_01076db0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076db0 *)(this))->sub_01073fb0(param_2, param_4);
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
    void sub_01073ef0(int, int);
};

struct C {
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
    void sub_01076de0(void);
};

// @baa 0x01076de0
void C::sub_01076de0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01073ef0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076e00 {
    int sub_01074190(int, int);
};

// @baa 0x01076e00
int UContentTagIndex::sub_01076e00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076e00 *)(this))->sub_01074190(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076e30 {
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
    void sub_01074010(int, int);
};

struct C_01076e30 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076e30* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076e30(void);
};

// @baa 0x01076e30
void C_01076e30::sub_01076e30(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_01074010(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076e50 {
    int sub_010741f0(int, int);
};

// @baa 0x01076e50
int UContentTagIndex::sub_01076e50(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076e50 *)(this))->sub_010741f0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076e80 {
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
    void sub_010740d0(int, int);
};

struct C_01076e80 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076e80* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076e80(void);
};

// @baa 0x01076e80
void C_01076e80::sub_01076e80(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010740d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076ea0 {
    int sub_01074250(int, int);
};

// @baa 0x01076ea0
int UContentTagIndex::sub_01076ea0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076ea0 *)(this))->sub_01074250(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076ed0 {
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
    void sub_00fbc7c0(int, int);
};

struct C_01076ed0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076ed0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076ed0(void);
};

// @baa 0x01076ed0
void C_01076ed0::sub_01076ed0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00fbc7c0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_01076f30 {
    int sub_01074370(int, int);
};

// @baa 0x01076f30
int UContentTagIndex::sub_01076f30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01076f30 *)(this))->sub_01074370(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_01076f60 {
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
    void sub_010742b0(int, int);
};

struct C_01076f60 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_01076f60* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_01076f60(void);
};

// @baa 0x01076f60
void C_01076f60::sub_01076f60(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010742b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x01076f80
int UContentTagIndex::sub_01076f80(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_01076fa0 {
    int sub_01068fb0();
    int sub_00fbc640(int, int);
};

// @baa 0x01076fa0
void UContentTagIndex::sub_01076fa0(void)
{
    int param_1 = (int)this;
  ((C_view_01076fa0 *)(this))->sub_01068fb0();
  ((C_view_01076fa0 *)(this))->sub_00fbc640(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076fc0 {
    int sub_010690b0();
    int sub_00fbc700(int, int);
};

// @baa 0x01076fc0
void UContentTagIndex::sub_01076fc0(void)
{
    int param_1 = (int)this;
  ((C_view_01076fc0 *)(this))->sub_010690b0();
  ((C_view_01076fc0 *)(this))->sub_00fbc700(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01076fe0 {
    int sub_010691b0();
    int sub_00fbc7c0(int, int);
};

// @baa 0x01076fe0
void UContentTagIndex::sub_01076fe0(void)
{
    int param_1 = (int)this;
  ((C_view_01076fe0 *)(this))->sub_010691b0();
  ((C_view_01076fe0 *)(this))->sub_00fbc7c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x01077000
int UContentTagIndex::sub_01077000(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01077020
int UContentTagIndex::sub_01077020(void)
{
    int param_1 = (int)this;

  sub_010697d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0107ed80
int UContentTagIndex::sub_0107ed80(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}

// @baa 0x01083f60
IMPLEMENT_CLASS_AT(UChangePrefabSequenceClassCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 952);

// @baa 0x01084070
bool UChangePrefabSequenceClassCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01069710(void);
// @baa 0x0108a190
int UContentTagIndex::sub_0108a190(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0108a220
int UContentTagIndex::sub_0108a220(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0108a1b0();
// @baa 0x0108a240
void sub_0108a240(void) { sub_0108a1b0(); }

// @baa 0x0108a250
int UContentTagIndex::sub_0108a250(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0108a270
void sub_0108a270(void) { sub_0108a1b0(); }

// @baa 0x0108a280
int UContentTagIndex::sub_0108a280(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0108a2a0
void sub_0108a2a0(void) { sub_0108a1b0(); }

// @baa 0x0108a2b0
int UContentTagIndex::sub_0108a2b0(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
