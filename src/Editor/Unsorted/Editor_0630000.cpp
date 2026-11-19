// Editor_0630000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

struct C {
    int sub_00630fe0();
};

// @baa 0x00630fe0
int C::sub_00630fe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x24;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00630ff0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00630ff0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00630ff0
FSparseArrayConstIt_00630ff0::FSparseArrayConstIt_00630ff0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00631040 {
    void sub_00631040(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00631040
void C_00631040::sub_00631040(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00631090 {
    void sub_00631090(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00631090
void C_00631090::sub_00631090(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_006310b0 {
    void sub_006310b0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x006310b0
void C_006310b0::sub_006310b0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_006310e0 {
    void sub_006310e0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x006310e0
void C_006310e0::sub_006310e0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00631110 {
    void sub_00631110(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00631110
void C_00631110::sub_00631110(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00631140 {
    void sub_00631140(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00631140
void C_00631140::sub_00631140(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct FSparseArrayConstIt_00631170 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00631170& operator++();
};

// @baa 0x00631170
FSparseArrayConstIt_00631170& FSparseArrayConstIt_00631170::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00631190 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00631190(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00631190
FSparseArrayConstIt_00631190::FSparseArrayConstIt_00631190(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
