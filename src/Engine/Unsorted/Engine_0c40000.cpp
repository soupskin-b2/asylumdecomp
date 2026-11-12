// Engine_0c40000.cpp (part 1 of 3): 112 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00c40120();
};

// @baa 0x00c40120
int C::sub_00c40120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00c40130 {
    int sub_00c40130();
};

// @baa 0x00c40130
int C_00c40130::sub_00c40130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
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

struct TConstSetBitIterator_00c40300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c40300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c40300& operator++();
};

TConstSetBitIterator_00c40300::TConstSetBitIterator_00c40300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c40300
TConstSetBitIterator_00c40300& TConstSetBitIterator_00c40300::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c40320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c40320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c40320& operator++();
};

TConstSetBitIterator_00c40320::TConstSetBitIterator_00c40320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c40320
TConstSetBitIterator_00c40320& TConstSetBitIterator_00c40320::operator++()
{
    It.Advance();
    return *this;
}

int sub_0053dfa0(...);
int sub_00c37e60(void);
// @baa 0x00c40340
undefined4 UObject::sub_00c40340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c37e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c3f650(void);
// @baa 0x00c40360
undefined4 UObject::sub_00c40360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c3f650();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00c40580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c40580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c40580& operator++();
};

TConstSetBitIterator_00c40580::TConstSetBitIterator_00c40580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c40580
TConstSetBitIterator_00c40580& TConstSetBitIterator_00c40580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c405d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c405d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c405d0& operator++();
};

TConstSetBitIterator_00c405d0::TConstSetBitIterator_00c405d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c405d0
TConstSetBitIterator_00c405d0& TConstSetBitIterator_00c405d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c40620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c40620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c40620& operator++();
};

TConstSetBitIterator_00c40620::TConstSetBitIterator_00c40620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c40620
TConstSetBitIterator_00c40620& TConstSetBitIterator_00c40620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c42f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c42f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c42f10& operator++();
};

TConstSetBitIterator_00c42f10::TConstSetBitIterator_00c42f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c42f10
TConstSetBitIterator_00c42f10& TConstSetBitIterator_00c42f10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c42f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c42f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c42f30& operator++();
};

TConstSetBitIterator_00c42f30::TConstSetBitIterator_00c42f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c42f30
TConstSetBitIterator_00c42f30& TConstSetBitIterator_00c42f30::operator++()
{
    It.Advance();
    return *this;
}

struct S_00c42f50 { int sub_00c40670(); };

struct C_00c42f50 { int a; C_00c42f50(S_00c42f50 *); };

// @baa 0x00c42f50
C_00c42f50::C_00c42f50(S_00c42f50 *s) : a(s->sub_00c40670()) {}

struct S_00c42f70 { int sub_00c406d0(); };

struct C_00c42f70 { int a; C_00c42f70(S_00c42f70 *); };

// @baa 0x00c42f70
C_00c42f70::C_00c42f70(S_00c42f70 *s) : a(s->sub_00c406d0()) {}

void sub_00c40380();
// @baa 0x00c43210
void sub_00c43210(void) { sub_00c40380(); }

int sub_00c380e0(void);
// @baa 0x00c432e0
int USpeechRecognition::sub_00c432e0(void)
{
    int param_1 = (int)this;

  sub_00c380e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00c38140(void);
// @baa 0x00c453e0
int USpeechRecognition::sub_00c453e0(void)
{
    int param_1 = (int)this;

  sub_00c38140();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c45400 { void sub_00c449f0(int); C_00c45400 *sub_00c45400(int); };

// @baa 0x00c45400
C_00c45400 *C_00c45400::sub_00c45400(int a) { sub_00c449f0(a); return this; }

void sub_00c45310();
// @baa 0x00c45420
void sub_00c45420(void) { sub_00c45310(); }

void sub_00c45150();
// @baa 0x00c45430
void sub_00c45430(void) { sub_00c45150(); }

struct C_00c45440 { C_00c45440* sub_00c45440(void); };

// @baa 0x00c45440
C_00c45440* C_00c45440::sub_00c45440(void) { return this; }

// @baa 0x00c45450
int USpeechRecognition::sub_00c45450(void)
{
    int param_1 = (int)this;

  sub_00c38140();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c45470 { void sub_00c449f0(int); C_00c45470 *sub_00c45470(int); };

// @baa 0x00c45470
C_00c45470 *C_00c45470::sub_00c45470(int a) { sub_00c449f0(a); return this; }

int sub_005c7a70(...);
int sub_00c45500(void);
// @baa 0x00c455c0
undefined4 USpeechRecognition::sub_00c455c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c45500();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb8);
  }
  return param_1;
}

// @baa 0x00c455f0
void sub_00c455f0(void) { sub_00c45150(); }

struct C_00c45600 { void sub_00c449f0(int); C_00c45600 *sub_00c45600(int); };

// @baa 0x00c45600
C_00c45600 *C_00c45600::sub_00c45600(int a) { sub_00c449f0(a); return this; }

// @baa 0x00c496e0
void sub_00c496e0(void)
{
  return;
}

// @baa 0x00c496f0
float10 sub_00c496f0(double param_1)
{
  return (float10)param_1;
}

struct C_00c49710 {
    undefined4 sub_00c49710(float *);
};

// @baa 0x00c49710
undefined4 C_00c49710::sub_00c49710(float * param_2)
{
    float * param_1 = (float *)this;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 0;
  }
  return 1;
}

struct C_00c49ab0 {
    void sub_00c49ab0(char, char);
};

// @baa 0x00c49ab0
void C_00c49ab0::sub_00c49ab0(char param_2, char param_3)
{
    float * param_1 = (float *)this;
  if (param_2 == '\x01') {
    *param_1 = *param_1 * -1.0;
    param_1[4] = param_1[4] * -1.0;
    param_1[8] = param_1[8] * -1.0;
    param_1[0xc] = param_1[0xc] * -1.0;
  }
  else if (param_2 == '\x02') {
    param_1[1] = param_1[1] * -1.0;
    param_1[5] = param_1[5] * -1.0;
    param_1[9] = param_1[9] * -1.0;
    param_1[0xd] = param_1[0xd] * -1.0;
  }
  else if (param_2 == '\x04') {
    param_1[2] = param_1[2] * -1.0;
    param_1[6] = param_1[6] * -1.0;
    param_1[10] = param_1[10] * -1.0;
    param_1[0xe] = param_1[0xe] * -1.0;
  }
  if (param_3 == '\x01') {
    *param_1 = *param_1 * -1.0;
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
    return;
  }
  if (param_3 == '\x02') {
    param_1[4] = param_1[4] * -1.0;
    param_1[5] = param_1[5] * -1.0;
    param_1[6] = param_1[6] * -1.0;
    return;
  }
  if (param_3 == '\x04') {
    param_1[8] = param_1[8] * -1.0;
    param_1[9] = param_1[9] * -1.0;
    param_1[10] = param_1[10] * -1.0;
  }
  return;
}

struct C_00c49c10 { void sub_00c49c10(void); };

// @baa 0x00c49c10
void C_00c49c10::sub_00c49c10(void) { *(int*)((char*)this + 4) = 0; }

// @baa 0x00c49d60
float10 sub_00c49d60(float param_1)
{
  for (; 2.0 < param_1; param_1 = param_1 - 4.0) {
  }
  for (; param_1 < -2.0; param_1 = param_1 + 4.0) {
  }
  return (float10)param_1;
}

struct C_00c49ee0 { C_00c49ee0* sub_00c49ee0(int a0); };

// @baa 0x00c49ee0
C_00c49ee0* C_00c49ee0::sub_00c49ee0(int a0) { return this; }

int sub_009d8aa0(void);
int sub_009f3480(...);
extern undefined4 g_026b6420;
// @baa 0x00c4a3d0
int sub_00c4a3d0(void)
{
  if (g_026b6420 == 0) {
    g_026b6420 = sub_009f3480(L"Engine");
    sub_009d8aa0();
  }
  return g_026b6420;
}

// @baa 0x00c4a660
int sub_00c4a660(int a0, int a1) { return a1; }

// @baa 0x00c4a670
int sub_00c4a670(int a0, int a1) { return a1; }

// @baa 0x00c4a680
int sub_00c4a680(int a0, int a1) { return a1; }

// @baa 0x00c4a690
int sub_00c4a690(int a0, int a1) { return a1; }

// @baa 0x00c4a6a0
int sub_00c4a6a0(int a0, int a1) { return a1; }

// @baa 0x00c4a6b0
int sub_00c4a6b0(int a0, int a1) { return a1; }

// @baa 0x00c4a6c0
int sub_00c4a6c0(int a0, int a1) { return a1; }

int sub_006c79d0(...);
int sub_006ca440(void);
extern undefined4 g_026b0db8;
// @baa 0x00c4a6d0
int sub_00c4a6d0(void)
{
  if (g_026b0db8 == 0) {
    g_026b0db8 = sub_006c79d0(L"Engine");
    sub_006ca440();
  }
  return g_026b0db8;
}

struct C_00c4ad10 { C_00c4ad10* sub_00c4ad10(void); };

// @baa 0x00c4ad10
C_00c4ad10* C_00c4ad10::sub_00c4ad10(void) { return this; }

struct C_00c4ad20 { int a, b; C_00c4ad20(int, int); };

// @baa 0x00c4ad20
C_00c4ad20::C_00c4ad20(int x, int y) : a(x), b(y) {}

struct C_00c4bbd0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00c4bbd0* sub_00c4bbd0(INT value);
};

// @baa 0x00c4bbd0
C_00c4bbd0* C_00c4bbd0::sub_00c4bbd0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00c4bbf0 {
    void *sub_00c4bbf0();
};

// @baa 0x00c4bbf0
void *C_00c4bbf0::sub_00c4bbf0()
{
    ((int *)this)[1]++;
    return this;
}

struct C_00c4bc30 {
    void sub_00c4bc30();
};

int sub_0053df70(...);
// @baa 0x00c4bc30
void C_00c4bc30::sub_00c4bc30(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00c4bc60 { int sub_00c4bc60(void); };

// @baa 0x00c4bc60
int C_00c4bc60::sub_00c4bc60(void) { return *(int*)((char*)this + 4); }

struct C_00c4bc70 {
    void sub_00c4bc70();
};

// @baa 0x00c4bc70
void C_00c4bc70::sub_00c4bc70(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00c4bca0 { int sub_00c4bca0(void); };

// @baa 0x00c4bca0
int C_00c4bca0::sub_00c4bca0(void) { return *(int*)((char*)this + 4); }

struct C_00c4bcb0 { int sub_00c4bcb0(void); };

// @baa 0x00c4bcb0
int C_00c4bcb0::sub_00c4bcb0(void) { return *(int*)((char*)this + 4); }

struct C_00c4bcc0 { int sub_00c4bcc0(void); };

// @baa 0x00c4bcc0
int C_00c4bcc0::sub_00c4bcc0(void) { return *(int*)((char*)this + 4); }

struct C_00c4bcd0 { int sub_00c4bcd0(void); };

// @baa 0x00c4bcd0
int C_00c4bcd0::sub_00c4bcd0(void) { return *(int*)((char*)this + 4); }

struct C_00c4bce0 { int sub_00c4bce0(void); };

// @baa 0x00c4bce0
int C_00c4bce0::sub_00c4bce0(void) { return *(int*)((char*)this + 4); }

struct C_00c4bd20 { int sub_00c4bd20(void); };

// @baa 0x00c4bd20
int C_00c4bd20::sub_00c4bd20(void) { return *(int*)((char*)this + 4); }

struct C_00c4bd30 { int sub_00c4bd30(void); };

// @baa 0x00c4bd30
int C_00c4bd30::sub_00c4bd30(void) { return *(int*)((char*)this + 4); }

struct C_00c4bd40 { C_00c4bd40* sub_00c4bd40(void); };

// @baa 0x00c4bd40
C_00c4bd40* C_00c4bd40::sub_00c4bd40(void) { *(int*)((char*)this + 2048) = 0; return this; }

struct C_00c4bd80 { void sub_00c4bd80(void); };

// @baa 0x00c4bd80
void C_00c4bd80::sub_00c4bd80(void) { *(int*)((char*)this + 2048) = 0; }

struct C_00c4bd90 { int a, b, c; C_00c4bd90(); };

// @baa 0x00c4bd90
C_00c4bd90::C_00c4bd90() : a(0), b(0), c(0) {}

struct C_00c4bda0 { int sub_00c4bda0(void); };

// @baa 0x00c4bda0
int C_00c4bda0::sub_00c4bda0(void) { return *(int*)((char*)this + 4); }

typedef uint size_t;

struct C_00c4bdb0{
void sub_00c4bdb0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00c4bdb0
void C_00c4bdb0::sub_00c4bdb0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar2;
int iVar1;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(0>param_1[1]){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+4*(param_2+param_3)),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_00c4bed0 { C_00c4bed0* sub_00c4bed0(int a0); };

// @baa 0x00c4bed0
C_00c4bed0* C_00c4bed0::sub_00c4bed0(int a0) { return this; }

struct C_00c4bee0 { C_00c4bee0* sub_00c4bee0(int a0); };

// @baa 0x00c4bee0
C_00c4bee0* C_00c4bee0::sub_00c4bee0(int a0) { return this; }

struct C_00c4bef0 { C_00c4bef0* sub_00c4bef0(int a0); };

// @baa 0x00c4bef0
C_00c4bef0* C_00c4bef0::sub_00c4bef0(int a0) { return this; }

struct C_00c4bf70 { C_00c4bf70* sub_00c4bf70(int a0); };

// @baa 0x00c4bf70
C_00c4bf70* C_00c4bf70::sub_00c4bf70(int a0) { return this; }

struct C_00c4bf80 { int sub_00c4bf80(void); };

// @baa 0x00c4bf80
int C_00c4bf80::sub_00c4bf80(void) { return *(int*)((char*)this + 0); }

struct C_00c4bf90 { int sub_00c4bf90(void); };

// @baa 0x00c4bf90
int C_00c4bf90::sub_00c4bf90(void) { return *(int*)((char*)this + 0); }

struct C_00c4c0d0 { C_00c4c0d0* sub_00c4c0d0(int a0); };

// @baa 0x00c4c0d0
C_00c4c0d0* C_00c4c0d0::sub_00c4c0d0(int a0) { return this; }

struct C_00c4c0e0 { int sub_00c4c0e0(void); };

// @baa 0x00c4c0e0
int C_00c4c0e0::sub_00c4c0e0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c0f0 { C_00c4c0f0* sub_00c4c0f0(int a0); };

// @baa 0x00c4c0f0
C_00c4c0f0* C_00c4c0f0::sub_00c4c0f0(int a0) { return this; }

struct C_00c4c100 { int sub_00c4c100(void); };

// @baa 0x00c4c100
int C_00c4c100::sub_00c4c100(void) { return *(int*)((char*)this + 0); }

struct C_00c4c110 { C_00c4c110* sub_00c4c110(int a0); };

// @baa 0x00c4c110
C_00c4c110* C_00c4c110::sub_00c4c110(int a0) { return this; }

struct C_00c4c120 { int sub_00c4c120(void); };

// @baa 0x00c4c120
int C_00c4c120::sub_00c4c120(void) { return *(int*)((char*)this + 0); }

struct C_00c4c430 { C_00c4c430* sub_00c4c430(int a0); };

// @baa 0x00c4c430
C_00c4c430* C_00c4c430::sub_00c4c430(int a0) { return this; }

struct C_00c4c440 { C_00c4c440* sub_00c4c440(int a0); };

// @baa 0x00c4c440
C_00c4c440* C_00c4c440::sub_00c4c440(int a0) { return this; }

struct C_00c4c450 { int sub_00c4c450(void); };

// @baa 0x00c4c450
int C_00c4c450::sub_00c4c450(void) { return *(int*)((char*)this + 0); }

struct C_00c4c460 { int sub_00c4c460(void); };

// @baa 0x00c4c460
int C_00c4c460::sub_00c4c460(void) { return *(int*)((char*)this + 0); }

struct C_00c4c4e0 {
    int sub_00c4c4e0(int);
};

// @baa 0x00c4c4e0
int C_00c4c4e0::sub_00c4c4e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00c4c4f0 {
    int sub_00c4c4f0();
};

// @baa 0x00c4c4f0
int C_00c4c4f0::sub_00c4c4f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00c4c500 { int a, b; C_00c4c500(int, int); };

// @baa 0x00c4c500
C_00c4c500::C_00c4c500(int x, int y) : a(x), b(y) {}

struct C_00c4c520 {
    int sub_00c4c520();
};

// @baa 0x00c4c520
int C_00c4c520::sub_00c4c520(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00c4c530 { int a, b; C_00c4c530(int, int); };

// @baa 0x00c4c530
C_00c4c530::C_00c4c530(int x, int y) : a(x), b(y) {}

struct C_00c4c550 {
    int sub_00c4c550();
};

// @baa 0x00c4c550
int C_00c4c550::sub_00c4c550(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00c4c560 { int a, b; C_00c4c560(int, int); };

// @baa 0x00c4c560
C_00c4c560::C_00c4c560(int x, int y) : a(x), b(y) {}

struct C_00c4c580 { int sub_00c4c580(void); };

// @baa 0x00c4c580
int C_00c4c580::sub_00c4c580(void) { return *(int*)((char*)this + 0); }

struct C_00c4c590 { int sub_00c4c590(void); };

// @baa 0x00c4c590
int C_00c4c590::sub_00c4c590(void) { return *(int*)((char*)this + 0); }

struct C_00c4c5a0 { int sub_00c4c5a0(void); };

// @baa 0x00c4c5a0
int C_00c4c5a0::sub_00c4c5a0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c5b0 { int sub_00c4c5b0(void); };

// @baa 0x00c4c5b0
int C_00c4c5b0::sub_00c4c5b0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c5c0 { int sub_00c4c5c0(void); };

// @baa 0x00c4c5c0
int C_00c4c5c0::sub_00c4c5c0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c5d0 { int sub_00c4c5d0(void); };

// @baa 0x00c4c5d0
int C_00c4c5d0::sub_00c4c5d0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c5e0 { int sub_00c4c5e0(void); };

// @baa 0x00c4c5e0
int C_00c4c5e0::sub_00c4c5e0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c5f0 { int sub_00c4c5f0(void); };

// @baa 0x00c4c5f0
int C_00c4c5f0::sub_00c4c5f0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c600 { int sub_00c4c600(void); };

// @baa 0x00c4c600
int C_00c4c600::sub_00c4c600(void) { return *(int*)((char*)this + 0); }

struct C_00c4c610 { int sub_00c4c610(void); };

// @baa 0x00c4c610
int C_00c4c610::sub_00c4c610(void) { return *(int*)((char*)this + 0); }

// @baa 0x00c4c620
int sub_00c4c620(int a0) { return *(int*)a0; }

// @baa 0x00c4c630
bool sub_00c4c630(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00c4c640 { int a, b; C_00c4c640(const C_00c4c640 &); };

// @baa 0x00c4c640
C_00c4c640::C_00c4c640(const C_00c4c640 &o) : a(o.a), b(o.b) {}

// @baa 0x00c4c6a0
int sub_00c4c6a0(int a0) { return *(int*)a0; }

// @baa 0x00c4c6b0
bool sub_00c4c6b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00c4c6c0 { int a, b; C_00c4c6c0(const C_00c4c6c0 &); };

// @baa 0x00c4c6c0
C_00c4c6c0::C_00c4c6c0(const C_00c4c6c0 &o) : a(o.a), b(o.b) {}

// @baa 0x00c4c720
int sub_00c4c720(int a0) { return *(int*)a0; }

// @baa 0x00c4c730
bool sub_00c4c730(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00c4c740 { int a, b; C_00c4c740(const C_00c4c740 &); };

// @baa 0x00c4c740
C_00c4c740::C_00c4c740(const C_00c4c740 &o) : a(o.a), b(o.b) {}

struct C_00c4c7a0 { int sub_00c4c7a0(void); };

// @baa 0x00c4c7a0
int C_00c4c7a0::sub_00c4c7a0(void) { return *(int*)((char*)this + 0); }

struct C_00c4c7b0 {
    int sub_00c4c7b0(int);
};

// @baa 0x00c4c7b0
int C_00c4c7b0::sub_00c4c7b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c4c7c0 {
    int sub_00c4c7c0(int);
};

// @baa 0x00c4c7c0
int C_00c4c7c0::sub_00c4c7c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c4c7d0 {
    int sub_00c4c7d0(int);
};

// @baa 0x00c4c7d0
int C_00c4c7d0::sub_00c4c7d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c4c7e0 { int sub_00c4c7e0(void); };

// @baa 0x00c4c7e0
int C_00c4c7e0::sub_00c4c7e0(void) { return *(int*)((char*)this + 20); }

struct C_00c4c7f0 { int sub_00c4c7f0(void); };

// @baa 0x00c4c7f0
int C_00c4c7f0::sub_00c4c7f0(void) { return *(int*)((char*)this + 20); }

struct C_00c4c800 { int sub_00c4c800(void); };

// @baa 0x00c4c800
int C_00c4c800::sub_00c4c800(void) { return *(int*)((char*)this + 20); }

struct C_00c4c810 { int sub_00c4c810(void); };

// @baa 0x00c4c810
int C_00c4c810::sub_00c4c810(void) { return *(int*)((char*)this + 20); }

struct C_00c4c820 { int sub_00c4c820(void); };

// @baa 0x00c4c820
int C_00c4c820::sub_00c4c820(void) { return *(int*)((char*)this + 20); }

struct C_00c4c830 { int sub_00c4c830(void); };

// @baa 0x00c4c830
int C_00c4c830::sub_00c4c830(void) { return *(int*)((char*)this + 20); }
