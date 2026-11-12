// UnObj.cpp (part 1 of 3): 144 functions
// Placed here by: neighbours 135, callers 4, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0058c420
void __stdcall sub_0058c420(int a0) {  }

struct UObject_ : public UObject {
    void sub_005c1ab0(UObject* NewArchetype, UBOOL bReinitialize, UBOOL bPreserveSubobjects);
};

// @baa 0x005c1ab0
void UObject_::sub_005c1ab0(UObject* NewArchetype, UBOOL bReinitialize, UBOOL bPreserveSubobjects)
{
    if (!NewArchetype)
        appFailAssert("NewArchetype", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObj.cpp", 3698, TEXT(""));
    if (NewArchetype == this)
        appFailAssert("NewArchetype != this", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObj.cpp", 3699, TEXT(""));
    ObjectArchetype = NewArchetype;
    if (bReinitialize)
    {
        vf_0e0(0, bPreserveSubobjects);
    }
}

struct sub_005c1b20
{
    int a, b, c, d, e;
    sub_005c1b20(int x);
};

// @baa 0x005c1b20
sub_005c1b20::sub_005c1b20(int x) : a(x), b(0), c(0), d(0), e(0)
{
}

struct sub_005c1b40
{
    int a, b, c, d;
    sub_005c1b40(int w, int x, int y, int z);
};

// @baa 0x005c1b40
sub_005c1b40::sub_005c1b40(int w, int x, int y, int z) : a(w), b(x), c(y), d(z)
{
}

struct sub_005c1b60
{
    int a, b, c;
    sub_005c1b60(int x, int y, int z);
};

// @baa 0x005c1b60
sub_005c1b60::sub_005c1b60(int x, int y, int z) : a(x), b(y), c(z)
{
}

extern "C" __declspec(dllimport) int _isnan(...);
// @baa 0x005c1b80
bool sub_005c1b80(float param_1)
{
  int iVar1;
  
  iVar1 = _isnan((double)param_1);
  return iVar1 != 0;
}

extern "C" __declspec(dllimport) int _finite(...);
// @baa 0x005c1ba0
void sub_005c1ba0(float param_1)
{
  _finite((double)param_1);
  return;
}

// @baa 0x005c1bc0
void sub_005c1bc0(void) {  }

// @baa 0x005c1bd0
void sub_005c1bd0(void) {  }

// @baa 0x005c1be0
void sub_005c1be0(void) {  }

// @baa 0x005c1bf0
float10 sub_005c1bf0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x005c1c60
int sub_005c1c60(char * param_1)
{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}

// @baa 0x005c1d10
int UObject::sub_005c1d10(void) { return *(int*)((char*)this + 12); }

struct C { void sub_005bfa70(void); };

// @baa 0x005c1d20
void sub_005c1d20(C *param_1)
{
  param_1->sub_005bfa70();
}

struct C_005c1d30 { int sub_005c1d30(void); };

// @baa 0x005c1d30
int C_005c1d30::sub_005c1d30(void) { return *(int*)((char*)this + 84); }

struct C_005c1d40 { int sub_005c1d40(void); };

// @baa 0x005c1d40
int C_005c1d40::sub_005c1d40(void) { return *(int*)((char*)this + 88); }

struct C_005c1d50 {
    bool sub_005c1d50();
};

// @baa 0x005c1d50
bool C_005c1d50::sub_005c1d50(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x5c);
}

extern undefined4 g_026a1be0;
// @baa 0x005c1d60
undefined4 sub_005c1d60(void)
{
  return g_026a1be0;
}

extern undefined4 g_026a1bfc;
// @baa 0x005c1d70
undefined4 sub_005c1d70(void)
{
  return g_026a1bfc;
}

struct C_005c1d80 { int a; C_005c1d80(int); };

// @baa 0x005c1d80
C_005c1d80::C_005c1d80(int x) : a(x) {}

// @baa 0x005c7de0
void UObject::sub_005c7de0(int param_2, int param_3)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 0x7c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_2 + 0x80);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}

struct C_005c7ea0
{
    char pad[0x5c];
    int count;
    bool sub_005c7ea0(int inc);
};

// @baa 0x005c7ea0
bool C_005c7ea0::sub_005c7ea0(int inc)
{
    count += inc ? 1 : -1;
    return count > 0;
}

int sub_00579430(void);
int sub_006311e0(...);
extern undefined4 g_01e964bc;
extern undefined4 g_01e96588;
extern undefined4 g_026a1be8;
extern undefined4 g_026a1bf8;
extern undefined4 g_026a1c90;
// @baa 0x005c7ec0
void sub_005c7ec0(void)
{
  g_026a1be8 = g_026a1be8 + 1;
  if (g_026a1be8 == 1) {
    sub_00579430();
    if (g_026a1c90 != 0) {
      sub_006311e0("GObjLoaded.Num()==0",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObj.cpp"
                   ,0x1afd,&g_01e964bc);
    }
    if (g_026a1bf8 != 0) {
      sub_006311e0("!GAutoRegister",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObj.cpp"
                   ,0x1afe,&g_01e96588);
    }
  }
  return;
}

// @baa 0x005c7f30
void UObject::AddToRoot()
{
    *(QWORD*)&ObjectFlags |= 0x4000;
}

struct C_005c7f40
{
    char pad[8];
    int A;
    int B;
    void sub_005c7f40();
};

// @baa 0x005c7f40
void C_005c7f40::sub_005c7f40()
{
    *(QWORD*)&A &= ~0x4000;
}

// @baa 0x005c81b0
int UObject::vf_000(void) { return 1; }

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005c81c0
int UObject::sub_005c81c0(undefined4*param_2)
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

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_005c8220(INT Index);
};

// @baa 0x005c8220
FFaceFXElement* UFxRenderWidget::sub_005c8220(INT Index)
{
	return &BoneArray(Index);
}

typedef uint size_t;

struct C_view {
    int sub_00540d10(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x005c82f0
int UObject::sub_005c82f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00540d10(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct UFxRenderWidget_005c83a0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_005c83a0(INT Index);
};

// @baa 0x005c83a0
FFaceFXElement* UFxRenderWidget_005c83a0::sub_005c83a0(INT Index)
{
	return &BoneArray(Index);
}

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_005c83f0(INT Index);
};

// @baa 0x005c83f0
E* S::sub_005c83f0(INT Index)
{
    return &Items(Index);
}

extern undefined * g_01e98b98;
// @baa 0x005c84b0
void sub_005c84b0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(&g_01e98b98);
  }
  return;
}

extern int g_026a1ca8;
extern int* g_026a1ca4;
// @baa 0x005cb2d0
int sub_005cb2d0(int index)
{
    if (index >= 0 && index < g_026a1ca8)
        return g_026a1ca4[index];
    return 0;
}

// @baa 0x005cb6d0
IMPLEMENT_CLASS_AT(UObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObj.cpp", 8301);

struct Inner
{
    int sub_005cb9e0(int value);
};

struct sub_005d1720
{
    int first;
    int second;
    Inner inner;
    sub_005d1720(int a, int b, int c);
};

// @baa 0x005d1720
sub_005d1720::sub_005d1720(int a, int b, int c) : first(a), second(b)
{
    inner.sub_005cb9e0(c);
}

void sub_00549160();
// @baa 0x005d1750
void sub_005d1750(void) { sub_00549160(); }

// @baa 0x005d19d0
bool UObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005d1a10 { void* Data; int Num; int Max; void sub_005d1a10(); };

// @baa 0x005d1a10
void C_005d1a10::sub_005d1a10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view_005d1ac0 {
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
extern undefined * g_01e729c0;
// @baa 0x005d1ac0
undefined4 * UObject::sub_005d1ac0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01e729c0);
  ((C_view_005d1ac0 *)(((char *)this + 0x10)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005d1af0
{
    char pad[8];
    int field8;
    char pad2[0x24 - 0xc];
    int field24;
    char pad3[0x38 - 0x28];
    int field38;
    int sub_005d1af0();
};

// @baa 0x005d1af0
int C_005d1af0::sub_005d1af0()
{
    return (field24 / 32 + field8 * 5 + field38) * 4;
}

struct C_view_005d5bd0 {
    int sub_005d2090(int, int);
};

// @baa 0x005d5bd0
int UObject::sub_005d5bd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_005d5bd0 *)(this))->sub_005d2090((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0x10;
  }
  return 0;
}

struct C_view_005d5c10 {
    int sub_005d21e0(int, int);
};

// @baa 0x005d5c10
int UObject::sub_005d5c10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_005d5c10 *)(this))->sub_005d21e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_005d5c90 {
    int sub_00573920(int, int);
};

// @baa 0x005d5c90
undefined4 UObject::sub_005d5c90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_005d5c90 *)(this))->sub_00573920((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
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

struct TConstSetBitIterator_005d5e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d5e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d5e60& operator++();
};

TConstSetBitIterator_005d5e60::TConstSetBitIterator_005d5e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d5e60
TConstSetBitIterator_005d5e60& TConstSetBitIterator_005d5e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d5e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d5e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d5e80& operator++();
};

TConstSetBitIterator_005d5e80::TConstSetBitIterator_005d5e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d5e80
TConstSetBitIterator_005d5e80& TConstSetBitIterator_005d5e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d64a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d64a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d64a0& operator++();
};

TConstSetBitIterator_005d64a0::TConstSetBitIterator_005d64a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d64a0
TConstSetBitIterator_005d64a0& TConstSetBitIterator_005d64a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d64c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d64c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d64c0& operator++();
};

TConstSetBitIterator_005d64c0::TConstSetBitIterator_005d64c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d64c0
TConstSetBitIterator_005d64c0& TConstSetBitIterator_005d64c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6510& operator++();
};

TConstSetBitIterator_005d6510::TConstSetBitIterator_005d6510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6510
TConstSetBitIterator_005d6510& TConstSetBitIterator_005d6510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6560& operator++();
};

TConstSetBitIterator_005d6560::TConstSetBitIterator_005d6560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6560
TConstSetBitIterator_005d6560& TConstSetBitIterator_005d6560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6580& operator++();
};

TConstSetBitIterator_005d6580::TConstSetBitIterator_005d6580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6580
TConstSetBitIterator_005d6580& TConstSetBitIterator_005d6580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d65d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d65d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d65d0& operator++();
};

TConstSetBitIterator_005d65d0::TConstSetBitIterator_005d65d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d65d0
TConstSetBitIterator_005d65d0& TConstSetBitIterator_005d65d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d65f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d65f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d65f0& operator++();
};

TConstSetBitIterator_005d65f0::TConstSetBitIterator_005d65f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d65f0
TConstSetBitIterator_005d65f0& TConstSetBitIterator_005d65f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6640& operator++();
};

TConstSetBitIterator_005d6640::TConstSetBitIterator_005d6640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6640
TConstSetBitIterator_005d6640& TConstSetBitIterator_005d6640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d67e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d67e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d67e0& operator++();
};

TConstSetBitIterator_005d67e0::TConstSetBitIterator_005d67e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d67e0
TConstSetBitIterator_005d67e0& TConstSetBitIterator_005d67e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6830& operator++();
};

TConstSetBitIterator_005d6830::TConstSetBitIterator_005d6830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6830
TConstSetBitIterator_005d6830& TConstSetBitIterator_005d6830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6850 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6850(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6850& operator++();
};

TConstSetBitIterator_005d6850::TConstSetBitIterator_005d6850(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6850
TConstSetBitIterator_005d6850& TConstSetBitIterator_005d6850::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d68a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d68a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d68a0& operator++();
};

TConstSetBitIterator_005d68a0::TConstSetBitIterator_005d68a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d68a0
TConstSetBitIterator_005d68a0& TConstSetBitIterator_005d68a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d68c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d68c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d68c0& operator++();
};

TConstSetBitIterator_005d68c0::TConstSetBitIterator_005d68c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d68c0
TConstSetBitIterator_005d68c0& TConstSetBitIterator_005d68c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d6910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d6910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d6910& operator++();
};

TConstSetBitIterator_005d6910::TConstSetBitIterator_005d6910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d6910
TConstSetBitIterator_005d6910& TConstSetBitIterator_005d6910::operator++()
{
    It.Advance();
    return *this;
}

struct C_005d6d60 {
    undefined4 sub_005d6d60(byte);
};

int sub_005d5570(void);
// @baa 0x005d6d60
undefined4 C_005d6d60::sub_005d6d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005d5570();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005d7190
{
    int field0;
    int sub_005d21e0(int a, int b);
    int sub_005d7190(int index);
};

// @baa 0x005d7190
int C_005d7190::sub_005d7190(int index)
{
    sub_005d21e0((int)&index, index);
    if (index != -1)
    {
        int* p = (int*)(field0 + index * 0x14);
        if (p)
            return p[1];
    }
    int* p = 0;
    return *p;
}

struct OuterNameObj;
struct GObj
{
    char pad[0x1c];
    GObj* Outer;
    OuterNameObj* GetOutermost();
};

extern "C" OuterNameObj* __cdecl sub_005d6930(void* p);
// @baa 0x005d7350
OuterNameObj* GObj::GetOutermost()
{
    GObj* p = this;
    while (p && p->Outer)
        p = p->Outer;
    return sub_005d6930(p);
}

struct TConstSetBitIterator_005d95b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d95b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d95b0& operator++();
};

TConstSetBitIterator_005d95b0::TConstSetBitIterator_005d95b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d95b0
TConstSetBitIterator_005d95b0& TConstSetBitIterator_005d95b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d9720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d9720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d9720& operator++();
};

TConstSetBitIterator_005d9720::TConstSetBitIterator_005d9720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d9720
TConstSetBitIterator_005d9720& TConstSetBitIterator_005d9720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d9740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d9740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d9740& operator++();
};

TConstSetBitIterator_005d9740::TConstSetBitIterator_005d9740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d9740
TConstSetBitIterator_005d9740& TConstSetBitIterator_005d9740::operator++()
{
    It.Advance();
    return *this;
}

struct C_005d9760 {
    void sub_005d9760();
    int sub_005d5ed0(int);
};

// @baa 0x005d9760
void C_005d9760::sub_005d9760(void)
{
    int param_1 = (int)this;
  ((C_005d9760 *)((*(char **)((char *)this + 0x10))))->sub_005d5ed0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005d9780 {
    void sub_005d9780();
    int sub_005d6060(int);
};

// @baa 0x005d9780
void C_005d9780::sub_005d9780(void)
{
    int param_1 = (int)this;
  ((C_005d9780 *)((*(char **)((char *)this + 0x10))))->sub_005d6060(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_005d97a0 {
    void sub_005d97a0();
    int sub_005d62c0(int);
};

// @baa 0x005d97a0
void C_005d97a0::sub_005d97a0(void)
{
    int param_1 = (int)this;
  ((C_005d97a0 *)((*(char **)((char *)this + 0x10))))->sub_005d62c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_005d9d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d9d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d9d40& operator++();
};

TConstSetBitIterator_005d9d40::TConstSetBitIterator_005d9d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d9d40
TConstSetBitIterator_005d9d40& TConstSetBitIterator_005d9d40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005d9d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005d9d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005d9d90& operator++();
};

TConstSetBitIterator_005d9d90::TConstSetBitIterator_005d9d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005d9d90
TConstSetBitIterator_005d9d90& TConstSetBitIterator_005d9d90::operator++()
{
    It.Advance();
    return *this;
}

int sub_005d8f90(int a, int b);
// @baa 0x005da0c0
int sub_005da0c0(int* a, int* b)
{
    return sub_005d8f90(*a, *b);
}

void sub_005d9600();
// @baa 0x005da9e0
void sub_005da9e0(void) { sub_005d9600(); }

void sub_005d9680();
// @baa 0x005da9f0
void sub_005da9f0(void) { sub_005d9680(); }

struct TConstSetBitIterator_005daa00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005daa00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005daa00& operator++();
};

TConstSetBitIterator_005daa00::TConstSetBitIterator_005daa00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005daa00
TConstSetBitIterator_005daa00& TConstSetBitIterator_005daa00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005daa20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005daa20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005daa20& operator++();
};

TConstSetBitIterator_005daa20::TConstSetBitIterator_005daa20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005daa20
TConstSetBitIterator_005daa20& TConstSetBitIterator_005daa20::operator++()
{
    It.Advance();
    return *this;
}

struct C_005db200 {
    int sub_005db200();
};

int sub_005d6660(void);
// @baa 0x005db200
int C_005db200::sub_005db200(void)
{
    int param_1 = (int)this;

  sub_005d6660();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005db220 {
    int sub_005db220();
};

int sub_005d66c0(void);
// @baa 0x005db220
int C_005db220::sub_005db220(void)
{
    int param_1 = (int)this;

  sub_005d66c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005db240 {
    int sub_005db240();
};

int sub_005d6720(void);
// @baa 0x005db240
int C_005db240::sub_005db240(void)
{
    int param_1 = (int)this;

  sub_005d6720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005db260 {
    int sub_005db260();
};

int sub_005d6780(void);
// @baa 0x005db260
int C_005db260::sub_005db260(void)
{
    int param_1 = (int)this;

  sub_005d6780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005db280
int sub_005db280(int* a, int* b)
{
    return sub_005d8f90(*a, *b);
}

int sub_005d55c0(void);
// @baa 0x005db320
int UTexture2D::sub_005db320(void)
{
    int param_1 = (int)this;

  sub_005d55c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005db610(void);
extern undefined4 g_026a1be4;
// @baa 0x005db8a0
void sub_005db8a0(int param_1)
{
  if ((*(int *)(param_1 + 0x44) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    g_026a1be4 = 1;
    sub_005db610();
    return;
  }
  return;
}

struct C_view_005dc140 {
    int sub_0055acf0(int, int);
};

// @baa 0x005dc140
void UUnrealEdEngine::sub_005dc140(void)
{
    int param_1 = (int)this;
  ((C_view_005dc140 *)(this))->sub_0055acf0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_005dc150 {
    int sub_005daf40(int, int);
};

// @baa 0x005dc150
undefined4 UObject::sub_005dc150(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005dc150 *)(this))->sub_005daf40(param_2, param_3);
  return param_1;
}

struct C_view_005dc170 {
    int sub_00580460(int, int);
};

// @baa 0x005dc170
void UObject::sub_005dc170(void)
{
    int param_1 = (int)this;
  ((C_view_005dc170 *)(this))->sub_00580460(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_005dc180 {
    int sub_005dafa0(int, int);
};

// @baa 0x005dc180
undefined4 UObject::sub_005dc180(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005dc180 *)(this))->sub_005dafa0(param_2, param_3);
  return param_1;
}

struct C_view_005dc1a0 {
    int sub_005db000(int, int);
};

// @baa 0x005dc1a0
int UObject::sub_005dc1a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005dc1a0 *)(this))->sub_005db000(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005dc1c0 {
    int sub_005db080(int, int);
};

// @baa 0x005dc1c0
int UObject::sub_005dc1c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005dc1c0 *)(this))->sub_005db080(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005dc1e0 {
    int sub_005db100(int, int);
};

// @baa 0x005dc1e0
int UObject::sub_005dc1e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005dc1e0 *)(this))->sub_005db100(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005dc200 {
    int sub_005db180(int, int);
};

// @baa 0x005dc200
undefined4 UObject::sub_005dc200(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005dc200 *)(this))->sub_005db180(param_2, param_3);
  return param_1;
}

struct C_005dc220 {
    int sub_005dc220();
};

// @baa 0x005dc220
int C_005dc220::sub_005dc220(void)
{
    int param_1 = (int)this;

  sub_005d6660();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005dc240 {
    int sub_005dc240();
};

// @baa 0x005dc240
int C_005dc240::sub_005dc240(void)
{
    int param_1 = (int)this;

  sub_005d66c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005dc260 {
    int sub_005dc260();
};

// @baa 0x005dc260
int C_005dc260::sub_005dc260(void)
{
    int param_1 = (int)this;

  sub_005d6720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_005dc280 {
    int sub_005dadc0(int, int);
};

// @baa 0x005dc280
void UObject::sub_005dc280(void)
{
    int param_1 = (int)this;
  ((C_view_005dc280 *)(this))->sub_005dadc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_005dc290 {
    int sub_005dc290();
};

// @baa 0x005dc290
int C_005dc290::sub_005dc290(void)
{
    int param_1 = (int)this;

  sub_005d6780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005dc840
int UTexture2D::sub_005dc840(void)
{
    int param_1 = (int)this;

  sub_005d55c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005dbcd0();
// @baa 0x005dc860
void sub_005dc860(void) { sub_005dbcd0(); }

void sub_005dbd40();
// @baa 0x005dc870
void sub_005dc870(void) { sub_005dbd40(); }

void sub_005dbc60();
// @baa 0x005dc880
void sub_005dc880(void) { sub_005dbc60(); }

struct C_005dc970 {
    undefined4 sub_005dc970(byte);
};

int sub_005dc920(void);
// @baa 0x005dc970
undefined4 C_005dc970::sub_005dc970(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005dc920();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_005dbdb0();
// @baa 0x005dc990
void sub_005dc990(void) { sub_005dbdb0(); }

struct C_view_005dccf0 {
    int sub_005daf40(int, int);
};

// @baa 0x005dccf0
int UObject::sub_005dccf0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005dccf0 *)(this))->sub_005daf40(param_2, param_4);
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
    void sub_0055acf0(int, int);
};

struct C_005dcd20 {
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
    void sub_005dcd20(void);
};

// @baa 0x005dcd20
void C_005dcd20::sub_005dcd20(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055acf0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_005dcd40 {
    int sub_005dafa0(int, int);
};

// @baa 0x005dcd40
int UObject::sub_005dcd40(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005dcd40 *)(this))->sub_005dafa0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_005dcd70 {
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
    void sub_00580460(int, int);
};

struct C_005dcd70 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_005dcd70* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_005dcd70(void);
};

// @baa 0x005dcd70
void C_005dcd70::sub_005dcd70(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00580460(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_005dcd90 {
    int sub_005dcd90();
};

// @baa 0x005dcd90
int C_005dcd90::sub_005dcd90(void)
{
    int param_1 = (int)this;

  sub_005d6660();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005dcdb0 {
    int sub_005dcdb0();
};

// @baa 0x005dcdb0
int C_005dcdb0::sub_005dcdb0(void)
{
    int param_1 = (int)this;

  sub_005d66c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005dcdd0 {
    int sub_005dcdd0();
};

// @baa 0x005dcdd0
int C_005dcdd0::sub_005dcdd0(void)
{
    int param_1 = (int)this;

  sub_005d6720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_005dcdf0 {
    int sub_005d61d0();
    int sub_005dadc0(int, int);
};

// @baa 0x005dcdf0
void UObject::sub_005dcdf0(void)
{
    int param_1 = (int)this;
  ((C_view_005dcdf0 *)(this))->sub_005d61d0();
  ((C_view_005dcdf0 *)(this))->sub_005dadc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_005dce10 {
    int sub_005dce10();
};

// @baa 0x005dce10
int C_005dce10::sub_005dce10(void)
{
    int param_1 = (int)this;

  sub_005d6780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern "C" void sub_005dc550(int a, int b);
struct C_005dce30
{
    int field0;
    int field4;
    char pad[0x2c - 8];
    int field2c;
    void sub_005dce30();
    void sub_005dc440();
};

// @baa 0x005dce30
void C_005dce30::sub_005dce30()
{
    if (field4 - field2c > 0)
    {
        sub_005dc440();
        sub_005dc550(field0, field4 - field2c);
    }
}

void sub_005dc7d0();
// @baa 0x005dce60
void sub_005dce60(void) { sub_005dc7d0(); }

// @baa 0x005dce70
int UTexture2D::sub_005dce70(void)
{
    int param_1 = (int)this;

  sub_005d55c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005dce90
void sub_005dce90(void) { sub_005dbcd0(); }

// @baa 0x005dcea0
void sub_005dcea0(void) { sub_005dbd40(); }

// @baa 0x005dceb0
void sub_005dceb0(void) { sub_005dbc60(); }

struct C_005dd3a0
{
    void sub_005dd2c0(int* p);
};

extern C_005dd3a0 g_026a1da0;
// @baa 0x005dd3a0
void sub_005dd3a0(int value)
{
    g_026a1da0.sub_005dd2c0(&value);
}

// @baa 0x005df340
void sub_005df340(void) { sub_005dbdb0(); }

struct C_005df350 {
    int sub_005df350();
};

// @baa 0x005df350
int C_005df350::sub_005df350(void)
{
    int param_1 = (int)this;

  sub_005d6660();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005df370 {
    int sub_005df370();
};

// @baa 0x005df370
int C_005df370::sub_005df370(void)
{
    int param_1 = (int)this;

  sub_005d66c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005df390 {
    int sub_005df390();
};

// @baa 0x005df390
int C_005df390::sub_005df390(void)
{
    int param_1 = (int)this;

  sub_005d6720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_005df3b0 {
    int sub_005d61d0();
    int sub_005dadc0(int, int);
};

// @baa 0x005df3b0
void UObject::sub_005df3b0(void)
{
    int param_1 = (int)this;
  ((C_view_005df3b0 *)(this))->sub_005d61d0();
  ((C_view_005df3b0 *)(this))->sub_005dadc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_005df3d0 {
    int sub_005df3d0();
};

// @baa 0x005df3d0
int C_005df3d0::sub_005df3d0(void)
{
    int param_1 = (int)this;

  sub_005d6780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005df4b0
void sub_005df4b0(void) { sub_005dc7d0(); }

// @baa 0x005df4c0
int UTexture2D::sub_005df4c0(void)
{
    int param_1 = (int)this;

  sub_005d55c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005df4e0
void sub_005df4e0(void) { sub_005dbcd0(); }

// @baa 0x005df4f0
void sub_005df4f0(void) { sub_005dbd40(); }

// @baa 0x005df500
void sub_005df500(void) { sub_005dbc60(); }

struct C_view_005df5b0 {
    int sub_005d61d0();
    int sub_005dadc0(int, int);
};

// @baa 0x005df5b0
void UObject::sub_005df5b0(void)
{
    int param_1 = (int)this;
  ((C_view_005df5b0 *)(this))->sub_005d61d0();
  ((C_view_005df5b0 *)(this))->sub_005dadc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct M_005df740 { void sub_005814d0(); };

struct C_005df740 { char pad[40]; M_005df740 m; void sub_005df740(); };

// @baa 0x005df740
void C_005df740::sub_005df740() { m.sub_005814d0(); }

// @baa 0x005df750
void sub_005df750(void) { sub_005dbdb0(); }

struct M_005df760 { void sub_00581540(); };

struct C_005df760 { char pad[4]; M_005df760 m; void sub_005df760(); };

// @baa 0x005df760
void C_005df760::sub_005df760() { m.sub_00581540(); }

struct G
{
    void sub_005dd470(void* self, int arg);
};

extern G g_026a1d64;
struct C_005df7c0
{
    char pad[8];
    QWORD ObjectFlags;
    void sub_005df7c0(int arg);
};

// @baa 0x005df7c0
void C_005df7c0::sub_005df7c0(int arg)
{
    if ((ObjectFlags & 0x4000000) || arg)
        g_026a1d64.sub_005dd470(this, arg);
}

// @baa 0x005df820
void sub_005df820(void) { sub_005dc7d0(); }

struct C_005df830 {
    int sub_005df830();
};

// @baa 0x005df830
int C_005df830::sub_005df830(void)
{
    int param_1 = (int)this;

  sub_005d6720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005df850
void sub_005df850(void) { sub_005dbd40(); }

void sub_0055b7a0();
// @baa 0x005e1950
void sub_005e1950(void) { sub_0055b7a0(); }

struct C_005e2d90 {
    undefined4 sub_005e2d90(byte);
    int sub_00581540();
};

// @baa 0x005e2d90
undefined4 C_005e2d90::sub_005e2d90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_005e2d90 *)(((char *)this + 4)))->sub_00581540();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0059c990(void);
int sub_005adee0(...);
int sub_005e1960(...);
extern undefined4 g_026667a8;
extern undefined4 g_0268d084;
// @baa 0x005e3090
void sub_005e3090(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  sub_005e1960(g_0268d084,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

void __stdcall sub_005e35a0(void *a, int b);
struct S_005e36c0 {
    void sub_005e36c0();
};

// @baa 0x005e36c0
void S_005e36c0::sub_005e36c0()
{
    sub_005e35a0(this, 1);
}

int sub_00588dd0(...);
int sub_00589470(void);
int sub_005eae70(...);
extern undefined4 g_02688448;
// @baa 0x005eb890
void sub_005eb890(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  sub_005eae70(g_02688448,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct D_01e22f30 { void sub_005cbb00(); };

extern D_01e22f30 g_026a1e04;
// @baa 0x01e22f30
void sub_01e22f30() { g_026a1e04.sub_005cbb00(); }

/* Kit gaps: the RF_/CLASS_ flags, UObject::SetFlags/HasAnyFlags (ObjectFlags is an FQWord here) and
 * UObject::LoadConfig/LoadLocalized (UnObj.cpp) aren't declared. */
#define RF_DebugPostLoad ((QWORD)0x0000000000000008)
#define RF_PerObjectConfig ((QWORD)0x0000010000000000)
#define CLASS_Config 0x00000400
struct UObject__005e59b0 : public UObject
{
	FORCEINLINE void SetFlags(QWORD NewFlags) { *(QWORD*)&ObjectFlags |= NewFlags; }
	FORCEINLINE UBOOL HasAnyFlags(QWORD Flags) const { return (*(const QWORD*)&ObjectFlags & Flags) != 0; }
	void LoadConfig(UBOOL Propagate = FALSE, UClass* Class = NULL, const TCHAR* Filename = NULL, DWORD PropagationFlags = 0);
	void LoadLocalized(UObject* LocBase = NULL, UBOOL bLoadHierachecally = FALSE);
};

// @baa 0x005e59b0
void UObject::PostLoad()
{
	// Note that it has propagated.
	((UObject__005e59b0*)this)->SetFlags(RF_DebugPostLoad);

	// Load configuration.
	if ((GetClass()->ClassFlags & CLASS_Config) || ((UObject__005e59b0*)this)->HasAnyFlags(RF_PerObjectConfig))
	{
		((UObject__005e59b0*)this)->LoadConfig();
		((UObject__005e59b0*)this)->LoadLocalized();
	}
}

// @baa 0x005d1930
/* The browser's detail columns: by default column 0 is the object's description and the rest are empty. */
FString UObject::GetDetailedDescription(INT InIndex)
{
	FString Result = TEXT("");
	if (InIndex == 0)
	{
		Result = GetDesc();
	}
	return Result;
}
