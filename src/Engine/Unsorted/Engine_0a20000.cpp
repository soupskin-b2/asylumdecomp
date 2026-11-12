// Engine_0a20000.cpp: 45 functions
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

struct TConstSetBitIterator_00a22250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a22250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a22250& operator++();
};

TConstSetBitIterator_00a22250::TConstSetBitIterator_00a22250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a22250
TConstSetBitIterator_00a22250& TConstSetBitIterator_00a22250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a22270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a22270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a22270& operator++();
};

TConstSetBitIterator_00a22270::TConstSetBitIterator_00a22270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a22270
TConstSetBitIterator_00a22270& TConstSetBitIterator_00a22270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a222c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a222c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a222c0& operator++();
};

TConstSetBitIterator_00a222c0::TConstSetBitIterator_00a222c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a222c0
TConstSetBitIterator_00a222c0& TConstSetBitIterator_00a222c0::operator++()
{
    It.Advance();
    return *this;
}

int sub_006f7810(void);
extern undefined * g_01fb3930;
// @baa 0x00a22310
undefined4 * UPrimitiveComponent::sub_00a22310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01fb3930);
  return param_1;
}

// @baa 0x00a22330
IMPLEMENT_CLASS_AT(URB_RadialImpulseComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 26);

// @baa 0x00a22390
int sub_005c7a20(void);
extern undefined * g_01fb3b88;
// @baa 0x00a223c0
undefined4 * UObject::sub_00a223c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fb3b88);
  return param_1;
}

// @baa 0x00a223e0
IMPLEMENT_CLASS_AT(URB_Spring, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 28);

// @baa 0x00a22450
// @baa 0x00a22480
IMPLEMENT_CLASS_AT(URB_ForceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 31);

// @baa 0x00a224e0
void URB_ForceComponent::vf_250(void) {  }

// @baa 0x00a224f0
void URB_ForceComponent::vf_254(void) {  }

// @baa 0x00a22500
extern undefined * g_01fb3ce0;
// @baa 0x00a22530
undefined4 * UPrimitiveComponent::sub_00a22530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01fb3ce0);
  return param_1;
}

extern undefined * g_01fb3f40;
// @baa 0x00a22550
undefined4 * UPrimitiveComponent::sub_00a22550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01fb3f40);
  return param_1;
}

// @baa 0x00a22570
IMPLEMENT_CLASS_AT(URB_ForceComponentCylindrical, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 32);

// @baa 0x00a225d0
extern undefined * g_01fb41a0;
// @baa 0x00a22600
undefined4 * UPrimitiveComponent::sub_00a22600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01fb41a0);
  return param_1;
}

// @baa 0x00a22620
IMPLEMENT_CLASS_AT(URB_ForceComponentRadial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 33);

// @baa 0x00a22680
struct C { void sub_00a1f7a0(int); C *sub_00a22960(int); };

// @baa 0x00a22960
C *C::sub_00a22960(int a) { sub_00a1f7a0(a); return this; }

struct C_00a22980 { void sub_00a1f890(int); C_00a22980 *sub_00a22980(int); };

// @baa 0x00a22980
C_00a22980 *C_00a22980::sub_00a22980(int a) { sub_00a1f890(a); return this; }

struct C_00a229a0 { void sub_00a1f980(int); C_00a229a0 *sub_00a229a0(int); };

// @baa 0x00a229a0
C_00a229a0 *C_00a229a0::sub_00a229a0(int a) { sub_00a1f980(a); return this; }

struct C_00a22af0 {
    int sub_00a22af0(int);
    int sub_00a1f500(int, int);
};

// @baa 0x00a22af0
int C_00a22af0::sub_00a22af0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00a22af0 *)(this))->sub_00a1f500((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_00a22bc0 {
    void sub_00a22bc0();
    int sub_00a22120(int);
};

// @baa 0x00a22bc0
void C_00a22bc0::sub_00a22bc0(void)
{
    int param_1 = (int)this;
  ((C_00a22bc0 *)((*(char **)((char *)this + 0x10))))->sub_00a22120(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_009fda30(void);
int sub_00a25f20(...);
extern undefined4 g_026b6630;
// @baa 0x00a27850
int sub_00a27850(void)
{
  if (g_026b6630 == 0) {
    g_026b6630 = sub_00a25f20(L"Engine");
    sub_009fda30();
  }
  return g_026b6630;
}

// @baa 0x00a29820
// @baa 0x00a29930
bool URB_ForceComponentCylindrical::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a29970
// @baa 0x00a29a80
bool URB_ForceComponentRadial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00a2c2d0 { C_00a2c2d0* sub_00a2c2d0(void); };

// @baa 0x00a2c2d0
C_00a2c2d0* C_00a2c2d0::sub_00a2c2d0(void) { return this; }

void sub_00a2b420();
// @baa 0x00a2c320
void sub_00a2c320(void) { sub_00a2b420(); }

struct C_00a2c330 {
    int sub_00a2c330();
};

int sub_00a221f0(void);
// @baa 0x00a2c330
int C_00a2c330::sub_00a2c330(void)
{
    int param_1 = (int)this;

  sub_00a221f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00a2c350 { void sub_00a2b4d0(int); C_00a2c350 *sub_00a2c350(int); };

// @baa 0x00a2c350
C_00a2c350 *C_00a2c350::sub_00a2c350(int a) { sub_00a2b4d0(a); return this; }

extern undefined * g_01fb4410;
// @baa 0x00a2c380
undefined4 * UObject::sub_00a2c380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fb4410);
  return param_1;
}

void sub_00a2b2e0();
// @baa 0x00a2c3a0
void sub_00a2c3a0(void) { sub_00a2b2e0(); }

int sub_009f90e0(void);
int sub_00a2e160(...);
extern undefined4 g_026b6610;
// @baa 0x00a2e500
int sub_00a2e500(void)
{
  if (g_026b6610 == 0) {
    g_026b6610 = sub_00a2e160(L"Engine");
    sub_009f90e0();
  }
  return g_026b6610;
}

// @baa 0x00a2fe40
void sub_00a2fe40(void) {  }

// @baa 0x00a2fe50
float10 sub_00a2fe50(double param_1)
{
  return (float10)param_1;
}

struct C_00a2fe70 {
    uint sub_00a2fe70();
};

// @baa 0x00a2fe70
uint C_00a2fe70::sub_00a2fe70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) & 1;
}

struct C_00a2fe80 { int sub_00a2fe80(void); };

// @baa 0x00a2fe80
int C_00a2fe80::sub_00a2fe80(void) { return *(int*)((char*)this + 152); }

struct C_00a2fec0 {
    void sub_00a2fec0(undefined4, undefined4);
};

// @baa 0x00a2fec0
void C_00a2fec0::sub_00a2fec0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0xa4))(param_2,param_3);
  return;
}

struct C_00a2fee0 { int sub_00a2fee0(void); };

// @baa 0x00a2fee0
int C_00a2fee0::sub_00a2fee0(void) { return *(int*)((char*)this + 64); }

struct C_00a2fef0 {
    undefined4 sub_00a2fef0();
};

// @baa 0x00a2fef0
undefined4 C_00a2fef0::sub_00a2fef0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) == 0)) {
    return 0;
  }
  return 1;
}

struct C_00a2ff10 { C_00a2ff10* sub_00a2ff10(int a0); };

// @baa 0x00a2ff10
C_00a2ff10* C_00a2ff10::sub_00a2ff10(int a0) { return this; }
