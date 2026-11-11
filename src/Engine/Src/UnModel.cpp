// UnModel.cpp (part 1 of 4): 84 functions
// Placed here by: neighbours 68, class 8, callers 7, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053df70(...);
// @baa 0x0065faf0
void UFracturedStaticMeshComponent::sub_0065faf0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x0065fb30
void UFracturedStaticMeshComponent::sub_0065fb30(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00672ef0
void UFracturedStaticMeshComponent::sub_00672ef0(int param_2)
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

// @baa 0x00804730
IMPLEMENT_CLASS_AT(UModel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnModel.cpp", 335);

// @baa 0x00804840
int UModel::vf_000(void) { return 1; }

// @baa 0x00804850
bool UModel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00805d30
int UFracturedStaticMeshComponent::sub_00805d30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00805db0
int UFracturedStaticMeshComponent::sub_00805db0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00805dc0
int UFracturedStaticMeshComponent::sub_00805dc0(void) { return *(int*)((char*)this + 0); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00812640(); };

// @baa 0x00812640
void C::sub_00812640() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008126a0 { void* Data; int Num; int Max; void sub_008126a0(); };

// @baa 0x008126a0
void C_008126a0::sub_008126a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_00805840(int);
};

// @baa 0x00812700
int UObject::sub_00812700(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00805840(param_3);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}

struct C_00812720 { void* Data; int Num; int Max; void sub_00812720(); };

// @baa 0x00812720
void C_00812720::sub_00812720() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_005eac10(...);
int sub_00813ec0(...);
// @baa 0x00815c10
void UModel::vf_05c(void)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    uVar2 = sub_005eac10(iVar1,iVar1,*(undefined4 *)(param_1 + 0x1c),0,0xffffffff,0xffffffff,0,0);
    uVar2 = sub_00813ec0(uVar2);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  return;
}

// @baa 0x00815c40
void UModel::sub_00815c40(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    *(undefined4 *)(param_1 + 0x35c) = 0;
    if (*(int *)(param_1 + 0x354) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x354),0,8);
      *(undefined4 *)(param_1 + 0x354) = uVar1;
    }
  }
  return;
}

struct C_00817ec0 { void sub_00672c30(int); C_00817ec0 *sub_00817ec0(int); };

// @baa 0x00817ec0
C_00817ec0 *C_00817ec0::sub_00817ec0(int a) { sub_00672c30(a); return this; }

struct C_008180a0 { void sub_008142b0(int); C_008180a0 *sub_008180a0(int); };

// @baa 0x008180a0
C_008180a0 *C_008180a0::sub_008180a0(int a) { sub_008142b0(a); return this; }

struct C_008180c0 { void* Data; int Num; int Max; void sub_008180c0(); };

// @baa 0x008180c0
void C_008180c0::sub_008180c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00818120
void UObject::sub_00818120(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_view_00818290 {
    int sub_00805bc0(int);
};

// @baa 0x00818290
int UObject::sub_00818290(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00818290 *)(this))->sub_00805bc0(param_3);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}

struct C_view_008182b0 {
    int sub_00805c70(int);
};

// @baa 0x008182b0
int UObject::sub_008182b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_008182b0 *)(this))->sub_00805c70(param_3);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}

struct C_view_008182d0 {
    int sub_00805d40(int);
};

// @baa 0x008182d0
int UObject::sub_008182d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_008182d0 *)(this))->sub_00805d40(param_3);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}

struct C_008182f0 { void* Data; int Num; int Max; void sub_008182f0(); };

// @baa 0x008182f0
void C_008182f0::sub_008182f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00818440 { int a, b, c; C_00818440(); };

// @baa 0x00818440
C_00818440::C_00818440() : a(0), b(0), c(0) {}

extern TArray<int> g_026a1ca4;
struct C_008184a0 {
    int sub_008184a0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x008184a0
int C_008184a0::sub_008184a0()
{
    return g_026a1ca4(Index);
}

struct C_00818560 { void* Data; int Num; int Max; void sub_00818560(); };

// @baa 0x00818560
void C_00818560::sub_00818560() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008185c0 {
    int sub_008185c0();
};

// @baa 0x008185c0
int C_008185c0::sub_008185c0(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_008185d0 { void* Data; int Num; int Max; void sub_008185d0(); };

// @baa 0x008185d0
void C_008185d0::sub_008185d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00818630 {
    undefined4 sub_00818630(byte);
};

int sub_0053dfa0(...);
int sub_00812bd0(void);
// @baa 0x00818630
undefined4 C_00818630::sub_00818630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00812bd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00818650 { void sub_00814440(int); C_00818650 *sub_00818650(int); };

// @baa 0x00818650
C_00818650 *C_00818650::sub_00818650(int a) { sub_00814440(a); return this; }

struct C_00818670 { int a, b, c; C_00818670(); };

// @baa 0x00818670
C_00818670::C_00818670() : a(0), b(0), c(0) {}

// @baa 0x00818730
void UFracturedStaticMeshComponent::sub_00818730(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      sub_0053dfa0(*(undefined4 *)(*param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
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

struct C_0081edb0 {
    int sub_0081edb0();
};

// @baa 0x0081edb0
int C_0081edb0::sub_0081edb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0081edd0 {
    int sub_0081edd0();
};

// @baa 0x0081edd0
int C_0081edd0::sub_0081edd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x1c;
}

struct C_0081ee30 {
    int sub_0081ee30(int);
    int sub_00813170(int, int);
};

// @baa 0x0081ee30
int C_0081ee30::sub_0081ee30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0081ee30 *)(this))->sub_00813170((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct M_00821820 { void sub_0081f080(); };

struct C_00821820 { char pad[12]; M_00821820 m; void sub_00821820(); };

// @baa 0x00821820
void C_00821820::sub_00821820() { m.sub_0081f080(); }

struct C_00821870 {
    FString sub_00821870();
};

// @baa 0x00821870
FString C_00821870::sub_00821870()
{
    return TEXT("BSP vertices");
}

int sub_00820dc0(void);
// @baa 0x008218a0
undefined4 ULensFlare::sub_008218a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00820dc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00821b50 { void sub_0081f190(); };

struct C_00821b50 { char pad[4]; M_00821b50 m; void sub_00821b50(); };

// @baa 0x00821b50
void C_00821b50::sub_00821b50() { m.sub_0081f190(); }

struct C_00821c90 {
    int sub_00821c90(int);
    int sub_00819100(int, int);
};

// @baa 0x00821c90
int C_00821c90::sub_00821c90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00821c90 *)(this))->sub_00819100((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
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

struct TConstSetBitIterator_00821f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00821f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00821f00& operator++();
};

TConstSetBitIterator_00821f00::TConstSetBitIterator_00821f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00821f00
TConstSetBitIterator_00821f00& TConstSetBitIterator_00821f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00821f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00821f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00821f20& operator++();
};

TConstSetBitIterator_00821f20::TConstSetBitIterator_00821f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00821f20
TConstSetBitIterator_00821f20& TConstSetBitIterator_00821f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00821f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00821f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00821f40& operator++();
};

TConstSetBitIterator_00821f40::TConstSetBitIterator_00821f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00821f40
TConstSetBitIterator_00821f40& TConstSetBitIterator_00821f40::operator++()
{
    It.Advance();
    return *this;
}

struct C_00821f60 {
    void sub_00821f60();
    int sub_0081f690(int);
};

// @baa 0x00821f60
void C_00821f60::sub_00821f60(void)
{
    int param_1 = (int)this;
  ((C_00821f60 *)((*(char **)((char *)this + 0x10))))->sub_0081f690(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00821f80 {
    void sub_00821f80();
    int sub_0081f7f0(int);
};

// @baa 0x00821f80
void C_00821f80::sub_00821f80(void)
{
    int param_1 = (int)this;
  ((C_00821f80 *)((*(char **)((char *)this + 0x10))))->sub_0081f7f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00821fa0 {
    void sub_00821fa0();
    int sub_0081f9a0(int);
};

// @baa 0x00821fa0
void C_00821fa0::sub_00821fa0(void)
{
    int param_1 = (int)this;
  ((C_00821fa0 *)((*(char **)((char *)this + 0x10))))->sub_0081f9a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00821fc0 {
    void sub_00821fc0();
    int sub_0081fb00(int);
};

// @baa 0x00821fc0
void C_00821fc0::sub_00821fc0(void)
{
    int param_1 = (int)this;
  ((C_00821fc0 *)((*(char **)((char *)this + 0x10))))->sub_0081fb00(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00821fe0 {
    void sub_00821fe0();
    int sub_0081fc70(int);
};

// @baa 0x00821fe0
void C_00821fe0::sub_00821fe0(void)
{
    int param_1 = (int)this;
  ((C_00821fe0 *)((*(char **)((char *)this + 0x10))))->sub_0081fc70(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00822000 {
    void sub_00822000();
    int sub_0081fdd0(int);
};

// @baa 0x00822000
void C_00822000::sub_00822000(void)
{
    int param_1 = (int)this;
  ((C_00822000 *)((*(char **)((char *)this + 0x10))))->sub_0081fdd0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00822020 {
    void sub_00822020();
    int sub_0081ff30(int);
};

// @baa 0x00822020
void C_00822020::sub_00822020(void)
{
    int param_1 = (int)this;
  ((C_00822020 *)((*(char **)((char *)this + 0x10))))->sub_0081ff30(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00822040 {
    void sub_00822040();
    int sub_00820090(int);
};

// @baa 0x00822040
void C_00822040::sub_00822040(void)
{
    int param_1 = (int)this;
  ((C_00822040 *)((*(char **)((char *)this + 0x10))))->sub_00820090(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00822060 {
    void sub_00822060();
    int sub_00820210(int);
};

// @baa 0x00822060
void C_00822060::sub_00822060(void)
{
    int param_1 = (int)this;
  ((C_00822060 *)((*(char **)((char *)this + 0x10))))->sub_00820210(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00822880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00822880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00822880& operator++();
};

TConstSetBitIterator_00822880::TConstSetBitIterator_00822880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00822880
TConstSetBitIterator_00822880& TConstSetBitIterator_00822880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008231e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008231e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008231e0& operator++();
};

TConstSetBitIterator_008231e0::TConstSetBitIterator_008231e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008231e0
TConstSetBitIterator_008231e0& TConstSetBitIterator_008231e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008233d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008233d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008233d0& operator++();
};

TConstSetBitIterator_008233d0::TConstSetBitIterator_008233d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008233d0
TConstSetBitIterator_008233d0& TConstSetBitIterator_008233d0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00823500
UModelComponent::UModelComponent()
{
}

// @baa 0x00823550
int sub_005c7a70(...);
int sub_00823550(void);
// @baa 0x008235e0
undefined4 UModelComponent::sub_008235e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00823550();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1e0);
  }
  return param_1;
}

int sub_008217c0(void);
// @baa 0x00823750
undefined4 UStaticMeshComponent::sub_00823750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_008217c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00823a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00823a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00823a30& operator++();
};

TConstSetBitIterator_00823a30::TConstSetBitIterator_00823a30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00823a30
TConstSetBitIterator_00823a30& TConstSetBitIterator_00823a30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00823a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00823a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00823a50& operator++();
};

TConstSetBitIterator_00823a50::TConstSetBitIterator_00823a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00823a50
TConstSetBitIterator_00823a50& TConstSetBitIterator_00823a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00823a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00823a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00823a70& operator++();
};

TConstSetBitIterator_00823a70::TConstSetBitIterator_00823a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00823a70
TConstSetBitIterator_00823a70& TConstSetBitIterator_00823a70::operator++()
{
    It.Advance();
    return *this;
}

struct C_00824280 {
    undefined4 sub_00824280(byte);
};

int sub_00822080(void);
// @baa 0x00824280
undefined4 C_00824280::sub_00824280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00822080();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00824840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00824840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00824840& operator++();
};

TConstSetBitIterator_00824840::TConstSetBitIterator_00824840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00824840
TConstSetBitIterator_00824840& TConstSetBitIterator_00824840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00824950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00824950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00824950& operator++();
};

TConstSetBitIterator_00824950::TConstSetBitIterator_00824950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00824950
TConstSetBitIterator_00824950& TConstSetBitIterator_00824950::operator++()
{
    It.Advance();
    return *this;
}

struct C_00824e70 {
    int sub_00824e70();
};

int sub_00820700(void);
// @baa 0x00824e70
int C_00824e70::sub_00824e70(void)
{
    int param_1 = (int)this;

  sub_00820700();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824e90 {
    int sub_00824e90();
};

int sub_00820760(void);
// @baa 0x00824e90
int C_00824e90::sub_00824e90(void)
{
    int param_1 = (int)this;

  sub_00820760();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824eb0 {
    int sub_00824eb0();
};

int sub_008207c0(void);
// @baa 0x00824eb0
int C_00824eb0::sub_00824eb0(void)
{
    int param_1 = (int)this;

  sub_008207c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824ed0 {
    int sub_00824ed0();
};

int sub_00820820(void);
// @baa 0x00824ed0
int C_00824ed0::sub_00824ed0(void)
{
    int param_1 = (int)this;

  sub_00820820();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824ef0 {
    int sub_00824ef0();
};

int sub_00820880(void);
// @baa 0x00824ef0
int C_00824ef0::sub_00824ef0(void)
{
    int param_1 = (int)this;

  sub_00820880();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824f10 {
    int sub_00824f10();
};

int sub_008208e0(void);
// @baa 0x00824f10
int C_00824f10::sub_00824f10(void)
{
    int param_1 = (int)this;

  sub_008208e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824f30 {
    int sub_00824f30();
};

int sub_00820940(void);
// @baa 0x00824f30
int C_00824f30::sub_00824f30(void)
{
    int param_1 = (int)this;

  sub_00820940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824f50 {
    int sub_00824f50();
};

int sub_008209a0(void);
// @baa 0x00824f50
int C_00824f50::sub_00824f50(void)
{
    int param_1 = (int)this;

  sub_008209a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824f70 {
    int sub_00824f70();
};

int sub_00820a00(void);
// @baa 0x00824f70
int C_00824f70::sub_00824f70(void)
{
    int param_1 = (int)this;

  sub_00820a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824f90 {
    int sub_00824f90();
};

int sub_00820ab0(void);
// @baa 0x00824f90
int C_00824f90::sub_00824f90(void)
{
    int param_1 = (int)this;

  sub_00820ab0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00824fb0 {
    undefined4 * sub_00824fb0(undefined4 *);
    int sub_00823420(int);
};

// @baa 0x00824fb0
undefined4 * C_00824fb0::sub_00824fb0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00824fb0 *)(((char *)this + 4)))->sub_00823420((int)(param_2 + 1));
  return param_1;
}

// @baa 0x00825000
IMPLEMENT_CLASS_AT(ALightVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLight.cpp", 475);

// @baa 0x00825060
// @baa 0x008250c0
IMPLEMENT_CLASS_AT(AStaticLightCollectionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLight.cpp", 576);

// @baa 0x00825130
struct S {
    void sub_005d7270();
    void sub_00828ae0();
    void sub_008291c0();
};

// @baa 0x008291c0
void S::sub_008291c0() {
    sub_005d7270();
    sub_00828ae0();
}

int sub_0082ab10(void);
// @baa 0x0082ae20
undefined4 UModel::sub_0082ae20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0082ab10();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,3000);
  }
  return param_1;
}

// @baa 0x00830f50
// @baa 0x00830fb0
