// Engine_0850000.cpp (part 1 of 3): 67 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_008515f0();
};

// @baa 0x008515f0
S16* S16::sub_008515f0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct M_00851f80 { void sub_00549160(); };

struct C { char pad[8]; M_00851f80 m; void sub_00851f80(); };

// @baa 0x00851f80
void C::sub_00851f80() { m.sub_00549160(); }

struct C_00852150 { C_00852150* sub_00852150(void); };

// @baa 0x00852150
C_00852150* C_00852150::sub_00852150(void) { return this; }

struct C_008522d0 { C_008522d0* sub_008522d0(void); };

// @baa 0x008522d0
C_008522d0* C_008522d0::sub_008522d0(void) { return this; }

struct C_008522e0 { C_008522e0* sub_008522e0(void); };

// @baa 0x008522e0
C_008522e0* C_008522e0::sub_008522e0(void) { return this; }

struct C_00853250 {
    undefined4 * sub_00853250();
};

int sub_008531c0(void);
extern undefined4 g_01f43e74;
extern undefined * g_01f43e7c;
// @baa 0x00853250
undefined4 * C_00853250::sub_00853250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_008531c0();
  *param_1 = (undefined4)(&g_01f43e7c);
  param_1[5] = (undefined4)(&g_01f43e74);
  return param_1;
}

struct C_00853290 { void sub_00852030(int); C_00853290 *sub_00853290(int); };

// @baa 0x00853290
C_00853290 *C_00853290::sub_00853290(int a) { sub_00852030(a); return this; }

struct C_008532b0 {
    undefined4 sub_008532b0(undefined4);
    int sub_00852090(int);
};

// @baa 0x008532b0
undefined4 C_008532b0::sub_008532b0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_008532b0 *)(this))->sub_00852090(param_2);
  return param_1;
}

struct C_008532d0 { void sub_008520f0(int); C_008532d0 *sub_008532d0(int); };

// @baa 0x008532d0
C_008532d0 *C_008532d0::sub_008532d0(int a) { sub_008520f0(a); return this; }

struct C_00853f90 {
    int sub_00853f90();
};

// @baa 0x00853f90
int C_00853f90::sub_00853f90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00853fb0 {
    int sub_00853fb0();
};

// @baa 0x00853fb0
int C_00853fb0::sub_00853fb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00853fc0 {
    int sub_00853fc0();
};

// @baa 0x00853fc0
int C_00853fc0::sub_00853fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 4 + *(int *)*param_1;
}

struct C_00853fd0 {
    int sub_00853fd0();
};

// @baa 0x00853fd0
int C_00853fd0::sub_00853fd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00853ff0 {
    int sub_00853ff0();
};

// @baa 0x00853ff0
int C_00853ff0::sub_00853ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00854000 {
    int sub_00854000();
};

// @baa 0x00854000
int C_00854000::sub_00854000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 4 + *(int *)*param_1;
}

struct C_00854070 {
    int sub_00854070(int);
    int sub_00852500(int, int);
};

// @baa 0x00854070
int C_00854070::sub_00854070(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00854070 *)(this))->sub_00852500((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_008540a0 {
    int sub_008540a0(int);
    int sub_00852590(int, int);
};

// @baa 0x008540a0
int C_008540a0::sub_008540a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_008540a0 *)(this))->sub_00852590((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_00854150 {
    undefined4 sub_00854150(byte);
    int sub_008495a0();
};

int sub_0053dfa0(...);
// @baa 0x00854150
undefined4 C_00854150::sub_00854150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00854150 *)(((char *)this + 8)))->sub_008495a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00854180 {
    undefined4 sub_00854180(byte);
};

int sub_00849b00(void);
// @baa 0x00854180
undefined4 C_00854180::sub_00854180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00849b00();
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

struct TConstSetBitIterator_00854360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00854360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00854360& operator++();
};

TConstSetBitIterator_00854360::TConstSetBitIterator_00854360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00854360
TConstSetBitIterator_00854360& TConstSetBitIterator_00854360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00854380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00854380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00854380& operator++();
};

TConstSetBitIterator_00854380::TConstSetBitIterator_00854380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00854380
TConstSetBitIterator_00854380& TConstSetBitIterator_00854380::operator++()
{
    It.Advance();
    return *this;
}

struct C_008543a0 {
    undefined4 * sub_008543a0(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x008543a0
undefined4 * C_008543a0::sub_008543a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_008543a0 *)(((char *)this + 8)))->sub_00551820((int)(param_2 + 2));
  return param_1;
}

struct C_008543d0 {
    undefined4 sub_008543d0(byte);
    int sub_00549160();
};

// @baa 0x008543d0
undefined4 C_008543d0::sub_008543d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_008543d0 *)(((char *)this + 0xc)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00854400 {
    undefined4 sub_00854400(byte);
    int sub_00549160();
};

// @baa 0x00854400
undefined4 C_00854400::sub_00854400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00854400 *)(((char *)this + 0xc)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00854690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00854690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00854690& operator++();
};

TConstSetBitIterator_00854690::TConstSetBitIterator_00854690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00854690
TConstSetBitIterator_00854690& TConstSetBitIterator_00854690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_008546e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_008546e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_008546e0& operator++();
};

TConstSetBitIterator_008546e0::TConstSetBitIterator_008546e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x008546e0
TConstSetBitIterator_008546e0& TConstSetBitIterator_008546e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00854730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00854730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00854730& operator++();
};

TConstSetBitIterator_00854730::TConstSetBitIterator_00854730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00854730
TConstSetBitIterator_00854730& TConstSetBitIterator_00854730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00854840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00854840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00854840& operator++();
};

TConstSetBitIterator_00854840::TConstSetBitIterator_00854840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00854840
TConstSetBitIterator_00854840& TConstSetBitIterator_00854840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00854890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00854890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00854890& operator++();
};

TConstSetBitIterator_00854890::TConstSetBitIterator_00854890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00854890
TConstSetBitIterator_00854890& TConstSetBitIterator_00854890::operator++()
{
    It.Advance();
    return *this;
}

struct C_008548e0 { void sub_00852890(int); C_008548e0 *sub_008548e0(int); };

// @baa 0x008548e0
C_008548e0 *C_008548e0::sub_008548e0(int a) { sub_00852890(a); return this; }

struct C_00854900 {
    undefined4 * sub_00854900(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x00854900
undefined4 * C_00854900::sub_00854900(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  ((C_00854900 *)(((char *)this + 0xc)))->sub_00551820((int)(param_2 + 3));
  return param_1;
}

struct C_00854930 {
    undefined4 * sub_00854930(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x00854930
undefined4 * C_00854930::sub_00854930(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  ((C_00854930 *)(((char *)this + 0xc)))->sub_00551820((int)(param_2 + 3));
  return param_1;
}

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_008531c0();
};

// @baa 0x00854db0
FGameplayObject * sub_00854db0()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x94, 8);
    if (pObject)
        return pObject->sub_008531c0();
    return 0;
}

struct C_00854f60 {
    undefined4 sub_00854f60(byte);
};

int sub_00853d80(void);
// @baa 0x00854f60
undefined4 C_00854f60::sub_00854f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00853d80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00855610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00855610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00855610& operator++();
};

TConstSetBitIterator_00855610::TConstSetBitIterator_00855610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00855610
TConstSetBitIterator_00855610& TConstSetBitIterator_00855610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00855630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00855630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00855630& operator++();
};

TConstSetBitIterator_00855630::TConstSetBitIterator_00855630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00855630
TConstSetBitIterator_00855630& TConstSetBitIterator_00855630::operator++()
{
    It.Advance();
    return *this;
}

struct C_00855880 {
    undefined4 * sub_00855880(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x00855880
undefined4 * C_00855880::sub_00855880(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  ((C_00855880 *)(((char *)this + 0xc)))->sub_00551820((int)(puVar1 + 2));
  return param_1;
}

struct C_view {
    int sub_00551820(int);
};

// @baa 0x00855960
undefined4 * UObject::sub_00855960(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  ((C_view *)(((char *)this + 0xc)))->sub_00551820((int)(puVar1 + 2));
  param_1[6] = 0xffffffff;
  return param_1;
}

// @baa 0x00855a20
undefined4 * UObject::sub_00855a20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  ((C_view *)(((char *)this + 0xc)))->sub_00551820((int)(puVar1 + 2));
  return param_1;
}

struct C_00855b00 {
    undefined4 * sub_00855b00(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x00855b00
undefined4 * C_00855b00::sub_00855b00(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  ((C_00855b00 *)(((char *)this + 0xc)))->sub_00551820((int)(puVar1 + 2));
  param_1[6] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_00855e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00855e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00855e80& operator++();
};

TConstSetBitIterator_00855e80::TConstSetBitIterator_00855e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00855e80
TConstSetBitIterator_00855e80& TConstSetBitIterator_00855e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00855ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00855ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00855ed0& operator++();
};

TConstSetBitIterator_00855ed0::TConstSetBitIterator_00855ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00855ed0
TConstSetBitIterator_00855ed0& TConstSetBitIterator_00855ed0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x008561a0
IMPLEMENT_CLASS_AT(UMorphTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 11);

// @baa 0x00856210
struct S_00856f30 { int sub_00855f20(); };

struct C_00856f30 { int a; C_00856f30(S_00856f30 *); };

// @baa 0x00856f30
C_00856f30::C_00856f30(S_00856f30 *s) : a(s->sub_00855f20()) {}

struct S_00856f50 { int sub_00855f80(); };

struct C_00856f50 { int a; C_00856f50(S_00856f50 *); };

// @baa 0x00856f50
C_00856f50::C_00856f50(S_00856f50 *s) : a(s->sub_00855f80()) {}

struct S_00856f70 { int sub_00855fe0(); };

struct C_00856f70 { int a; C_00856f70(S_00856f70 *); };

// @baa 0x00856f70
C_00856f70::C_00856f70(S_00856f70 *s) : a(s->sub_00855fe0()) {}

struct TConstSetBitIterator_00856f90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00856f90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00856f90& operator++();
};

TConstSetBitIterator_00856f90::TConstSetBitIterator_00856f90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00856f90
TConstSetBitIterator_00856f90& TConstSetBitIterator_00856f90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00856fb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00856fb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00856fb0& operator++();
};

TConstSetBitIterator_00856fb0::TConstSetBitIterator_00856fb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00856fb0
TConstSetBitIterator_00856fb0& TConstSetBitIterator_00856fb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00857190 {
    void sub_00857190();
    int sub_00855800(int);
};

// @baa 0x00857190
void C_00857190::sub_00857190(void)
{
    int param_1 = (int)this;
  ((C_00857190 *)((*(char **)((char *)this + 0x10))))->sub_00855800(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_008571b0 {
    void sub_008571b0();
    int sub_008559a0(int);
};

// @baa 0x008571b0
void C_008571b0::sub_008571b0(void)
{
    int param_1 = (int)this;
  ((C_008571b0 *)((*(char **)((char *)this + 0x10))))->sub_008559a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00857690
UINT ACoverSlotMarker::vf_378() { return 0; }

// @baa 0x008576a0
IMPLEMENT_CLASS_AT(ACoverSlotMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1637);

// @baa 0x00857700
// @baa 0x00857770
IMPLEMENT_CLASS_AT(AMantleMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1638);

// @baa 0x008577d0
// @baa 0x008578a0
IMPLEMENT_CLASS_AT(ACoverGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1636);

struct C_view_008579d0 {
    int sub_005dfd20(int);
};

int sub_00856d50(...);
// @baa 0x008579d0
void UMorphTarget::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view_008579d0 *)(this))->sub_005dfd20(param_2);
  sub_00856d50(param_2,param_1 + 0x30);
  return;
}

// @baa 0x008591d0
IMPLEMENT_CLASS_AT(UMorphNodeWeightByBoneAngle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 19);

// @baa 0x00859240
int sub_008362b0(void);
int sub_008593f0(...);
extern undefined4 g_026b55f4;
// @baa 0x008596b0
int sub_008596b0(void)
{
  if (g_026b55f4 == 0) {
    g_026b55f4 = sub_008593f0(L"Engine");
    sub_008362b0();
  }
  return g_026b55f4;
}

void sub_00858b50();
// @baa 0x00859cc0
void sub_00859cc0(void) { sub_00858b50(); }

void sub_00858bc0();
// @baa 0x00859cd0
void sub_00859cd0(void) { sub_00858bc0(); }

void sub_00859ce0();
// @baa 0x0085a0f0
void sub_0085a0f0(void) { sub_00859ce0(); }

int sub_00852a00(void);
int sub_00859740(...);
extern undefined4 g_026b55d0;
// @baa 0x0085a100
int sub_0085a100(void)
{
  if (g_026b55d0 == 0) {
    g_026b55d0 = sub_00859740(L"Engine");
    sub_00852a00();
  }
  return g_026b55d0;
}

// @baa 0x0085a280
// @baa 0x0085a390
bool UMorphNodeWeightByBoneAngle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
