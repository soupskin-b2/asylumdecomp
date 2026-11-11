// PrimitiveComponent.cpp (part 1 of 5): 97 functions
// Placed here by: neighbours 70, callers 14, file 13.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006d85d0
IMPLEMENT_CLASS_AT(UStaticMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 16);

// @baa 0x006dadc0
// @baa 0x006dae80
int UStaticMeshComponent::vf_000(void) { return 1; }

// @baa 0x006dae90
int UCylinderComponent::vf_000(void) { return 1; }

// @baa 0x006daea0
int UArrowComponent::vf_000(void) { return 1; }

// @baa 0x006daeb0
int UDrawSphereComponent::vf_000(void) { return 1; }

// @baa 0x006daec0
int UDrawConeComponent::vf_000(void) { return 1; }

// @baa 0x006daed0
int UDrawLightConeComponent::vf_000(void) { return 1; }

// @baa 0x006daee0
int UCameraConeComponent::vf_000(void) { return 1; }

// @baa 0x006daef0
int UDrawQuadComponent::vf_000(void) { return 1; }

// @baa 0x006daf00
int UDrawCylinderComponent::vf_000(void) { return 1; }

// @baa 0x006daf10
int UDrawBoxComponent::vf_000(void) { return 1; }

// @baa 0x006daf20
int UDrawCapsuleComponent::vf_000(void) { return 1; }

struct C {
    undefined4 sub_006daf30(byte);
};

int sub_0053dfa0(...);
int sub_006750c0(void);
// @baa 0x006daf30
undefined4 C::sub_006daf30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006750c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006e6260{
int sub_006e6260(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x006e6260
int C_006e6260::sub_006e6260(undefined4*param_2)
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

// @baa 0x006f92b0
IMPLEMENT_CLASS_AT(UPrimitiveComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 14);

// @baa 0x006fa4e0
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

struct TConstSetBitIterator_006fa5a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006fa5a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006fa5a0& operator++();
};

TConstSetBitIterator_006fa5a0::TConstSetBitIterator_006fa5a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006fa5a0
TConstSetBitIterator_006fa5a0& TConstSetBitIterator_006fa5a0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0067eb60(void);
extern undefined4 g_01ed9f44;
extern undefined * g_01ed9f4c;
// @baa 0x006fab60
undefined4 * UTexture2D::sub_006fab60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067eb60();
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((int)param_1 + 0xfa) = 0;
  *param_1 = (undefined4)(&g_01ed9f4c);
  param_1[5] = (undefined4)(&g_01ed9f44);
  return param_1;
}

struct C_006fabb0 {
    undefined4 * sub_006fabb0();
};

int sub_0067ec20(void);
extern undefined4 g_01ed9f78;
extern undefined * g_01ed9f80;
// @baa 0x006fabb0
undefined4 * C_006fabb0::sub_006fabb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ec20();
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((int)param_1 + 0x11a) = 0;
  *param_1 = (undefined4)(&g_01ed9f80);
  param_1[5] = (undefined4)(&g_01ed9f78);
  return param_1;
}

struct C_006fac00 {
    undefined4 * sub_006fac00();
};

int sub_0067ece0(void);
extern undefined4 g_01ed9fac;
extern undefined * g_01ed9fb4;
// @baa 0x006fac00
undefined4 * C_006fac00::sub_006fac00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ece0();
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((int)param_1 + 0x15a) = 0;
  *param_1 = (undefined4)(&g_01ed9fb4);
  param_1[5] = (undefined4)(&g_01ed9fac);
  return param_1;
}

int sub_0067edb0(void);
extern undefined4 g_01ed9fe0;
extern undefined * g_01ed9fe8;
// @baa 0x006fac50
undefined4 * UTexture2D::sub_006fac50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067edb0();
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((int)param_1 + 0xfa) = 0;
  *param_1 = (undefined4)(&g_01ed9fe8);
  param_1[5] = (undefined4)(&g_01ed9fe0);
  return param_1;
}

struct C_006faca0 {
    undefined4 * sub_006faca0();
};

int sub_0067ee70(void);
extern undefined4 g_01eda014;
extern undefined * g_01eda01c;
// @baa 0x006faca0
undefined4 * C_006faca0::sub_006faca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ee70();
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((int)param_1 + 0x11a) = 0;
  *param_1 = (undefined4)(&g_01eda01c);
  param_1[5] = (undefined4)(&g_01eda014);
  return param_1;
}

struct C_006facf0 {
    undefined4 * sub_006facf0();
};

int sub_0067ef30(void);
extern undefined4 g_01eda048;
extern undefined * g_01eda050;
// @baa 0x006facf0
undefined4 * C_006facf0::sub_006facf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ef30();
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((int)param_1 + 0x15a) = 0;
  *param_1 = (undefined4)(&g_01eda050);
  param_1[5] = (undefined4)(&g_01eda048);
  return param_1;
}

struct C_006fad40 {
    undefined4 * sub_006fad40();
};

int sub_0067e900(void);
extern undefined4 g_01eda07c;
extern undefined * g_01eda084;
// @baa 0x006fad40
undefined4 * C_006fad40::sub_006fad40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e900();
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined2 *)((int)param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)((int)param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x13a) = 0;
  *param_1 = (undefined4)(&g_01eda084);
  param_1[5] = (undefined4)(&g_01eda07c);
  return param_1;
}

struct C_006fad90 {
    undefined4 * sub_006fad90();
};

int sub_0067e9c0(void);
extern undefined4 g_01eda0b0;
extern undefined * g_01eda0b8;
// @baa 0x006fad90
undefined4 * C_006fad90::sub_006fad90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e9c0();
  *(undefined2 *)(param_1 + 0x67) = 0;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)((int)param_1 + 0x1ae) = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined2 *)((int)param_1 + 0x1ba) = 0;
  *param_1 = (undefined4)(&g_01eda0b8);
  param_1[5] = (undefined4)(&g_01eda0b0);
  return param_1;
}

struct C_006fade0 {
    undefined4 * sub_006fade0();
};

int sub_0067ea90(void);
extern undefined4 g_01eda0e4;
extern undefined * g_01eda0ec;
// @baa 0x006fade0
undefined4 * C_006fade0::sub_006fade0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ea90();
  *(undefined2 *)(param_1 + 0x77) = 0;
  *(undefined2 *)((int)param_1 + 0x1e2) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined2 *)((int)param_1 + 0x1ee) = 0;
  *(undefined2 *)(param_1 + 0x7d) = 0;
  *(undefined2 *)((int)param_1 + 0x1fa) = 0;
  *param_1 = (undefined4)(&g_01eda0ec);
  param_1[5] = (undefined4)(&g_01eda0e4);
  return param_1;
}

struct C_006fae30 {
    undefined4 sub_006fae30(byte);
    int sub_006c4cf0();
};

// @baa 0x006fae30
undefined4 C_006fae30::sub_006fae30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006fae30 *)(((char *)this + 0x28)))->sub_006c4cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006fae60 {
    undefined4 sub_006fae60(byte);
    int sub_006f17f0();
};

// @baa 0x006fae60
undefined4 C_006fae60::sub_006fae60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006fae60 *)(((char *)this + 0x34)))->sub_006f17f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006fb2b0 {
    int sub_006fb2b0(undefined4);
    int sub_006fb250(int);
};

// @baa 0x006fb2b0
int C_006fb2b0::sub_006fb2b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_006fb2b0 *)(this))->sub_006fb250(param_2);
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return param_1;
}

struct C_006fb390 {
    undefined4 * sub_006fb390(int *);
    int sub_006f9ab0(int);
};

// @baa 0x006fb390
undefined4 * C_006fb390::sub_006fb390(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_006fb390 *)(((char *)this + 8)))->sub_006f9ab0(param_2[1]);
  return param_1;
}

struct C_006fb3c0 {
    undefined4 * sub_006fb3c0(int *);
    int sub_006f9ab0(int);
};

// @baa 0x006fb3c0
undefined4 * C_006fb3c0::sub_006fb3c0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_006fb3c0 *)(((char *)this + 8)))->sub_006f9ab0(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_006fb4b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006fb4b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006fb4b0& operator++();
};

TConstSetBitIterator_006fb4b0::TConstSetBitIterator_006fb4b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006fb4b0
TConstSetBitIterator_006fb4b0& TConstSetBitIterator_006fb4b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_006fb800 {
    undefined4 sub_006fb800(byte);
    int sub_006c4cf0();
};

// @baa 0x006fb800
undefined4 C_006fb800::sub_006fb800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006fb800 *)(((char *)this + 0x24)))->sub_006c4cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006fb830 {
    undefined4 sub_006fb830(byte);
    int sub_006f17f0();
};

// @baa 0x006fb830
undefined4 C_006fb830::sub_006fb830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006fb830 *)(((char *)this + 0x30)))->sub_006f17f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006fb860 {
    int sub_006fb860();
};

int sub_006f6940(void);
// @baa 0x006fb860
int C_006fb860::sub_006fb860(void)
{
    int param_1 = (int)this;

  sub_006f6940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fb880 {
    int sub_006fb880();
};

int sub_006f69a0(void);
// @baa 0x006fb880
int C_006fb880::sub_006fb880(void)
{
    int param_1 = (int)this;

  sub_006f69a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fb8a0 {
    int sub_006fb8a0();
};

int sub_006f6a00(void);
// @baa 0x006fb8a0
int C_006fb8a0::sub_006fb8a0(void)
{
    int param_1 = (int)this;

  sub_006f6a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fb8c0 {
    int sub_006fb8c0();
};

int sub_006f6a60(void);
// @baa 0x006fb8c0
int C_006fb8c0::sub_006fb8c0(void)
{
    int param_1 = (int)this;

  sub_006f6a60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fbb60 {
    int sub_006fbb60();
};

int sub_006f6b80(void);
// @baa 0x006fbb60
int C_006fbb60::sub_006fbb60(void)
{
    int param_1 = (int)this;

  sub_006f6b80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006f8f20();
// @baa 0x006fbb80
void sub_006fbb80(void) { sub_006f8f20(); }

void sub_006f8fa0();
// @baa 0x006fbb90
void sub_006fbb90(void) { sub_006f8fa0(); }

void sub_006f9020();
// @baa 0x006fbba0
void sub_006fbba0(void) { sub_006f9020(); }

struct C_006fbe00 {
    undefined4 * sub_006fbe00(undefined4 *);
    int sub_006f9ab0(int);
};

// @baa 0x006fbe00
undefined4 * C_006fbe00::sub_006fbe00(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_006fbe00 *)(((char *)this + 8)))->sub_006f9ab0((int)(param_2 + 2));
  return param_1;
}

// @baa 0x006fbfa0
IMPLEMENT_CLASS_AT(UMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 15);

// @baa 0x006fbfc0
IMPLEMENT_CLASS_AT(UCylinderComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 17);

// @baa 0x006fbfe0
IMPLEMENT_CLASS_AT(UArrowComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 18);

// @baa 0x006fc000
IMPLEMENT_CLASS_AT(UDrawSphereComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 19);

// @baa 0x006fc020
IMPLEMENT_CLASS_AT(UDrawCylinderComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 24);

// @baa 0x006fc040
IMPLEMENT_CLASS_AT(UDrawBoxComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 25);

// @baa 0x006fc060
IMPLEMENT_CLASS_AT(UDrawCapsuleComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 26);

// @baa 0x006fc080
IMPLEMENT_CLASS_AT(UCameraConeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 22);

// @baa 0x006fc0a0
IMPLEMENT_CLASS_AT(UDrawQuadComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 23);

// @baa 0x006fc0c0
IMPLEMENT_CLASS_AT(ABrush, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 90);

// @baa 0x006fc130
int ABrush::vf_2d4(void) { return 1; }

// @baa 0x006fc140
// @baa 0x006fc1a0
IMPLEMENT_CLASS_AT(AVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 91);

// @baa 0x006fc200
int AVolume::vf_2d8(void) { return 1; }

// @baa 0x006fc210
void* AVolume::vf_2f4() { return this; }

// @baa 0x006fc220
// @baa 0x006fc2b0
IMPLEMENT_CLASS_AT(APortalVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PortalVolume.cpp", 8);

// @baa 0x006fc320
// @baa 0x006fc380
IMPLEMENT_CLASS_AT(AMaterialInstanceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 11);

// @baa 0x006fc3e0
// @baa 0x006fc410
IMPLEMENT_CLASS_AT(UDrawConeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 20);

// @baa 0x006fc430
IMPLEMENT_CLASS_AT(UDrawLightConeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 21);

struct C_006fc500 {
    undefined4 sub_006fc500(byte);
};

int sub_006f7510(void);
// @baa 0x006fc500
undefined4 C_006fc500::sub_006fc500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f7510();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006fc590 {
    undefined4 sub_006fc590(byte);
};

int sub_006f7570(void);
// @baa 0x006fc590
undefined4 C_006fc590::sub_006fc590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f7570();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006fc5b0
// @baa 0x006fc670
// @baa 0x006fc780
bool UMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fc7c0
// @baa 0x006fc880
// @baa 0x006fc990
bool UCylinderComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fc9d0
// @baa 0x006fca90
// @baa 0x006fcba0
bool UArrowComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fcbe0
// @baa 0x006fcca0
// @baa 0x006fcdb0
bool UDrawSphereComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fcdf0
// @baa 0x006fceb0
// @baa 0x006fcfc0
bool UDrawConeComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fd000
// @baa 0x006fd0c0
// @baa 0x006fd180
// @baa 0x006fd290
bool UCameraConeComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fd2d0
// @baa 0x006fd390
// @baa 0x006fd4a0
bool UDrawQuadComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fd4e0
// @baa 0x006fd5a0
// @baa 0x006fd6b0
bool UDrawCylinderComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fd6f0
// @baa 0x006fd7b0
// @baa 0x006fd8c0
bool UDrawBoxComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006fd900
