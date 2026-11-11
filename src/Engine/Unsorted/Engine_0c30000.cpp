// Engine_0c30000.cpp (part 1 of 2): 57 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00c30600(byte);
};

int sub_0053dfa0(...);
int sub_00c290f0(void);
// @baa 0x00c30600
undefined4 C::sub_00c30600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c290f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c31860 {
    int sub_00c31860();
};

// @baa 0x00c31860
int C_00c31860::sub_00c31860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c31880 {
    int sub_00c31880();
};

// @baa 0x00c31880
int C_00c31880::sub_00c31880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00c318a0 {
    int sub_00c318a0();
};

// @baa 0x00c318a0
int C_00c318a0::sub_00c318a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_0040fcc0(void);
// @baa 0x00c31aa0
undefined4 UObject::sub_00c31aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00c31ac0
int UObject::sub_00c31ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

int sub_00c2a060(void);
// @baa 0x00c31ad0
undefined4 UObject::sub_00c31ad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c2a060();
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

struct TConstSetBitIterator_00c31af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c31af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c31af0& operator++();
};

TConstSetBitIterator_00c31af0::TConstSetBitIterator_00c31af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c31af0
TConstSetBitIterator_00c31af0& TConstSetBitIterator_00c31af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c31b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c31b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c31b40& operator++();
};

TConstSetBitIterator_00c31b40::TConstSetBitIterator_00c31b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c31b40
TConstSetBitIterator_00c31b40& TConstSetBitIterator_00c31b40::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00c31b90
int UObject::sub_00c31b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00c36d90
int sub_00c36d90(void) { return 1690; }

struct C_00c36da0 {
    int sub_00c36da0();
};

// @baa 0x00c36da0
int C_00c36da0::sub_00c36da0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4;
}

// @baa 0x00c36de0
int UMaterialExpressionCompound::sub_00c36de0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4 + 0xd0;
}

void sub_006837e0();
// @baa 0x00c36e30
void sub_00c36e30(void) { sub_006837e0(); }

int sub_00c304d0(void);
// @baa 0x00c36eb0
undefined4 UMaterialExpressionWorldPosition::sub_00c36eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00c373a0
int sub_00c373a0(void) { return 1690; }

struct C_00c373b0 {
    int sub_00c373b0();
};

// @baa 0x00c373b0
int C_00c373b0::sub_00c373b0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4;
}

struct C_00c373f0 {
    int sub_00c373f0();
};

// @baa 0x00c373f0
int C_00c373f0::sub_00c373f0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4 + 0xd0;
}

// @baa 0x00c37440
void sub_00c37440(void) { sub_006837e0(); }

struct S { void sub_00c30d60(int, const wchar_t*, void*); void sub_00c375a0(void*); };

// @baa 0x00c375a0
void S::sub_00c375a0(void* a){
this->sub_00c30d60(0,L"TEXTUREGROUP_World",a);
this->sub_00c30d60(1,L"TEXTUREGROUP_WorldNormalMap",a);
this->sub_00c30d60(2,L"TEXTUREGROUP_WorldSpecular",a);
this->sub_00c30d60(3,L"TEXTUREGROUP_Character",a);
this->sub_00c30d60(4,L"TEXTUREGROUP_CharacterNormalMap",a);
this->sub_00c30d60(5,L"TEXTUREGROUP_CharacterSpecular",a);
this->sub_00c30d60(6,L"TEXTUREGROUP_Weapon",a);
this->sub_00c30d60(7,L"TEXTUREGROUP_WeaponNormalMap",a);
this->sub_00c30d60(8,L"TEXTUREGROUP_WeaponSpecular",a);
this->sub_00c30d60(9,L"TEXTUREGROUP_Weapon3P",a);
this->sub_00c30d60(10,L"TEXTUREGROUP_Weapon3PNormalMap",a);
this->sub_00c30d60(11,L"TEXTUREGROUP_Weapon3PSpecular",a);
this->sub_00c30d60(12,L"TEXTUREGROUP_Vehicle",a);
this->sub_00c30d60(13,L"TEXTUREGROUP_VehicleNormalMap",a);
this->sub_00c30d60(14,L"TEXTUREGROUP_VehicleSpecular",a);
this->sub_00c30d60(15,L"TEXTUREGROUP_Cinematic",a);
this->sub_00c30d60(16,L"TEXTUREGROUP_Effects",a);
this->sub_00c30d60(17,L"TEXTUREGROUP_EffectsNotFiltered",a);
this->sub_00c30d60(18,L"TEXTUREGROUP_Skybox",a);
this->sub_00c30d60(19,L"TEXTUREGROUP_UI",a);
this->sub_00c30d60(20,L"TEXTUREGROUP_LightAndShadowMap",a);
this->sub_00c30d60(21,L"TEXTUREGROUP_RenderTarget",a);
this->sub_00c30d60(22,L"TEXTUREGROUP_World_Hi",a);
this->sub_00c30d60(23,L"TEXTUREGROUP_WorldNormalMap_Hi",a);
this->sub_00c30d60(24,L"TEXTUREGROUP_WorldSpecular_Hi",a);
this->sub_00c30d60(25,L"TEXTUREGROUP_Effects_Hi",a);
}

struct C_00c377f0 { int a, b, c; C_00c377f0(); };

// @baa 0x00c377f0
C_00c377f0::C_00c377f0() : a(0), b(0), c(0) {}

struct C_00c378d0 {
    int sub_00c378d0();
};

// @baa 0x00c378d0
int C_00c378d0::sub_00c378d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c378f0 {
    int sub_00c378f0();
};

// @baa 0x00c378f0
int C_00c378f0::sub_00c378f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00c37910 {
    int sub_00c37910();
};

// @baa 0x00c37910
int C_00c37910::sub_00c37910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

struct C_00c37930 {
    int sub_00c37930();
};

// @baa 0x00c37930
int C_00c37930::sub_00c37930(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_00c318c0();
// @baa 0x00c37bb0
void sub_00c37bb0(void) { sub_00c318c0(); }

struct C_00c37d10 {
    int sub_00c37d10();
};

// @baa 0x00c37d10
int C_00c37d10::sub_00c37d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct TConstSetBitIterator_00c37ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c37ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c37ed0& operator++();
};

TConstSetBitIterator_00c37ed0::TConstSetBitIterator_00c37ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c37ed0
TConstSetBitIterator_00c37ed0& TConstSetBitIterator_00c37ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c37ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c37ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c37ef0& operator++();
};

TConstSetBitIterator_00c37ef0::TConstSetBitIterator_00c37ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c37ef0
TConstSetBitIterator_00c37ef0& TConstSetBitIterator_00c37ef0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c37f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c37f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c37f10& operator++();
};

TConstSetBitIterator_00c37f10::TConstSetBitIterator_00c37f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c37f10
TConstSetBitIterator_00c37f10& TConstSetBitIterator_00c37f10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c37ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c37ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c37ff0& operator++();
};

TConstSetBitIterator_00c37ff0::TConstSetBitIterator_00c37ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c37ff0
TConstSetBitIterator_00c37ff0& TConstSetBitIterator_00c37ff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c38090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c38090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c38090& operator++();
};

TConstSetBitIterator_00c38090::TConstSetBitIterator_00c38090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c38090
TConstSetBitIterator_00c38090& TConstSetBitIterator_00c38090::operator++()
{
    It.Advance();
    return *this;
}

int sub_00c1c250(void);
int sub_00c32ac0(...);
extern undefined4 g_026c096c;
// @baa 0x00c383c0
int sub_00c383c0(void)
{
  if (g_026c096c == 0) {
    g_026c096c = sub_00c32ac0(L"Engine");
    sub_00c1c250();
  }
  return g_026c096c;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
// @baa 0x00c38b70
undefined * sub_00c38b70(void)
{
  if ((g_026af520 & 1) == 0) {
    g_026af520 = g_026af520 | 1;
    g_026af518 = 0;
    g_026af51c = (undefined4)(L"HHitProxy");
  }
  return (undefined *)(&g_026af518);
}

// @baa 0x00c38ba0
void __stdcall sub_00c38ba0(int a0) {  }

// @baa 0x00c38bb0
int sub_00c38bb0(void) { return 2; }

// @baa 0x00c3e2e0
IMPLEMENT_CLASS_AT(UMaterialExpressionAddNormalMap, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 91);

// @baa 0x00c3e3f0
bool UMaterialExpressionAddNormalMap::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c3e430
IMPLEMENT_CLASS_AT(UMaterialExpressionLightingDiffuseLambert, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 94);

// @baa 0x00c3e540
bool UMaterialExpressionLightingDiffuseLambert::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c3e580
IMPLEMENT_CLASS_AT(UMaterialExpressionLightingSpecularPhong, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 95);

// @baa 0x00c3e690
bool UMaterialExpressionLightingSpecularPhong::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c3e6d0
IMPLEMENT_CLASS_AT(UMaterialExpressionLightingSpecularBlinnPhong, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 96);

// @baa 0x00c3e7e0
bool UMaterialExpressionLightingSpecularBlinnPhong::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c3e820
IMPLEMENT_CLASS_AT(UMaterialExpressionLightingSpecularHeidrichSeidel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 97);

// @baa 0x00c3e930
bool UMaterialExpressionLightingSpecularHeidrichSeidel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c3e970
IMPLEMENT_CLASS_AT(UMaterialExpressionMax, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 99);

// @baa 0x00c3ea80
bool UMaterialExpressionMax::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c3eac0
IMPLEMENT_CLASS_AT(UMaterialExpressionMin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialExpressions.cpp", 100);

// @baa 0x00c3ebd0
bool UMaterialExpressionMin::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006f7810(void);
extern undefined * g_0204b720;
// @baa 0x00c3ec10
undefined4 * UPrimitiveComponent::sub_00c3ec10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_0204b720);
  return param_1;
}

// @baa 0x00c3ec30
IMPLEMENT_CLASS_AT(UPathRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PathRenderingComponent.cpp", 86);

// @baa 0x00c3ec90
extern undefined * g_0204b970;
// @baa 0x00c3ecc0
undefined4 * UPrimitiveComponent::sub_00c3ecc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_0204b970);
  return param_1;
}

// @baa 0x00c3ece0
IMPLEMENT_CLASS_AT(URouteRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RouteRenderingComponent.cpp", 12);

// @baa 0x00c3ed40
void sub_0076d2d0();
// @baa 0x00c3fdb0
void sub_00c3fdb0(void) { sub_0076d2d0(); }
