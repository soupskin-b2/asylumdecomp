// Engine_0a40000.cpp (part 1 of 12): 116 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00a34210(void);
int sub_00a3bb90(...);
extern undefined4 g_026b6844;
// @baa 0x00a41db0
int sub_00a41db0(void)
{
  if (g_026b6844 == 0) {
    g_026b6844 = sub_00a3bb90(L"Engine");
    sub_00a34210();
  }
  return g_026b6844;
}

// @baa 0x00a41de0
IMPLEMENT_CLASS_AT(UForceFieldShapeBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShapeBox.cpp", 13);

// @baa 0x00a41ef0
bool UForceFieldShapeBox::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a41f30
IMPLEMENT_CLASS_AT(UForceFieldShapeCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShapeCapsule.cpp", 13);

// @baa 0x00a42040
bool UForceFieldShapeCapsule::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a42080
IMPLEMENT_CLASS_AT(UForceFieldShapeSphere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShapeSphere.cpp", 13);

// @baa 0x00a42190
bool UForceFieldShapeSphere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct Sub { void sub_0064b6e0(); };

struct Obj { int a,b,c; void sub_00663370(int); Obj(int v){ sub_00663370(v);} ~Obj(){ ((Sub*)this)->sub_0064b6e0(); } };

struct Vec { float x,y,z; };

struct Sh {
 virtual void f0(){} virtual void f1(){} virtual void f2(){} virtual void f3(){} virtual void f4(){}
 virtual void f5(){} virtual void f6(){} virtual void f7(){} virtual void f8(){} virtual void f9(){}
 virtual void g0(){} virtual void g1(){} virtual void g2(){} virtual void g3(){} virtual void g4(){}
 virtual void g5(){} virtual void g6(){} virtual void g7(){} virtual void g8(){} virtual void g9(){}
 virtual void h0(){} virtual void h1(){} virtual void h2(){} virtual void h3(){} virtual void h4(){}
 virtual void h5(){} virtual void h6(){} virtual void h7(){} virtual void h8(){} virtual void h9(){}
 virtual void i0(){} virtual void i1(){} virtual void i2(){} virtual void i3(){} virtual void i4(){}
 virtual void i5(){} virtual void i6(){} virtual void i7(){} virtual void i8(){} virtual void i9(){}
 virtual void j0(){} virtual void j1(){} virtual void j2(){} virtual void j3(){} virtual void j4(){}
 virtual void j5(){} virtual void j6(){} virtual void j7(){} virtual void j8(){} virtual void j9(){}
 virtual void k0(){} virtual void k1(){} virtual void k2(){} virtual void k3(){} virtual void k4(){}
 virtual void k5(){} virtual void k6(){} virtual void k7(){} virtual void k8(){}
 virtual void target(int,int*,int);
 int sub_005d7d10(int,int,int); int sub_00a33c90(); void sub_00a33d40(Vec);
};

extern int g_026c537c, g_026c5380;
struct C {
 char p[0x1e8]; Sh* Shape; int pad; float x,y,z;
 void sub_00a425f0(float*,int,int,int,int,int);
};

// @baa 0x00a425f0
void C::sub_00a425f0(float* a,int,int,int,int,int){
 float vx0=a[0]*500.f, vy0=a[1]*500.f, vz0=a[2]*500.f;
 float nx=x+vx0, ny=y+vy0, nz=z+vz0;
 x=nx;y=ny;z=nz;
 if(nx<=0)nx=0; x=nx; if(ny<=0)ny=0; y=ny; if(nz<=0)nz=0;
 Sh* sh=Shape;
 z=nz;
 if(sh){
  int r=0;
  sh->target(sh->sub_005d7d10(g_026c537c,g_026c5380,0),&r,0);
  if(r){
   Obj o(Shape->sub_00a33c90());
   float vx=x,vy=y,vz=z;
   Vec v={vx,vy,vz};
   Shape->sub_00a33d40(v);
  }
 }
}

struct C_00a427f0 {
    void sub_00a427f0(int);
};

// @baa 0x00a427f0
void C_00a427f0::sub_00a427f0(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_2 + 8) != *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}

void sub_00a070d0();
// @baa 0x00a446c0
void sub_00a446c0(void) { sub_00a070d0(); }

struct C_00a45390 { void sub_00a3eff0(); void sub_00a45390(int); };

// @baa 0x00a45390
void C_00a45390::sub_00a45390(int) { sub_00a3eff0(); }

struct C_00a48360 { int sub_00a48360(void); };

// @baa 0x00a48360
int C_00a48360::sub_00a48360(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

extern TArray<int> g_026a1ca4;
struct C_00a48460 {
    int sub_00a48460();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00a48460
int C_00a48460::sub_00a48460()
{
    return g_026a1ca4(Index);
}

struct C_00a484c0 {
    int sub_00a484c0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00a484c0
int C_00a484c0::sub_00a484c0()
{
    return g_026a1ca4(Index);
}

struct C_00a48520 {
    int sub_00a48520(int);
};

// @baa 0x00a48520
int C_00a48520::sub_00a48520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a48530 {
    int sub_00a48530(int);
};

// @baa 0x00a48530
int C_00a48530::sub_00a48530(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00a48540 {
    int sub_00a48540(int);
};

// @baa 0x00a48540
int C_00a48540::sub_00a48540(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a48550 {
    int sub_00a48550(int);
};

// @baa 0x00a48550
int C_00a48550::sub_00a48550(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_00a48560 {
    int sub_00a48560(int);
};

// @baa 0x00a48560
int C_00a48560::sub_00a48560(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a48570 {
    int sub_00a48570();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00a48570
int C_00a48570::sub_00a48570()
{
    return g_026a1ca4(Index);
}

struct C_00a485d0 {
    int sub_00a485d0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00a485d0
int C_00a485d0::sub_00a485d0()
{
    return g_026a1ca4(Index);
}

struct C_00a48630 {
    int sub_00a48630();
};

// @baa 0x00a48630
int C_00a48630::sub_00a48630(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a48650 {
    int sub_00a48650();
};

// @baa 0x00a48650
int C_00a48650::sub_00a48650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct M_00a48670 { void sub_009e84f0(); };

struct C_00a48670 { char pad[20]; M_00a48670 m; void sub_00a48670(); };

// @baa 0x00a48670
void C_00a48670::sub_00a48670() { m.sub_009e84f0(); }

struct C_00a486e0 {
    int sub_00a486e0(int);
};

// @baa 0x00a486e0
int C_00a486e0::sub_00a486e0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00a48780 {
    int sub_00a48780(int);
};

// @baa 0x00a48780
int C_00a48780::sub_00a48780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00a48810 {
    int sub_00a48810(int);
};

// @baa 0x00a48810
int C_00a48810::sub_00a48810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a48820 {
    int sub_00a48820(int);
};

// @baa 0x00a48820
int C_00a48820::sub_00a48820(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00a48840 {
    int sub_00a48840(int);
};

// @baa 0x00a48840
int C_00a48840::sub_00a48840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00a48860 {
    int sub_00a48860(int);
};

// @baa 0x00a48860
int C_00a48860::sub_00a48860(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00a48880 {
    int sub_00a48880(int);
};

// @baa 0x00a48880
int C_00a48880::sub_00a48880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00a488a0 {
    int sub_00a488a0(int);
};

// @baa 0x00a488a0
int C_00a488a0::sub_00a488a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_00a488b0 {
    int sub_00a488b0(int);
};

// @baa 0x00a488b0
int C_00a488b0::sub_00a488b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

void sub_006be6a0();
// @baa 0x00a488c0
void sub_00a488c0(void) { sub_006be6a0(); }

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

struct TConstSetBitIterator_00a48d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48d50& operator++();
};

TConstSetBitIterator_00a48d50::TConstSetBitIterator_00a48d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48d50
TConstSetBitIterator_00a48d50& TConstSetBitIterator_00a48d50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48d70& operator++();
};

TConstSetBitIterator_00a48d70::TConstSetBitIterator_00a48d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48d70
TConstSetBitIterator_00a48d70& TConstSetBitIterator_00a48d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48d90& operator++();
};

TConstSetBitIterator_00a48d90::TConstSetBitIterator_00a48d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48d90
TConstSetBitIterator_00a48d90& TConstSetBitIterator_00a48d90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48de0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48de0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48de0& operator++();
};

TConstSetBitIterator_00a48de0::TConstSetBitIterator_00a48de0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48de0
TConstSetBitIterator_00a48de0& TConstSetBitIterator_00a48de0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48e30& operator++();
};

TConstSetBitIterator_00a48e30::TConstSetBitIterator_00a48e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48e30
TConstSetBitIterator_00a48e30& TConstSetBitIterator_00a48e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48e80& operator++();
};

TConstSetBitIterator_00a48e80::TConstSetBitIterator_00a48e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48e80
TConstSetBitIterator_00a48e80& TConstSetBitIterator_00a48e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48ea0& operator++();
};

TConstSetBitIterator_00a48ea0::TConstSetBitIterator_00a48ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48ea0
TConstSetBitIterator_00a48ea0& TConstSetBitIterator_00a48ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48ec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48ec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48ec0& operator++();
};

TConstSetBitIterator_00a48ec0::TConstSetBitIterator_00a48ec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48ec0
TConstSetBitIterator_00a48ec0& TConstSetBitIterator_00a48ec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48ee0& operator++();
};

TConstSetBitIterator_00a48ee0::TConstSetBitIterator_00a48ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48ee0
TConstSetBitIterator_00a48ee0& TConstSetBitIterator_00a48ee0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48f00& operator++();
};

TConstSetBitIterator_00a48f00::TConstSetBitIterator_00a48f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48f00
TConstSetBitIterator_00a48f00& TConstSetBitIterator_00a48f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48f50& operator++();
};

TConstSetBitIterator_00a48f50::TConstSetBitIterator_00a48f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48f50
TConstSetBitIterator_00a48f50& TConstSetBitIterator_00a48f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48fa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48fa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48fa0& operator++();
};

TConstSetBitIterator_00a48fa0::TConstSetBitIterator_00a48fa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48fa0
TConstSetBitIterator_00a48fa0& TConstSetBitIterator_00a48fa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a48ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a48ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a48ff0& operator++();
};

TConstSetBitIterator_00a48ff0::TConstSetBitIterator_00a48ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a48ff0
TConstSetBitIterator_00a48ff0& TConstSetBitIterator_00a48ff0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a49100 {
    undefined4 sub_00a49100(byte);
};

int sub_0053dfa0(...);
int sub_00a3f050(void);
// @baa 0x00a49100
undefined4 C_00a49100::sub_00a49100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a3f050();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a49dc0 {
    int sub_00a49dc0();
};

// @baa 0x00a49dc0
int C_00a49dc0::sub_00a49dc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a49de0 {
    int sub_00a49de0();
};

// @baa 0x00a49de0
int C_00a49de0::sub_00a49de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00a49df0 {
    int sub_00a49df0(int);
    int sub_00a48680(int, int);
};

// @baa 0x00a49df0
int C_00a49df0::sub_00a49df0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a49df0 *)(this))->sub_00a48680((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00a49e20 {
    int sub_00a49e20(int);
    int sub_00a486f0(int, int);
};

// @baa 0x00a49e20
int C_00a49e20::sub_00a49e20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a49e20 *)(this))->sub_00a486f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_00a49e90 {
    int sub_00a49e90(int);
    int sub_00a48790(int, int);
};

// @baa 0x00a49e90
int C_00a49e90::sub_00a49e90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a49e90 *)(this))->sub_00a48790((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_00a4a000 {
    int sub_00a4a000();
};

// @baa 0x00a4a000
int C_00a4a000::sub_00a4a000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x1c;
}

struct C_00a4a080 {
    int sub_00a4a080();
};

// @baa 0x00a4a080
int C_00a4a080::sub_00a4a080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x1c;
}

struct C_00a4a120 {
    undefined4 sub_00a4a120(byte);
    int sub_009e84f0();
};

// @baa 0x00a4a120
undefined4 C_00a4a120::sub_00a4a120(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a4a120 *)(((char *)this + 0x14)))->sub_009e84f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00a4a150 { void sub_009e84f0(); };

struct C_00a4a150 { char pad[40]; M_00a4a150 m; void sub_00a4a150(); };

// @baa 0x00a4a150
void C_00a4a150::sub_00a4a150() { m.sub_009e84f0(); }

struct TConstSetBitIterator_00a4a7e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4a7e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4a7e0& operator++();
};

TConstSetBitIterator_00a4a7e0::TConstSetBitIterator_00a4a7e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4a7e0
TConstSetBitIterator_00a4a7e0& TConstSetBitIterator_00a4a7e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4a9b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4a9b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4a9b0& operator++();
};

TConstSetBitIterator_00a4a9b0::TConstSetBitIterator_00a4a9b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4a9b0
TConstSetBitIterator_00a4a9b0& TConstSetBitIterator_00a4a9b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4aa00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4aa00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4aa00& operator++();
};

TConstSetBitIterator_00a4aa00::TConstSetBitIterator_00a4aa00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4aa00
TConstSetBitIterator_00a4aa00& TConstSetBitIterator_00a4aa00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4aa50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4aa50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4aa50& operator++();
};

TConstSetBitIterator_00a4aa50::TConstSetBitIterator_00a4aa50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4aa50
TConstSetBitIterator_00a4aa50& TConstSetBitIterator_00a4aa50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4abc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4abc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4abc0& operator++();
};

TConstSetBitIterator_00a4abc0::TConstSetBitIterator_00a4abc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4abc0
TConstSetBitIterator_00a4abc0& TConstSetBitIterator_00a4abc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4ac10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4ac10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4ac10& operator++();
};

TConstSetBitIterator_00a4ac10::TConstSetBitIterator_00a4ac10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4ac10
TConstSetBitIterator_00a4ac10& TConstSetBitIterator_00a4ac10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4ac60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4ac60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4ac60& operator++();
};

TConstSetBitIterator_00a4ac60::TConstSetBitIterator_00a4ac60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4ac60
TConstSetBitIterator_00a4ac60& TConstSetBitIterator_00a4ac60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a4acb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4acb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4acb0& operator++();
};

TConstSetBitIterator_00a4acb0::TConstSetBitIterator_00a4acb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4acb0
TConstSetBitIterator_00a4acb0& TConstSetBitIterator_00a4acb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00729620(int);
};

// @baa 0x00a4ad00
int UTexture2D::sub_00a4ad00(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00729620(param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

int sub_006f7810(void);
extern undefined * g_01fc1070;
// @baa 0x00a4ad20
undefined4 * UPrimitiveComponent::sub_00a4ad20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01fc1070);
  return param_1;
}

// @baa 0x00a4ad40
IMPLEMENT_CLASS_AT(URB_ConstraintDrawComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysConstraint.cpp", 26);

// @baa 0x00a4ada0
struct C_00a4c980 {
    undefined4 sub_00a4c980(int);
    int sub_00a486f0(int, int);
};

// @baa 0x00a4c980
undefined4 C_00a4c980::sub_00a4c980(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00a4c980 *)(this))->sub_00a486f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x1c);
  }
  return 0;
}

struct C_00a4c9c0 {
    int sub_00a4c9c0(int);
    int sub_00a48790(int, int);
};

// @baa 0x00a4c9c0
int C_00a4c9c0::sub_00a4c9c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00a4c9c0 *)(this))->sub_00a48790((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct TConstSetBitIterator_00a4cb70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4cb70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4cb70& operator++();
};

TConstSetBitIterator_00a4cb70::TConstSetBitIterator_00a4cb70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4cb70
TConstSetBitIterator_00a4cb70& TConstSetBitIterator_00a4cb70::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a4cb90 {
    void sub_00a4cb90();
    int sub_00a4a160(int);
};

// @baa 0x00a4cb90
void C_00a4cb90::sub_00a4cb90(void)
{
    int param_1 = (int)this;
  ((C_00a4cb90 *)((*(char **)((char *)this + 0x10))))->sub_00a4a160(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00a4cbb0 {
    void sub_00a4cbb0();
    int sub_00a4a3b0(int);
};

// @baa 0x00a4cbb0
void C_00a4cbb0::sub_00a4cbb0(void)
{
    int param_1 = (int)this;
  ((C_00a4cbb0 *)((*(char **)((char *)this + 0x10))))->sub_00a4a3b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00a4cbd0 {
    void sub_00a4cbd0();
    int sub_00a4a520(int);
};

// @baa 0x00a4cbd0
void C_00a4cbd0::sub_00a4cbd0(void)
{
    int param_1 = (int)this;
  ((C_00a4cbd0 *)((*(char **)((char *)this + 0x10))))->sub_00a4a520(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00a4cbf0 {
    void sub_00a4cbf0();
    int sub_00a4a680(int);
};

// @baa 0x00a4cbf0
void C_00a4cbf0::sub_00a4cbf0(void)
{
    int param_1 = (int)this;
  ((C_00a4cbf0 *)((*(char **)((char *)this + 0x10))))->sub_00a4a680(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00a4cc10 {
    undefined4 sub_00a4cc10(byte);
    int sub_009e84f0();
};

// @baa 0x00a4cc10
undefined4 C_00a4cc10::sub_00a4cc10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a4cc10 *)(((char *)this + 0x28)))->sub_009e84f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a4ccc0
int UTexture2D::sub_00a4ccc0(undefined4 * param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00729620(*param_2);
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  return param_1;
}

struct TConstSetBitIterator_00a4d3e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4d3e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4d3e0& operator++();
};

TConstSetBitIterator_00a4d3e0::TConstSetBitIterator_00a4d3e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4d3e0
TConstSetBitIterator_00a4d3e0& TConstSetBitIterator_00a4d3e0::operator++()
{
    It.Advance();
    return *this;
}

void sub_00a4ca00();
// @baa 0x00a4d610
void sub_00a4d610(void) { sub_00a4ca00(); }

void sub_00a4caf0();
// @baa 0x00a4d8b0
void sub_00a4d8b0(void) { sub_00a4caf0(); }

struct TConstSetBitIterator_00a4d8c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a4d8c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a4d8c0& operator++();
};

TConstSetBitIterator_00a4d8c0::TConstSetBitIterator_00a4d8c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a4d8c0
TConstSetBitIterator_00a4d8c0& TConstSetBitIterator_00a4d8c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00a4dbb0 {
    void sub_00a4dbb0();
    int sub_00a4cc40(int);
};

// @baa 0x00a4dbb0
void C_00a4dbb0::sub_00a4dbb0(void)
{
    int param_1 = (int)this;
  ((C_00a4dbb0 *)((*(char **)((char *)this + 0x10))))->sub_00a4cc40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00a4e8b0
IMPLEMENT_CLASS_AT(ANxForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 14);

// @baa 0x00a4e940
// @baa 0x00a4e9d0
IMPLEMENT_CLASS_AT(ANxForceFieldGeneric, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldGeneric.cpp", 14);

// @baa 0x00a4ea30
// @baa 0x00a4ea90
IMPLEMENT_CLASS_AT(ANxForceFieldRadial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldRadial.cpp", 15);

// @baa 0x00a4eaf0
// @baa 0x00a4eb50
IMPLEMENT_CLASS_AT(ANxForceFieldTornado, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldTornado.cpp", 14);

// @baa 0x00a4ebb0
// @baa 0x00a4ebe0
IMPLEMENT_CLASS_AT(ANxRadialForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 15);

// @baa 0x00a4ec40
// @baa 0x00a4ecd0
IMPLEMENT_CLASS_AT(ANxRadialCustomForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxRadialCustomForceField.cpp", 15);

// @baa 0x00a4ed30
// @baa 0x00a4ed60
IMPLEMENT_CLASS_AT(ANxTornadoAngularForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxTornadoAngularForceField.cpp", 14);

// @baa 0x00a4edc0
// @baa 0x00a4ee50
IMPLEMENT_CLASS_AT(ANxTornadoAngularForceFieldCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxTornadoForceFieldCapsule.cpp", 13);

// @baa 0x00a4eeb0
// @baa 0x00a4eee0
IMPLEMENT_CLASS_AT(ANxTornadoForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxTornadoForceField.cpp", 14);

// @baa 0x00a4ef40
// @baa 0x00a4efd0
IMPLEMENT_CLASS_AT(ANxTornadoForceFieldCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxTornadoAngularForceFieldCapsule.cpp", 13);

// @baa 0x00a4f030
void sub_006cc0f0();
// @baa 0x00a4f190
void sub_00a4f190(void) { sub_006cc0f0(); }

void sub_00a4d8e0();
// @baa 0x00a4f1a0
void sub_00a4f1a0(void) { sub_00a4d8e0(); }

struct C_00a4f920 {
    void sub_00a4f920();
    int sub_00a4de10(int, int);
};

// @baa 0x00a4f920
void C_00a4f920::sub_00a4f920(void)
{
    int param_1 = (int)this;
  ((C_00a4f920 *)(this))->sub_00a4de10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00a4f9f0 {
    undefined4 sub_00a4f9f0(undefined4, undefined4);
    int sub_00a4ded0(int, int);
};

// @baa 0x00a4f9f0
undefined4 C_00a4f9f0::sub_00a4f9f0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a4f9f0 *)(this))->sub_00a4ded0(param_2, param_3);
  return param_1;
}

struct C_00a4fa10 {
    int sub_00a4fa10(undefined4, undefined4);
    int sub_00a4df30(int, int);
};

// @baa 0x00a4fa10
int C_00a4fa10::sub_00a4fa10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00a4fa10 *)(this))->sub_00a4df30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00a4fa30 {
    int sub_00a4fa30(undefined4, undefined4);
    int sub_00a4dfa0(int, int);
};

// @baa 0x00a4fa30
int C_00a4fa30::sub_00a4fa30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00a4fa30 *)(this))->sub_00a4dfa0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00a4fa50 {
    int sub_00a4fa50(undefined4, undefined4);
    int sub_00a4e020(int, int);
};

// @baa 0x00a4fa50
int C_00a4fa50::sub_00a4fa50(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00a4fa50 *)(this))->sub_00a4e020(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00a4fa70 {
    undefined4 sub_00a4fa70(undefined4, undefined4);
    int sub_00a4e0a0(int, int);
};

// @baa 0x00a4fa70
undefined4 C_00a4fa70::sub_00a4fa70(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a4fa70 *)(this))->sub_00a4e0a0(param_2, param_3);
  return param_1;
}

struct C_00a4fa90 {
    undefined4 sub_00a4fa90(undefined4, undefined4);
    int sub_00a4e120(int, int);
};

// @baa 0x00a4fa90
undefined4 C_00a4fa90::sub_00a4fa90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a4fa90 *)(this))->sub_00a4e120(param_2, param_3);
  return param_1;
}

struct C_00a4fab0 {
    int sub_00a4fab0(undefined4, undefined4);
    int sub_00a4e1a0(int, int);
};

// @baa 0x00a4fab0
int C_00a4fab0::sub_00a4fab0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00a4fab0 *)(this))->sub_00a4e1a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00a4fad0 {
    int sub_00a4fad0(undefined4, undefined4);
    int sub_00a4e210(int, int);
};

// @baa 0x00a4fad0
int C_00a4fad0::sub_00a4fad0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00a4fad0 *)(this))->sub_00a4e210(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

void sub_00a4f220();
// @baa 0x00a4fbe0
void sub_00a4fbe0(void) { sub_00a4f220(); }

void sub_00a4f3f0();
// @baa 0x00a4fce0
void sub_00a4fce0(void) { sub_00a4f3f0(); }
