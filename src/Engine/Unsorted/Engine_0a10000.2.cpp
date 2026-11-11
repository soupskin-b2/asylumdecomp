// Engine_0a10000.cpp (part 2 of 2): 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { C* sub_00a15410(void); };

// @baa 0x00a15410
C* C::sub_00a15410(void) { return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00a15420 { void* Data; int Num; int Max; void sub_00a15420(); };

// @baa 0x00a15420
void C_00a15420::sub_00a15420() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a15560 { void* Data; int Num; int Max; void sub_00a15560(); };

// @baa 0x00a15560
void C_00a15560::sub_00a15560() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a156a0 { C_00a156a0* sub_00a156a0(void); };

// @baa 0x00a156a0
C_00a156a0* C_00a156a0::sub_00a156a0(void) { return this; }

struct C_00a156b0 { C_00a156b0* sub_00a156b0(void); };

// @baa 0x00a156b0
C_00a156b0* C_00a156b0::sub_00a156b0(void) { return this; }

struct C_00a156c0 {
    void sub_00a156c0(int);
};

int sub_0053df70(...);
// @baa 0x00a156c0
void C_00a156c0::sub_00a156c0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a15760 {
    void sub_00a15760(int);
};

// @baa 0x00a15760
void C_00a15760::sub_00a15760(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a15970 {
    int sub_00a15970(int);
};

// @baa 0x00a15970
int C_00a15970::sub_00a15970(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a15980 {
    int sub_00a15980(int);
};

// @baa 0x00a15980
int C_00a15980::sub_00a15980(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a15990 {
    int sub_00a15990();
};

// @baa 0x00a15990
int C_00a15990::sub_00a15990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00a159a0 {
    int sub_00a159a0();
};

// @baa 0x00a159a0
int C_00a159a0::sub_00a159a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a159c0 {
    int sub_00a159c0();
};

// @baa 0x00a159c0
int C_00a159c0::sub_00a159c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00a159d0 {
    int sub_00a159d0();
};

// @baa 0x00a159d0
int C_00a159d0::sub_00a159d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

void sub_00a15420();
// @baa 0x00a15a90
void sub_00a15a90(void) { sub_00a15420(); }

void sub_00a15560();
// @baa 0x00a15aa0
void sub_00a15aa0(void) { sub_00a15560(); }

struct C_00a169b0 {
    int sub_00a169b0(byte);
};

int sub_0053dfa0(...);
extern "C" __declspec(dllimport) int free(...);
// @baa 0x00a169b0
int C_00a169b0::sub_00a169b0(byte param_2)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    free(*(void **)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00a0ace0(int);
};

// @baa 0x00a1c310
void USkeletalMeshComponent::vf_264(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  int iVar2;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined4 *)(param_1 + 0x558) = 0;
    if (*(int *)(param_1 + 0x55c) != 0) {
      *(undefined4 *)(param_1 + 0x55c) = 0;
      if (*(int *)(param_1 + 0x554) != 0) {
        uVar1 = sub_0053df70(*(int *)(param_1 + 0x554),0,8);
        *(undefined4 *)(param_1 + 0x554) = uVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x54c) = 0;
    if (*(int *)(param_1 + 0x550) != 0) {
      *(undefined4 *)(param_1 + 0x550) = 0;
      if (*(int *)(param_1 + 0x548) != 0) {
        uVar1 = sub_0053df70(*(int *)(param_1 + 0x548),0,8);
        *(undefined4 *)(param_1 + 0x548) = uVar1;
      }
    }
    iVar2 = ((C_view *)((*(char **)((char *)this + 0x1dc))))->sub_00a0ace0(param_2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
  }
  return;
}

struct C_00a1f1e0{
void sub_00a1f1e0(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00a1f1e0
void C_00a1f1e0::sub_00a1f1e0(int param_2)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
iVar1=param_1[1];
iVar2=0;
if(0<iVar1){
do{
if((iVar2<0)||((iVar2>=param_1[1]&&((iVar2!=0||(0!=param_1[1])))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
param_1[1]=0;
if(param_1[2]!=param_2){
param_1[2]=param_2;
if((*param_1!=0)||(param_2!=0)){
iVar1=sub_0053df70(*param_1,param_2*0x50,8);
*param_1=iVar1;
}
}
return;
}

struct C_00a1f260{
void sub_00a1f260(int);
};

// @baa 0x00a1f260
void C_00a1f260::sub_00a1f260(int param_2)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
iVar1=param_1[1];
iVar2=0;
if(0<iVar1){
do{
if((iVar2<0)||((iVar2>=param_1[1]&&((iVar2!=0||(0!=param_1[1])))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
param_1[1]=0;
if(param_1[2]!=param_2){
param_1[2]=param_2;
if((*param_1!=0)||(param_2!=0)){
iVar1=sub_0053df70(*param_1,param_2*0x50,8);
*param_1=iVar1;
}
}
return;
}

struct C_00a1f2e0{
void sub_00a1f2e0(int);
};

// @baa 0x00a1f2e0
void C_00a1f2e0::sub_00a1f2e0(int param_2)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
iVar1=param_1[1];
iVar2=0;
if(0<iVar1){
do{
if((iVar2<0)||((iVar2>=param_1[1]&&((iVar2!=0||(param_1[1]!=0)))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
param_1[1]=0;
if(param_1[2]!=param_2){
param_1[2]=param_2;
if((*param_1!=0)||(param_2!=0)){
iVar1=sub_0053df70(*param_1,param_2*0x50,8);
*param_1=iVar1;
}
}
return;
}

struct C_00a1f360 { C_00a1f360* sub_00a1f360(void); };

// @baa 0x00a1f360
C_00a1f360* C_00a1f360::sub_00a1f360(void) { return this; }

struct C_00a1f370 { C_00a1f370* sub_00a1f370(void); };

// @baa 0x00a1f370
C_00a1f370* C_00a1f370::sub_00a1f370(void) { return this; }

struct C_00a1f440 {
    int sub_00a1f440(int);
};

// @baa 0x00a1f440
int C_00a1f440::sub_00a1f440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a1f580 {
    int sub_00a1f580(int);
};

// @baa 0x00a1f580
int C_00a1f580::sub_00a1f580(int param_2)
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

struct TConstSetBitIterator_00a1f6b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a1f6b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a1f6b0& operator++();
};

TConstSetBitIterator_00a1f6b0::TConstSetBitIterator_00a1f6b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a1f6b0
TConstSetBitIterator_00a1f6b0& TConstSetBitIterator_00a1f6b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a1f6d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a1f6d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a1f6d0& operator++();
};

TConstSetBitIterator_00a1f6d0::TConstSetBitIterator_00a1f6d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a1f6d0
TConstSetBitIterator_00a1f6d0& TConstSetBitIterator_00a1f6d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a1f720 {
    int sub_00a1f720();
};

// @baa 0x00a1f720
int C_00a1f720::sub_00a1f720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct TConstSetBitIterator_00a1f730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a1f730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a1f730& operator++();
};

TConstSetBitIterator_00a1f730::TConstSetBitIterator_00a1f730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a1f730
TConstSetBitIterator_00a1f730& TConstSetBitIterator_00a1f730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a1f750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a1f750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a1f750& operator++();
};

TConstSetBitIterator_00a1f750::TConstSetBitIterator_00a1f750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a1f750
TConstSetBitIterator_00a1f750& TConstSetBitIterator_00a1f750::operator++()
{
    It.Advance();
    return *this;
}
