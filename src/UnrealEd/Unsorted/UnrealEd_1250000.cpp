// UnrealEd_1250000.cpp: 108 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01250eb0(undefined4);
};

int sub_005f5500(...);
int sub_0124b0e0(...);
// @baa 0x01250eb0
undefined4 C::sub_01250eb0(undefined4 param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    uVar1 = sub_0124b0e0(param_2);
    sub_005f5500(0,L"%s: No terrain selected.",uVar1);
    return 0;
  }
  return 1;
}

typedef uint size_t;

struct C_01252db0 {
    int sub_01252db0(int);
    int sub_01250160(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01252db0
int C_01252db0::sub_01252db0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01252db0 *)(this))->sub_01250160(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x24),0,param_2 * 0x24);
  return iVar1;
}

struct C_01252df0 {
    int sub_01252df0(int);
    int sub_012501d0(int);
};

// @baa 0x01252df0
int C_01252df0::sub_01252df0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01252df0 *)(this))->sub_012501d0(param_2);
  sub_01a37612((void *)(iVar1 * 0x54 + *param_1),0,param_2 * 0x54);
  return iVar1;
}

struct C_01252e20 {
    int sub_01252e20(int);
    int sub_01250240(int);
};

// @baa 0x01252e20
int C_01252e20::sub_01252e20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01252e20 *)(this))->sub_01250240(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x38),0,param_2 * 0x38);
  return iVar1;
}

struct E { BYTE Bytes[84]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_01252e70(INT Index);
};

// @baa 0x01252e70
E* S::sub_01252e70(INT Index)
{
    return &Items(Index);
}

struct C_01252ec0 {
    int sub_01252ec0(int);
    int sub_012502d0(int);
};

// @baa 0x01252ec0
int C_01252ec0::sub_01252ec0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01252ec0 *)(this))->sub_012502d0(param_2);
  sub_01a37612((void *)(iVar1 * 0x54 + *param_1),0,param_2 * 0x54);
  return iVar1;
}

struct C_01252ef0 {
    int sub_01252ef0(int);
};

// @baa 0x01252ef0
int C_01252ef0::sub_01252ef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01252f00 {
    int sub_01252f00(int);
};

// @baa 0x01252f00
int C_01252f00::sub_01252f00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_01252ff0 {
    int sub_01252ff0(int);
};

// @baa 0x01252ff0
int C_01252ff0::sub_01252ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01253000 {
    int sub_01253000(int);
};

// @baa 0x01253000
int C_01253000::sub_01253000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01253010 {
    int sub_01253010(int);
};

// @baa 0x01253010
int C_01253010::sub_01253010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005413d0(...);
// @baa 0x01253020
void sub_01253020(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01253060 {
    int sub_01253060(int);
};

// @baa 0x01253060
int C_01253060::sub_01253060(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01253070 {
    int sub_01253070();
};

// @baa 0x01253070
int C_01253070::sub_01253070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01253090 {
    int sub_01253090();
};

// @baa 0x01253090
int C_01253090::sub_01253090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_012530a0 {
    int sub_012530a0();
};

// @baa 0x012530a0
int C_012530a0::sub_012530a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_012530c0 {
    int sub_012530c0();
};

// @baa 0x012530c0
int C_012530c0::sub_012530c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_012530d0 {
    int sub_012530d0();
};

// @baa 0x012530d0
int C_012530d0::sub_012530d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_012530f0 {
    int sub_012530f0();
};

// @baa 0x012530f0
int C_012530f0::sub_012530f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01253100 {
    void sub_01253100(int);
};

int sub_0053df70(...);
// @baa 0x01253100
void C_01253100::sub_01253100(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_0124d5e0(void);
int sub_01250bd0(...);
extern undefined4 g_026d40c0;
// @baa 0x01253140
int sub_01253140(void)
{
  if (g_026d40c0 == 0) {
    g_026d40c0 = sub_01250bd0(L"UnrealEd");
    sub_0124d5e0();
  }
  return g_026d40c0;
}

int sub_0124fd30(void);
int sub_01250fa0(...);
extern undefined4 g_026d40cc;
// @baa 0x01253170
int sub_01253170(void)
{
  if (g_026d40cc == 0) {
    g_026d40cc = sub_01250fa0(L"UnrealEd");
    sub_0124fd30();
  }
  return g_026d40cc;
}

struct C_012531f0 { C_012531f0* sub_012531f0(void); };

// @baa 0x012531f0
C_012531f0* C_012531f0::sub_012531f0(void) { return this; }

int sub_0124fbd0(void);
int sub_01250ee0(...);
extern undefined4 g_026d40c8;
// @baa 0x012533e0
int sub_012533e0(void)
{
  if (g_026d40c8 == 0) {
    g_026d40c8 = sub_01250ee0(L"UnrealEd");
    sub_0124fbd0();
  }
  return g_026d40c8;
}

// @baa 0x01253410
IMPLEMENT_CLASS_AT(UIconThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 31);

// @baa 0x012534e0
int sub_005c7a20(void);
extern undefined * g_02211670;
// @baa 0x01253500
undefined4 * UObject::sub_01253500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211670);
  return param_1;
}

extern undefined * g_02211788;
// @baa 0x01253520
undefined4 * UObject::sub_01253520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211788);
  return param_1;
}

// @baa 0x01253540
IMPLEMENT_CLASS_AT(UArchetypeThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 45);

// @baa 0x012535a0
extern undefined * g_022118a0;
// @baa 0x012535c0
undefined4 * UObject::sub_012535c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022118a0);
  return param_1;
}

// @baa 0x012535e0
IMPLEMENT_CLASS_AT(UPrefabThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 46);

// @baa 0x01253640
extern undefined * g_022119b8;
// @baa 0x01253660
undefined4 * UObject::sub_01253660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022119b8);
  return param_1;
}

// @baa 0x01253680
IMPLEMENT_CLASS_AT(UUISceneThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 48);

// @baa 0x012536e0
struct C_012537f0 {
    undefined4 sub_012537f0(byte);
};

int sub_0053dfa0(...);
int sub_01253360(void);
// @baa 0x012537f0
undefined4 C_012537f0::sub_012537f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01253360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01253810 {
    int sub_01253810();
};

// @baa 0x01253810
int C_01253810::sub_01253810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_00c304d0(void);
// @baa 0x012598f0
undefined4 UMaterialExpressionWorldPosition::sub_012598f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01259910
IMPLEMENT_CLASS_AT(UTextureThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 24);

// @baa 0x01259a20
bool UTextureThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01259a60
IMPLEMENT_CLASS_AT(UDefaultSizedThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 26);

// @baa 0x01259b70
bool UDefaultSizedThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01259bb0
// @baa 0x01259cc0
bool UIconThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01259d00
IMPLEMENT_CLASS_AT(UMemCountThumbnailLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 32);

// @baa 0x01259e10
bool UMemCountThumbnailLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01259e50
IMPLEMENT_CLASS_AT(UAnimSetLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 33);

// @baa 0x01259f60
bool UAnimSetLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01259fa0
IMPLEMENT_CLASS_AT(UAnimTreeLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 34);

// @baa 0x0125a0b0
bool UAnimTreeLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a0f0
IMPLEMENT_CLASS_AT(UGenericThumbnailLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 35);

// @baa 0x0125a200
bool UGenericThumbnailLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a240
IMPLEMENT_CLASS_AT(UPhysicsAssetLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 36);

// @baa 0x0125a350
bool UPhysicsAssetLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a390
IMPLEMENT_CLASS_AT(UApexDestructibleAssetLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 38);

// @baa 0x0125a4a0
bool UApexDestructibleAssetLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a4e0
IMPLEMENT_CLASS_AT(USkeletalMeshLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 40);

// @baa 0x0125a5f0
bool USkeletalMeshLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a630
IMPLEMENT_CLASS_AT(UStaticMeshLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 41);

// @baa 0x0125a740
bool UStaticMeshLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a780
IMPLEMENT_CLASS_AT(UPostProcessLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 43);

// @baa 0x0125a890
bool UPostProcessLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125a8d0
IMPLEMENT_CLASS_AT(USoundLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 44);

// @baa 0x0125a9e0
bool USoundLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125aa20
IMPLEMENT_CLASS_AT(UMaterialInstanceLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 49);

// @baa 0x0125ab30
bool UMaterialInstanceLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125ab70
IMPLEMENT_CLASS_AT(UParticleSystemLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 51);

// @baa 0x0125ac80
bool UParticleSystemLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01251ae0(...);
int sub_0125a630(void);
extern undefined4 g_026d410c;
// @baa 0x0125b760
int sub_0125b760(void)
{
  if (g_026d410c == 0) {
    g_026d410c = sub_01251ae0(L"UnrealEd");
    sub_0125a630();
  }
  return g_026d410c;
}

int sub_012511e0(...);
int sub_01259a60(void);
extern undefined4 g_026d40d8;
// @baa 0x0125b790
int sub_0125b790(void)
{
  if (g_026d40d8 == 0) {
    g_026d40d8 = sub_012511e0(L"UnrealEd");
    sub_01259a60();
  }
  return g_026d40d8;
}

int sub_01251060(...);
int sub_01259910(void);
extern undefined4 g_026d40d0;
// @baa 0x0125b840
int sub_0125b840(void)
{
  if (g_026d40d0 == 0) {
    g_026d40d0 = sub_01251060(L"UnrealEd");
    sub_01259910();
  }
  return g_026d40d0;
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

struct TConstSetBitIterator_0125b8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125b8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125b8d0& operator++();
};

TConstSetBitIterator_0125b8d0::TConstSetBitIterator_0125b8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125b8d0
TConstSetBitIterator_0125b8d0& TConstSetBitIterator_0125b8d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125b8f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125b8f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125b8f0& operator++();
};

TConstSetBitIterator_0125b8f0::TConstSetBitIterator_0125b8f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125b8f0
TConstSetBitIterator_0125b8f0& TConstSetBitIterator_0125b8f0::operator++()
{
    It.Advance();
    return *this;
}

struct A_0125c190 { virtual void sub_0125f5a0(); char pad[416]; };

struct B_0125c190 { virtual void sub_0125f5a0(); };

struct C_0125c190 : A_0125c190, B_0125c190 { virtual void sub_0125f5a0(); C_0125c190(); };

C_0125c190::C_0125c190() {}

// @baa 0x0125c190
void C_0125c190::sub_0125f5a0() {}

struct A_0125c1a0 { virtual void sub_0125f5a0(); char pad[420]; };

struct B_0125c1a0 { virtual void sub_0125f5a0(); };

struct C_0125c1a0 : A_0125c1a0, B_0125c1a0 { virtual void sub_0125f5a0(); C_0125c1a0(); };

C_0125c1a0::C_0125c1a0() {}

// @baa 0x0125c1a0
void C_0125c1a0::sub_0125f5a0() {}

struct A_0125c1b0 { virtual void sub_0125f5a0(); char pad[412]; };

struct B_0125c1b0 { virtual void sub_0125f5a0(); };

struct C_0125c1b0 : A_0125c1b0, B_0125c1b0 { virtual void sub_0125f5a0(); C_0125c1b0(); };

C_0125c1b0::C_0125c1b0() {}

// @baa 0x0125c1b0
void C_0125c1b0::sub_0125f5a0() {}

// @baa 0x0125d920
undefined4 UMaterialExpressionWorldPosition::sub_0125d920(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0125da20
undefined4 UMaterialExpressionWorldPosition::sub_0125da20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0125dc30
undefined4 UMaterialExpressionWorldPosition::sub_0125dc30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0125dc50
IMPLEMENT_CLASS_AT(UTextureCubeThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 25);

// @baa 0x0125dd60
bool UTextureCubeThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125dda0
IMPLEMENT_CLASS_AT(UMaterialInstanceThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 27);

// @baa 0x0125deb0
bool UMaterialInstanceThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125def0
IMPLEMENT_CLASS_AT(UParticleSystemThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 28);

// @baa 0x0125e000
bool UParticleSystemThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125e040
IMPLEMENT_CLASS_AT(USkeletalMeshThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 29);

// @baa 0x0125e150
bool USkeletalMeshThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125e190
IMPLEMENT_CLASS_AT(UStaticMeshThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 30);

// @baa 0x0125e2a0
bool UStaticMeshThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125e880
IMPLEMENT_CLASS_AT(ULensFlareThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 50);

// @baa 0x0125e990
bool ULensFlareThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer : Inner {
    int num;
    int max;
    void sub_0125b6a0(int* p);
    Outer(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x0125eee0
Outer::Outer(int* p)
{
    num = 0;
    max = 0;
    sub_0125b6a0(p);
}

struct C_0125ef40 {
    int sub_0125ef40(int);
    int sub_0125b210(int, int);
};

// @baa 0x0125ef40
int C_0125ef40::sub_0125ef40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0125ef40 *)(this))->sub_0125b210((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0125ef90 { void sub_0098f3b0(int); C_0125ef90 *sub_0125ef90(int); };

// @baa 0x0125ef90
C_0125ef90 *C_0125ef90::sub_0125ef90(int a) { sub_0098f3b0(a); return this; }

struct C_0125efb0 {
    int sub_0125efb0(int);
    int sub_0125b300(int, int);
};

// @baa 0x0125efb0
int C_0125efb0::sub_0125efb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0125efb0 *)(this))->sub_0125b300((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0125f260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f260& operator++();
};

TConstSetBitIterator_0125f260::TConstSetBitIterator_0125f260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f260
TConstSetBitIterator_0125f260& TConstSetBitIterator_0125f260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f280& operator++();
};

TConstSetBitIterator_0125f280::TConstSetBitIterator_0125f280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f280
TConstSetBitIterator_0125f280& TConstSetBitIterator_0125f280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f2d0& operator++();
};

TConstSetBitIterator_0125f2d0::TConstSetBitIterator_0125f2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f2d0
TConstSetBitIterator_0125f2d0& TConstSetBitIterator_0125f2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f2f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f2f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f2f0& operator++();
};

TConstSetBitIterator_0125f2f0::TConstSetBitIterator_0125f2f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f2f0
TConstSetBitIterator_0125f2f0& TConstSetBitIterator_0125f2f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f310& operator++();
};

TConstSetBitIterator_0125f310::TConstSetBitIterator_0125f310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f310
TConstSetBitIterator_0125f310& TConstSetBitIterator_0125f310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f360& operator++();
};

TConstSetBitIterator_0125f360::TConstSetBitIterator_0125f360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f360
TConstSetBitIterator_0125f360& TConstSetBitIterator_0125f360::operator++()
{
    It.Advance();
    return *this;
}

int sub_01259bb0(void);
int sub_0125e2e0(...);
extern undefined4 g_026d40ec;
// @baa 0x0125f3b0
int sub_0125f3b0(void)
{
  if (g_026d40ec == 0) {
    g_026d40ec = sub_0125e2e0(L"UnrealEd");
    sub_01259bb0();
  }
  return g_026d40ec;
}

struct TConstSetBitIterator_0125f510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f510& operator++();
};

TConstSetBitIterator_0125f510::TConstSetBitIterator_0125f510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f510
TConstSetBitIterator_0125f510& TConstSetBitIterator_0125f510::operator++()
{
    It.Advance();
    return *this;
}

int sub_0125c0a0(void);
// @baa 0x0125f5a0
undefined4 UUnrealEdEngine::sub_0125f5a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0125c0a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0125f830 { void sub_0125c2a0(); void sub_0125f830(int); };

// @baa 0x0125f830
void C_0125f830::sub_0125f830(int) { sub_0125c2a0(); }

struct C_0125f840 { void sub_0125c2a0(); void sub_0125f840(int); };

// @baa 0x0125f840
void C_0125f840::sub_0125f840(int) { sub_0125c2a0(); }

struct C_0125f910 { void sub_0125c2a0(); void sub_0125f910(int); };

// @baa 0x0125f910
void C_0125f910::sub_0125f910(int) { sub_0125c2a0(); }
