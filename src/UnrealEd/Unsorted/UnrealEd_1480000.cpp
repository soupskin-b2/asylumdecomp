// UnrealEd_1480000.cpp (part 1 of 2): 111 functions
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

struct TConstSetBitIterator_014826d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014826d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014826d0& operator++();
};

TConstSetBitIterator_014826d0::TConstSetBitIterator_014826d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014826d0
TConstSetBitIterator_014826d0& TConstSetBitIterator_014826d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014826f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014826f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014826f0& operator++();
};

TConstSetBitIterator_014826f0::TConstSetBitIterator_014826f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014826f0
TConstSetBitIterator_014826f0& TConstSetBitIterator_014826f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_0147abe0();
};

int sub_0053dfa0(...);
// @baa 0x01482710
undefined4 UObject::sub_01482710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 4)))->sub_0147abe0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_014824d0();
// @baa 0x01482740
void sub_01482740(void) { sub_014824d0(); }

struct TConstSetBitIterator_014829c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014829c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014829c0& operator++();
};

TConstSetBitIterator_014829c0::TConstSetBitIterator_014829c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014829c0
TConstSetBitIterator_014829c0& TConstSetBitIterator_014829c0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0147ebb0(void);
// @baa 0x014829e0
undefined4 UObject::sub_014829e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0147ebb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_01482a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482a00& operator++();
};

TConstSetBitIterator_01482a00::TConstSetBitIterator_01482a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482a00
TConstSetBitIterator_01482a00& TConstSetBitIterator_01482a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482a50& operator++();
};

TConstSetBitIterator_01482a50::TConstSetBitIterator_01482a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482a50
TConstSetBitIterator_01482a50& TConstSetBitIterator_01482a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482aa0& operator++();
};

TConstSetBitIterator_01482aa0::TConstSetBitIterator_01482aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482aa0
TConstSetBitIterator_01482aa0& TConstSetBitIterator_01482aa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482af0& operator++();
};

TConstSetBitIterator_01482af0::TConstSetBitIterator_01482af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482af0
TConstSetBitIterator_01482af0& TConstSetBitIterator_01482af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482b10& operator++();
};

TConstSetBitIterator_01482b10::TConstSetBitIterator_01482b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482b10
TConstSetBitIterator_01482b10& TConstSetBitIterator_01482b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482b30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482b30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482b30& operator++();
};

TConstSetBitIterator_01482b30::TConstSetBitIterator_01482b30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482b30
TConstSetBitIterator_01482b30& TConstSetBitIterator_01482b30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482b50& operator++();
};

TConstSetBitIterator_01482b50::TConstSetBitIterator_01482b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482b50
TConstSetBitIterator_01482b50& TConstSetBitIterator_01482b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482b70& operator++();
};

TConstSetBitIterator_01482b70::TConstSetBitIterator_01482b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482b70
TConstSetBitIterator_01482b70& TConstSetBitIterator_01482b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482bc0& operator++();
};

TConstSetBitIterator_01482bc0::TConstSetBitIterator_01482bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482bc0
TConstSetBitIterator_01482bc0& TConstSetBitIterator_01482bc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482c10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482c10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482c10& operator++();
};

TConstSetBitIterator_01482c10::TConstSetBitIterator_01482c10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482c10
TConstSetBitIterator_01482c10& TConstSetBitIterator_01482c10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01482c60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01482c60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01482c60& operator++();
};

TConstSetBitIterator_01482c60::TConstSetBitIterator_01482c60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01482c60
TConstSetBitIterator_01482c60& TConstSetBitIterator_01482c60::operator++()
{
    It.Advance();
    return *this;
}

int sub_0147f390(...);
// @baa 0x01483080
void sub_01483080(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_0147f390(param_1,param_2,param_3,0,0);
  return;
}

int sub_0147f5f0(void);
// @baa 0x014839a0
undefined4 UFMODReverbLabelRenderer::sub_014839a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0147f5f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0128f7e0(void);
// @baa 0x01484390
undefined4 UUnrealEdEngine::sub_01484390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0128f7e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 sub_014843b0(byte);
};

int sub_014815e0(void);
// @baa 0x014843b0
undefined4 C::sub_014843b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014815e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014859b0 {
    undefined4 * sub_014859b0(undefined4 *);
    int sub_014821f0(int);
};

// @baa 0x014859b0
undefined4 * C_014859b0::sub_014859b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_014859b0 *)(((char *)this + 8)))->sub_014821f0((int)(param_2 + 2));
  return param_1;
}

void sub_00d51dc0();
// @baa 0x01485be0
void sub_01485be0(void) { sub_00d51dc0(); }

void sub_014822c0();
// @baa 0x01485cc0
void sub_01485cc0(void) { sub_014822c0(); }

struct C_01485cd0 {
    int sub_01485cd0(int);
    int sub_014825b0(int, int);
};

// @baa 0x01485cd0
int C_01485cd0::sub_01485cd0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01485cd0 *)(this))->sub_014825b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_01485d00 {
    int sub_01485d00(int);
    int sub_01482640(int, int);
};

// @baa 0x01485d00
int C_01485d00::sub_01485d00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01485d00 *)(this))->sub_01482640((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct TConstSetBitIterator_01485d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01485d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01485d90& operator++();
};

TConstSetBitIterator_01485d90::TConstSetBitIterator_01485d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01485d90
TConstSetBitIterator_01485d90& TConstSetBitIterator_01485d90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01485db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01485db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01485db0& operator++();
};

TConstSetBitIterator_01485db0::TConstSetBitIterator_01485db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01485db0
TConstSetBitIterator_01485db0& TConstSetBitIterator_01485db0::operator++()
{
    It.Advance();
    return *this;
}

void sub_01482e60();
// @baa 0x01486ed0
void sub_01486ed0(void) { sub_01482e60(); }

// @baa 0x01486f50
void sub_01486f50(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_0147f390(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01482e60(...);
// @baa 0x01486f80
void sub_01486f80(undefined4 param_1, undefined4 param_2, undefined4 param_3, code * param_4)
{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_01482e60(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    sub_01482e60(param_3,param_2);
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_01482e60(param_2,param_1);
  }
  return;
}

struct C_01487100 { C_01487100* sub_01487100(void); };

// @baa 0x01487100
C_01487100* C_01487100::sub_01487100(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_022a8580;
// @baa 0x01487110
undefined4 * UObject::sub_01487110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a8580);
  return param_1;
}

// @baa 0x01487130
IMPLEMENT_CLASS_AT(URGenericBrowserType_FMODReverb, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\RGenericBrowserType_FMODReverb.cpp", 12);

// @baa 0x01487190
extern undefined * g_022a86c0;
// @baa 0x014871b0
undefined4 * UObject::sub_014871b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a86c0);
  return param_1;
}

// @baa 0x014871d0
IMPLEMENT_CLASS_AT(URGenericBrowserType_FMODSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\RGenericBrowserType_FMODSound.cpp", 10);

// @baa 0x01487230
extern undefined * g_022a8800;
// @baa 0x01487250
undefined4 * UObject::sub_01487250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a8800);
  return param_1;
}

// @baa 0x01487270
IMPLEMENT_CLASS_AT(URGenericBrowserType_MixBin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\RGenericBrowserType_MixBin.cpp", 11);

// @baa 0x014872d0
struct M_01489030 { void sub_01485bf0(); };

struct C_01489030 { char pad[8]; M_01489030 m; void sub_01489030(); };

// @baa 0x01489030
void C_01489030::sub_01489030() { m.sub_01485bf0(); }

struct C_01489040{
undefined4 sub_01489040(int);
int sub_01201110(int,uint);
};

// @baa 0x01489040
undefined4 C_01489040::sub_01489040(int param_2)
{
int iVar1;
int param_1=(int)this;
((C_01489040*)(((char*)this+0x1c4)))->sub_01201110((int)(&param_2),param_2);
if(((param_2!=-1)&&(iVar1=*(int*)(param_1+0x1c4)+param_2*0x18,0!=iVar1))&&
(iVar1=iVar1+0xc,iVar1!=0)){
iVar1=(*(int(__stdcall**)(int))(**(undefined4**)(param_1+0x1c0)+0x2e0))((int)(iVar1));
return*(undefined4*)(8+iVar1);
}
return 0;
}

struct C_014898d0 {
    int sub_014898d0(int);
    int sub_014825b0(int, int);
};

// @baa 0x014898d0
int C_014898d0::sub_014898d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_014898d0 *)(this))->sub_014825b0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_01489910 {
    int sub_01489910(int);
    int sub_01482640(int, int);
};

// @baa 0x01489910
int C_01489910::sub_01489910(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_01489910 *)(this))->sub_01482640((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_01489a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01489a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01489a90& operator++();
};

TConstSetBitIterator_01489a90::TConstSetBitIterator_01489a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01489a90
TConstSetBitIterator_01489a90& TConstSetBitIterator_01489a90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01489ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01489ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01489ab0& operator++();
};

TConstSetBitIterator_01489ab0::TConstSetBitIterator_01489ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01489ab0
TConstSetBitIterator_01489ab0& TConstSetBitIterator_01489ab0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01489ad0 { void sub_0060d780(int); C_01489ad0 *sub_01489ad0(int); };

// @baa 0x01489ad0
C_01489ad0 *C_01489ad0::sub_01489ad0(int a) { sub_0060d780(a); return this; }

struct C_view_01489b70 {
    int sub_01485e10(int);
};

// @baa 0x01489b70
void UObject::sub_01489b70(void)
{
    int param_1 = (int)this;
  ((C_view_01489b70 *)((*(char **)((char *)this + 0x10))))->sub_01485e10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_01489b90 {
    int sub_01485f70(int);
};

// @baa 0x01489b90
void UObject::sub_01489b90(void)
{
    int param_1 = (int)this;
  ((C_view_01489b90 *)((*(char **)((char *)this + 0x10))))->sub_01485f70(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_01489bb0();
// @baa 0x01489f10
void sub_01489f10(void) { sub_01489bb0(); }

struct TConstSetBitIterator_0148a3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0148a3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0148a3b0& operator++();
};

TConstSetBitIterator_0148a3b0::TConstSetBitIterator_0148a3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0148a3b0
TConstSetBitIterator_0148a3b0& TConstSetBitIterator_0148a3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0148a400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0148a400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0148a400& operator++();
};

TConstSetBitIterator_0148a400::TConstSetBitIterator_0148a400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0148a400
TConstSetBitIterator_0148a400& TConstSetBitIterator_0148a400::operator++()
{
    It.Advance();
    return *this;
}

int sub_01486ee0(...);
// @baa 0x0148a4d0
void sub_0148a4d0(int param_1, int param_2, undefined4 param_3)
{
  if (1 < (param_2 - param_1) / 0x1c) {
    sub_01486ee0(param_1,param_2,param_3,0,0);
  }
  return;
}

struct C_0148a5b0 { void sub_00553180(int); C_0148a5b0 *sub_0148a5b0(int); };

// @baa 0x0148a5b0
C_0148a5b0 *C_0148a5b0::sub_0148a5b0(int a) { sub_00553180(a); return this; }

struct C_0148a7e0 { void sub_0148a6f0(int); C_0148a7e0 *sub_0148a7e0(int); };

// @baa 0x0148a7e0
C_0148a7e0 *C_0148a7e0::sub_0148a7e0(int a) { sub_0148a6f0(a); return this; }

extern undefined * g_022a8940;
// @baa 0x0148a800
undefined4 * UObject::sub_0148a800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a8940);
  return param_1;
}

// @baa 0x0148a820
IMPLEMENT_CLASS_AT(UScriptDataBaseCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ScriptDatabaseBuilder.cpp", 3431);

// @baa 0x0148a880
struct C_0148aed0 {
    undefined4 * sub_0148aed0(undefined4 *);
    int sub_01489870(int);
};

// @baa 0x0148aed0
undefined4 * C_0148aed0::sub_0148aed0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_0148aed0 *)(((char *)this + 8)))->sub_01489870((int)(param_2 + 2));
  return param_1;
}

void sub_01489af0();
// @baa 0x0148af00
void sub_0148af00(void) { sub_01489af0(); }

struct C_0148b050 {
    void sub_0148b050();
    int sub_01489da0(int);
};

// @baa 0x0148b050
void C_0148b050::sub_0148b050(void)
{
    int param_1 = (int)this;
  ((C_0148b050 *)((*(char **)((char *)this + 0x10))))->sub_01489da0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_0148b460 {
    int sub_0148b3d0(int);
};

// @baa 0x0148b460
int UObject::sub_0148b460(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_0148b460 *)(this))->sub_0148b3d0(param_2);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}

struct C_0148b750 {
    int sub_0148b750();
};

int sub_014866c0(void);
// @baa 0x0148b750
int C_0148b750::sub_0148b750(void)
{
    int param_1 = (int)this;

  sub_014866c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0148b770 {
    int sub_0148b770();
};

int sub_01486720(void);
// @baa 0x0148b770
int C_0148b770::sub_0148b770(void)
{
    int param_1 = (int)this;

  sub_01486720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01486780(void);
// @baa 0x0148b790
int UTexture2D::sub_0148b790(void)
{
    int param_1 = (int)this;

  sub_01486780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0148bcb0 {
    int sub_00547da0(int);
    int sub_0148a6f0(int);
};

// @baa 0x0148bcb0
int URFMODSound::sub_0148bcb0(int param_2)
{
    int param_1 = (int)this;
  ((C_view_0148bcb0 *)(this))->sub_00547da0(param_2);
  ((C_view_0148bcb0 *)(((char *)this + 0xc)))->sub_0148a6f0(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

struct C_0148c740 {
    void sub_0148c740();
    int sub_0148b250(int, int);
};

// @baa 0x0148c740
void C_0148c740::sub_0148c740(void)
{
    int param_1 = (int)this;
  ((C_0148c740 *)(this))->sub_0148b250(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_0148c860 {
    int sub_0148b310(int, int);
};

// @baa 0x0148c860
void UObject::sub_0148c860(void)
{
    int param_1 = (int)this;
  ((C_view_0148c860 *)(this))->sub_0148b310(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_0148c870 {
    int sub_0148b480(int, int);
};

// @baa 0x0148c870
undefined4 UObject::sub_0148c870(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0148c870 *)(this))->sub_0148b480(param_2, param_3);
  return param_1;
}

struct C_view_0148c890 {
    int sub_0148b4e0(int, int);
};

// @baa 0x0148c890
undefined4 UObject::sub_0148c890(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0148c890 *)(this))->sub_0148b4e0(param_2, param_3);
  return param_1;
}

struct C_view_0148c8b0 {
    int sub_0148b540(int, int);
};

// @baa 0x0148c8b0
int UObject::sub_0148c8b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0148c8b0 *)(this))->sub_0148b540(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0148c8d0 {
    int sub_0148b5b0(int, int);
};

// @baa 0x0148c8d0
int UObject::sub_0148c8d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0148c8d0 *)(this))->sub_0148b5b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0148c8f0 {
    int sub_0148b630(int, int);
};

// @baa 0x0148c8f0
int UObject::sub_0148c8f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0148c8f0 *)(this))->sub_0148b630(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0148c910 {
    int sub_0148b6b0(int, int);
};

// @baa 0x0148c910
int UObject::sub_0148c910(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0148c910 *)(this))->sub_0148b6b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0148b070(void);
// @baa 0x0148c930
undefined4 UObject::sub_0148c930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0148b070();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0148c950 {
    int sub_0148c950();
};

// @baa 0x0148c950
int C_0148c950::sub_0148c950(void)
{
    int param_1 = (int)this;

  sub_014866c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0148c970 {
    int sub_0148c970();
};

// @baa 0x0148c970
int C_0148c970::sub_0148c970(void)
{
    int param_1 = (int)this;

  sub_01486720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0148c990
int UTexture2D::sub_0148c990(void)
{
    int param_1 = (int)this;

  sub_01486780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0148bbd0();
// @baa 0x0148cb80
void sub_0148cb80(void) { sub_0148bbd0(); }

void sub_0148c380();
// @baa 0x0148d160
void sub_0148d160(void) { sub_0148c380(); }

void sub_0148c3f0();
// @baa 0x0148d170
void sub_0148d170(void) { sub_0148c3f0(); }

void sub_0148c460();
// @baa 0x0148d180
void sub_0148d180(void) { sub_0148c460(); }

void sub_0148c6e0();
// @baa 0x0148d210
void sub_0148d210(void) { sub_0148c6e0(); }

struct C_view_0148d260 {
    int sub_0148b480(int, int);
};

// @baa 0x0148d260
int UObject::sub_0148d260(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_0148d260 *)(this))->sub_0148b480(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_view_0148d2b0 {
    int sub_0148b4e0(int, int);
};

// @baa 0x0148d2b0
int UObject::sub_0148d2b0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_0148d2b0 *)(this))->sub_0148b4e0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_0148d300 {
    int sub_0148d300();
};

// @baa 0x0148d300
int C_0148d300::sub_0148d300(void)
{
    int param_1 = (int)this;

  sub_014866c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0148d3e0 {
    int sub_0148d3e0();
};

// @baa 0x0148d3e0
int C_0148d3e0::sub_0148d3e0(void)
{
    int param_1 = (int)this;

  sub_01486720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0148d400
int UTexture2D::sub_0148d400(void)
{
    int param_1 = (int)this;

  sub_01486780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0148d610 {
    void sub_0148d610();
    int sub_0148c9b0(int);
};

// @baa 0x0148d610
void C_0148d610::sub_0148d610(void)
{
    int param_1 = (int)this;
  ((C_0148d610 *)((*(char **)((char *)this + 0x10))))->sub_0148c9b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0148d630 {
    int sub_0148d630();
};

int sub_014867e0(void);
// @baa 0x0148d630
int C_0148d630::sub_0148d630(void)
{
    int param_1 = (int)this;

  sub_014867e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0148cb90();
// @baa 0x0148d790
void sub_0148d790(void) { sub_0148cb90(); }

void sub_0148ccf0();
// @baa 0x0148d7a0
void sub_0148d7a0(void) { sub_0148ccf0(); }

int sub_0148ccf0(...);
// @baa 0x0148d820
void sub_0148d820(undefined4 param_1, undefined4 param_2, undefined4 param_3, code * param_4)
{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_0148ccf0(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    sub_0148ccf0(param_3,param_2);
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_0148ccf0(param_2,param_1);
  }
  return;
}

int sub_0148cef0(...);
// @baa 0x0148d880
void sub_0148d880(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_0148cef0(param_1,param_2,param_3,0,0);
  return;
}

// @baa 0x0148d8d0
void sub_0148d8d0(void) { sub_0148c380(); }

// @baa 0x0148e9d0
void sub_0148e9d0(void) { sub_0148c3f0(); }

struct C_0148f510 {
    void sub_0148f510();
    int sub_012139a0(int);
};

// @baa 0x0148f510
void C_0148f510::sub_0148f510(void)
{
    int param_1 = (int)this;
  ((C_0148f510 *)(this))->sub_012139a0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

struct C_0148f520 {
    int sub_0148f520();
};

// @baa 0x0148f520
int C_0148f520::sub_0148f520(void)
{
    int param_1 = (int)this;

  sub_014866c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0148f6f0 {
    int sub_0148f6f0();
};

// @baa 0x0148f6f0
int C_0148f6f0::sub_0148f6f0(void)
{
    int param_1 = (int)this;

  sub_01486720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0148f710
int UTexture2D::sub_0148f710(void)
{
    int param_1 = (int)this;

  sub_01486780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0148d420();
// @baa 0x0148f730
void sub_0148f730(void) { sub_0148d420(); }

struct C_0148f7f0 {
    int sub_0148f7f0();
};

// @baa 0x0148f7f0
int C_0148f7f0::sub_0148f7f0(void)
{
    int param_1 = (int)this;

  sub_014867e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0148d650(...);
// @baa 0x0148f810
void sub_0148f810(int param_1, int param_2, undefined4 param_3)
{
  sub_0148d650(param_1,param_2,(param_2 - param_1) / 0x1c,param_3);
  return;
}

int sub_0148d7b0(...);
// @baa 0x0148fa30
void sub_0148fa30(int param_1, int param_2, undefined4 param_3)
{
  if (1 < (param_2 - param_1) / 0x1c) {
    sub_0148d7b0(param_1,param_2,param_3,0,0);
  }
  return;
}

// @baa 0x0148fb40
void sub_0148fb40(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_0148cef0(param_1,param_2,param_3,0,0);
  }
  return;
}

// @baa 0x0148fbc0
void sub_0148fbc0(void) { sub_0148c380(); }

// @baa 0x0148fd00
int sub_0148fd00(void) { return 1; }

// @baa 0x0148fd10
int sub_0148fd10(void) { return 1; }

// @baa 0x0148fd20
int sub_0148fd20(void) { return 1; }

struct A_0148fd30 { virtual void sub_01497880(); };

struct B_0148fd30 { virtual void sub_01497880(); };

struct C_0148fd30 : A_0148fd30, B_0148fd30 { virtual void sub_01497880(); C_0148fd30(); };

C_0148fd30::C_0148fd30() {}

// @baa 0x0148fd30
void C_0148fd30::sub_01497880() {}
