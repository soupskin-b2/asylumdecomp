// Editor_0f80000.cpp: 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C_view {
    int sub_00f82320(int, int);
};

struct C_00f884d0 { int sub_00f884d0(int param_2); };
// @baa 0x00f884d0
int C_00f884d0::sub_00f884d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00f82320((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

int sub_0053dfa0(...);
int sub_00f82290(void);
struct C_00f88500 { undefined4 sub_00f88500(byte param_2); };
// @baa 0x00f88500
undefined4 C_00f88500::sub_00f88500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f82290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00f8d3d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f8d3d0& operator++();
};

// @baa 0x00f8d3d0
FSparseArrayConstIt_00f8d3d0& FSparseArrayConstIt_00f8d3d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00f8d3f0 { undefined4 sub_00f8d3f0(int param_2); };
// @baa 0x00f8d3f0
undefined4 C_00f8d3f0::sub_00f8d3f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00f82320((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x18);
  }
  return 0;
}

struct C_view_00f8d490 {
    int sub_00f88520(int);
};

struct C_00f8d490 { void sub_00f8d490(void); };
// @baa 0x00f8d490
void C_00f8d490::sub_00f8d490(void)
{
    int param_1 = (int)this;
  ((C_view_00f8d490 *)((*(char **)((char *)this + 0x10))))->sub_00f88520(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00f8d4b0 {
    int sub_00f88680(int);
};

struct C_00f8d4b0 { void sub_00f8d4b0(void); };
// @baa 0x00f8d4b0
void C_00f8d4b0::sub_00f8d4b0(void)
{
    int param_1 = (int)this;
  ((C_view_00f8d4b0 *)((*(char **)((char *)this + 0x10))))->sub_00f88680(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00f8d4d0 {
    int sub_00f887f0(int);
};

struct C_00f8d4d0 { void sub_00f8d4d0(void); };
// @baa 0x00f8d4d0
void C_00f8d4d0::sub_00f8d4d0(void)
{
    int param_1 = (int)this;
  ((C_view_00f8d4d0 *)((*(char **)((char *)this + 0x10))))->sub_00f887f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00f8d4f0 {
    int sub_00f88950(int);
};

struct C_00f8d4f0 { void sub_00f8d4f0(void); };
// @baa 0x00f8d4f0
void C_00f8d4f0::sub_00f8d4f0(void)
{
    int param_1 = (int)this;
  ((C_view_00f8d4f0 *)((*(char **)((char *)this + 0x10))))->sub_00f88950(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct FSparseArrayConstIt_00f8d890 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f8d890(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f8d890
FSparseArrayConstIt_00f8d890::FSparseArrayConstIt_00f8d890(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_00f88d40(void);
struct C_00f8f1d0 { int sub_00f8f1d0(void); };
// @baa 0x00f8f1d0
int C_00f8f1d0::sub_00f8f1d0(void)
{
    int param_1 = (int)this;

  sub_00f88d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88da0(void);
struct C_00f8f1f0 { int sub_00f8f1f0(void); };
// @baa 0x00f8f1f0
int C_00f8f1f0::sub_00f8f1f0(void)
{
    int param_1 = (int)this;

  sub_00f88da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88e00(void);
struct C_00f8f210 { int sub_00f8f210(void); };
// @baa 0x00f8f210
int C_00f8f210::sub_00f8f210(void)
{
    int param_1 = (int)this;

  sub_00f88e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88e60(void);
struct C_00f8f230 { int sub_00f8f230(void); };
// @baa 0x00f8f230
int C_00f8f230::sub_00f8f230(void)
{
    int param_1 = (int)this;

  sub_00f88e60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88ec0(void);
struct C_00f8f250 { int sub_00f8f250(void); };
// @baa 0x00f8f250
int C_00f8f250::sub_00f8f250(void)
{
    int param_1 = (int)this;

  sub_00f88ec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00f8f700 {
    int sub_00f8eb10(int, int);
};

struct C_00f8f700 { void sub_00f8f700(void); };
// @baa 0x00f8f700
void C_00f8f700::sub_00f8f700(void)
{
    int param_1 = (int)this;
  ((C_view_00f8f700 *)(this))->sub_00f8eb10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00f8f7d0 {
    int sub_00f8ebd0(int, int);
};

struct C_00f8f7d0 { undefined4 sub_00f8f7d0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00f8f7d0
undefined4 C_00f8f7d0::sub_00f8f7d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00f8f7d0 *)(this))->sub_00f8ebd0(param_2, param_3);
  return param_1;
}

struct C_view_00f8fb30 {
    int sub_00f8ef30(int, int);
};

struct C_00f8fb30 { int sub_00f8fb30(undefined4 param_2, undefined4 param_3); };
// @baa 0x00f8fb30
int C_00f8fb30::sub_00f8fb30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00f8fb30 *)(this))->sub_00f8ef30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00f8fb50 {
    int sub_00f8efb0(int, int);
};

struct C_00f8fb50 { int sub_00f8fb50(undefined4 param_2, undefined4 param_3); };
// @baa 0x00f8fb50
int C_00f8fb50::sub_00f8fb50(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00f8fb50 *)(this))->sub_00f8efb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00f8fb70 {
    int sub_00f8f030(int, int);
};

struct C_00f8fb70 { int sub_00f8fb70(undefined4 param_2, undefined4 param_3); };
// @baa 0x00f8fb70
int C_00f8fb70::sub_00f8fb70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00f8fb70 *)(this))->sub_00f8f030(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00f8fb90 {
    int sub_00f8f0d0(int, int);
};

struct C_00f8fb90 { int sub_00f8fb90(undefined4 param_2, undefined4 param_3); };
// @baa 0x00f8fb90
int C_00f8fb90::sub_00f8fb90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00f8fb90 *)(this))->sub_00f8f0d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00f8fbb0 {
    int sub_00f8f150(int, int);
};

struct C_00f8fbb0 { undefined4 sub_00f8fbb0(undefined4 param_2, undefined4 param_3); };
// @baa 0x00f8fbb0
undefined4 C_00f8fbb0::sub_00f8fbb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00f8fbb0 *)(this))->sub_00f8f150(param_2, param_3);
  return param_1;
}

struct C_00f8fbd0 { int sub_00f8fbd0(void); };
// @baa 0x00f8fbd0
int C_00f8fbd0::sub_00f8fbd0(void)
{
    int param_1 = (int)this;

  sub_00f88d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f8fbf0 { int sub_00f8fbf0(void); };
// @baa 0x00f8fbf0
int C_00f8fbf0::sub_00f8fbf0(void)
{
    int param_1 = (int)this;

  sub_00f88da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f8fc10 { int sub_00f8fc10(void); };
// @baa 0x00f8fc10
int C_00f8fc10::sub_00f8fc10(void)
{
    int param_1 = (int)this;

  sub_00f88e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f8fc90 { int sub_00f8fc90(void); };
// @baa 0x00f8fc90
int C_00f8fc90::sub_00f8fc90(void)
{
    int param_1 = (int)this;

  sub_00f88e60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f8fcb0 { int sub_00f8fcb0(void); };
// @baa 0x00f8fcb0
int C_00f8fcb0::sub_00f8fcb0(void)
{
    int param_1 = (int)this;

  sub_00f88ec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f8f470();
// @baa 0x00f8fcd0
void sub_00f8fcd0(void) { sub_00f8f470(); }
