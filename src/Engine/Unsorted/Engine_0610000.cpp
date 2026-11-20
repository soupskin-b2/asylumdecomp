// Engine_0610000.cpp: 57 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

int sub_005c7a20(void);
extern undefined * g_01ea7880;
struct C_006123f0 { undefined4 * sub_006123f0(void); };
// @baa 0x006123f0
undefined4 * C_006123f0::sub_006123f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ea7880);
  return param_1;
}

// @baa 0x00612410
IMPLEMENT_CLASS_AT(UHelpCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UHelpCommandlet.cpp", 208);

// @baa 0x00612470
extern "C" int sub_0060fe70(int *);
// @baa 0x00612e00
int sub_00612e00(int *a) { return sub_0060fe70(a); }

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00612e10 : Inner {
    int num;
    int max;
    void sub_00612140(int* p);
    Outer_00612e10(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00612e10
Outer_00612e10::Outer_00612e10(int* p)
{
    num = 0;
    max = 0;
    sub_00612140(p);
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00612e70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612e70& operator++();
};

// @baa 0x00612e70
FSparseArrayConstIt_00612e70& FSparseArrayConstIt_00612e70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612e90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612e90& operator++();
};

// @baa 0x00612e90
FSparseArrayConstIt_00612e90& FSparseArrayConstIt_00612e90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612eb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612eb0& operator++();
};

// @baa 0x00612eb0
FSparseArrayConstIt_00612eb0& FSparseArrayConstIt_00612eb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612ed0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612ed0& operator++();
};

// @baa 0x00612ed0
FSparseArrayConstIt_00612ed0& FSparseArrayConstIt_00612ed0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612ef0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612ef0& operator++();
};

// @baa 0x00612ef0
FSparseArrayConstIt_00612ef0& FSparseArrayConstIt_00612ef0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612f30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612f30& operator++();
};

// @baa 0x00612f30
FSparseArrayConstIt_00612f30& FSparseArrayConstIt_00612f30::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612f50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612f50& operator++();
};

// @baa 0x00612f50
FSparseArrayConstIt_00612f50& FSparseArrayConstIt_00612f50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00612f70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00612f70& operator++();
};

// @baa 0x00612f70
FSparseArrayConstIt_00612f70& FSparseArrayConstIt_00612f70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006136f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006136f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006136f0
FSparseArrayConstIt_006136f0::FSparseArrayConstIt_006136f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00613740 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00613740(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00613740
FSparseArrayConstIt_00613740::FSparseArrayConstIt_00613740(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_0060d830(void);
struct C_006137f0 { int sub_006137f0(void); };
// @baa 0x006137f0
int C_006137f0::sub_006137f0(void)
{
    int param_1 = (int)this;

  sub_0060d830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct FSparseArrayConstIt_00613810 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00613810(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00613810
FSparseArrayConstIt_00613810::FSparseArrayConstIt_00613810(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00613cb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00613cb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00613cb0
FSparseArrayConstIt_00613cb0::FSparseArrayConstIt_00613cb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00613dc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00613dc0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00613dc0
FSparseArrayConstIt_00613dc0::FSparseArrayConstIt_00613dc0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_0060dd40(void);
struct C_00614780 { int sub_00614780(void); };
// @baa 0x00614780
int C_00614780::sub_00614780(void)
{
    int param_1 = (int)this;

  sub_0060dd40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060dda0(void);
struct C_006147a0 { int sub_006147a0(void); };
// @baa 0x006147a0
int C_006147a0::sub_006147a0(void)
{
    int param_1 = (int)this;

  sub_0060dda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060df60(void);
struct C_00614940 { int sub_00614940(void); };
// @baa 0x00614940
int C_00614940::sub_00614940(void)
{
    int param_1 = (int)this;

  sub_0060df60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060dfc0(void);
struct C_00614960 { int sub_00614960(void); };
// @baa 0x00614960
int C_00614960::sub_00614960(void)
{
    int param_1 = (int)this;

  sub_0060dfc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e070(void);
struct C_00614980 { int sub_00614980(void); };
// @baa 0x00614980
int C_00614980::sub_00614980(void)
{
    int param_1 = (int)this;

  sub_0060e070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e120(void);
struct C_006149a0 { int sub_006149a0(void); };
// @baa 0x006149a0
int C_006149a0::sub_006149a0(void)
{
    int param_1 = (int)this;

  sub_0060e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e180(void);
struct C_006149c0 { int sub_006149c0(void); };
// @baa 0x006149c0
int C_006149c0::sub_006149c0(void)
{
    int param_1 = (int)this;

  sub_0060e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct FSparseArrayConstIt_00617680 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00617680(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00617680
FSparseArrayConstIt_00617680::FSparseArrayConstIt_00617680(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view {
    int sub_00613790(int, int);
};

struct C_006176d0 { int sub_006176d0(undefined4 param_2, undefined4 param_3, undefined4 param_4); };
// @baa 0x006176d0
int C_006176d0::sub_006176d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00613790(param_2, param_4);
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
    void sub_00613570(int, int);
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
    void sub_00617700(void);
};

// @baa 0x00617700
void C::sub_00617700(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00613570(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00617720 { int sub_00617720(void); };
// @baa 0x00617720
int C_00617720::sub_00617720(void)
{
    int param_1 = (int)this;

  sub_0060d830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct FSparseArrayConstIt_00617740 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00617740(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00617740
FSparseArrayConstIt_00617740::FSparseArrayConstIt_00617740(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_00617790 {
    int sub_00613860(int, int);
};

struct C_00617790 { int sub_00617790(undefined4 param_2, undefined4 param_3, undefined4 param_4); };
// @baa 0x00617790
int C_00617790::sub_00617790(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00617790 *)(this))->sub_00613860(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_006177c0 {
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
    void sub_00613630(int, int);
};

struct C_006177c0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_006177c0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_006177c0(void);
};

// @baa 0x006177c0
void C_006177c0::sub_006177c0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00613630(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct FSparseArrayConstIt_00617910 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00617910(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00617910
FSparseArrayConstIt_00617910::FSparseArrayConstIt_00617910(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006179a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006179a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006179a0
FSparseArrayConstIt_006179a0::FSparseArrayConstIt_006179a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_006179f0 {
    int sub_00613e10(int, int);
};

struct C_006179f0 { int sub_006179f0(undefined4 param_2, undefined4 param_3, undefined4 param_4); };
// @baa 0x006179f0
int C_006179f0::sub_006179f0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_006179f0 *)(this))->sub_00613e10(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00617a20 {
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
    void sub_006134b0(int, int);
};

struct C_00617a20 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00617a20* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00617a20(void);
};

// @baa 0x00617a20
void C_00617a20::sub_00617a20(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006134b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00616b00();
// @baa 0x00617a40
void sub_00617a40(void) { sub_00616b00(); }

struct C_view_00617b10 {
    int sub_006140b0(int, int);
};

struct C_00617b10 { int sub_00617b10(undefined4 param_2, undefined4 param_3, undefined4 param_4); };
// @baa 0x00617b10
int C_00617b10::sub_00617b10(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00617b10 *)(this))->sub_006140b0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00617b40 {
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
    void sub_006133f0(int, int);
};

struct C_00617b40 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00617b40* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00617b40(void);
};

// @baa 0x00617b40
void C_00617b40::sub_00617b40(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006133f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00617b60 { int sub_00617b60(void); };
// @baa 0x00617b60
int C_00617b60::sub_00617b60(void)
{
    int param_1 = (int)this;

  sub_0060dd40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00617000();
// @baa 0x00617b80
void sub_00617b80(void) { sub_00617000(); }

struct C_00617b90 { int sub_00617b90(void); };
// @baa 0x00617b90
int C_00617b90::sub_00617b90(void)
{
    int param_1 = (int)this;

  sub_0060dda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00617bb0 {
    int sub_0060c760();
    int sub_005dae80(int, int);
};

struct C_00617bb0 { void sub_00617bb0(void); };
// @baa 0x00617bb0
void C_00617bb0::sub_00617bb0(void)
{
    int param_1 = (int)this;
  ((C_view_00617bb0 *)(this))->sub_0060c760();
  ((C_view_00617bb0 *)(this))->sub_005dae80(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00617bd0 {
    int sub_0060c930();
    int sub_00613570(int, int);
};

struct C_00617bd0 { void sub_00617bd0(void); };
// @baa 0x00617bd0
void C_00617bd0::sub_00617bd0(void)
{
    int param_1 = (int)this;
  ((C_view_00617bd0 *)(this))->sub_0060c930();
  ((C_view_00617bd0 *)(this))->sub_00613570(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00617bf0 {
    int sub_0060cb00();
    int sub_00613630(int, int);
};

struct C_00617bf0 { void sub_00617bf0(void); };
// @baa 0x00617bf0
void C_00617bf0::sub_00617bf0(void)
{
    int param_1 = (int)this;
  ((C_view_00617bf0 *)(this))->sub_0060cb00();
  ((C_view_00617bf0 *)(this))->sub_00613630(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00617c10 { int sub_00617c10(void); };
// @baa 0x00617c10
int C_00617c10::sub_00617c10(void)
{
    int param_1 = (int)this;

  sub_0060df60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00617c30 { int sub_00617c30(void); };
// @baa 0x00617c30
int C_00617c30::sub_00617c30(void)
{
    int param_1 = (int)this;

  sub_0060dfc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00617c50 { int sub_00617c50(void); };
// @baa 0x00617c50
int C_00617c50::sub_00617c50(void)
{
    int param_1 = (int)this;

  sub_0060e070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00617c70 { int sub_00617c70(void); };
// @baa 0x00617c70
int C_00617c70::sub_00617c70(void)
{
    int param_1 = (int)this;

  sub_0060e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00617c90 { int sub_00617c90(void); };
// @baa 0x00617c90
int C_00617c90::sub_00617c90(void)
{
    int param_1 = (int)this;

  sub_0060e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00617cb0 {
    int sub_00617080(int);
};

struct C_00617cb0 { void sub_00617cb0(void); };
// @baa 0x00617cb0
void C_00617cb0::sub_00617cb0(void)
{
    int param_1 = (int)this;
  ((C_view_00617cb0 *)((*(char **)((char *)this + 0x10))))->sub_00617080(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00617cd0 { void sub_006171a0(int); C_00617cd0 *sub_00617cd0(int); };

// @baa 0x00617cd0
C_00617cd0 *C_00617cd0::sub_00617cd0(int a) { sub_006171a0(a); return this; }

int sub_006149e0(...);
int sub_00637c10(...);
// @baa 0x00617cf0
void sub_00617cf0(undefined4 param_1, int param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_00637c10(param_1,param_2);
  sub_006149e0(uVar1,param_2 + 0xc);
  return;
}

void sub_00617350();
// @baa 0x00617e50
void sub_00617e50(void) { sub_00617350(); }

int sub_0060a2e0(void);
struct C_00617e60 { int sub_00617e60(void); };
// @baa 0x00617e60
int C_00617e60::sub_00617e60(void)
{
    int param_1 = (int)this;

  sub_0060a2e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00615d70();
// @baa 0x00617e80
void sub_00617e80(void) { sub_00615d70(); }
