// Core_1520000.cpp: 46 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

struct C {
    int sub_015267d0(int);
};

// @baa 0x015267d0
int C::sub_015267d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_015267e0 {
    int sub_015267e0();
};

// @baa 0x015267e0
int C_015267e0::sub_015267e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_015267f0 {
    int sub_015267f0(int);
};

// @baa 0x015267f0
int C_015267f0::sub_015267f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_01526810 {
    int sub_01526810();
};

// @baa 0x01526810
int C_01526810::sub_01526810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_01526890 {
    undefined4 sub_01526890(byte);
};

int sub_0053dfa0(...);
int sub_01515670(void);
// @baa 0x01526890
undefined4 C_01526890::sub_01526890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01515670();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x015268b0
undefined4 UObject::sub_015268b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_015268d0 {
    undefined4 sub_015268d0(byte);
    int sub_0040fcc0();
};

// @baa 0x015268d0
undefined4 C_015268d0::sub_015268d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_015268d0 *)(((char *)this + 0x1c)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01526900 {
    int sub_01526900();
};

// @baa 0x01526900
int C_01526900::sub_01526900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x01526980
int UTexture2D::sub_01526980(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x28;
}

// @baa 0x01526a10
int UTexture2D::sub_01526a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_01526c70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01526c70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01526c70
FSparseArrayConstIt_01526c70::FSparseArrayConstIt_01526c70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01526cc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01526cc0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01526cc0
FSparseArrayConstIt_01526cc0::FSparseArrayConstIt_01526cc0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01526d10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01526d10(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01526d10
FSparseArrayConstIt_01526d10::FSparseArrayConstIt_01526d10(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01526d60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01526d60(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01526d60
FSparseArrayConstIt_01526d60::FSparseArrayConstIt_01526d60(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01526db0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01526db0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01526db0
FSparseArrayConstIt_01526db0::FSparseArrayConstIt_01526db0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01526e00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01526e00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01526e00
FSparseArrayConstIt_01526e00::FSparseArrayConstIt_01526e00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_0151bcd0();
// @baa 0x01527310
void sub_01527310(void) { sub_0151bcd0(); }

void sub_0151bd30();
// @baa 0x01527320
void sub_01527320(void) { sub_0151bd30(); }

struct C_01527470 { C_01527470* sub_01527470(void); };

// @baa 0x01527470
C_01527470* C_01527470::sub_01527470(void) { return this; }

struct C_01527480 {
    int sub_01527480();
};

// @baa 0x01527480
int C_01527480::sub_01527480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x28;
}

struct C_0152b270 {
    int sub_0152b270();
};

// @baa 0x0152b270
int C_0152b270::sub_0152b270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x44;
}

struct C_0152b7d0 {
    int sub_0152b7d0();
};

// @baa 0x0152b7d0
int C_0152b7d0::sub_0152b7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_view {
    int sub_01526910(int, int);
};

// @baa 0x0152b7e0
int UTexture2D::sub_0152b7e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_01526910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_view_0152b8d0 {
    int sub_01526990(int, int);
};

// @baa 0x0152b8d0
int UTexture2D::sub_0152b8d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0152b8d0 *)(this))->sub_01526990((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x44;
  }
  return 0;
}

struct M_0152ba80 { void sub_0151bd30(); };

struct C_0152ba80 { char pad[8]; M_0152ba80 m; void sub_0152ba80(); };

// @baa 0x0152ba80
void C_0152ba80::sub_0152ba80() { m.sub_0151bd30(); }

struct FSparseArrayConstIt_0152bc00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152bc00& operator++();
};

// @baa 0x0152bc00
FSparseArrayConstIt_0152bc00& FSparseArrayConstIt_0152bc00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152be90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152be90& operator++();
};

// @baa 0x0152be90
FSparseArrayConstIt_0152be90& FSparseArrayConstIt_0152be90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152beb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152beb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152beb0
FSparseArrayConstIt_0152beb0::FSparseArrayConstIt_0152beb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152bf00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152bf00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152bf00
FSparseArrayConstIt_0152bf00::FSparseArrayConstIt_0152bf00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152bf50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152bf50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152bf50
FSparseArrayConstIt_0152bf50::FSparseArrayConstIt_0152bf50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152bfa0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152bfa0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152bfa0
FSparseArrayConstIt_0152bfa0::FSparseArrayConstIt_0152bfa0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152bff0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152bff0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152bff0
FSparseArrayConstIt_0152bff0::FSparseArrayConstIt_0152bff0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152c040 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c040& operator++();
};

// @baa 0x0152c040
FSparseArrayConstIt_0152c040& FSparseArrayConstIt_0152c040::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152c120 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c120(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152c120
FSparseArrayConstIt_0152c120::FSparseArrayConstIt_0152c120(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152c170 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c170& operator++();
};

// @baa 0x0152c170
FSparseArrayConstIt_0152c170& FSparseArrayConstIt_0152c170::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152c190 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c190(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152c190
FSparseArrayConstIt_0152c190::FSparseArrayConstIt_0152c190(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152c1e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c1e0& operator++();
};

// @baa 0x0152c1e0
FSparseArrayConstIt_0152c1e0& FSparseArrayConstIt_0152c1e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152c200 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c200(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152c200
FSparseArrayConstIt_0152c200::FSparseArrayConstIt_0152c200(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152c250 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152c250& operator++();
};

// @baa 0x0152c250
FSparseArrayConstIt_0152c250& FSparseArrayConstIt_0152c250::operator++()
{
    TConstIterator::operator++();
    return *this;
}

void sub_01526e50();
// @baa 0x0152c270
void sub_0152c270(void) { sub_01526e50(); }

void sub_01526f00();
// @baa 0x0152c280
void sub_0152c280(void) { sub_01526f00(); }

void sub_01526f80();
// @baa 0x0152c290
void sub_0152c290(void) { sub_01526f80(); }

int sub_0152c360(void);
int sub_005c7a70(...);
// @baa 0x0152c3c0
undefined4 URScriptConversationFactoryNew::sub_0152c3c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_0152c360();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,100);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_022de5b8;
// @baa 0x0152c480
undefined4 * UObject::sub_0152c480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022de5b8);
  return param_1;
}

// @baa 0x0152c4c0
IMPLEMENT_CLASS_AT(URScriptConversation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 34);

// @baa 0x0152c530
