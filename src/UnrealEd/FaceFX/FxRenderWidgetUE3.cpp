// FxRenderWidgetUE3.cpp (part 1 of 2): 62 functions
// Placed here by: neighbours 61, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C {
    undefined4 sub_0040f9a0(byte);
};

int sub_00409590(void);
int sub_0053dfa0(...);
// @baa 0x0040f9a0
undefined4 C::sub_0040f9a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00409590();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0040fa50 { void sub_0040bc60(); void sub_0040fa50(int); };

// @baa 0x0040fa50
void C_0040fa50::sub_0040fa50(int) { sub_0040bc60(); }

extern DWORD g_02616fcc;
// @baa 0x0040fc30
unsigned char sub_0040fc30(void)
{
  return g_02616fcc > 0;
}

extern DWORD g_02616fa8;
// @baa 0x0040fc40
unsigned char sub_0040fc40(void)
{
  return g_02616fa8 > 0;
}

extern undefined4 g_026174c0;
// @baa 0x0040fc50
undefined4 sub_0040fc50(void)
{
  return g_026174c0;
}

extern undefined4 g_026174e0;
// @baa 0x0040fc60
undefined4 sub_0040fc60(void)
{
  return g_026174e0;
}

extern undefined4 g_026174b8;
// @baa 0x0040fc70
int sub_0040fc70(int param_1)
{
  return g_026174b8 + param_1 * 0x1c;
}

struct C_0040fc90 {
    undefined4 * sub_0040fc90(byte);
};

int sub_01ab3290(...);
int sub_01ab5ca0(void);
extern undefined * g_01e40390;
// @baa 0x0040fc90
undefined4 * C_0040fc90::sub_0040fc90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e40390);
  sub_01ab5ca0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x20);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0040fcc0 { void* Data; int Num; int Max; void sub_0040fcc0(); };

// @baa 0x0040fcc0
void C_0040fcc0::sub_0040fcc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0040fd20(INT Index);
};

// @baa 0x0040fd20
DWORD* S::sub_0040fd20(INT Index)
{
    return &Items(Index);
}

struct S_0040fd70 {
    TArray<BYTE> Items; // 0x00
    BYTE* sub_0040fd70(INT Index);
};

// @baa 0x0040fd70
BYTE* S_0040fd70::sub_0040fd70(INT Index)
{
    return &Items(Index);
}

struct S_0040fdb0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0040fdb0(INT Index);
};

// @baa 0x0040fdb0
DWORD* S_0040fdb0::sub_0040fdb0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[64]; };

struct S_0040fe00 {
    TArray<E> Items; // 0x00
    E* sub_0040fe00(INT Index);
};

// @baa 0x0040fe00
E* S_0040fe00::sub_0040fe00(INT Index)
{
    return &Items(Index);
}

// @baa 0x0040fe50
void __stdcall sub_0040fe50(int a0, int a1) {  }

struct C_0040fe60 {
    int sub_0040fe60(int);
};

// @baa 0x0040fe60
int C_0040fe60::sub_0040fe60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040fe70 {
    int sub_0040fe70(int);
};

// @baa 0x0040fe70
int C_0040fe70::sub_0040fe70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040fe80 {
    int sub_0040fe80(int);
};

// @baa 0x0040fe80
int C_0040fe80::sub_0040fe80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0040fec0 {
    int sub_0040fec0(int);
};

// @baa 0x0040fec0
int C_0040fec0::sub_0040fec0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_0040fed0 {
    int sub_0040fed0(int);
};

// @baa 0x0040fed0
int C_0040fed0::sub_0040fed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct D_0040ff00 {
    void method();
};

struct C_0040ff00 {
    char pad[4];
    D_0040ff00 *d;
    void (D_0040ff00::*fn)();
    void sub_0040ff00();
};

// @baa 0x0040ff00
void C_0040ff00::sub_0040ff00() { return (d->*fn)(); }

struct C_0040ff10 {
    undefined4 * sub_0040ff10(byte);
};

extern undefined * g_01e4037c;
// @baa 0x0040ff10
undefined4 * C_0040ff10::sub_0040ff10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e4037c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_0040ff30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0040ff30(INT Index);
};

// @baa 0x0040ff30
DWORD* S_0040ff30::sub_0040ff30(INT Index)
{
    return &Items(Index);
}

struct S_0040ff80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0040ff80(INT Index);
};

// @baa 0x0040ff80
DWORD* S_0040ff80::sub_0040ff80(INT Index)
{
    return &Items(Index);
}

struct E_0040ffd0 { BYTE Bytes[16]; };

struct S_0040ffd0 {
    TArray<E_0040ffd0> Items; // 0x00
    E_0040ffd0* sub_0040ffd0(INT Index);
};

// @baa 0x0040ffd0
E_0040ffd0* S_0040ffd0::sub_0040ffd0(INT Index)
{
    return &Items(Index);
}

struct S_00410020 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00410020(INT Index);
};

// @baa 0x00410020
DWORD* S_00410020::sub_00410020(INT Index)
{
    return &Items(Index);
}

struct S_00410070 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00410070(INT Index);
};

// @baa 0x00410070
DWORD* S_00410070::sub_00410070(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_004100c0(INT Index);
};

// @baa 0x004100c0
FFaceFXElement* UFxRenderWidget::sub_004100c0(INT Index)
{
	return &BoneArray(Index);
}

struct E_00410110 { BYTE Bytes[12]; };

struct S_00410110 {
    TArray<E_00410110> Items; // 0x00
    E_00410110* sub_00410110(INT Index);
};

// @baa 0x00410110
E_00410110* S_00410110::sub_00410110(INT Index)
{
    return &Items(Index);
}

struct C_00410160 {
    int sub_00410160(int);
};

// @baa 0x00410160
int C_00410160::sub_00410160(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct E_00410170 { BYTE Bytes[44]; };

struct S_00410170 {
    TArray<E_00410170> Items; // 0x00
    E_00410170* sub_00410170(INT Index);
};

// @baa 0x00410170
E_00410170* S_00410170::sub_00410170(INT Index)
{
    return &Items(Index);
}

struct C_00410260 {
    void sub_00410260();
};

// @baa 0x00410260
void C_00410260::sub_00410260(void)
{
    int * param_1 = (int *)this;

  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

// @baa 0x00410420
void sub_00410420(void) {  }

// @baa 0x00410430
void sub_00410430(void) {  }

// @baa 0x00410440
void sub_00410440(void) {  }

// @baa 0x00410450
void sub_00410450(void) {  }

// @baa 0x00410460
void sub_00410460(void) {  }

// @baa 0x00410470
void sub_00410470(void) {  }

// @baa 0x00410480
void sub_00410480(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410490(volatile FFaceData *Other);
};

// @baa 0x00410490
void FFaceData::sub_00410490(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004104c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004104c0(volatile FFaceData_004104c0 *Other);
};

// @baa 0x004104c0
void FFaceData_004104c0::sub_004104c0(volatile FFaceData_004104c0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004104f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004104f0(volatile FFaceData_004104f0 *Other);
};

// @baa 0x004104f0
void FFaceData_004104f0::sub_004104f0(volatile FFaceData_004104f0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410520 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410520(volatile FFaceData_00410520 *Other);
};

// @baa 0x00410520
void FFaceData_00410520::sub_00410520(volatile FFaceData_00410520 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410550 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410550(volatile FFaceData_00410550 *Other);
};

// @baa 0x00410550
void FFaceData_00410550::sub_00410550(volatile FFaceData_00410550 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410580 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410580(volatile FFaceData_00410580 *Other);
};

// @baa 0x00410580
void FFaceData_00410580::sub_00410580(volatile FFaceData_00410580 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004105b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004105b0(volatile FFaceData_004105b0 *Other);
};

// @baa 0x004105b0
void FFaceData_004105b0::sub_004105b0(volatile FFaceData_004105b0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004105e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004105e0(volatile FFaceData_004105e0 *Other);
};

// @baa 0x004105e0
void FFaceData_004105e0::sub_004105e0(volatile FFaceData_004105e0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410610 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410610(volatile FFaceData_00410610 *Other);
};

// @baa 0x00410610
void FFaceData_00410610::sub_00410610(volatile FFaceData_00410610 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410640 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410640(volatile FFaceData_00410640 *Other);
};

// @baa 0x00410640
void FFaceData_00410640::sub_00410640(volatile FFaceData_00410640 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410670 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410670(volatile FFaceData_00410670 *Other);
};

// @baa 0x00410670
void FFaceData_00410670::sub_00410670(volatile FFaceData_00410670 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004106a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004106a0(volatile FFaceData_004106a0 *Other);
};

// @baa 0x004106a0
void FFaceData_004106a0::sub_004106a0(volatile FFaceData_004106a0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004107b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004107b0(volatile FFaceData_004107b0 *Other);
};

// @baa 0x004107b0
void FFaceData_004107b0::sub_004107b0(volatile FFaceData_004107b0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_00410870 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410870(volatile FFaceData_00410870 *Other);
};

// @baa 0x00410870
void FFaceData_00410870::sub_00410870(volatile FFaceData_00410870 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004108a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004108a0(volatile FFaceData_004108a0 *Other);
};

// @baa 0x004108a0
void FFaceData_004108a0::sub_004108a0(volatile FFaceData_004108a0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004108d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004108d0(volatile FFaceData_004108d0 *Other);
};

// @baa 0x004108d0
void FFaceData_004108d0::sub_004108d0(volatile FFaceData_004108d0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_00410900 { void sub_01ab58f0(); };

// @baa 0x00410900
void sub_00410900(S_00410900 *p) { if (p) p->sub_01ab58f0(); }

struct S_00410910 { void sub_01ab58f0(); };

// @baa 0x00410910
void sub_00410910(S_00410910 *p) { if (p) p->sub_01ab58f0(); }

struct FFaceData_00410b70 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00410b70(volatile FFaceData_00410b70 *Other);
};

// @baa 0x00410b70
void FFaceData_00410b70::sub_00410b70(volatile FFaceData_00410b70 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_00410ba0 { void sub_0046c170(); };

// @baa 0x00410ba0
void sub_00410ba0(S_00410ba0 *p) { if (p) p->sub_0046c170(); }

struct C_00410c20 {
    undefined4 sub_00410c20(byte);
    int sub_01ab58f0();
};

// @baa 0x00410c20
undefined4 C_00410c20::sub_00410c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00410c20 *)(((char *)this + 4)))->sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern TArray<int> g_026a1ca4;
struct C_00410f00 {
    int sub_00410f00();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00410f00
int C_00410f00::sub_00410f00()
{
    return g_026a1ca4(Index);
}

struct C_00411190 {
    undefined4 sub_00411190(byte);
};

int sub_0040f090(void);
// @baa 0x00411190
undefined4 C_00411190::sub_00411190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040f090();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_02663d88;
// @baa 0x00489170
void sub_00489170(undefined4 * param_1)
{
  *param_1 = g_02663d88;
  return;
}
