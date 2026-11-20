// Core_05b0000.cpp: 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_005b0df0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b0df0& operator++();
};

// @baa 0x005b0df0
FSparseArrayConstIt_005b0df0& FSparseArrayConstIt_005b0df0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_005b0e10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b0e10& operator++();
};

// @baa 0x005b0e10
FSparseArrayConstIt_005b0e10& FSparseArrayConstIt_005b0e10::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_005b0e30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b0e30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b0e30
FSparseArrayConstIt_005b0e30::FSparseArrayConstIt_005b0e30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_005b0e80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b0e80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b0e80
FSparseArrayConstIt_005b0e80::FSparseArrayConstIt_005b0e80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_005b1640 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b1640(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b1640
FSparseArrayConstIt_005b1640::FSparseArrayConstIt_005b1640(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_005b1730 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b1730(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b1730
FSparseArrayConstIt_005b1730::FSparseArrayConstIt_005b1730(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_005b1780 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b1780(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b1780
FSparseArrayConstIt_005b1780::FSparseArrayConstIt_005b1780(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_005b17d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b17d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b17d0
FSparseArrayConstIt_005b17d0::FSparseArrayConstIt_005b17d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

// @baa 0x005b3750
IMPLEMENT_CLASS_AT(UTextBufferFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 97);

// @baa 0x005b37b0
struct FSparseArrayConstIt_005b3fa0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b3fa0& operator++();
};

// @baa 0x005b3fa0
FSparseArrayConstIt_005b3fa0& FSparseArrayConstIt_005b3fa0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_005b4020 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_005b4020(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x005b4020
FSparseArrayConstIt_005b4020::FSparseArrayConstIt_005b4020(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view {
    int sub_005b4870(int, int);
};

struct C_005b6d30 { void sub_005b6d30(void); };
// @baa 0x005b6d30
void C_005b6d30::sub_005b6d30(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005b4870(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
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
    void sub_005b4ec0(int, int);
};

struct C {
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
    void sub_005b83c0(void);
};

// @baa 0x005b83c0
void C::sub_005b83c0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_005b4ec0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_005b83e0 {
    int sub_005b83e0();
};

int sub_005b0870(void);
// @baa 0x005b83e0
int C_005b83e0::sub_005b83e0(void)
{
    int param_1 = (int)this;

  sub_005b0870();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b08d0(void);
struct C_005b8400 { int sub_005b8400(void); };
// @baa 0x005b8400
int C_005b8400::sub_005b8400(void)
{
    int param_1 = (int)this;

  sub_005b08d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b0930(void);
struct C_005b8420 { int sub_005b8420(void); };
// @baa 0x005b8420
int C_005b8420::sub_005b8420(void)
{
    int param_1 = (int)this;

  sub_005b0930();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b0990(void);
struct C_005b8440 { int sub_005b8440(void); };
// @baa 0x005b8440
int C_005b8440::sub_005b8440(void)
{
    int param_1 = (int)this;

  sub_005b0990();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct X {
    void sub_005b70a0(int);
};

struct C_005b8c50 {
    void sub_005b8c50();
};

// @baa 0x005b8c50
void C_005b8c50::sub_005b8c50() {
    ((X*)((char*)this + 0x5c))->sub_005b70a0(0);
}

void sub_005b79e0();
// @baa 0x005b9010
void sub_005b9010(void) { sub_005b79e0(); }

void sub_005b7aa0();
// @baa 0x005b9130
void sub_005b9130(void) { sub_005b7aa0(); }

void sub_005b7b10();
// @baa 0x005b9140
void sub_005b9140(void) { sub_005b7b10(); }

void sub_005b7b80();
// @baa 0x005b9150
void sub_005b9150(void) { sub_005b7b80(); }

int sub_005ae290(void);
struct C_005b9160 { int sub_005b9160(void); };
// @baa 0x005b9160
int C_005b9160::sub_005b9160(void)
{
    int param_1 = (int)this;

  sub_005ae290();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005ba8b0
void sub_005ba8b0(void) { sub_005b79e0(); }

// @baa 0x005ba8c0
void sub_005ba8c0(void) { sub_005b7aa0(); }

// @baa 0x005ba8d0
void sub_005ba8d0(void) { sub_005b7b10(); }

// @baa 0x005ba8e0
void sub_005ba8e0(void) { sub_005b7b80(); }

struct C_005ba8f0 { int sub_005ba8f0(void); };
// @baa 0x005ba8f0
int C_005ba8f0::sub_005ba8f0(void)
{
    int param_1 = (int)this;

  sub_005ae290();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae350(void);
struct C_005ba910 { int sub_005ba910(void); };
// @baa 0x005ba910
int C_005ba910::sub_005ba910(void)
{
    int param_1 = (int)this;

  sub_005ae350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae3b0(void);
struct C_005ba930 { int sub_005ba930(void); };
// @baa 0x005ba930
int C_005ba930::sub_005ba930(void)
{
    int param_1 = (int)this;

  sub_005ae3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005ae410(void);
struct C_005ba950 { int sub_005ba950(void); };
// @baa 0x005ba950
int C_005ba950::sub_005ba950(void)
{
    int param_1 = (int)this;

  sub_005ae410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005b5c80();
// @baa 0x005ba970
void sub_005ba970(void) { sub_005b5c80(); }

void sub_005b6b90();
// @baa 0x005ba980
void sub_005ba980(void) { sub_005b6b90(); }

void sub_005b6c00();
// @baa 0x005ba990
void sub_005ba990(void) { sub_005b6c00(); }

struct C_005ba9a0 { void sub_005b8460(int); C_005ba9a0 *sub_005ba9a0(int); };

// @baa 0x005ba9a0
C_005ba9a0 *C_005ba9a0::sub_005ba9a0(int a) { sub_005b8460(a); return this; }

struct C_005ba9c0 { void sub_005b84c0(int); C_005ba9c0 *sub_005ba9c0(int); };

// @baa 0x005ba9c0
C_005ba9c0 *C_005ba9c0::sub_005ba9c0(int a) { sub_005b84c0(a); return this; }

// @baa 0x005baa90
void sub_005baa90(void) { sub_005b79e0(); }

// @baa 0x005baaa0
void sub_005baaa0(void) { sub_005b7aa0(); }

// @baa 0x005baab0
void sub_005baab0(void) { sub_005b7b10(); }

// @baa 0x005baac0
void sub_005baac0(void) { sub_005b7b80(); }

struct M_005baad0 { void sub_005b5c80(); };

struct C_005baad0 { char pad[4]; M_005baad0 m; void sub_005baad0(); };

// @baa 0x005baad0
void C_005baad0::sub_005baad0() { m.sub_005b5c80(); }

void sub_005bde10();
// @baa 0x005bfa40
void sub_005bfa40(void) { sub_005bde10(); }

int sub_005ae2f0(void);
struct C_005bfa50 { int sub_005bfa50(void); };
// @baa 0x005bfa50
int C_005bfa50::sub_005bfa50(void)
{
    int param_1 = (int)this;

  sub_005ae2f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
