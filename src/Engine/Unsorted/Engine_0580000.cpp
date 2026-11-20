// Engine_0580000.cpp: 34 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00580d60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00580d60& operator++();
};

// @baa 0x00580d60
FSparseArrayConstIt_00580d60& FSparseArrayConstIt_00580d60::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_0057ee60(int, int);
};

struct C_00581330 { int sub_00581330(undefined4 param_2, undefined4 param_3); };
// @baa 0x00581330
int C_00581330::sub_00581330(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_0057ee60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00581350 {
    int sub_0057eee0(int, int);
};

struct C_00581350 { int sub_00581350(undefined4 param_2, undefined4 param_3); };
// @baa 0x00581350
int C_00581350::sub_00581350(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00581350 *)(this))->sub_0057eee0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0057bf00(void);
struct C_005834e0 { int sub_005834e0(void); };
// @baa 0x005834e0
int C_005834e0::sub_005834e0(void)
{
    int param_1 = (int)this;

  sub_0057bf00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bfb0(void);
struct C_00583500 { int sub_00583500(void); };
// @baa 0x00583500
int C_00583500::sub_00583500(void)
{
    int param_1 = (int)this;

  sub_0057bfb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005864d0 { int sub_005864d0(void); };
// @baa 0x005864d0
int C_005864d0::sub_005864d0(void)
{
    int param_1 = (int)this;

  sub_0057bf00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_005864f0 { int sub_005864f0(void); };
// @baa 0x005864f0
int C_005864f0::sub_005864f0(void)
{
    int param_1 = (int)this;

  sub_0057bfb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bd80(void);
struct C_00586510 { int sub_00586510(void); };
// @baa 0x00586510
int C_00586510::sub_00586510(void)
{
    int param_1 = (int)this;

  sub_0057bd80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00586530 {
    int sub_00583540(int);
};

struct C_00586530 { undefined4 sub_00586530(undefined4 param_2); };
// @baa 0x00586530
undefined4 C_00586530::sub_00586530(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00586530 *)(this))->sub_00583540(param_2);
  return param_1;
}

void sub_005814d0();
// @baa 0x00586550
void sub_00586550(void) { sub_005814d0(); }

void sub_00581540();
// @baa 0x00586560
void sub_00586560(void) { sub_00581540(); }

void sub_005817d0();
// @baa 0x005865c0
void sub_005865c0(void) { sub_005817d0(); }

void sub_00581760();
// @baa 0x005865d0
void sub_005865d0(void) { sub_00581760(); }

void sub_005815b0();
// @baa 0x005865e0
void sub_005865e0(void) { sub_005815b0(); }

struct C { int sub_0058fb30(void); };

// @baa 0x0058fb30
int C::sub_0058fb30(void) { return *(int*)((char*)this + 0); }

struct C_0058fb40 { int sub_0058fb40(void); };

// @baa 0x0058fb40
int C_0058fb40::sub_0058fb40(void) { return *(int*)((char*)this + 0); }

struct C_0058fb50 { int sub_0058fb50(void); };

// @baa 0x0058fb50
int C_0058fb50::sub_0058fb50(void) { return *(int*)((char*)this + 0); }

struct C_0058fb60 { int sub_0058fb60(void); };

// @baa 0x0058fb60
int C_0058fb60::sub_0058fb60(void) { return *(int*)((char*)this + 0); }

struct C_0058fb70 { int sub_0058fb70(void); };

// @baa 0x0058fb70
int C_0058fb70::sub_0058fb70(void) { return *(int*)((char*)this + 20); }

struct C_0058fb80 { int sub_0058fb80(void); };

// @baa 0x0058fb80
int C_0058fb80::sub_0058fb80(void) { return *(int*)((char*)this + 20); }

struct C_0058fb90 { int sub_0058fb90(void); };

// @baa 0x0058fb90
int C_0058fb90::sub_0058fb90(void) { return *(int*)((char*)this + 20); }

struct C_0058fba0 { int sub_0058fba0(void); };

// @baa 0x0058fba0
int C_0058fba0::sub_0058fba0(void) { return *(int*)((char*)this + 20); }

struct C_0058fbb0 { int sub_0058fbb0(void); };

// @baa 0x0058fbb0
int C_0058fbb0::sub_0058fbb0(void) { return *(int*)((char*)this + 20); }

struct C_0058fbc0 { int a, b, c; C_0058fbc0(); };

// @baa 0x0058fbc0
C_0058fbc0::C_0058fbc0() : a(0), b(0), c(0) {}

struct C_0058fbd0 {
    int sub_0058fbd0(int);
};

// @baa 0x0058fbd0
int C_0058fbd0::sub_0058fbd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0058fbe0 { int a, b, c; C_0058fbe0(); };

// @baa 0x0058fbe0
C_0058fbe0::C_0058fbe0() : a(0), b(0), c(0) {}

struct C_0058fbf0 { int sub_0058fbf0(void); };

// @baa 0x0058fbf0
int C_0058fbf0::sub_0058fbf0(void) { return *(int*)((char*)this + 0); }

struct C_0058fc00 {
    int sub_0058fc00(int);
};

// @baa 0x0058fc00
int C_0058fc00::sub_0058fc00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0058fc10 {
    int sub_0058fc10(int);
};

// @baa 0x0058fc10
int C_0058fc10::sub_0058fc10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0058fc20 {
    int sub_0058fc20(int);
};

// @baa 0x0058fc20
int C_0058fc20::sub_0058fc20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0058fc30 { int sub_0058fc30(void); };

// @baa 0x0058fc30
int C_0058fc30::sub_0058fc30(void) { return *(int*)((char*)this + 0); }

struct C_0058fc40 { int sub_0058fc40(void); };

// @baa 0x0058fc40
int C_0058fc40::sub_0058fc40(void) { return *(int*)((char*)this + 20); }

struct C_0058fc50 {
    int sub_0058fc50(int);
};

// @baa 0x0058fc50
int C_0058fc50::sub_0058fc50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

extern undefined4 g_0268d09c;
extern undefined4 g_0268d0a0;
// @baa 0x0058fca0
void sub_0058fca0(void)
{
  g_0268d09c = 0;
  g_0268d0a0 = 0;
  return;
}
