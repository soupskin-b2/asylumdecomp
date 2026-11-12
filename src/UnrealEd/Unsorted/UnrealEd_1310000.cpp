// UnrealEd_1310000.cpp (part 1 of 3): 56 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01310360
IMPLEMENT_CLASS_AT(UASVSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimSetViewerMain.cpp", 19);

// @baa 0x01310470
int UASVSkelComponent::vf_000(void) { return 1; }

// @baa 0x01310480
bool UASVSkelComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d7ce8;
extern undefined4 g_026d7cec;
extern undefined4 g_026d7cf0;
// @baa 0x013104c0
undefined * sub_013104c0(void)
{
  if ((g_026d7cf0 & 1) == 0) {
    g_026d7cf0 = g_026d7cf0 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d7ce8 = (undefined4)(&g_026af518);
    g_026d7cec = (undefined4)(L"HASVSocketProxy");
  }
  return (undefined *)(&g_026d7ce8);
}

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x01310520
undefined4 UObject::sub_01310520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d7cf4;
extern undefined4 g_026d7cf8;
extern undefined4 g_026d7cfc;
// @baa 0x01310540
undefined * sub_01310540(void)
{
  if ((g_026d7cfc & 1) == 0) {
    g_026d7cfc = g_026d7cfc | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d7cf4 = (undefined4)(&g_026af518);
    g_026d7cf8 = (undefined4)(L"HASVNotifyProxy");
  }
  return (undefined *)(&g_026d7cf4);
}

// @baa 0x013105a0
undefined4 UObject::sub_013105a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { int sub_01310640(void); };

// @baa 0x01310640
int C::sub_01310640(void) { return *(int*)((char*)this + 836); }

class wxEvent;
class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C_013108d0;
};

struct C_013108d0 {
    void sub_013108d0(wxEvent *);
    int sub_0130ec50(int);
};

// @baa 0x013108d0
void C_013108d0::sub_013108d0(wxEvent * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(int *)(param_1 + 0x42c) != 0) {
    iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
    if (iVar1 == 0x3ff9) {
      ((C_013108d0 *)(this))->sub_0130ec50(1);
      return;
    }
    if (iVar1 == 0x3ffa) {
      sub_0130ec50(0);
    }
  }
  return;
}

struct C_01310960 { int a, b, c; C_01310960(); };

// @baa 0x01310960
C_01310960::C_01310960() : a(0), b(0), c(0) {}

struct C_01310970 { int a, b, c; C_01310970(); };

// @baa 0x01310970
C_01310970::C_01310970() : a(0), b(0), c(0) {}

struct C_013109f0 { int sub_013109f0(void); };

// @baa 0x013109f0
int C_013109f0::sub_013109f0(void) { return *(int*)((char*)this + 0); }

struct C_01310a00 { int sub_01310a00(void); };

// @baa 0x01310a00
int C_01310a00::sub_01310a00(void) { return *(int*)((char*)this + 0); }

struct C_01310a10 { int sub_01310a10(void); };

// @baa 0x01310a10
int C_01310a10::sub_01310a10(void) { return *(int*)((char*)this + 0); }

struct C_01310a20 {
    int sub_01310a20(int);
};

// @baa 0x01310a20
int C_01310a20::sub_01310a20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01310a30 {
    int sub_01310a30();
};

// @baa 0x01310a30
int C_01310a30::sub_01310a30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01310a40 {
    int sub_01310a40();
};

// @baa 0x01310a40
int C_01310a40::sub_01310a40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01310a50 {
    int sub_01310a50();
};

// @baa 0x01310a50
int C_01310a50::sub_01310a50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

// @baa 0x01310a60
undefined4 sub_01310a60(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_01310a80 { int sub_01310a80(void); };

// @baa 0x01310a80
int C_01310a80::sub_01310a80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x01310ac0
bool sub_01310ac0(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

struct C_01310ae0 { int sub_01310ae0(void); };

// @baa 0x01310ae0
int C_01310ae0::sub_01310ae0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x01310b20
bool sub_01310b20(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

struct C_01310b40 { int sub_01310b40(void); };

// @baa 0x01310b40
int C_01310b40::sub_01310b40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01310b70 { int sub_01310b70(void); };

// @baa 0x01310b70
int C_01310b70::sub_01310b70(void) { return *(int*)((char*)this + 0); }

struct C_01310b80 { int sub_01310b80(void); };

// @baa 0x01310b80
int C_01310b80::sub_01310b80(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_01310b90(INT Index);
};

// @baa 0x01310b90
E* S::sub_01310b90(INT Index)
{
    return &Items(Index);
}

struct C_01310c70 {
    int sub_01310c70(int);
};

// @baa 0x01310c70
int C_01310c70::sub_01310c70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01310c90 {
    int sub_01310c90(int);
};

// @baa 0x01310c90
int C_01310c90::sub_01310c90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01310cb0 {
    int sub_01310cb0(int);
};

// @baa 0x01310cb0
int C_01310cb0::sub_01310cb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01310cc0 { int sub_01310cc0(void); };

// @baa 0x01310cc0
int C_01310cc0::sub_01310cc0(void) { return *(int*)((char*)this + 20); }

struct C_01310cd0 { int sub_01310cd0(void); };

// @baa 0x01310cd0
int C_01310cd0::sub_01310cd0(void) { return *(int*)((char*)this + 20); }

struct C_01310ce0 {
    int sub_01310ce0(int);
};

// @baa 0x01310ce0
int C_01310ce0::sub_01310ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01310cf0 {
    int sub_01310cf0(int);
};

// @baa 0x01310cf0
int C_01310cf0::sub_01310cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01310d00 {
    int sub_01310d00(int);
};

// @baa 0x01310d00
int C_01310d00::sub_01310d00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01310d10 { int sub_01310d10(void); };

// @baa 0x01310d10
int C_01310d10::sub_01310d10(void) { return *(int*)((char*)this + 20); }

struct C_01310d20 { int sub_01310d20(void); };

// @baa 0x01310d20
int C_01310d20::sub_01310d20(void) { return *(int*)((char*)this + 20); }

struct C_01310d30 { int sub_01310d30(void); };

// @baa 0x01310d30
int C_01310d30::sub_01310d30(void) { return *(int*)((char*)this + 20); }

struct C_01310d40 { int sub_01310d40(void); };

// @baa 0x01310d40
int C_01310d40::sub_01310d40(void) { return *(int*)((char*)this + 20); }

// @baa 0x01310db0
void sub_01310db0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01310e00
void sub_01310e00(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_01310f70 {
    undefined4 sub_01310f70(byte);
};

int sub_0130f7a0(void);
// @baa 0x01310f70
undefined4 C_01310f70::sub_01310f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0130f7a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01311640 {
    undefined4 sub_01311640(byte);
};

int sub_013105c0(void);
// @baa 0x01311640
undefined4 C_01311640::sub_01311640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013105c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

typedef uint size_t;

struct C_01311e60 {
    int sub_01311e60(int);
    int sub_01310980(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01311e60
int C_01311e60::sub_01311e60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01311e60 *)(this))->sub_01310980(param_2);
  sub_01a37612((void *)(iVar1 * 0x34 + *param_1),0,param_2 * 0x34);
  return iVar1;
}

struct E_01311e90 { BYTE Bytes[16]; };

struct S_01311e90 {
    TArray<E_01311e90> Items; // 0x00
    const E_01311e90* sub_01311e90(INT Index) const;
};

// @baa 0x01311e90
const E_01311e90* S_01311e90::sub_01311e90(INT Index) const
{
    return &Items(Index);
}

struct S_01311ee0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01311ee0(INT Index);
};

// @baa 0x01311ee0
QWORD* S_01311ee0::sub_01311ee0(INT Index)
{
    return &Items(Index);
}

struct S_01311f30 {
    TArray<E> Items; // 0x00
    const E* sub_01311f30(INT Index) const;
};

// @baa 0x01311f30
const E* S_01311f30::sub_01311f30(INT Index) const
{
    return &Items(Index);
}

struct C_01311f80 {
    int sub_01311f80(int);
};

// @baa 0x01311f80
int C_01311f80::sub_01311f80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x01311f90
void __stdcall sub_01311f90(int a0, int a1) {  }

struct C_01311fa0{
int sub_01311fa0(undefined4*);
};

undefined4 sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x01311fa0
int C_01311fa0::sub_01311fa0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

// @baa 0x01312010
void __stdcall sub_01312010(int a0, int a1) {  }

struct C_01312020 {
    int sub_01312020(int);
};

// @baa 0x01312020
int C_01312020::sub_01312020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
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

struct TConstSetBitIterator_0131e8c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131e8c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131e8c0& operator++();
};

TConstSetBitIterator_0131e8c0::TConstSetBitIterator_0131e8c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131e8c0
TConstSetBitIterator_0131e8c0& TConstSetBitIterator_0131e8c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131e8e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131e8e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131e8e0& operator++();
};

TConstSetBitIterator_0131e8e0::TConstSetBitIterator_0131e8e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131e8e0
TConstSetBitIterator_0131e8e0& TConstSetBitIterator_0131e8e0::operator++()
{
    It.Advance();
    return *this;
}

class wxTreeItemId
{
public:
    __declspec(dllimport) operator bool() const;
};

// @baa 0x01310c80
INT sub_01310c80(wxTreeItemId* Id)
{
    return *Id;
}

// @baa 0x01310ca0
INT sub_01310ca0(wxTreeItemId* Id)
{
    return *Id;
}
