// UnLightMap.cpp: 25 functions
// Placed here by: neighbours 23, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00d1f560(undefined4);
};

int sub_005ef6f0(...);
// @baa 0x00d1f560
void C::sub_00d1f560(undefined4 param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar2 = 4;
  do {
    sub_005ef6f0(param_2,*puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// @baa 0x00d3c630
IMPLEMENT_CLASS_AT(ULightMapTexture2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLightMap.cpp", 17);

// @baa 0x00d3c640
struct C_00d3c700 {
    int sub_00d3c700(undefined4, undefined4);
    int sub_00821430(int, int, int, int, int);
};

extern undefined4 g_025da818;
extern undefined4 g_025da81c;
// @baa 0x00d3c700
int C_00d3c700::sub_00d3c700(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00d3c700 *)(this))->sub_00821430(g_025da818, g_025da81c, param_2, param_3, 1);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return param_1;
}

// @baa 0x00d3c740
IMPLEMENT_CLASS_AT(UOnlineStatsRead, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 8);

// @baa 0x00d3c850
bool UOnlineStatsRead::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d3c890
IMPLEMENT_CLASS_AT(UOnlineStatsWrite, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 9);

// @baa 0x00d3c9a0
bool UOnlineStatsWrite::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00d3d950 { C_00d3d950* sub_00d3d950(void); };

// @baa 0x00d3d950
C_00d3d950* C_00d3d950::sub_00d3d950(void) { return this; }

struct C_00d3d960 {
    void sub_00d3d960();
    int sub_005afb30(int);
};

// @baa 0x00d3d960
void C_00d3d960::sub_00d3d960(void)
{
    int param_1 = (int)this;
  ((C_00d3d960 *)((*(char **)((char *)this + 0x1c))))->sub_005afb30(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct C_00d3d9a0 {
    undefined4 * sub_00d3d9a0(undefined4 *);
    int sub_00d3c300(int);
};

// @baa 0x00d3d9a0
undefined4 * C_00d3d9a0::sub_00d3d9a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_00d3d9a0 *)(((char *)this + 8)))->sub_00d3c300((int)(param_2 + 2));
  return param_1;
}

struct C_00d3d9d0 {
    undefined4 sub_00d3d9d0(byte);
};

int sub_0053dfa0(...);
int sub_00d3c2a0(void);
// @baa 0x00d3d9d0
undefined4 C_00d3d9d0::sub_00d3d9d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d3c2a0();
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

struct TConstSetBitIterator_00d3db50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d3db50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d3db50& operator++();
};

TConstSetBitIterator_00d3db50::TConstSetBitIterator_00d3db50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d3db50
TConstSetBitIterator_00d3db50& TConstSetBitIterator_00d3db50::operator++()
{
    It.Advance();
    return *this;
}

int sub_005e1960(...);
int sub_00d1f2f0(void);
int sub_00d3c640(...);
extern undefined4 g_026667a8;
extern undefined4 g_026c57a8;
// @baa 0x00d3dc30
void sub_00d3dc30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c57a8 == 0) {
    g_026c57a8 = sub_00d3c640(L"Engine");
    sub_00d1f2f0();
  }
  sub_005e1960(g_026c57a8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct TConstSetBitIterator_00d3f450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d3f450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d3f450& operator++();
};

TConstSetBitIterator_00d3f450::TConstSetBitIterator_00d3f450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d3f450
TConstSetBitIterator_00d3f450& TConstSetBitIterator_00d3f450::operator++()
{
    It.Advance();
    return *this;
}

void sub_00d3ef90();
// @baa 0x00d3f630
void sub_00d3f630(void) { sub_00d3ef90(); }

int sub_005c7a20(void);
extern undefined * g_020a8288;
// @baa 0x00d3f660
undefined4 * UObject::sub_00d3f660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020a8288);
  return param_1;
}

// @baa 0x00d3f680
UINT UPrefabSequence::vf_14c() { return 1; }

// @baa 0x00d3f690
IMPLEMENT_CLASS_AT(UPrefabSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 1220);

// @baa 0x00d3f6f0
extern undefined * g_020a8450;
// @baa 0x00d3f720
undefined4 * UObject::sub_00d3f720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020a8450);
  return param_1;
}

// @baa 0x00d3f740
UINT UPrefabSequenceContainer::vf_14c() { return 1; }

// @baa 0x00d3f750
int UPrefabSequenceContainer::vf_1bc(void) { return 1; }

// @baa 0x00d3f760
IMPLEMENT_CLASS_AT(UPrefabSequenceContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPrefab.cpp", 1180);

// @baa 0x00d3f7c0
