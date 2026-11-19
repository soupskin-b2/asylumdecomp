// Engine_0d50000.cpp: 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_00d53960();
};

// @baa 0x00d53960
int C::sub_00d53960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00d53970 {
    int sub_00d53970();
};

// @baa 0x00d53970
int C_00d53970::sub_00d53970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x24;
}

struct C_00d53af0 {
    int sub_00d53af0(int);
    int sub_00d52020(int, int);
};

// @baa 0x00d53af0
int C_00d53af0::sub_00d53af0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00d53af0 *)(this))->sub_00d52020((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00d53e10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d53e10& operator++();
};

// @baa 0x00d53e10
FSparseArrayConstIt_00d53e10& FSparseArrayConstIt_00d53e10::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00d53e30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d53e30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d53e30
FSparseArrayConstIt_00d53e30::FSparseArrayConstIt_00d53e30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00d53fd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d53fd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d53fd0
FSparseArrayConstIt_00d53fd0::FSparseArrayConstIt_00d53fd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00d54020 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54020& operator++();
};

// @baa 0x00d54020
FSparseArrayConstIt_00d54020& FSparseArrayConstIt_00d54020::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00d54040 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54040(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d54040
FSparseArrayConstIt_00d54040::FSparseArrayConstIt_00d54040(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00d54090 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54090& operator++();
};

// @baa 0x00d54090
FSparseArrayConstIt_00d54090& FSparseArrayConstIt_00d54090::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00d540b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d540b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d540b0
FSparseArrayConstIt_00d540b0::FSparseArrayConstIt_00d540b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00d54100 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54100& operator++();
};

// @baa 0x00d54100
FSparseArrayConstIt_00d54100& FSparseArrayConstIt_00d54100::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00d54180 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54180(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d54180
FSparseArrayConstIt_00d54180::FSparseArrayConstIt_00d54180(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00d541d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d541d0& operator++();
};

// @baa 0x00d541d0
FSparseArrayConstIt_00d541d0& FSparseArrayConstIt_00d541d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00d541f0 { void sub_00d52420(int); C_00d541f0 *sub_00d541f0(int); };

// @baa 0x00d541f0
C_00d541f0 *C_00d541f0::sub_00d541f0(int a) { sub_00d52420(a); return this; }

struct M_00d54310 { void sub_00ccbf20(); };

struct C_00d54310 { char pad[12]; M_00d54310 m; void sub_00d54310(); };

// @baa 0x00d54310
void C_00d54310::sub_00d54310() { m.sub_00ccbf20(); }

struct FSparseArrayConstIt_00d54a60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54a60& operator++();
};

// @baa 0x00d54a60
FSparseArrayConstIt_00d54a60& FSparseArrayConstIt_00d54a60::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00d54a80 {
    void sub_00d54a80();
    int sub_00d53bb0(int);
};

// @baa 0x00d54a80
void C_00d54a80::sub_00d54a80(void)
{
    int param_1 = (int)this;
  ((C_00d54a80 *)((*(char **)((char *)this + 0x14))))->sub_00d53bb0(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

struct M_00d54aa0 { void sub_00ccbf20(); };

struct C_00d54aa0 { char pad[16]; M_00d54aa0 m; void sub_00d54aa0(); };

// @baa 0x00d54aa0
void C_00d54aa0::sub_00d54aa0() { m.sub_00ccbf20(); }

struct C_00d54fe0 {
    undefined4 sub_00d54fe0(byte);
    int sub_00ccbf20();
};

int sub_0053dfa0(...);
// @baa 0x00d54fe0
undefined4 C_00d54fe0::sub_00d54fe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d54fe0 *)(((char *)this + 0x10)))->sub_00ccbf20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d55010 {
    undefined4 sub_00d55010(undefined4);
    int sub_00d52420(int);
};

// @baa 0x00d55010
undefined4 C_00d55010::sub_00d55010(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d55010 *)(((char *)this + 4)))->sub_00d52420(param_2);
  return param_1;
}

struct C_00d58310 {
    void sub_00d58310();
    int sub_00d569e0(int, int);
};

// @baa 0x00d58310
void C_00d58310::sub_00d58310(void)
{
    int param_1 = (int)this;
  ((C_00d58310 *)(this))->sub_00d569e0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view {
    int sub_00d56b20(int, int);
};

// @baa 0x00d58470
undefined4 UObject::sub_00d58470(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_00d56b20(param_2, param_3);
  return param_1;
}

struct C_view_00d58490 {
    int sub_00d56b80(int, int, int);
};

// @baa 0x00d58490
int UObject::sub_00d58490(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00d58490 *)(this))->sub_00d56b80(param_2, param_3, param_4);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return param_1;
}

struct C_view_00d584c0 {
    int sub_00d56c00(int, int);
};

// @baa 0x00d584c0
int UObject::sub_00d584c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d584c0 *)(this))->sub_00d56c00(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00d58610 {
    int sub_00d58610();
};

int sub_00d54120(void);
// @baa 0x00d58610
int C_00d58610::sub_00d58610(void)
{
    int param_1 = (int)this;

  sub_00d54120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00d586c0 {
    int sub_00d56ec0(int, int);
};

// @baa 0x00d586c0
undefined4 UObject::sub_00d586c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d586c0 *)(this))->sub_00d56ec0(param_2, param_3);
  return param_1;
}

void sub_00d58060();
// @baa 0x00d587b0
void sub_00d587b0(void) { sub_00d58060(); }

void sub_00d582b0();
// @baa 0x00d589f0
void sub_00d589f0(void) { sub_00d582b0(); }

// @baa 0x00d58a00
int UObject::sub_00d58a00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00d56b20(param_2, param_4);
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
    void sub_00d569e0(int, int);
};

struct C_00d58a30 {
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
    void sub_00d58a30(void);
};

// @baa 0x00d58a30
void C_00d58a30::sub_00d58a30(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00d569e0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00d58240();
// @baa 0x00d58a50
void sub_00d58a50(void) { sub_00d58240(); }

struct C_view_00d58b60 {
    int sub_00d584e0(int);
};

// @baa 0x00d58b60
void UObject::sub_00d58b60(void)
{
    int param_1 = (int)this;
  ((C_view_00d58b60 *)((*(char **)((char *)this + 0x1c))))->sub_00d584e0(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct C_view_00d58b70 {
    int sub_00d584e0(int);
};

// @baa 0x00d58b70
void UObject::sub_00d58b70(void)
{
    int param_1 = (int)this;
  ((C_view_00d58b70 *)((*(char **)((char *)this + 0x10))))->sub_00d584e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00d58bd0 {
    int sub_00d58bd0();
};

// @baa 0x00d58bd0
int C_00d58bd0::sub_00d58bd0(void)
{
    int param_1 = (int)this;

  sub_00d54120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d58e50 {
    int sub_00d58e50();
};

int sub_00d53f70(void);
// @baa 0x00d58e50
int C_00d58e50::sub_00d58e50(void)
{
    int param_1 = (int)this;

  sub_00d53f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00d58a60();
// @baa 0x00d5b3b0
void sub_00d5b3b0(void) { sub_00d58a60(); }

struct C_00d5b430 {
    void sub_00d5b430();
    int sub_00d584e0(int);
};

// @baa 0x00d5b430
void C_00d5b430::sub_00d5b430(void)
{
    int param_1 = (int)this;
  ((C_00d5b430 *)((*(char **)((char *)this + 0x1c))))->sub_00d584e0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

// @baa 0x00d5b450
void sub_00d5b450(void) { sub_00d58240(); }

struct C_00d5b460 {
    int sub_00d5b460();
};

// @baa 0x00d5b460
int C_00d5b460::sub_00d5b460(void)
{
    int param_1 = (int)this;

  sub_00d54120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d5b700 {
    int sub_00d5b700();
};

// @baa 0x00d5b700
int C_00d5b700::sub_00d5b700(void)
{
    int param_1 = (int)this;

  sub_00d53f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00d5b3c0();
// @baa 0x00d5d600
void sub_00d5d600(void) { sub_00d5b3c0(); }

// @baa 0x00d5ddf0
void sub_00d5ddf0(void) { sub_00d58240(); }

struct C_00d5e1e0 {
    int sub_00d5e1e0();
};

// @baa 0x00d5e1e0
int C_00d5e1e0::sub_00d5e1e0(void)
{
    int param_1 = (int)this;

  sub_00d53f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d5e290
void sub_00d5e290(void) { sub_00d5b3c0(); }
