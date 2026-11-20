// UnrealEd_0730000.cpp: 18 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00736e50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00736e50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00736e50
FSparseArrayConstIt_00736e50::FSparseArrayConstIt_00736e50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view {
    int sub_00735650(int, int);
};

struct C_00737090 { void sub_00737090(void); };
// @baa 0x00737090
void C_00737090::sub_00737090(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00735650(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct FSparseArrayConstIt_007372d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007372d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007372d0
FSparseArrayConstIt_007372d0::FSparseArrayConstIt_007372d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00737320 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00737320(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00737320
FSparseArrayConstIt_00737320::FSparseArrayConstIt_00737320(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_00737370 {
    int sub_00735870(int, int);
};

struct C_00737370 { undefined4 sub_00737370(undefined4 param_2, undefined4 param_3); };
// @baa 0x00737370
undefined4 C_00737370::sub_00737370(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00737370 *)(this))->sub_00735870(param_2, param_3);
  return param_1;
}

struct C_view_00737680 {
    int sub_00735a50(int, int);
};

struct C_00737680 { int sub_00737680(undefined4 param_2, undefined4 param_3); };
// @baa 0x00737680
int C_00737680::sub_00737680(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737680 *)(this))->sub_00735a50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_007376a0 {
    int sub_00735ad0(int, int);
};

struct C_007376a0 { int sub_007376a0(undefined4 param_2, undefined4 param_3); };
// @baa 0x007376a0
int C_007376a0::sub_007376a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_007376a0 *)(this))->sub_00735ad0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_007376c0 {
    int sub_00735b40(int, int);
};

struct C_007376c0 { int sub_007376c0(undefined4 param_2, undefined4 param_3); };
// @baa 0x007376c0
int C_007376c0::sub_007376c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_007376c0 *)(this))->sub_00735b40(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_007376e0 {
    int sub_00735bb0(int, int);
};

struct C_007376e0 { int sub_007376e0(undefined4 param_2, undefined4 param_3); };
// @baa 0x007376e0
int C_007376e0::sub_007376e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_007376e0 *)(this))->sub_00735bb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00737700 {
    int sub_00735c30(int, int);
};

struct C_00737700 { int sub_00737700(undefined4 param_2, undefined4 param_3); };
// @baa 0x00737700
int C_00737700::sub_00737700(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737700 *)(this))->sub_00735c30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00737720 {
    int sub_00735cb0(int, int);
};

struct C_00737720 { int sub_00737720(undefined4 param_2, undefined4 param_3); };
// @baa 0x00737720
int C_00737720::sub_00737720(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737720 *)(this))->sub_00735cb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00737740 {
    int sub_00735d30(int, int);
};

struct C_00737740 { int sub_00737740(undefined4 param_2, undefined4 param_3); };
// @baa 0x00737740
int C_00737740::sub_00737740(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00737740 *)(this))->sub_00735d30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0072e7e0(void);
struct C_00737760 { int sub_00737760(void); };
// @baa 0x00737760
int C_00737760::sub_00737760(void)
{
    int param_1 = (int)this;

  sub_0072e7e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e840(void);
struct C_00737780 { int sub_00737780(void); };
// @baa 0x00737780
int C_00737780::sub_00737780(void)
{
    int param_1 = (int)this;

  sub_0072e840();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e8a0(void);
struct C_007377a0 { int sub_007377a0(void); };
// @baa 0x007377a0
int C_007377a0::sub_007377a0(void)
{
    int param_1 = (int)this;

  sub_0072e8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e900(void);
struct C_007377c0 { int sub_007377c0(void); };
// @baa 0x007377c0
int C_007377c0::sub_007377c0(void)
{
    int param_1 = (int)this;

  sub_0072e900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e960(void);
struct C_007377e0 { int sub_007377e0(void); };
// @baa 0x007377e0
int C_007377e0::sub_007377e0(void)
{
    int param_1 = (int)this;

  sub_0072e960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00736370();
// @baa 0x00739510
void sub_00739510(void) { sub_00736370(); }
