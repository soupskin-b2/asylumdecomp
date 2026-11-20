// BmEditor_0f80000.cpp: 33 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

extern TArray<int> g_026a1ca4;
struct C {
    int sub_00f81cf0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81cf0
int C::sub_00f81cf0()
{
    return g_026a1ca4(Index);
}

struct C_00f81d50 {
    int sub_00f81d50();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81d50
int C_00f81d50::sub_00f81d50()
{
    return g_026a1ca4(Index);
}

struct C_00f81db0 {
    int sub_00f81db0();
};

// @baa 0x00f81db0
int C_00f81db0::sub_00f81db0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f81dd0 {
    int sub_00f81dd0();
};

// @baa 0x00f81dd0
int C_00f81dd0::sub_00f81dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00f81de0 {
    int sub_00f81de0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81de0
int C_00f81de0::sub_00f81de0()
{
    return g_026a1ca4(Index);
}

struct C_view {
    int sub_00f7dca0(int, int);
};

struct C_00f81f10 { int sub_00f81f10(int param_2); };
// @baa 0x00f81f10
int C_00f81f10::sub_00f81f10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00f7dca0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00f81f40 {
    int sub_009b74e0(int, int);
};

struct C_00f81f40 { int sub_00f81f40(int param_2); };
// @baa 0x00f81f40
int C_00f81f40::sub_00f81f40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00f81f40 *)(this))->sub_009b74e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00f81f70 {
    int sub_00f7de30(int, int);
};

struct C_00f81f70 { int sub_00f81f70(int param_2); };
// @baa 0x00f81f70
int C_00f81f70::sub_00f81f70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00f81f70 *)(this))->sub_00f7de30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00f81fa0 {
    int sub_00f7dfc0(int, int);
};

struct C_00f81fa0 { int sub_00f81fa0(int param_2); };
// @baa 0x00f81fa0
int C_00f81fa0::sub_00f81fa0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00f81fa0 *)(this))->sub_00f7dfc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00f81fd0 {
    int sub_00f81fd0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f81fd0
int C_00f81fd0::sub_00f81fd0()
{
    return g_026a1ca4(Index);
}

struct C_00f82270 {
    int sub_00f82270();
};

// @baa 0x00f82270
int C_00f82270::sub_00f82270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x1c;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00f82300 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82300& operator++();
};

// @baa 0x00f82300
FSparseArrayConstIt_00f82300& FSparseArrayConstIt_00f82300::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82840 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82840& operator++();
};

// @baa 0x00f82840
FSparseArrayConstIt_00f82840& FSparseArrayConstIt_00f82840::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82860 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82860& operator++();
};

// @baa 0x00f82860
FSparseArrayConstIt_00f82860& FSparseArrayConstIt_00f82860::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82880 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82880& operator++();
};

// @baa 0x00f82880
FSparseArrayConstIt_00f82880& FSparseArrayConstIt_00f82880::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f828a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f828a0& operator++();
};

// @baa 0x00f828a0
FSparseArrayConstIt_00f828a0& FSparseArrayConstIt_00f828a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f828c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f828c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f828c0
FSparseArrayConstIt_00f828c0::FSparseArrayConstIt_00f828c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82910 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82910(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82910
FSparseArrayConstIt_00f82910::FSparseArrayConstIt_00f82910(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82960 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82960(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82960
FSparseArrayConstIt_00f82960::FSparseArrayConstIt_00f82960(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f829b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f829b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f829b0
FSparseArrayConstIt_00f829b0::FSparseArrayConstIt_00f829b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82a00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82a00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82a00
FSparseArrayConstIt_00f82a00::FSparseArrayConstIt_00f82a00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82a50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82a50& operator++();
};

// @baa 0x00f82a50
FSparseArrayConstIt_00f82a50& FSparseArrayConstIt_00f82a50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82a70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82a70& operator++();
};

// @baa 0x00f82a70
FSparseArrayConstIt_00f82a70& FSparseArrayConstIt_00f82a70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82a90& operator++();
};

// @baa 0x00f82a90
FSparseArrayConstIt_00f82a90& FSparseArrayConstIt_00f82a90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82ab0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82ab0& operator++();
};

// @baa 0x00f82ab0
FSparseArrayConstIt_00f82ab0& FSparseArrayConstIt_00f82ab0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82ad0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82ad0& operator++();
};

// @baa 0x00f82ad0
FSparseArrayConstIt_00f82ad0& FSparseArrayConstIt_00f82ad0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f82af0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82af0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82af0
FSparseArrayConstIt_00f82af0::FSparseArrayConstIt_00f82af0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82b40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82b40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82b40
FSparseArrayConstIt_00f82b40::FSparseArrayConstIt_00f82b40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82b90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82b90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82b90
FSparseArrayConstIt_00f82b90::FSparseArrayConstIt_00f82b90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82be0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82be0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82be0
FSparseArrayConstIt_00f82be0::FSparseArrayConstIt_00f82be0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f82c30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f82c30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f82c30
FSparseArrayConstIt_00f82c30::FSparseArrayConstIt_00f82c30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00f836b0 {
    undefined4 sub_00f836b0(byte);
};

int sub_0053dfa0(...);
int sub_00f7f330(void);
// @baa 0x00f836b0
undefined4 C_00f836b0::sub_00f836b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f7f330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_00f884b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f884b0& operator++();
};

// @baa 0x00f884b0
FSparseArrayConstIt_00f884b0& FSparseArrayConstIt_00f884b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}
