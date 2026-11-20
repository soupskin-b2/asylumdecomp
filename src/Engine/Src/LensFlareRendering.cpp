// LensFlareRendering.cpp: 33 functions
// Placed here by: neighbours 32.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

// @baa 0x00bda340
void sub_00bda340(void) {  }

// @baa 0x00bda350
int ULensFlare::sub_00bda350(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00bda360
int ULensFlare::sub_00bda360(void) { return *(int*)((char*)this + 20); }

// @baa 0x00bda370
int sub_00bda370(int a0) { return *(int*)a0; }

// @baa 0x00bda380
int sub_00bda380(int a0) { return a0; }

struct C_00bda390 { int sub_00bda390(int param_2); };
// @baa 0x00bda390
int C_00bda390::sub_00bda390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00bda3a0 { int a, b; C_00bda3a0(int, int); };

// @baa 0x00bda3a0
C_00bda3a0::C_00bda3a0(int x, int y) : a(x), b(y) {}

extern undefined4*g_026b0d94;
struct C_00bda3c0 { void sub_00bda3c0(void); };
// @baa 0x00bda3c0
void C_00bda3c0::sub_00bda3c0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(iVar1));
}
return;
}

struct C_00bda410 { int sub_00bda410(void); };
// @baa 0x00bda410
int C_00bda410::sub_00bda410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bda430 { void sub_00bda430(undefined4 * param_2); };
// @baa 0x00bda430
void C_00bda430::sub_00bda430(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00bda450 { int sub_00bda450(int param_2); };
// @baa 0x00bda450
int C_00bda450::sub_00bda450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00bda460 { int sub_00bda460(void); };
// @baa 0x00bda460
int C_00bda460::sub_00bda460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00bda4d0 { int sub_00bda4d0(void); };
// @baa 0x00bda4d0
int C_00bda4d0::sub_00bda4d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00bda4e0 { int sub_00bda4e0(void); };
// @baa 0x00bda4e0
int C_00bda4e0::sub_00bda4e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bda500 { int sub_00bda500(void); };
// @baa 0x00bda500
int C_00bda500::sub_00bda500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00bda510 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bda510& operator++();
};

// @baa 0x00bda510
FSparseArrayConstIt_00bda510& FSparseArrayConstIt_00bda510::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bda530 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bda530(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bda530
FSparseArrayConstIt_00bda530::FSparseArrayConstIt_00bda530(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00bda580 { int sub_00bda580(void); };
// @baa 0x00bda580
int C_00bda580::sub_00bda580(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bda5a0 { int sub_00bda5a0(void); };
// @baa 0x00bda5a0
int C_00bda5a0::sub_00bda5a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

struct FSparseArrayConstIt_00bda5b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bda5b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bda5b0
FSparseArrayConstIt_00bda5b0::FSparseArrayConstIt_00bda5b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bda600 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bda600& operator++();
};

// @baa 0x00bda600
FSparseArrayConstIt_00bda600& FSparseArrayConstIt_00bda600::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bda760 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bda760(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bda760
FSparseArrayConstIt_00bda760::FSparseArrayConstIt_00bda760(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bda7b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bda7b0& operator++();
};

// @baa 0x00bda7b0
FSparseArrayConstIt_00bda7b0& FSparseArrayConstIt_00bda7b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_00bda7d0(int, int);
};

struct C_00bda950 { void sub_00bda950(void); };
// @baa 0x00bda950
void C_00bda950::sub_00bda950(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00bda7d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00bda960 {
    int sub_00bda890(int, int);
};

struct C_00bda960 { undefined4 sub_00bda960(undefined4 param_2, undefined4 param_3); };
// @baa 0x00bda960
undefined4 C_00bda960::sub_00bda960(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00bda960 *)(this))->sub_00bda890(param_2, param_3);
  return param_1;
}

void sub_00bda8f0();
// @baa 0x00bda980
void sub_00bda980(void) { sub_00bda8f0(); }

struct C_view_00bda990 {
    int sub_00bda890(int, int);
};

struct C_00bda990 { int sub_00bda990(undefined4 param_2, undefined4 param_3, undefined4 param_4); };
// @baa 0x00bda990
int C_00bda990::sub_00bda990(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00bda990 *)(this))->sub_00bda890(param_2, param_4);
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
    void sub_00bda7d0(int, int);
};

struct C {
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
    void sub_00bda9c0(void);
};

// @baa 0x00bda9c0
void C::sub_00bda9c0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00bda7d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct SubObj {
    ~SubObj();
};

struct BaseObj {
    ~BaseObj();
};

struct MyClass : BaseObj {
    char pad[0x14];
    SubObj sub;
    ~MyClass();
};

// @baa 0x00bdaaf0
MyClass::~MyClass() {
}

int sub_0053dfa0(...);
int sub_00bdaaf0(void);
struct C_00bdab50 { undefined4 sub_00bdab50(byte param_2); };
// @baa 0x00bdab50
undefined4 C_00bdab50::sub_00bdab50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bdaaf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bdac90
int sub_00bdac90(void) { return 1688; }

struct C_00bdaca0 { int sub_00bdaca0(void); };
// @baa 0x00bdaca0
int C_00bdaca0::sub_00bdaca0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84) * 4;
  if (*(int *)(param_1 + 0x144) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x144) + 0x140) * 0x188 + 0x18c;
  }
  return iVar1;
}

/* LensFlareRendering.cpp's element draw order: an element index and its distance along the flare ray. */
struct FLensFlareElementOrder
{
    INT ElementIndex;
    FLOAT RayDistance;
};

/* IMPLEMENT_COMPARE_CONSTREF(FLensFlareElementOrder, LensFlareRendering, { return A.RayDistance > B.RayDistance ? 1 : -1; }) */
class CompareLensFlareRenderingFLensFlareElementOrderConstRef
{
public:
    static inline INT Compare(const FLensFlareElementOrder& A, const FLensFlareElementOrder& B) { return A.RayDistance > B.RayDistance ? 1 : -1; }
};

// @baa 0x00bbeb60
template void Sort<FLensFlareElementOrder, CompareLensFlareRenderingFLensFlareElementOrderConstRef>(FLensFlareElementOrder* First, INT Num);
