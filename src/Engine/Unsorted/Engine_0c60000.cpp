// Engine_0c60000.cpp: 54 functions
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

struct TConstSetBitIterator_00c63990 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63990(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63990& operator++();
};

TConstSetBitIterator_00c63990::TConstSetBitIterator_00c63990(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63990
TConstSetBitIterator_00c63990& TConstSetBitIterator_00c63990::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c639b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c639b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c639b0& operator++();
};

TConstSetBitIterator_00c639b0::TConstSetBitIterator_00c639b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c639b0
TConstSetBitIterator_00c639b0& TConstSetBitIterator_00c639b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c639d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c639d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c639d0& operator++();
};

TConstSetBitIterator_00c639d0::TConstSetBitIterator_00c639d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c639d0
TConstSetBitIterator_00c639d0& TConstSetBitIterator_00c639d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c639f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c639f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c639f0& operator++();
};

TConstSetBitIterator_00c639f0::TConstSetBitIterator_00c639f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c639f0
TConstSetBitIterator_00c639f0& TConstSetBitIterator_00c639f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63a40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63a40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63a40& operator++();
};

TConstSetBitIterator_00c63a40::TConstSetBitIterator_00c63a40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63a40
TConstSetBitIterator_00c63a40& TConstSetBitIterator_00c63a40::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a20(void);
extern undefined * g_02059b60;
// @baa 0x00c64890
undefined4 * UObject::sub_00c64890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02059b60);
  return param_1;
}

extern undefined * g_02059d00;
// @baa 0x00c64950
undefined4 * UObject::sub_00c64950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02059d00);
  return param_1;
}

extern undefined * g_02059ea0;
// @baa 0x00c64970
undefined4 * UObject::sub_00c64970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02059ea0);
  return param_1;
}

extern undefined * g_0205a040;
// @baa 0x00c64a20
undefined4 * UObject::sub_00c64a20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a040);
  return param_1;
}

// @baa 0x00c64a40
IMPLEMENT_CLASS_AT(UAnimNodeBlendPerBone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 15);

// @baa 0x00c64ad0
extern undefined * g_0205a1e0;
// @baa 0x00c64b00
undefined4 * UObject::sub_00c64b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a1e0);
  return param_1;
}

// @baa 0x00c64b20
IMPLEMENT_CLASS_AT(UAnimNodeCrossfader, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 14);

// @baa 0x00c64b80
extern undefined * g_0205a870;
// @baa 0x00c64e00
undefined4 * UObject::sub_00c64e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a870);
  return param_1;
}

// @baa 0x00c64e20
UINT UAnimNodePlayCustomAnim::vf_170() { return 0; }

// @baa 0x00c64e30
IMPLEMENT_CLASS_AT(UAnimNodePlayCustomAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 29);

// @baa 0x00c64e90
extern undefined * g_0205aa10;
// @baa 0x00c64ec0
undefined4 * UObject::sub_00c64ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205aa10);
  return param_1;
}

// @baa 0x00c64ee0
UINT UAnimNodeBlendDirectional::vf_170() { return 1; }

// @baa 0x00c64ef0
IMPLEMENT_CLASS_AT(UAnimNodeBlendDirectional, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 18);

// @baa 0x00c64f50
// @baa 0x00c64f80
IMPLEMENT_CLASS_AT(UAnimNodeBlendList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 16);

// @baa 0x00c64ff0
UINT UAnimNodeBlendList::vf_170() { return 1; }

// @baa 0x00c65000
extern undefined * g_0205abb0;
// @baa 0x00c65030
undefined4 * UObject::sub_00c65030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205abb0);
  return param_1;
}

extern undefined * g_0205ad50;
// @baa 0x00c65050
undefined4 * UObject::sub_00c65050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205ad50);
  return param_1;
}

// @baa 0x00c65070
IMPLEMENT_CLASS_AT(UAnimNodeBlendByBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 22);

// @baa 0x00c650d0
extern undefined * g_0205aef0;
// @baa 0x00c65100
undefined4 * UObject::sub_00c65100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205aef0);
  return param_1;
}

// @baa 0x00c65120
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPhysics, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 20);

// @baa 0x00c65180
extern undefined * g_0205b090;
// @baa 0x00c651b0
undefined4 * UObject::sub_00c651b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b090);
  return param_1;
}

// @baa 0x00c651d0
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPosture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 19);

// @baa 0x00c65230
extern undefined * g_0205b230;
// @baa 0x00c65260
undefined4 * UObject::sub_00c65260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b230);
  return param_1;
}

// @baa 0x00c65280
UINT UAnimNodeBlendBySpeed::vf_170() { return 1; }

// @baa 0x00c65290
IMPLEMENT_CLASS_AT(UAnimNodeBlendBySpeed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 21);

// @baa 0x00c65300
extern undefined * g_0205b3d8;
// @baa 0x00c65330
undefined4 * UObject::sub_00c65330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b3d8);
  return param_1;
}

// @baa 0x00c65350
IMPLEMENT_CLASS_AT(UAnimNodeRandom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 17);

// @baa 0x00c653c0
extern undefined * g_0205b578;
// @baa 0x00c653f0
undefined4 * UObject::sub_00c653f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b578);
  return param_1;
}

// @baa 0x00c656d0
IMPLEMENT_CLASS_AT(UActorFactoryStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 29);

// @baa 0x00c657e0
bool UActorFactoryStaticMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c65820
IMPLEMENT_CLASS_AT(UActorFactoryFracturedStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 30);

// @baa 0x00c65930
bool UActorFactoryFracturedStaticMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined * g_0205bc00;
// @baa 0x00c6b1f0
undefined4 * UObject::sub_00c6b1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205bc00);
  return param_1;
}

// @baa 0x00c6b2b0
IMPLEMENT_CLASS_AT(UActorFactoryRigidBody, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 39);

// @baa 0x00c6b3c0
bool UActorFactoryRigidBody::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c6b400
IMPLEMENT_CLASS_AT(UActorFactoryMover, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 40);

// @baa 0x00c6b510
bool UActorFactoryMover::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c6b550
IMPLEMENT_CLASS_AT(UActorFactoryCloth, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 58);

// @baa 0x00c6b660
bool UActorFactoryCloth::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
