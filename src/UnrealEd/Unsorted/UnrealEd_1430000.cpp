// UnrealEd_1430000.cpp: 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct A_01430cc0 { virtual void sub_01435210(); char pad[412]; };

struct B_01430cc0 { virtual void sub_01435210(); };

struct C_01430cc0 : A_01430cc0, B_01430cc0 { virtual void sub_01435210(); C_01430cc0(); };

C_01430cc0::C_01430cc0() {}

// @baa 0x01430cc0
void C_01430cc0::sub_01435210() {}

struct C {
    void sub_01431dc0(int);
};

int sub_0053df70(...);
// @baa 0x01431dc0
void C::sub_01431dc0(int param_2)
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

struct T_01431e00;
// @baa 0x01431e00
template INT TArray<T_01431e00*>::RemoveItem(T_01431e00* const&);

struct C_01431e80 {
    void sub_01431e80(int);
};

// @baa 0x01431e80
void C_01431e80::sub_01431e80(int param_2)
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

struct T_01431ec0;
// @baa 0x01431ec0
template INT TArray<T_01431ec0*>::RemoveItem(T_01431ec0* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01431f40 { void* Data; int Num; int Max; void sub_01431f40(); };

// @baa 0x01431f40
void C_01431f40::sub_01431f40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01431fa0 {
    void sub_01431fa0(int);
};

// @baa 0x01431fa0
void C_01431fa0::sub_01431fa0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_01431fe0 {
    void sub_01431fe0(int);
};

// @baa 0x01431fe0
void C_01431fe0::sub_01431fe0(int param_2)
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

struct C_01432c40 {
    undefined4 sub_01432c40(byte);
    int sub_0105ff80();
};

int sub_0053dfa0(...);
// @baa 0x01432c40
undefined4 C_01432c40::sub_01432c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01432c40 *)(((char *)this + 4)))->sub_0105ff80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01432c70 {
    undefined4 sub_01432c70(byte);
    int sub_0142b610();
};

// @baa 0x01432c70
undefined4 C_01432c70::sub_01432c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01432c70 *)(((char *)this + 4)))->sub_0142b610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01432ce0 {
    undefined4 sub_01432ce0(byte);
};

int sub_0142d170(void);
// @baa 0x01432ce0
undefined4 C_01432ce0::sub_01432ce0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142d170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01436d10 { void sub_01436920(); void sub_01436d10(int); };

// @baa 0x01436d10
void C_01436d10::sub_01436d10(int) { sub_01436920(); }

struct C_01436d20 { void sub_01436a00(); void sub_01436d20(int); };

// @baa 0x01436d20
void C_01436d20::sub_01436d20(int) { sub_01436a00(); }

struct SInner {
    int sub_014348b0();
};

struct SOuter {
    int sub_01436f10(int arg1);
    char pad[0x1b4];
    SInner* inner;
};

// @baa 0x01436f10
int SOuter::sub_01436f10(int arg1)
{
    return ((SInner *)inner)->sub_014348b0();
}

struct C_01438fd0 {
    undefined4 sub_01438fd0(byte);
};

int sub_01435110(void);
// @baa 0x01438fd0
undefined4 C_01438fd0::sub_01438fd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01435110();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01439030 { void sub_006bda00(int); C_01439030 *sub_01439030(int); };

// @baa 0x01439030
C_01439030 *C_01439030::sub_01439030(int a) { sub_006bda00(a); return this; }

struct C_014390b0 {
    int sub_014390b0(int);
    int sub_014324e0(int, int);
};

// @baa 0x014390b0
int C_014390b0::sub_014390b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_014390b0 *)(this))->sub_014324e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_014390f0 {
    int sub_014390f0(int);
    int sub_01432600(int, int);
};

// @baa 0x014390f0
int C_014390f0::sub_014390f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_014390f0 *)(this))->sub_01432600((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
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

struct TConstSetBitIterator_01439bd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439bd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439bd0& operator++();
};

TConstSetBitIterator_01439bd0::TConstSetBitIterator_01439bd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439bd0
TConstSetBitIterator_01439bd0& TConstSetBitIterator_01439bd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439e00& operator++();
};

TConstSetBitIterator_01439e00::TConstSetBitIterator_01439e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439e00
TConstSetBitIterator_01439e00& TConstSetBitIterator_01439e00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439e50& operator++();
};

TConstSetBitIterator_01439e50::TConstSetBitIterator_01439e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439e50
TConstSetBitIterator_01439e50& TConstSetBitIterator_01439e50::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a20(void);
extern undefined * g_0228f8e8;
// @baa 0x0143a210
undefined4 * UObject::sub_0143a210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0228f8e8);
  return param_1;
}

// @baa 0x0143a230
IMPLEMENT_CLASS_AT(UMaterialEditorOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\NewMaterialEditor.cpp", 19);

// @baa 0x0143a2a0
struct C_0143e200 { void sub_0143c820(int); C_0143e200 *sub_0143e200(int); };

// @baa 0x0143e200
C_0143e200 *C_0143e200::sub_0143e200(int a) { sub_0143c820(a); return this; }

void sub_0143bc00();
// @baa 0x0143e2f0
void sub_0143e2f0(void) { sub_0143bc00(); }
