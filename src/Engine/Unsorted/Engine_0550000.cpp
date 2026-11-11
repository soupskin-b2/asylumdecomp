// Engine_0550000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_0054e560(int); C *sub_00551880(int); };

// @baa 0x00551880
C *C::sub_00551880(int a) { sub_0054e560(a); return this; }

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_005518a0 : Inner {
    int num;
    int max;
    void sub_0054e610(int* p);
    Outer_005518a0(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x005518a0
Outer_005518a0::Outer_005518a0(int* p)
{
    num = 0;
    max = 0;
    sub_0054e610(p);
}

struct C_00551900 { void sub_0054e610(int); C_00551900 *sub_00551900(int); };

// @baa 0x00551900
C_00551900 *C_00551900::sub_00551900(int a) { sub_0054e610(a); return this; }

struct C_view {
    int sub_0054e6c0(int);
};

// @baa 0x00551920
undefined4 UObject::sub_00551920(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_0054e6c0(param_2);
  return param_1;
}

struct C_00551940 { void sub_0054e7f0(int); C_00551940 *sub_00551940(int); };

// @baa 0x00551940
C_00551940 *C_00551940::sub_00551940(int a) { sub_0054e7f0(a); return this; }

struct Outer_00551960 : Inner {
    int num;
    int max;
    void sub_0054e920(int* p);
    Outer_00551960(int* p);
};

// @baa 0x00551960
Outer_00551960::Outer_00551960(int* p)
{
    num = 0;
    max = 0;
    sub_0054e920(p);
}

struct C_005519c0 {
    int sub_005519c0();
};

// @baa 0x005519c0
int C_005519c0::sub_005519c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005519e0 {
    int sub_005519e0();
};

// @baa 0x005519e0
int C_005519e0::sub_005519e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00551a00 {
    int sub_00551a00();
};

// @baa 0x00551a00
int C_00551a00::sub_00551a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x1c;
}

struct C_view_00558220 {
    int sub_005560b0(int);
};

// @baa 0x00558220
void UPackageMap::sub_00558220(void)
{
    int param_1 = (int)this;
  ((C_view_00558220 *)((*(char **)((char *)this + 0x10))))->sub_005560b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
