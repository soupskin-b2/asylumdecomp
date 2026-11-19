// Engine_1380000.cpp: 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_01384f20();
};

// @baa 0x01384f20
int C::sub_01384f20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_01384fb0 {
    int sub_01384fb0();
};

// @baa 0x01384fb0
int C_01384fb0::sub_01384fb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01384fc0 {
    int sub_01384fc0();
};

// @baa 0x01384fc0
int C_01384fc0::sub_01384fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_01384fd0 {
    int sub_01384fd0();
};

// @baa 0x01384fd0
int C_01384fd0::sub_01384fd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_013850d0 {
    int sub_013850d0();
};

// @baa 0x013850d0
int C_013850d0::sub_013850d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013850e0 {
    int sub_013850e0();
};

// @baa 0x013850e0
int C_013850e0::sub_013850e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_013850f0 {
    int sub_013850f0();
};

// @baa 0x013850f0
int C_013850f0::sub_013850f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01385100 {
    int sub_01385100();
};

// @baa 0x01385100
int C_01385100::sub_01385100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_01385110 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01385110& operator++();
};

// @baa 0x01385110
FSparseArrayConstIt_01385110& FSparseArrayConstIt_01385110::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013851e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013851e0& operator++();
};

// @baa 0x013851e0
FSparseArrayConstIt_013851e0& FSparseArrayConstIt_013851e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01385200 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01385200& operator++();
};

// @baa 0x01385200
FSparseArrayConstIt_01385200& FSparseArrayConstIt_01385200::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01385220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01385220& operator++();
};

// @baa 0x01385220
FSparseArrayConstIt_01385220& FSparseArrayConstIt_01385220::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01385240 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01385240& operator++();
};

// @baa 0x01385240
FSparseArrayConstIt_01385240& FSparseArrayConstIt_01385240::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013852c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013852c0& operator++();
};

// @baa 0x013852c0
FSparseArrayConstIt_013852c0& FSparseArrayConstIt_013852c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013852e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013852e0& operator++();
};

// @baa 0x013852e0
FSparseArrayConstIt_013852e0& FSparseArrayConstIt_013852e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_01385900(int);
};

// @baa 0x01385a60
int UObject::sub_01385a60(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_01385900(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

int sub_0053dfa0(...);
int sub_01374930(void);
// @baa 0x01385a80
undefined4 UObject::sub_01385a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01374930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
