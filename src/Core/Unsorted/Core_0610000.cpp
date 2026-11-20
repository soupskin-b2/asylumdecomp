// Core_0610000.cpp: 114 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00610000 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610000& operator++();
};

// @baa 0x00610000
FSparseArrayConstIt_00610000& FSparseArrayConstIt_00610000::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_0060c5f0(int);
};

struct C_00610020 { void sub_00610020(void); };
// @baa 0x00610020
void C_00610020::sub_00610020(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x10))))->sub_0060c5f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00610040 {
    int sub_005d6340(int);
};

struct C_00610040 { void sub_00610040(void); };
// @baa 0x00610040
void C_00610040::sub_00610040(void)
{
    int param_1 = (int)this;
  ((C_view_00610040 *)((*(char **)((char *)this + 0x10))))->sub_005d6340(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00610060 {
    int sub_0060ce70(int);
};

struct C_00610060 { void sub_00610060(void); };
// @baa 0x00610060
void C_00610060::sub_00610060(void)
{
    int param_1 = (int)this;
  ((C_view_00610060 *)((*(char **)((char *)this + 0x10))))->sub_0060ce70(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00610080 {
    int sub_0060d000(int);
};

struct C_00610080 { void sub_00610080(void); };
// @baa 0x00610080
void C_00610080::sub_00610080(void)
{
    int param_1 = (int)this;
  ((C_view_00610080 *)((*(char **)((char *)this + 0x10))))->sub_0060d000(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_006100a0 {
    int sub_0060d190(int);
};

struct C_006100a0 { void sub_006100a0(void); };
// @baa 0x006100a0
void C_006100a0::sub_006100a0(void)
{
    int param_1 = (int)this;
  ((C_view_006100a0 *)((*(char **)((char *)this + 0x10))))->sub_0060d190(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_006100c0 {
    int sub_0060d330(int);
};

struct C_006100c0 { void sub_006100c0(void); };
// @baa 0x006100c0
void C_006100c0::sub_006100c0(void)
{
    int param_1 = (int)this;
  ((C_view_006100c0 *)((*(char **)((char *)this + 0x10))))->sub_0060d330(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_006100e0 {
    int sub_0060d490(int);
};

struct C_006100e0 { void sub_006100e0(void); };
// @baa 0x006100e0
void C_006100e0::sub_006100e0(void)
{
    int param_1 = (int)this;
  ((C_view_006100e0 *)((*(char **)((char *)this + 0x10))))->sub_0060d490(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00610100 {
    int sub_0060d5f0(int);
};

struct C_00610100 { void sub_00610100(void); };
// @baa 0x00610100
void C_00610100::sub_00610100(void)
{
    int param_1 = (int)this;
  ((C_view_00610100 *)((*(char **)((char *)this + 0x10))))->sub_0060d5f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_006103d0 {
    int sub_00555160(int);
};

struct C_006103d0 { undefined4 * sub_006103d0(int * param_2); };
// @baa 0x006103d0
undefined4 * C_006103d0::sub_006103d0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view_006103d0 *)(((char *)this + 8)))->sub_00555160(param_2[1]);
  return param_1;
}

struct C_view_00610400 {
    int sub_00555160(int);
};

struct C_00610400 { undefined4 * sub_00610400(int * param_2); };
// @baa 0x00610400
undefined4 * C_00610400::sub_00610400(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view_00610400 *)(((char *)this + 8)))->sub_00555160(param_2[1]);
  param_1[5] = 0xffffffff;
  return param_1;
}

struct C_view_006104b0 {
    int sub_00610430(int);
};

struct C_006104b0 { int sub_006104b0(undefined4 param_2); };
// @baa 0x006104b0
int C_006104b0::sub_006104b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_006104b0 *)(this))->sub_00610430(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

struct FSparseArrayConstIt_00610d30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610d30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00610d30
FSparseArrayConstIt_00610d30::FSparseArrayConstIt_00610d30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00610d80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610d80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00610d80
FSparseArrayConstIt_00610d80::FSparseArrayConstIt_00610d80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00610dd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610dd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00610dd0
FSparseArrayConstIt_00610dd0::FSparseArrayConstIt_00610dd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00610e20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610e20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00610e20
FSparseArrayConstIt_00610e20::FSparseArrayConstIt_00610e20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00610e70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610e70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00610e70
FSparseArrayConstIt_00610e70::FSparseArrayConstIt_00610e70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00610ec0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00610ec0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00610ec0
FSparseArrayConstIt_00610ec0::FSparseArrayConstIt_00610ec0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006114c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006114c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006114c0
FSparseArrayConstIt_006114c0::FSparseArrayConstIt_006114c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00611610 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611610(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00611610
FSparseArrayConstIt_00611610::FSparseArrayConstIt_00611610(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00611660 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611660(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00611660
FSparseArrayConstIt_00611660::FSparseArrayConstIt_00611660(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00611b40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611b40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00611b40
FSparseArrayConstIt_00611b40::FSparseArrayConstIt_00611b40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_0053dfa0(...);
int sub_0060c4b0(void);
struct C_00611b90 { undefined4 sub_00611b90(byte param_2); };
// @baa 0x00611b90
undefined4 C_00611b90::sub_00611b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0060c4b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_00611bb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611bb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00611bb0
FSparseArrayConstIt_00611bb0::FSparseArrayConstIt_00611bb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00611c00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611c00& operator++();
};

// @baa 0x00611c00
FSparseArrayConstIt_00611c00& FSparseArrayConstIt_00611c00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00611c20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611c20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00611c20
FSparseArrayConstIt_00611c20::FSparseArrayConstIt_00611c20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00611c70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00611c70& operator++();
};

// @baa 0x00611c70
FSparseArrayConstIt_00611c70& FSparseArrayConstIt_00611c70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct M_00612810 { void sub_0060fc90(); };

struct C { char pad[12]; M_00612810 m; void sub_00612810(); };

// @baa 0x00612810
void C::sub_00612810() { m.sub_0060fc90(); }

int sub_0060ee40(void);
struct C_00612820 { undefined4 sub_00612820(byte param_2); };
// @baa 0x00612820
undefined4 C_00612820::sub_00612820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0060ee40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FData {
    INT X;
    INT Y;
    INT Z;
};

struct C_00614c10 {
    void sub_00614c10(FData *p);
};

// @baa 0x00614c10
void C_00614c10::sub_00614c10(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

int sub_0060a2e0(void);
struct C_00614d00 { int sub_00614d00(void); };
// @baa 0x00614d00
int C_00614d00::sub_00614d00(void)
{
    int param_1 = (int)this;

  sub_0060a2e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00616080 {
    int sub_006133f0(int, int);
};

struct C_00616080 { void sub_00616080(void); };
// @baa 0x00616080
void C_00616080::sub_00616080(void)
{
    int param_1 = (int)this;
  ((C_view_00616080 *)(this))->sub_006133f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00616340 {
    int sub_005dae80(int, int);
};

struct C_00616340 { void sub_00616340(void); };
// @baa 0x00616340
void C_00616340::sub_00616340(void)
{
    int param_1 = (int)this;
  ((C_view_00616340 *)(this))->sub_005dae80(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00616350 {
    int sub_00613570(int, int);
};

struct C_00616350 { void sub_00616350(void); };
// @baa 0x00616350
void C_00616350::sub_00616350(void)
{
    int param_1 = (int)this;
  ((C_view_00616350 *)(this))->sub_00613570(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00616360 {
    int sub_00613630(int, int);
};

struct C_00616360 { void sub_00616360(void); };
// @baa 0x00616360
void C_00616360::sub_00616360(void)
{
    int param_1 = (int)this;
  ((C_view_00616360 *)(this))->sub_00613630(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct FSparseArrayConstIt_00616370 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00616370(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00616370
FSparseArrayConstIt_00616370::FSparseArrayConstIt_00616370(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006163c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006163c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006163c0
FSparseArrayConstIt_006163c0::FSparseArrayConstIt_006163c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_00616410 {
    int sub_00613790(int, int);
};

struct C_00616410 { undefined4 sub_00616410(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616410
undefined4 C_00616410::sub_00616410(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00616410 *)(this))->sub_00613790(param_2, param_3);
  return param_1;
}

int sub_0060d830(void);
struct C_00616430 { int sub_00616430(void); };
// @baa 0x00616430
int C_00616430::sub_00616430(void)
{
    int param_1 = (int)this;

  sub_0060d830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct FSparseArrayConstIt_00616450 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00616450(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00616450
FSparseArrayConstIt_00616450::FSparseArrayConstIt_00616450(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_006164a0 {
    int sub_00613860(int, int);
};

struct C_006164a0 { undefined4 sub_006164a0(undefined4 param_2, undefined4 param_3); };
// @baa 0x006164a0
undefined4 C_006164a0::sub_006164a0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_006164a0 *)(this))->sub_00613860(param_2, param_3);
  return param_1;
}

struct C_view_006164c0 {
    int sub_006138c0(int, int);
};

struct C_006164c0 { undefined4 sub_006164c0(undefined4 param_2, undefined4 param_3); };
// @baa 0x006164c0
undefined4 C_006164c0::sub_006164c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_006164c0 *)(this))->sub_006138c0(param_2, param_3);
  return param_1;
}

struct FSparseArrayConstIt_00616940 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00616940(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00616940
FSparseArrayConstIt_00616940::FSparseArrayConstIt_00616940(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00616a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00616a90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00616a90
FSparseArrayConstIt_00616a90::FSparseArrayConstIt_00616a90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_00616ae0 {
    int sub_00613e10(int, int);
};

struct C_00616ae0 { undefined4 sub_00616ae0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616ae0
undefined4 C_00616ae0::sub_00616ae0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00616ae0 *)(this))->sub_00613e10(param_2, param_3);
  return param_1;
}

struct C_view_00616e00 {
    int sub_006140b0(int, int);
};

struct C_00616e00 { undefined4 sub_00616e00(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616e00
undefined4 C_00616e00::sub_00616e00(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00616e00 *)(this))->sub_006140b0(param_2, param_3);
  return param_1;
}

struct C_view_00616e20 {
    int sub_00614110(int, int);
};

struct C_00616e20 { int sub_00616e20(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616e20
int C_00616e20::sub_00616e20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616e20 *)(this))->sub_00614110(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616e40 {
    int sub_00614190(int, int);
};

struct C_00616e40 { int sub_00616e40(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616e40
int C_00616e40::sub_00616e40(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616e40 *)(this))->sub_00614190(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616e60 {
    int sub_00614210(int, int);
};

struct C_00616e60 { int sub_00616e60(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616e60
int C_00616e60::sub_00616e60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616e60 *)(this))->sub_00614210(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616e80 {
    int sub_00614290(int, int);
};

struct C_00616e80 { int sub_00616e80(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616e80
int C_00616e80::sub_00616e80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616e80 *)(this))->sub_00614290(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616ea0 {
    int sub_00614310(int, int);
};

struct C_00616ea0 { int sub_00616ea0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616ea0
int C_00616ea0::sub_00616ea0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616ea0 *)(this))->sub_00614310(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616ec0 {
    int sub_00614390(int, int);
};

struct C_00616ec0 { int sub_00616ec0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616ec0
int C_00616ec0::sub_00616ec0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616ec0 *)(this))->sub_00614390(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616ee0 {
    int sub_00613920(int);
};

struct C_00616ee0 { void sub_00616ee0(void); };
// @baa 0x00616ee0
void C_00616ee0::sub_00616ee0(void)
{
    int param_1 = (int)this;
  ((C_view_00616ee0 *)((*(char **)((char *)this + 0x10))))->sub_00613920(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00616f00 {
    int sub_00614410(int, int);
};

struct C_00616f00 { int sub_00616f00(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616f00
int C_00616f00::sub_00616f00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616f00 *)(this))->sub_00614410(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616f20 {
    int sub_00614490(int, int);
};

struct C_00616f20 { int sub_00616f20(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616f20
int C_00616f20::sub_00616f20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616f20 *)(this))->sub_00614490(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616f40 {
    int sub_00614510(int, int);
};

struct C_00616f40 { int sub_00616f40(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616f40
int C_00616f40::sub_00616f40(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616f40 *)(this))->sub_00614510(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616f60 {
    int sub_00614590(int, int);
};

struct C_00616f60 { int sub_00616f60(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616f60
int C_00616f60::sub_00616f60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616f60 *)(this))->sub_00614590(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616f80 {
    int sub_00614610(int, int);
};

struct C_00616f80 { int sub_00616f80(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616f80
int C_00616f80::sub_00616f80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616f80 *)(this))->sub_00614610(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616fa0 {
    int sub_00614680(int, int);
};

struct C_00616fa0 { int sub_00616fa0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616fa0
int C_00616fa0::sub_00616fa0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616fa0 *)(this))->sub_00614680(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00616fc0 {
    int sub_00614700(int, int);
};

struct C_00616fc0 { int sub_00616fc0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00616fc0
int C_00616fc0::sub_00616fc0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00616fc0 *)(this))->sub_00614700(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0060dd40(void);
struct C_00616fe0 { int sub_00616fe0(void); };
// @baa 0x00616fe0
int C_00616fe0::sub_00616fe0(void)
{
    int param_1 = (int)this;

  sub_0060dd40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060dda0(void);
struct C_00617060 { int sub_00617060(void); };
// @baa 0x00617060
int C_00617060::sub_00617060(void)
{
    int param_1 = (int)this;

  sub_0060dda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060df60(void);
struct C_00617100 { int sub_00617100(void); };
// @baa 0x00617100
int C_00617100::sub_00617100(void)
{
    int param_1 = (int)this;

  sub_0060df60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060dfc0(void);
struct C_00617120 { int sub_00617120(void); };
// @baa 0x00617120
int C_00617120::sub_00617120(void)
{
    int param_1 = (int)this;

  sub_0060dfc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e070(void);
struct C_00617140 { int sub_00617140(void); };
// @baa 0x00617140
int C_00617140::sub_00617140(void)
{
    int param_1 = (int)this;

  sub_0060e070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e120(void);
struct C_00617160 { int sub_00617160(void); };
// @baa 0x00617160
int C_00617160::sub_00617160(void)
{
    int param_1 = (int)this;

  sub_0060e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e180(void);
struct C_00617180 { int sub_00617180(void); };
// @baa 0x00617180
int C_00617180::sub_00617180(void)
{
    int param_1 = (int)this;

  sub_0060e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006149e0();
// @baa 0x00617230
void sub_00617230(void) { sub_006149e0(); }

struct C_006173c0 { int sub_006173c0(void); };
// @baa 0x006173c0
int C_006173c0::sub_006173c0(void)
{
    int param_1 = (int)this;

  sub_0060a2e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00615d70();
// @baa 0x006173e0
void sub_006173e0(void) { sub_00615d70(); }

void sub_00615de0();
// @baa 0x006173f0
void sub_006173f0(void) { sub_00615de0(); }

void sub_00615e50();
// @baa 0x00617400
void sub_00617400(void) { sub_00615e50(); }

void sub_00615ec0();
// @baa 0x00617410
void sub_00617410(void) { sub_00615ec0(); }

void sub_00615f30();
// @baa 0x00617420
void sub_00617420(void) { sub_00615f30(); }

void sub_00615fa0();
// @baa 0x00617430
void sub_00617430(void) { sub_00615fa0(); }

void sub_00616010();
// @baa 0x00617440
void sub_00617440(void) { sub_00616010(); }

void sub_00615d00();
// @baa 0x00617450
void sub_00617450(void) { sub_00615d00(); }

void sub_00616150();
// @baa 0x006174a0
void sub_006174a0(void) { sub_00616150(); }

void sub_006162e0();
// @baa 0x00617620
void sub_00617620(void) { sub_006162e0(); }

struct FSparseArrayConstIt_00617630 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00617630(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00617630
FSparseArrayConstIt_00617630::FSparseArrayConstIt_00617630(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

// @baa 0x00618e10
void sub_00618e10(void) { sub_00615e50(); }

// @baa 0x00618e20
void sub_00618e20(void) { sub_00615ec0(); }

// @baa 0x00618fd0
void sub_00618fd0(void) { sub_00615f30(); }

// @baa 0x0061a4d0
void sub_0061a4d0(void) { sub_00615fa0(); }

// @baa 0x0061a4e0
void sub_0061a4e0(void) { sub_00616010(); }

// @baa 0x0061a6b0
void sub_0061a6b0(void) { sub_00615d00(); }

struct C_view_0061abb0 {
    int sub_006171a0(int);
};

struct C_0061abb0 { undefined4 sub_0061abb0(undefined4 param_2); };
// @baa 0x0061abb0
undefined4 C_0061abb0::sub_0061abb0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0061abb0 *)(this))->sub_006171a0(param_2);
  return param_1;
}

int sub_006149e0(...);
int sub_00637c10(...);
// @baa 0x0061abd0
void sub_0061abd0(undefined4 param_1, int param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_00637c10(param_1,param_2);
  sub_006149e0(uVar1,param_2 + 0xc);
  return;
}

struct C_0061abf0 { void sub_00617d10(int); C_0061abf0 *sub_0061abf0(int); };

// @baa 0x0061abf0
C_0061abf0 *C_0061abf0::sub_0061abf0(int a) { sub_00617d10(a); return this; }

void sub_00617350();
// @baa 0x0061ac10
void sub_0061ac10(void) { sub_00617350(); }

struct C_0061ac20 { int sub_0061ac20(void); };
// @baa 0x0061ac20
int C_0061ac20::sub_0061ac20(void)
{
    int param_1 = (int)this;

  sub_0060a2e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0061ac40
void sub_0061ac40(void) { sub_00615d70(); }

// @baa 0x0061ac50
void sub_0061ac50(void) { sub_00615d70(); }

// @baa 0x0061b160
void sub_0061b160(void) { sub_00615e50(); }

// @baa 0x0061b170
void sub_0061b170(void) { sub_00615ec0(); }

// @baa 0x0061b210
void sub_0061b210(void) { sub_00615f30(); }

// @baa 0x0061b220
void sub_0061b220(void) { sub_00615fa0(); }

int sub_0061b740(void);
struct C_0061d6c0 { undefined4 sub_0061d6c0(byte param_2); };
// @baa 0x0061d6c0
undefined4 C_0061d6c0::sub_0061d6c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0061b740();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a70(...);
int sub_0061da60(void);
struct C_0061db00 { undefined4 sub_0061db00(byte param_2); };
// @baa 0x0061db00
undefined4 C_0061db00::sub_0061db00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0061da60();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb4);
  }
  return param_1;
}

struct C_view_0061e460 {
    int sub_00617d10(int);
};

struct C_0061e460 { int sub_0061e460(int param_2); };
// @baa 0x0061e460
int C_0061e460::sub_0061e460(int param_2)
{
    int param_1 = (int)this;
  ((C_view_0061e460 *)(this))->sub_00617d10(param_2);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_2 + 0x3e);
  return param_1;
}

int sub_0061d9e0(void);
struct C_0061e490 { int sub_0061e490(void); };
// @baa 0x0061e490
int C_0061e490::sub_0061e490(void)
{
    int param_1 = (int)this;

  sub_0061d9e0();
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return param_1;
}

struct C_view_0061e6b0 {
    int sub_0061e2f0(int);
};

struct C_0061e6b0 { void sub_0061e6b0(void); };
// @baa 0x0061e6b0
void C_0061e6b0::sub_0061e6b0(void)
{
    int param_1 = (int)this;
  ((C_view_0061e6b0 *)((*(char **)((char *)this + 0x1c))))->sub_0061e2f0(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct C_view_0061e6c0 {
    int sub_0061e2f0(int);
};

struct C_0061e6c0 { void sub_0061e6c0(void); };
// @baa 0x0061e6c0
void C_0061e6c0::sub_0061e6c0(void)
{
    int param_1 = (int)this;
  ((C_view_0061e6c0 *)((*(char **)((char *)this + 0x10))))->sub_0061e2f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0061e880 {
    int sub_0061e880(undefined4);
    int sub_0061e6e0(int);
};

// @baa 0x0061e880
int C_0061e880::sub_0061e880(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0061e880 *)(this))->sub_0061e6e0(param_2);
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return param_1;
}

int sub_0060de00(void);
struct C_0061e8a0 { int sub_0061e8a0(void); };
// @baa 0x0061e8a0
int C_0061e8a0::sub_0061e8a0(void)
{
    int param_1 = (int)this;

  sub_0060de00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0061e540();
// @baa 0x0061e920
void sub_0061e920(void) { sub_0061e540(); }

void sub_0061e5a0();
// @baa 0x0061e930
void sub_0061e930(void) { sub_0061e5a0(); }

struct C_view_0061e9b0 {
    int sub_0061e2f0(int);
};

struct C_0061e9b0 { void sub_0061e9b0(void); };
// @baa 0x0061e9b0
void C_0061e9b0::sub_0061e9b0(void)
{
    int param_1 = (int)this;
  ((C_view_0061e9b0 *)((*(char **)((char *)this + 0x1c))))->sub_0061e2f0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct C_0061eb50 { int sub_0061eb50(void); };
// @baa 0x0061eb50
int C_0061eb50::sub_0061eb50(void)
{
    int param_1 = (int)this;

  sub_0060de00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0061e940();
// @baa 0x0061ec00
void sub_0061ec00(void) { sub_0061e940(); }

void sub_0061eae0();
// @baa 0x0061ee10
void sub_0061ee10(void) { sub_0061eae0(); }

struct C_0061ee20 { int sub_0061ee20(void); };
// @baa 0x0061ee20
int C_0061ee20::sub_0061ee20(void)
{
    int param_1 = (int)this;

  sub_0060de00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0061eae0(...);
// @baa 0x0061ee40
void sub_0061ee40(undefined4 param_1, int param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_00637c10(param_1,param_2);
  sub_0061eae0(uVar1,param_2 + 0xc);
  return;
}

// @baa 0x0061eec0
void sub_0061eec0(void) { sub_0061e940(); }
