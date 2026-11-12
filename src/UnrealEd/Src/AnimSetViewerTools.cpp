// AnimSetViewerTools.cpp (part 1 of 4): 57 functions
// Placed here by: neighbours 46, callers 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0090d3b0(void);
int sub_00940a50(...);
extern undefined4 g_026b5dac;
// @baa 0x00940e40
int sub_00940e40(void)
{
  if (g_026b5dac == 0) {
    g_026b5dac = sub_00940a50(L"Engine");
    sub_0090d3b0();
  }
  return g_026b5dac;
}

int sub_0090d510(void);
int sub_00940b10(...);
extern undefined4 g_026b5db0;
// @baa 0x00940e70
int sub_00940e70(void)
{
  if (g_026b5db0 == 0) {
    g_026b5db0 = sub_00940b10(L"Engine");
    sub_0090d510();
  }
  return g_026b5db0;
}

struct C{
int sub_00ef4420(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00ef4420
int C::sub_00ef4420(undefined4*param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00efab90 { void* Data; int Num; int Max; void sub_00efab90(); };

// @baa 0x00efab90
void C_00efab90::sub_00efab90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f5eb70 {
    undefined4 * sub_00f5eb70(undefined4, undefined4, undefined4);
    int sub_0084bec0(int, int);
};

// @baa 0x00f5eb70
undefined4 * C_00f5eb70::sub_00f5eb70(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_4;
  ((C_00f5eb70 *)(((char *)this + 4)))->sub_0084bec0(param_2, param_3);
  param_1[0xb] = param_3;
  param_1[0xc] = param_2;
  return param_1;
}

struct C_01338180 {
    undefined4 sub_01338180();
};

// @baa 0x01338180
undefined4 C_01338180::sub_01338180(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x01338190
int UAnimNodeEditInfo_AimOffset::vf_000(void) { return 1; }

int sub_0053dfa0(...);
int sub_01284da0(void);
extern undefined4 g_02257110;
extern undefined * g_02257118;
// @baa 0x013381a0
undefined4 * UUnrealEdEngine::sub_013381a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02257118);
  param_1[0x67] = (undefined4)(&g_02257110);
  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01338430
IMPLEMENT_CLASS_AT(UAnimTreeEdSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimTreeEditor.cpp", 14);

// @baa 0x01338540
int UAnimTreeEdSkelComponent::vf_000(void) { return 1; }

// @baa 0x01338550
bool UAnimTreeEdSkelComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01338590
IMPLEMENT_CLASS_AT(UAnimNodeEditInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimTreeEditor.cpp", 15);

// @baa 0x013386a0
int UAnimNodeEditInfo::vf_000(void) { return 1; }

// @baa 0x013386b0
bool UAnimNodeEditInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_013386f0 { int sub_013386f0(void); };

// @baa 0x013386f0
int C_013386f0::sub_013386f0(void) { return *(int*)((char*)this + 360); }

struct C_013388c0 {
    int sub_013388c0();
};

// @baa 0x013388c0
int C_013388c0::sub_013388c0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x30)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

struct C_01338ab0 { int a, b, c; C_01338ab0(); };

// @baa 0x01338ab0
C_01338ab0::C_01338ab0() : a(0), b(0), c(0) {}

struct C_01338ac0 { int sub_01338ac0(void); };

// @baa 0x01338ac0
int C_01338ac0::sub_01338ac0(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_01338ad0(INT Index);
};

// @baa 0x01338ad0
E* S::sub_01338ad0(INT Index)
{
    return &Items(Index);
}

struct C_01338b20 { int a, b, c; C_01338b20(); };

// @baa 0x01338b20
C_01338b20::C_01338b20() : a(0), b(0), c(0) {}

struct C_01338b30 { int sub_01338b30(void); };

// @baa 0x01338b30
int C_01338b30::sub_01338b30(void) { return *(int*)((char*)this + 0); }

struct S_01338b40 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01338b40(INT Index);
};

// @baa 0x01338b40
DWORD* S_01338b40::sub_01338b40(INT Index)
{
    return &Items(Index);
}

// @baa 0x01338ef0
void __stdcall sub_01338ef0(int a0, int a1) {  }

struct C_01338f00 { int sub_01338f00(void); };

// @baa 0x01338f00
int C_01338f00::sub_01338f00(void) { return *(int*)((char*)this + 0); }

struct C_01338f80 { int sub_01338f80(void); };

// @baa 0x01338f80
int C_01338f80::sub_01338f80(void) { return *(int*)((char*)this + 0); }

struct S_01339360 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01339360(INT Index) const;
};

// @baa 0x01339360
const DWORD* S_01339360::sub_01339360(INT Index) const
{
    return &Items(Index);
}

struct S_013393b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_013393b0(INT Index) const;
};

// @baa 0x013393b0
const DWORD* S_013393b0::sub_013393b0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x01339400
void sub_01339400(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01339420
void sub_01339420(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01339440
void sub_01339440(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct T_013472e0;
// @baa 0x013472e0
template INT TArray<T_013472e0*>::RemoveItem(T_013472e0* const&);

struct T_01347740;
// @baa 0x01347740
template INT TArray<T_01347740*>::RemoveItem(T_01347740* const&);

struct T_01347850;
// @baa 0x01347850
template INT TArray<T_01347850*>::RemoveItem(T_01347850* const&);

struct C_013478d0 { void* Data; int Num; int Max; void sub_013478d0(); };

// @baa 0x013478d0
void C_013478d0::sub_013478d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01347930 {
    int sub_01347930();
};

// @baa 0x01347930
int C_01347930::sub_01347930(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01347950 {
    int sub_01347950();
};

// @baa 0x01347950
int C_01347950::sub_01347950(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013479b0 {
    undefined4 sub_013479b0(byte);
    int sub_0040fcc0();
};

// @baa 0x013479b0
undefined4 C_013479b0::sub_013479b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013479b0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013479e0 {
    int sub_013479e0();
};

// @baa 0x013479e0
int C_013479e0::sub_013479e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_013479f0 {
    int sub_013479f0();
};

// @baa 0x013479f0
int C_013479f0::sub_013479f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
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

struct TConstSetBitIterator_013576f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013576f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013576f0& operator++();
};

TConstSetBitIterator_013576f0::TConstSetBitIterator_013576f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013576f0
TConstSetBitIterator_013576f0& TConstSetBitIterator_013576f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01357740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01357740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01357740& operator++();
};

TConstSetBitIterator_01357740::TConstSetBitIterator_01357740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01357740
TConstSetBitIterator_01357740& TConstSetBitIterator_01357740::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00fb41b0(int);
    int sub_00fbd130(int);
    int sub_00672b80(int);
    int sub_00723aa0(int);
    int sub_01241190(int);
    int sub_00fb40a0(int);
    int sub_00944610(int);
    int sub_00fbd220(int);
    int sub_0057cb40(int);
};

// @baa 0x01358290
int UUnrealEdEngine::sub_01358290(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00fb41b0(param_2);
  ((C_view *)(((char *)this + 0xc)))->sub_00fbd130(param_2 + 0xc);
  ((C_view *)(((char *)this + 0x18)))->sub_00672b80(param_2 + 0x18);
  ((C_view *)(((char *)this + 0x24)))->sub_00723aa0(param_2 + 0x24);
  ((C_view *)(((char *)this + 0x30)))->sub_01241190(param_2 + 0x30);
  ((C_view *)(((char *)this + 0x64)))->sub_00fb40a0(param_2 + 100);
  ((C_view *)(((char *)this + 0x70)))->sub_00672b80(param_2 + 0x70);
  ((C_view *)(((char *)this + 0x7c)))->sub_00723aa0(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  ((C_view *)(((char *)this + 0x90)))->sub_00944610(param_2 + 0x90);
  ((C_view *)(((char *)this + 0xc4)))->sub_00fbd220(param_2 + 0xc4);
  ((C_view *)(((char *)this + 0xd0)))->sub_0057cb40(param_2 + 0xd0);
  return param_1;
}

struct TConstSetBitIterator_01358350 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01358350(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01358350& operator++();
};

TConstSetBitIterator_01358350::TConstSetBitIterator_01358350(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01358350
TConstSetBitIterator_01358350& TConstSetBitIterator_01358350::operator++()
{
    It.Advance();
    return *this;
}

void sub_01357e90();
// @baa 0x013583a0
void sub_013583a0(void) { sub_01357e90(); }

struct TConstSetBitIterator_013583b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013583b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013583b0& operator++();
};

TConstSetBitIterator_013583b0::TConstSetBitIterator_013583b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013583b0
TConstSetBitIterator_013583b0& TConstSetBitIterator_013583b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0135d0c0 {
    int sub_0135cf80(int);
};

int sub_005f5500(...);
// @baa 0x0135d0c0
void UUnrealEdEngine::sub_0135d0c0(void)
{
    int param_1 = (int)this;
  int iVar1;
  if (0 < *(int *)(param_1 + 0x354)) {
    iVar1 = sub_005f5500(1,L"Are you sure you want to delete the selected animations?");
    if (iVar1 != 0) {
      ((C_view_0135d0c0 *)(this))->sub_0135cf80(param_1 + 0x350);
    }
  }
  return;
}

struct C_0135db00 { void sub_013587b0(); void sub_0135db00(int); };

// @baa 0x0135db00
void C_0135db00::sub_0135db00(int) { sub_013587b0(); }

struct C_0135db10 { void sub_0135b210(); void sub_0135db10(int); };

// @baa 0x0135db10
void C_0135db10::sub_0135db10(int) { sub_0135b210(); }

struct C_0135db20 { void sub_0135b880(); void sub_0135db20(int); };

// @baa 0x0135db20
void C_0135db20::sub_0135db20(int) { sub_0135b880(); }

struct C_0135db30 { void sub_0135c310(); void sub_0135db30(int); };

// @baa 0x0135db30
void C_0135db30::sub_0135db30(int) { sub_0135c310(); }

struct C_0135db40 { void sub_0135c5a0(); void sub_0135db40(int); };

// @baa 0x0135db40
void C_0135db40::sub_0135db40(int) { sub_0135c5a0(); }

struct C_0135db90 { void sub_0135d0f0(); void sub_0135db90(int); };

// @baa 0x0135db90
void C_0135db90::sub_0135db90(int) { sub_0135d0f0(); }

struct C_0135dd50 { void sub_0135c690(); void sub_0135dd50(int); };

// @baa 0x0135dd50
void C_0135dd50::sub_0135dd50(int) { sub_0135c690(); }

struct C_0135dd60 { void sub_0135c9b0(); void sub_0135dd60(int); };

// @baa 0x0135dd60
void C_0135dd60::sub_0135dd60(int) { sub_0135c9b0(); }

// The original takes one argument and discards it, forwarding a fixed value.
INT sub_013566f0(INT bShow);
// @baa 0x01357790
INT sub_01357790(INT bShow)
{
    return sub_013566f0(FALSE);
}

// @baa 0x013577a0
INT sub_013577a0(INT bShow)
{
    return sub_013566f0(TRUE);
}

/* FName::operator!= (UnName.h); the kit's FName has no comparison operators. */
inline UBOOL operator!=(const FName& A, const FName& B) { return A.Index != B.Index || A.Number != B.Number; }

// @baa 0x00834900
/* UE3's UMorphNodePose::SetMorphTarget (named sub_00834900 in the kit): remembers the name and looks the target up
 * on the skeletal mesh component, when there is one. */
void UMorphNodePose::sub_00834900(FName MorphTargetName)
{
	MorphName = MorphTargetName;
	Target = NULL;
	if (MorphTargetName != FName(NAME_None) && SkelComponent)
	{
		Target = SkelComponent->FindMorphTarget(MorphTargetName);
	}
}
