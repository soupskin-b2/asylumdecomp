// UnMisc.cpp (part 1 of 2): 38 functions
// Placed here by: neighbours 25, class 6, callers 4, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_004162b0(); };

// @baa 0x004162b0
void C::sub_004162b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00417fb0
IMPLEMENT_CLASS_AT(UObjectSerializer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnMisc.cpp", 133);

// @baa 0x00418020
struct S_005fa090 {
    void sub_005f9b90();
    void sub_005fa090();
};

// @baa 0x005fa090
void __thiscall S_005fa090::sub_005fa090() {
    this->sub_005f9b90();
}

// @baa 0x0062c2a0
// @baa 0x0062c3b0
int UObjectSerializer::vf_000(void) { return 1; }

// @baa 0x0062c3c0
bool UObjectSerializer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006311e0(...);
int sub_017fbf40(...);
extern undefined4 g_01eaa908;
extern undefined4 g_026aee4c;
// @baa 0x006315a0
void sub_006315a0(void)
{
  int iVar1;
  
  if (g_026aee4c == 0) {
    iVar1 = sub_017fbf40(0x2020,2,4,4,4,4,4,4,4,0x18);
    if (iVar1 != 0) {
      sub_006311e0("lzo_init() == LZO_E_OK",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnMisc.cpp"
                   ,0x15c5,&g_01eaa908);
    }
  }
  return;
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

struct TConstSetBitIterator_00632ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00632ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00632ca0& operator++();
};

TConstSetBitIterator_00632ca0::TConstSetBitIterator_00632ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00632ca0
TConstSetBitIterator_00632ca0& TConstSetBitIterator_00632ca0::operator++()
{
    It.Advance();
    return *this;
}

struct E { BYTE Bytes[36]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00632cf0(INT Index);
};

// @baa 0x00632cf0
E* S::sub_00632cf0(INT Index)
{
    return &Items(Index);
}

struct T_00637110;
// @baa 0x00637110
template INT TArray<T_00637110*>::RemoveItem(T_00637110* const&);

struct C_00637190 { void* Data; int Num; int Max; void sub_00637190(); };

// @baa 0x00637190
void C_00637190::sub_00637190() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006371f0 {
    void sub_006371f0(int);
};

int sub_0053df70(...);
// @baa 0x006371f0
void C_006371f0::sub_006371f0(int param_2)
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

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00637630
undefined4 * UObject::sub_00637630(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_00637860 { void* Data; int Num; int Max; void sub_00637860(); };

// @baa 0x00637860
void C_00637860::sub_00637860() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006378d0 {
    void sub_006378d0(int);
};

// @baa 0x006378d0
void C_006378d0::sub_006378d0(int param_2)
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

// @baa 0x00638440
FString sub_00638440()
{
    return TEXT("..\\Engine\\");
}

struct C_006385d0 { int a, b, c; C_006385d0(); };

// @baa 0x006385d0
C_006385d0::C_006385d0() : a(0), b(0), c(0) {}

// @baa 0x0063f290
void sub_00639e10();
// @baa 0x0063f2c0
void sub_0063f2c0(void) { sub_00639e10(); }

// @baa 0x0063f2d0
// @baa 0x00640fe0
USystem::USystem()
{
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
    void sub_00639a00(int, int);
};

struct C_00642ab0 {
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
    void sub_00642ab0(void);
};

// @baa 0x00642ab0
void C_00642ab0::sub_00642ab0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00639a00(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00642fa0
IMPLEMENT_CLASS_AT(USystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnMisc.cpp", 5222);

int sub_005c7a70(...);
int sub_00642e60(void);
// @baa 0x00642fb0
undefined4 USystem::sub_00642fb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00642e60();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xf0);
  }
  return param_1;
}

// @baa 0x006454f0
int sub_005e1960(...);
int sub_0062d880(void);
int sub_006454f0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026acbb0;
// @baa 0x006459d0
void sub_006459d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbb0 == 0) {
    g_026acbb0 = sub_006454f0(L"Core");
    sub_0062d880();
  }
  sub_005e1960(g_026acbb0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_00646370 {
    int sub_00646370();
};

int sub_00637910(void);
// @baa 0x00646370
int C_00646370::sub_00646370(void)
{
    int param_1 = (int)this;

  sub_00637910();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct Inner { void sub_0055bc20(int param_1); };

struct Outer {
    char _pad[4];
    Inner m;
    void sub_00646470();
};

// @baa 0x00646470
void Outer::sub_00646470() {
    m.sub_0055bc20(0);
}

struct C_00646480 {
    void sub_00646480();
    int sub_00646270(int);
};

// @baa 0x00646480
void C_00646480::sub_00646480(void)
{
    int param_1 = (int)this;
  ((C_00646480 *)((*(char **)((char *)this + 0x1c))))->sub_00646270(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct C_00646490 {
    void sub_00646490();
    int sub_00646270(int);
};

// @baa 0x00646490
void C_00646490::sub_00646490(void)
{
    int param_1 = (int)this;
  ((C_00646490 *)((*(char **)((char *)this + 0x10))))->sub_00646270(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00646520 {
    int sub_00646520();
};

// @baa 0x00646520
int C_00646520::sub_00646520(void)
{
    int param_1 = (int)this;

  sub_00637910();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006469f0 {
    void sub_006469f0();
    int sub_00646270(int);
};

// @baa 0x006469f0
void C_006469f0::sub_006469f0(void)
{
    int param_1 = (int)this;
  ((C_006469f0 *)((*(char **)((char *)this + 0x1c))))->sub_00646270(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

void sub_006464b0();
// @baa 0x00646a10
void sub_00646a10(void) { sub_006464b0(); }

struct C_00646a20 {
    int sub_00646a20();
};

// @baa 0x00646a20
int C_00646a20::sub_00646a20(void)
{
    int param_1 = (int)this;

  sub_00637910();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct S_00646c50 {
    void sub_006464b0();
    void sub_00646c50();
};

// @baa 0x00646c50
void S_00646c50::sub_00646c50()
{
    this->sub_006464b0();
}

struct C_00646c60 {
    int sub_00646c60();
};

// @baa 0x00646c60
int C_00646c60::sub_00646c60(void)
{
    int param_1 = (int)this;

  sub_00637910();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00646c80
void sub_00646c80(void) { sub_006464b0(); }
