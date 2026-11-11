// GFxUI_0e50000.cpp (part 1 of 2): 76 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00e50040();
};

// @baa 0x00e50040
int C::sub_00e50040(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e50050 {
    uint sub_00e50050(void);
};

// @baa 0x00e50050
uint C_00e50050::sub_00e50050(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e50060 {
    undefined4 sub_00e50060(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
// @baa 0x00e50060
undefined4 C_00e50060::sub_00e50060(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e50060 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

void sub_007249d0();
// @baa 0x00e500b0
void sub_00e500b0(void) { sub_007249d0(); }

struct A_00e500c0 { virtual void sub_00e50800(); char pad[16]; };

struct B_00e500c0 { virtual void sub_00e50800(); };

struct C_00e500c0 : A_00e500c0, B_00e500c0 { virtual void sub_00e50800(); C_00e500c0(); };

C_00e500c0::C_00e500c0() {}

// @baa 0x00e500c0
void C_00e500c0::sub_00e50800() {}

struct C_00e500d0 {
    void sub_00e500d0(undefined4, undefined4);
};

int sub_00654a90(...);
// @baa 0x00e500d0
void C_00e500d0::sub_00e500d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e500f0 {
    void sub_00e500f0(undefined4, undefined4);
};

// @baa 0x00e500f0
void C_00e500f0::sub_00e500f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e50110 {
    void sub_00e50110(undefined4, undefined4);
};

// @baa 0x00e50110
void C_00e50110::sub_00e50110(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

// @baa 0x00e50150
void __stdcall sub_00e50150(int a0, int a1) {  }

struct C_00e50820 {
    int sub_00e50820();
};

// @baa 0x00e50820
int C_00e50820::sub_00e50820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[1] * 0x10 + 0xc + *(int *)*param_1;
}

struct C_00e50880{
undefined4*sub_00e50880(undefined4*);
};

extern undefined4*g_026b0d94;
// @baa 0x00e50880
undefined4*C_00e50880::sub_00e50880(undefined4*param_2)
{
undefined4*param_1=(undefined4*)this;

int iVar1;

*param_1=*param_2;
iVar1=*(int*)param_2[1];
param_1[1]=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f0))((int)(iVar1));
}
return param_1;
}

struct C_00e508b0 { int sub_00e508b0(void); };

// @baa 0x00e508b0
int C_00e508b0::sub_00e508b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e508c0{
undefined4*sub_00e508c0(undefined4*);
};

// @baa 0x00e508c0
undefined4*C_00e508c0::sub_00e508c0(undefined4*param_2)
{
undefined4*param_1=(undefined4*)this;

int iVar1;

*param_1=*param_2;
iVar1=*(int*)param_2[1];
param_1[1]=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f0))((int)(iVar1));
}
param_1[2]=0xffffffff;
return param_1;
}

struct C_00e50d20{
int sub_00e50d20(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e50d20
int C_00e50d20::sub_00e50d20(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+4)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(*(int*)(param_1+4)));
}
if((param_2&1)){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00e50d90 {
    int sub_00e50d90(int);
};

// @baa 0x00e50d90
int C_00e50d90::sub_00e50d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e50e50 {
    int sub_00e50e50(int);
};

// @baa 0x00e50e50
int C_00e50e50::sub_00e50e50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e50e60 {
    int sub_00e50e60(int);
};

// @baa 0x00e50e60
int C_00e50e60::sub_00e50e60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e50e70 {
    int sub_00e50e70();
};

// @baa 0x00e50e70
int C_00e50e70::sub_00e50e70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e50e90 {
    int sub_00e50e90();
};

// @baa 0x00e50e90
int C_00e50e90::sub_00e50e90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e50eb0 {
    int sub_00e50eb0(int);
};

// @baa 0x00e50eb0
int C_00e50eb0::sub_00e50eb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e50ec0 { int a, b; C_00e50ec0(int, int); };

// @baa 0x00e50ec0
C_00e50ec0::C_00e50ec0(int x, int y) : a(x), b(y) {}

struct C_00e50ee0 {
    int sub_00e50ee0();
};

// @baa 0x00e50ee0
int C_00e50ee0::sub_00e50ee0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e50f00 {
    int sub_00e50f00();
};

// @baa 0x00e50f00
int C_00e50f00::sub_00e50f00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e50f20 {
    int sub_00e50f20();
};

// @baa 0x00e50f20
int C_00e50f20::sub_00e50f20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e51210 {
    undefined4 * sub_00e51210(byte);
};

extern undefined4 g_01ebb554;
// @baa 0x00e51210
undefined4 * C_00e51210::sub_00e51210(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e51230 {
    void sub_00e51230(int);
};

int sub_0053df70(...);
// @baa 0x00e51230
void C_00e51230::sub_00e51230(int param_2)
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

struct C_00e51310 { void sub_00547cb0(int); C_00e51310 *sub_00e51310(int); };

// @baa 0x00e51310
C_00e51310 *C_00e51310::sub_00e51310(int a) { sub_00547cb0(a); return this; }

int sub_00e44ca0(void);
int sub_00e49c80(...);
extern undefined4 g_026caf1c;
// @baa 0x00e51350
int sub_00e51350(void)
{
  if (g_026caf1c == 0) {
    g_026caf1c = sub_00e49c80(L"GFxUI");
    sub_00e44ca0();
  }
  return g_026caf1c;
}

struct M_00e51b60 { void sub_0040fcc0(); };

struct C_00e51b60 { char pad[12]; M_00e51b60 m; void sub_00e51b60(); };

// @baa 0x00e51b60
void C_00e51b60::sub_00e51b60() { m.sub_0040fcc0(); }

int sub_00e447b0(void);
int sub_00e49a70(...);
extern undefined4 g_026caf10;
// @baa 0x00e51ce0
int sub_00e51ce0(void)
{
  if (g_026caf10 == 0) {
    g_026caf10 = sub_00e49a70(L"GFxUI");
    sub_00e447b0();
  }
  return g_026caf10;
}

struct C_00e52500 { int sub_00e52500(void); };

// @baa 0x00e52500
int C_00e52500::sub_00e52500(void) { return *(int*)((char*)this + 8); }

struct C_00e52510 {
    undefined4 sub_00e52510();
};

// @baa 0x00e52510
undefined4 C_00e52510::sub_00e52510(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x00e52530
int sub_00e52530(void) { return 0; }

// @baa 0x00e52540
void __stdcall sub_00e52540(int a0) {  }

// @baa 0x00e52550
void __stdcall sub_00e52550(int a0) {  }

// @baa 0x00e52560
void __stdcall sub_00e52560(int a0) {  }

int sub_005eae70(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_026b2250;
// @baa 0x00e52570
undefined4 sub_00e52570(int param_1)
{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,param_1,0,0,0,1);
  return uVar1;
}

// @baa 0x00e53710
IMPLEMENT_CLASS_AT(UGFxFSCmdHandler_Kismet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 35);

// @baa 0x00e53820
bool UGFxFSCmdHandler_Kismet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00e56630();
// @baa 0x00e58ae0
void sub_00e58ae0(void) { sub_00e56630(); }

int sub_005c7a20(void);
extern undefined * g_02106fe0;
// @baa 0x00e592c0
undefined4 * UObject::sub_00e592c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02106fe0);
  return param_1;
}

// @baa 0x00e592e0
IMPLEMENT_CLASS_AT(UGFxMovieInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIMovie.cpp", 42);

// @baa 0x00e59380
struct C_00e59fa0 {
    undefined4 sub_00e59fa0(byte);
};

int sub_00e53160(void);
// @baa 0x00e59fa0
undefined4 C_00e59fa0::sub_00e59fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e53160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e5c740 { C_00e5c740* sub_00e5c740(void); };

// @baa 0x00e5c740
C_00e5c740* C_00e5c740::sub_00e5c740(void) { return this; }

struct C_00e5c800 { C_00e5c800* sub_00e5c800(void); };

// @baa 0x00e5c800
C_00e5c800* C_00e5c800::sub_00e5c800(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_00e4c110();
// @baa 0x00e5c810
void sub_00e5c810(void) { sub_00e4c110(); }

struct C_00e5c960 {
    int sub_00e5c960(int);
};

// @baa 0x00e5c960
int C_00e5c960::sub_00e5c960(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e5c990 {
    int sub_00e5c990(int);
};

// @baa 0x00e5c990
int C_00e5c990::sub_00e5c990(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e5c9a0 {
    int sub_00e5c9a0(int);
    int sub_00e58480(int, int);
};

// @baa 0x00e5c9a0
int C_00e5c9a0::sub_00e5c9a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00e5c9a0 *)(this))->sub_00e58480((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00e5c9d0 {
    int sub_00e5c9d0();
};

// @baa 0x00e5c9d0
int C_00e5c9d0::sub_00e5c9d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e5c9f0 {
    int sub_00e5c9f0();
};

// @baa 0x00e5c9f0
int C_00e5c9f0::sub_00e5c9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

int sub_0040fcc0(void);
// @baa 0x00e5ca00
undefined4 UObject::sub_00e5ca00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e5ca20 {
    undefined4 sub_00e5ca20(byte);
};

int sub_00e58380(void);
// @baa 0x00e5ca20
undefined4 C_00e5ca20::sub_00e5ca20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e58380();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e5cac0 {
    int sub_00e5cac0(int);
};

// @baa 0x00e5cac0
int C_00e5cac0::sub_00e5cac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e5cb20 {
    int sub_00e5cb20(int);
};

// @baa 0x00e5cb20
int C_00e5cb20::sub_00e5cb20(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_00e5cd90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5cd90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5cd90& operator++();
};

TConstSetBitIterator_00e5cd90::TConstSetBitIterator_00e5cd90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5cd90
TConstSetBitIterator_00e5cd90& TConstSetBitIterator_00e5cd90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5cdb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5cdb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5cdb0& operator++();
};

TConstSetBitIterator_00e5cdb0::TConstSetBitIterator_00e5cdb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5cdb0
TConstSetBitIterator_00e5cdb0& TConstSetBitIterator_00e5cdb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5cdd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5cdd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5cdd0& operator++();
};

TConstSetBitIterator_00e5cdd0::TConstSetBitIterator_00e5cdd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5cdd0
TConstSetBitIterator_00e5cdd0& TConstSetBitIterator_00e5cdd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ce20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ce20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ce20& operator++();
};

TConstSetBitIterator_00e5ce20::TConstSetBitIterator_00e5ce20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ce20
TConstSetBitIterator_00e5ce20& TConstSetBitIterator_00e5ce20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ce70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ce70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ce70& operator++();
};

TConstSetBitIterator_00e5ce70::TConstSetBitIterator_00e5ce70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ce70
TConstSetBitIterator_00e5ce70& TConstSetBitIterator_00e5ce70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ce90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ce90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ce90& operator++();
};

TConstSetBitIterator_00e5ce90::TConstSetBitIterator_00e5ce90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ce90
TConstSetBitIterator_00e5ce90& TConstSetBitIterator_00e5ce90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ceb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ceb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ceb0& operator++();
};

TConstSetBitIterator_00e5ceb0::TConstSetBitIterator_00e5ceb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ceb0
TConstSetBitIterator_00e5ceb0& TConstSetBitIterator_00e5ceb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5cf00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5cf00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5cf00& operator++();
};

TConstSetBitIterator_00e5cf00::TConstSetBitIterator_00e5cf00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5cf00
TConstSetBitIterator_00e5cf00& TConstSetBitIterator_00e5cf00::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a70(...);
int sub_00e5d260(void);
// @baa 0x00e5d2d0
undefined4 UGFxEngine::sub_00e5d2d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e5d260();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x40);
  }
  return param_1;
}

struct C_00e5db10 {
    undefined4 * sub_00e5db10(undefined4 *);
    int sub_00e5c8a0(int);
};

// @baa 0x00e5db10
undefined4 * C_00e5db10::sub_00e5db10(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  ((C_00e5db10 *)(((char *)this + 0x18)))->sub_00e5c8a0((int)(param_2 + 6));
  return param_1;
}

struct C_00e5df60 { C_00e5df60* sub_00e5df60(void); };

// @baa 0x00e5df60
C_00e5df60* C_00e5df60::sub_00e5df60(void) { return this; }

struct C_00e5dfd0 {
    int sub_00e5dfd0();
};

// @baa 0x00e5dfd0
int C_00e5dfd0::sub_00e5dfd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e5dff0 {
    int sub_00e5dff0();
};

// @baa 0x00e5dff0
int C_00e5dff0::sub_00e5dff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

struct C_00e5e110 {
    int sub_00e5e110(int);
    int sub_00e5ca40(int, int);
};

// @baa 0x00e5e110
int C_00e5e110::sub_00e5e110(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00e5e110 *)(this))->sub_00e5ca40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct TConstSetBitIterator_00e5edd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5edd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5edd0& operator++();
};

TConstSetBitIterator_00e5edd0::TConstSetBitIterator_00e5edd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5edd0
TConstSetBitIterator_00e5edd0& TConstSetBitIterator_00e5edd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ee20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ee20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ee20& operator++();
};

TConstSetBitIterator_00e5ee20::TConstSetBitIterator_00e5ee20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ee20
TConstSetBitIterator_00e5ee20& TConstSetBitIterator_00e5ee20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ef30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ef30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ef30& operator++();
};

TConstSetBitIterator_00e5ef30::TConstSetBitIterator_00e5ef30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ef30
TConstSetBitIterator_00e5ef30& TConstSetBitIterator_00e5ef30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e5ef80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e5ef80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e5ef80& operator++();
};

TConstSetBitIterator_00e5ef80::TConstSetBitIterator_00e5ef80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e5ef80
TConstSetBitIterator_00e5ef80& TConstSetBitIterator_00e5ef80::operator++()
{
    It.Advance();
    return *this;
}

struct FGFxHandler { void sub_00e52fa0(INT Argument); };

extern FGFxHandler* g_026caed4;
struct UGFxInteraction_ : UGFxInteraction { void sub_00e53860(INT Argument); };

// @baa 0x00e53860
void UGFxInteraction_::sub_00e53860(INT Argument)
{
    if (g_026caed4 && Argument)
        g_026caed4->sub_00e52fa0(Argument);
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C_00e5db00
{
    char pad_00[0x8];
    long Counter;

    void sub_00e5db00();
};

// @baa 0x00e5db00
void C_00e5db00::sub_00e5db00()
{
    InterlockedExchangeAdd(&Counter, 1);
}
