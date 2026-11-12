// Engine_0cb0000.cpp (part 1 of 4): 208 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00cb00a0
int USaveGameSummary::vf_000(void) { return 1; }

// @baa 0x00cb00b0
bool USaveGameSummary::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    undefined4 sub_00cb0260(byte);
};

int sub_0053dfa0(...);
int sub_00d5d590(void);
// @baa 0x00cb0260
undefined4 C::sub_00cb0260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d5d590();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00cb0280
void UEngine::vf_124(int a0, int a1, int a2) {  }

// @baa 0x00cb0290
undefined4 UEngine::vf_168(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x330) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x330) + 0x38);
  }
  return 0;
}

extern undefined4 g_026c3cdc;
// @baa 0x00cb02c0
undefined4 sub_00cb02c0(void)
{
  return *(undefined4 *)(g_026c3cdc + 0x34);
}

// @baa 0x00cb02d0
undefined4 sub_00cb02d0(void)
{
  return *(undefined4 *)(g_026c3cdc + 0x44);
}

// @baa 0x00cb02e0
undefined4 sub_00cb02e0(void)
{
  return *(undefined4 *)(g_026c3cdc + 0x54);
}

// @baa 0x00cb0300
undefined4 sub_00cb0300(void)
{
  return *(undefined4 *)(g_026c3cdc + 0x74);
}

// @baa 0x00cb0420
int UEngine::sub_00cb0420(void) { return *(int*)((char*)this + 968); }

// @baa 0x00cb0430
uint UEngine::sub_00cb0430(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1e4) >> 0xf & 1;
}

struct C_00cb0b10 { int sub_00cb0b10(void); };

// @baa 0x00cb0b10
int C_00cb0b10::sub_00cb0b10(void) { return *(int*)((char*)this + 0); }

struct C_00cb0b20 { int sub_00cb0b20(void); };

// @baa 0x00cb0b20
int C_00cb0b20::sub_00cb0b20(void) { return *(int*)((char*)this + 0); }

struct C_00cb0b30 { int sub_00cb0b30(void); };

// @baa 0x00cb0b30
int C_00cb0b30::sub_00cb0b30(void) { return *(int*)((char*)this + 0); }

struct C_00cb0b40 { int sub_00cb0b40(void); };

// @baa 0x00cb0b40
int C_00cb0b40::sub_00cb0b40(void) { return *(int*)((char*)this + 0); }

struct C_00cb0b50 { int sub_00cb0b50(void); };

// @baa 0x00cb0b50
int C_00cb0b50::sub_00cb0b50(void) { return *(int*)((char*)this + 4); }

struct C_00cb0b60 { int sub_00cb0b60(void); };

// @baa 0x00cb0b60
int C_00cb0b60::sub_00cb0b60(void) { return *(int*)((char*)this + 4); }

struct C_00cb0b70 { int sub_00cb0b70(void); };

// @baa 0x00cb0b70
int C_00cb0b70::sub_00cb0b70(void) { return *(int*)((char*)this + 4); }

struct C_00cb0b80 { int a, b, c; C_00cb0b80(); };

// @baa 0x00cb0b80
C_00cb0b80::C_00cb0b80() : a(0), b(0), c(0) {}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00cb0b90();
};

// @baa 0x00cb0b90
S *S::sub_00cb0b90()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00cb0ba0 { int a, b, c; C_00cb0ba0(); };

// @baa 0x00cb0ba0
C_00cb0ba0::C_00cb0ba0() : a(0), b(0), c(0) {}

struct C_00cb0bb0 { int a, b, c; C_00cb0bb0(); };

// @baa 0x00cb0bb0
C_00cb0bb0::C_00cb0bb0() : a(0), b(0), c(0) {}

struct C_00cb0bc0 { int a, b, c; C_00cb0bc0(); };

// @baa 0x00cb0bc0
C_00cb0bc0::C_00cb0bc0() : a(0), b(0), c(0) {}

struct C_00cb0bd0 { int a, b, c; C_00cb0bd0(); };

// @baa 0x00cb0bd0
C_00cb0bd0::C_00cb0bd0() : a(0), b(0), c(0) {}

struct S_00cb0be0 {
    INT Unk00;
    INT Unk04;
    S_00cb0be0 *sub_00cb0be0();
};

// @baa 0x00cb0be0
S_00cb0be0 *S_00cb0be0::sub_00cb0be0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00cb0bf0 { int a, b, c; C_00cb0bf0(); };

// @baa 0x00cb0bf0
C_00cb0bf0::C_00cb0bf0() : a(0), b(0), c(0) {}

struct C_00cb0c00 {
    undefined4 sub_00cb0c00(byte);
};

int sub_00ccf260(void);
// @baa 0x00cb0c00
undefined4 C_00cb0c00::sub_00cb0c00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ccf260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00cb0cd0 { C_00cb0cd0* sub_00cb0cd0(int a0); };

// @baa 0x00cb0cd0
C_00cb0cd0* C_00cb0cd0::sub_00cb0cd0(int a0) { return this; }

struct C_00cb0ce0 { int sub_00cb0ce0(void); };

// @baa 0x00cb0ce0
int C_00cb0ce0::sub_00cb0ce0(void) { return *(int*)((char*)this + 0); }

struct C_00cb0cf0 { int sub_00cb0cf0(void); };

// @baa 0x00cb0cf0
int C_00cb0cf0::sub_00cb0cf0(void) { return *(int*)((char*)this + 0); }

struct C_00cb0d00 { C_00cb0d00* sub_00cb0d00(int a0); };

// @baa 0x00cb0d00
C_00cb0d00* C_00cb0d00::sub_00cb0d00(int a0) { return this; }

struct C_00cb0d10 { int sub_00cb0d10(void); };

// @baa 0x00cb0d10
int C_00cb0d10::sub_00cb0d10(void) { return *(int*)((char*)this + 0); }

struct C_00cb0da0 { C_00cb0da0* sub_00cb0da0(int a0); };

// @baa 0x00cb0da0
C_00cb0da0* C_00cb0da0::sub_00cb0da0(int a0) { return this; }

struct C_00cb0db0 { C_00cb0db0* sub_00cb0db0(int a0); };

// @baa 0x00cb0db0
C_00cb0db0* C_00cb0db0::sub_00cb0db0(int a0) { return this; }

struct C_00cb0e30 { C_00cb0e30* sub_00cb0e30(int a0); };

// @baa 0x00cb0e30
C_00cb0e30* C_00cb0e30::sub_00cb0e30(int a0) { return this; }

struct C_00cb0e40 { C_00cb0e40* sub_00cb0e40(int a0); };

// @baa 0x00cb0e40
C_00cb0e40* C_00cb0e40::sub_00cb0e40(int a0) { return this; }

struct C_00cb0e50 { C_00cb0e50* sub_00cb0e50(int a0); };

// @baa 0x00cb0e50
C_00cb0e50* C_00cb0e50::sub_00cb0e50(int a0) { return this; }

struct C_00cb0e60 { C_00cb0e60* sub_00cb0e60(int a0); };

// @baa 0x00cb0e60
C_00cb0e60* C_00cb0e60::sub_00cb0e60(int a0) { return this; }

struct C_00cb0e70 { int sub_00cb0e70(void); };

// @baa 0x00cb0e70
int C_00cb0e70::sub_00cb0e70(void) { return *(int*)((char*)this + 0); }

struct C_00cb0ef0 { C_00cb0ef0* sub_00cb0ef0(int a0); };

// @baa 0x00cb0ef0
C_00cb0ef0* C_00cb0ef0::sub_00cb0ef0(int a0) { return this; }

struct C_00cb0f00 { int sub_00cb0f00(void); };

// @baa 0x00cb0f00
int C_00cb0f00::sub_00cb0f00(void) { return *(int*)((char*)this + 0); }

struct C_00cb0f80 { C_00cb0f80* sub_00cb0f80(int a0); };

// @baa 0x00cb0f80
C_00cb0f80* C_00cb0f80::sub_00cb0f80(int a0) { return this; }

struct C_00cb10b0 { C_00cb10b0* sub_00cb10b0(int a0); };

// @baa 0x00cb10b0
C_00cb10b0* C_00cb10b0::sub_00cb10b0(int a0) { return this; }

struct C_00cb10c0 { C_00cb10c0* sub_00cb10c0(int a0); };

// @baa 0x00cb10c0
C_00cb10c0* C_00cb10c0::sub_00cb10c0(int a0) { return this; }

struct C_00cb10d0 { int sub_00cb10d0(void); };

// @baa 0x00cb10d0
int C_00cb10d0::sub_00cb10d0(void) { return *(int*)((char*)this + 0); }

struct C_00cb1210 { C_00cb1210* sub_00cb1210(int a0); };

// @baa 0x00cb1210
C_00cb1210* C_00cb1210::sub_00cb1210(int a0) { return this; }

struct C_00cb1220 { C_00cb1220* sub_00cb1220(int a0); };

// @baa 0x00cb1220
C_00cb1220* C_00cb1220::sub_00cb1220(int a0) { return this; }

struct C_00cb1230 { int sub_00cb1230(void); };

// @baa 0x00cb1230
int C_00cb1230::sub_00cb1230(void) { return *(int*)((char*)this + 0); }

struct C_00cb1240 { int sub_00cb1240(void); };

// @baa 0x00cb1240
int C_00cb1240::sub_00cb1240(void) { return *(int*)((char*)this + 0); }

struct C_00cb12c0 { C_00cb12c0* sub_00cb12c0(int a0); };

// @baa 0x00cb12c0
C_00cb12c0* C_00cb12c0::sub_00cb12c0(int a0) { return this; }

struct C_00cb12d0 { int sub_00cb12d0(void); };

// @baa 0x00cb12d0
int C_00cb12d0::sub_00cb12d0(void) { return *(int*)((char*)this + 0); }

struct C_00cb1350 { C_00cb1350* sub_00cb1350(int a0); };

// @baa 0x00cb1350
C_00cb1350* C_00cb1350::sub_00cb1350(int a0) { return this; }

struct C_00cb1360 { int sub_00cb1360(void); };

// @baa 0x00cb1360
int C_00cb1360::sub_00cb1360(void) { return *(int*)((char*)this + 0); }

struct C_00cb13e0 { C_00cb13e0* sub_00cb13e0(int a0); };

// @baa 0x00cb13e0
C_00cb13e0* C_00cb13e0::sub_00cb13e0(int a0) { return this; }

struct C_00cb13f0 {
    bool sub_00cb13f0();
};

// @baa 0x00cb13f0
bool C_00cb13f0::sub_00cb13f0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00cb1400 {
    int x;
    int y;
    C_00cb1400* sub_00cb1400();
};

// @baa 0x00cb1400
C_00cb1400* C_00cb1400::sub_00cb1400()
{
    ++y;
    return this;
}

struct C_00cb1410 {
    int sub_00cb1410();
};

// @baa 0x00cb1410
int C_00cb1410::sub_00cb1410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00cb1420 {
    int sub_00cb1420();
};

// @baa 0x00cb1420
int C_00cb1420::sub_00cb1420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00cb1430 {
    int sub_00cb1430();
};

// @baa 0x00cb1430
int C_00cb1430::sub_00cb1430(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00cb1440 {
    undefined4 sub_00cb1440(byte);
    int sub_00d67c50();
};

// @baa 0x00cb1440
undefined4 C_00cb1440::sub_00cb1440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00cb1440 *)(((char *)this + 4)))->sub_00d67c50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00cb1470 {
    void sub_00cb1470();
};

// @baa 0x00cb1470
void C_00cb1470::sub_00cb1470(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// @baa 0x00cb1490
bool sub_00cb1490(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00cb14a0 { int a, b; C_00cb14a0(const C_00cb14a0 &); };

// @baa 0x00cb14a0
C_00cb14a0::C_00cb14a0(const C_00cb14a0 &o) : a(o.a), b(o.b) {}

// @baa 0x00cb14e0
bool sub_00cb14e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00cb14f0 { int sub_00cb14f0(void); };

// @baa 0x00cb14f0
int C_00cb14f0::sub_00cb14f0(void) { return *(int*)((char*)this + 0); }

struct C_00cb1500 { int sub_00cb1500(void); };

// @baa 0x00cb1500
int C_00cb1500::sub_00cb1500(void) { return *(int*)((char*)this + 0); }

struct C_00cb1510 { int sub_00cb1510(void); };

// @baa 0x00cb1510
int C_00cb1510::sub_00cb1510(void) { return *(int*)((char*)this + 0); }

struct C_00cb1520 { int sub_00cb1520(void); };

// @baa 0x00cb1520
int C_00cb1520::sub_00cb1520(void) { return *(int*)((char*)this + 0); }

struct C_00cb1530 { int sub_00cb1530(void); };

// @baa 0x00cb1530
int C_00cb1530::sub_00cb1530(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00cb1540 { int sub_00cb1540(void); };

// @baa 0x00cb1540
int C_00cb1540::sub_00cb1540(void) { return *(int*)((char*)this + 0); }

struct C_00cb1550 { int sub_00cb1550(void); };

// @baa 0x00cb1550
int C_00cb1550::sub_00cb1550(void) { return *(int*)((char*)this + 0); }

struct C_00cb1560 { int sub_00cb1560(void); };

// @baa 0x00cb1560
int C_00cb1560::sub_00cb1560(void) { return *(int*)((char*)this + 0); }

struct C_00cb1570 { int sub_00cb1570(void); };

// @baa 0x00cb1570
int C_00cb1570::sub_00cb1570(void) { return *(int*)((char*)this + 0); }

struct C_00cb1580 { int sub_00cb1580(void); };

// @baa 0x00cb1580
int C_00cb1580::sub_00cb1580(void) { return *(int*)((char*)this + 0); }

struct C_00cb1590 { int sub_00cb1590(void); };

// @baa 0x00cb1590
int C_00cb1590::sub_00cb1590(void) { return *(int*)((char*)this + 0); }

struct C_00cb15a0 { int sub_00cb15a0(void); };

// @baa 0x00cb15a0
int C_00cb15a0::sub_00cb15a0(void) { return *(int*)((char*)this + 0); }

struct C_00cb1690 { int sub_00cb1690(void); };

// @baa 0x00cb1690
int C_00cb1690::sub_00cb1690(void) { return *(int*)((char*)this + 0); }

struct C_00cb1710 { int sub_00cb1710(void); };

// @baa 0x00cb1710
int C_00cb1710::sub_00cb1710(void) { return *(int*)((char*)this + 0); }

struct C_00cb1720 { int sub_00cb1720(void); };

// @baa 0x00cb1720
int C_00cb1720::sub_00cb1720(void) { return *(int*)((char*)this + 0); }

struct C_00cb1730 { int sub_00cb1730(void); };

// @baa 0x00cb1730
int C_00cb1730::sub_00cb1730(void) { return *(int*)((char*)this + 0); }

struct S_00cb1740 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb1740(INT Index);
};

// @baa 0x00cb1740
DWORD* S_00cb1740::sub_00cb1740(INT Index)
{
    return &Items(Index);
}

struct C_00cb1790 { int sub_00cb1790(void); };

// @baa 0x00cb1790
int C_00cb1790::sub_00cb1790(void) { return *(int*)((char*)this + 0); }

struct C_00cb17d0 { int sub_00cb17d0(void); };

// @baa 0x00cb17d0
int C_00cb17d0::sub_00cb17d0(void) { return *(int*)((char*)this + 0); }

struct C_00cb17e0 { char* sub_00cb17e0(void); };

// @baa 0x00cb17e0
char* C_00cb17e0::sub_00cb17e0(void) { return (char*)this + 16; }

struct C_00cb1810 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00cb1810* sub_00cb1810(INT value);
};

// @baa 0x00cb1810
C_00cb1810* C_00cb1810::sub_00cb1810(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00cb1830 { int sub_00cb1830(void); };

// @baa 0x00cb1830
int C_00cb1830::sub_00cb1830(void) { return *(int*)((char*)this + 0); }

struct C_00cb1840 { int sub_00cb1840(void); };

// @baa 0x00cb1840
int C_00cb1840::sub_00cb1840(void) { return *(int*)((char*)this + 0); }

struct C_00cb1850 { int sub_00cb1850(void); };

// @baa 0x00cb1850
int C_00cb1850::sub_00cb1850(void) { return *(int*)((char*)this + 0); }

struct C_00cb1860 { int sub_00cb1860(void); };

// @baa 0x00cb1860
int C_00cb1860::sub_00cb1860(void) { return *(int*)((char*)this + 0); }

struct C_00cb1870 { int sub_00cb1870(void); };

// @baa 0x00cb1870
int C_00cb1870::sub_00cb1870(void) { return *(int*)((char*)this + 0); }

struct C_00cb1880 {
    void sub_00cb1880();
};

// @baa 0x00cb1880
void C_00cb1880::sub_00cb1880(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00cb18a0 { int a, b; C_00cb18a0(const C_00cb18a0 &); };

// @baa 0x00cb18a0
C_00cb18a0::C_00cb18a0(const C_00cb18a0 &o) : a(o.a), b(o.b) {}

struct C_00cb18e0 { int sub_00cb18e0(void); };

// @baa 0x00cb18e0
int C_00cb18e0::sub_00cb18e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00cb18f0
int sub_00cb18f0(int a0) { return *(int*)a0; }

// @baa 0x00cb1900
bool sub_00cb1900(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00cb1910 { int sub_00cb1910(void); };

// @baa 0x00cb1910
int C_00cb1910::sub_00cb1910(void) { return *(int*)((char*)this + 0); }

struct C_00cb1920 { int sub_00cb1920(void); };

// @baa 0x00cb1920
int C_00cb1920::sub_00cb1920(void) { return *(int*)((char*)this + 0); }

struct C_00cb1930 { int sub_00cb1930(void); };

// @baa 0x00cb1930
int C_00cb1930::sub_00cb1930(void) { return *(int*)((char*)this + 0); }

struct C_00cb1960 {
    undefined4 sub_00cb1960(uint);
};

// @baa 0x00cb1960
undefined4 C_00cb1960::sub_00cb1960(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 0x50 + (param_2 & 7) * 4);
}

struct C_00cb19b0 { int sub_00cb19b0(void); };

// @baa 0x00cb19b0
int C_00cb19b0::sub_00cb19b0(void) { return *(int*)((char*)this + 6352); }

struct C_00cb19c0 { int sub_00cb19c0(void); };

// @baa 0x00cb19c0
int C_00cb19c0::sub_00cb19c0(void) { return *(int*)((char*)this + 0); }

struct C_00cb19d0 { int sub_00cb19d0(void); };

// @baa 0x00cb19d0
int C_00cb19d0::sub_00cb19d0(void) { return *(int*)((char*)this + 0); }

struct C_00cb19e0 { int sub_00cb19e0(void); };

// @baa 0x00cb19e0
int C_00cb19e0::sub_00cb19e0(void) { return *(int*)((char*)this + 0); }

struct C_00cb19f0 { int sub_00cb19f0(void); };

// @baa 0x00cb19f0
int C_00cb19f0::sub_00cb19f0(void) { return *(int*)((char*)this + 0); }

struct C_00cb1a00 { int sub_00cb1a00(void); };

// @baa 0x00cb1a00
int C_00cb1a00::sub_00cb1a00(void) { return *(int*)((char*)this + 0); }

struct C_00cb1a10 { C_00cb1a10* sub_00cb1a10(void); };

// @baa 0x00cb1a10
C_00cb1a10* C_00cb1a10::sub_00cb1a10(void) { return this; }

struct C_00cb1a90 { C_00cb1a90* sub_00cb1a90(void); };

// @baa 0x00cb1a90
C_00cb1a90* C_00cb1a90::sub_00cb1a90(void) { return this; }

struct C_00cb1aa0 { C_00cb1aa0* sub_00cb1aa0(void); };

// @baa 0x00cb1aa0
C_00cb1aa0* C_00cb1aa0::sub_00cb1aa0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00cb1ab0 { int sub_00cb1ab0(void); };

// @baa 0x00cb1ab0
int C_00cb1ab0::sub_00cb1ab0(void) { return *(int*)((char*)this + 0); }

struct C_00cb1ac0 { int a, b; C_00cb1ac0(int, int); };

// @baa 0x00cb1ac0
C_00cb1ac0::C_00cb1ac0(int x, int y) : a(x), b(y) {}

struct C_00cb1ae0 { int sub_00cb1ae0(void); };

// @baa 0x00cb1ae0
int C_00cb1ae0::sub_00cb1ae0(void) { return *(int*)((char*)this + 20); }

struct C_00cb1af0 { C_00cb1af0* sub_00cb1af0(void); };

// @baa 0x00cb1af0
C_00cb1af0* C_00cb1af0::sub_00cb1af0(void) { return this; }

struct C_00cb1b00 { int sub_00cb1b00(void); };

// @baa 0x00cb1b00
int C_00cb1b00::sub_00cb1b00(void) { return *(int*)((char*)this + 0); }

void sub_00572b30();
// @baa 0x00cb1b10
void sub_00cb1b10(void) { sub_00572b30(); }

int sub_005eae70(...);
int sub_006adc00(void);
int sub_006d6b80(...);
extern undefined4 g_026b0de0;
// @baa 0x00cb1b20
void sub_00cb1b20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_007551e0(void);
int sub_007713d0(...);
extern undefined4 g_026b3b38;
// @baa 0x00cb1b70
void sub_00cb1b70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b3b38 == 0) {
    g_026b3b38 = sub_007713d0(L"Engine");
    sub_007551e0();
  }
  sub_005eae70(g_026b3b38,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_009f93a0(void);
int sub_00a047c0(...);
extern undefined4 g_026b6618;
// @baa 0x00cb1bc0
void sub_00cb1bc0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b6618 == 0) {
    g_026b6618 = sub_00a047c0(L"Engine");
    sub_009f93a0();
  }
  sub_005eae70(g_026b6618,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_005eb8e0(...);
int sub_00d780b0(void);
int sub_00d84210(...);
extern undefined4 g_026c59ac;
// @baa 0x00cb1c10
void sub_00cb1c10(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c59ac == 0) {
    g_026c59ac = sub_00d84210(L"Engine");
    sub_00d780b0();
  }
  sub_005eb8e0(g_026c59ac,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_008893e0(void);
int sub_008a0040(...);
extern undefined4 g_026b58f8;
// @baa 0x00cb1c60
void sub_00cb1c60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b58f8 == 0) {
    g_026b58f8 = sub_008a0040(L"Engine");
    sub_008893e0();
  }
  sub_005eb8e0(g_026b58f8,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00891ff0(void);
int sub_0089ff80(...);
extern undefined4 g_026b58d4;
// @baa 0x00cb1cb0
void sub_00cb1cb0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b58d4 == 0) {
    g_026b58d4 = sub_0089ff80(L"Engine");
    sub_00891ff0();
  }
  sub_005eb8e0(g_026b58d4,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00d8fef0(void);
int sub_00da0eb0(...);
extern undefined4 g_026c5bc0;
// @baa 0x00cb1d00
void sub_00cb1d00(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5bc0 == 0) {
    g_026c5bc0 = sub_00da0eb0(L"Engine");
    sub_00d8fef0();
  }
  sub_005eb8e0(g_026c5bc0,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00d67620(void);
int sub_00d8ad50(...);
extern undefined4 g_026c5968;
// @baa 0x00cb1d50
void sub_00cb1d50(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5968 == 0) {
    g_026c5968 = sub_00d8ad50(L"Engine");
    sub_00d67620();
  }
  sub_005eb8e0(g_026c5968,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00889e50(void);
int sub_0089bac0(...);
extern undefined4 g_026b5970;
// @baa 0x00cb1da0
void sub_00cb1da0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b5970 == 0) {
    g_026b5970 = sub_0089bac0(L"Engine");
    sub_00889e50();
  }
  sub_005eae70(g_026b5970,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_00ce8aa0(void);
int sub_00d194e0(...);
extern undefined4 g_026c5640;
// @baa 0x00cb1df0
void sub_00cb1df0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5640 == 0) {
    g_026c5640 = sub_00d194e0(L"Engine");
    sub_00ce8aa0();
  }
  sub_005eae70(g_026c5640,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

// @baa 0x00cb1e40
void sub_00cb1e40(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00cb1e60
uint sub_00cb1e60(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00cb1e80
uint sub_00cb1e80(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_00cb1ea0 { int a, b; C_00cb1ea0(const C_00cb1ea0 &); };

// @baa 0x00cb1ea0
C_00cb1ea0::C_00cb1ea0(const C_00cb1ea0 &o) : a(o.a), b(o.b) {}

struct C_00cb1ec0 { int a, b; C_00cb1ec0(const C_00cb1ec0 &); };

// @baa 0x00cb1ec0
C_00cb1ec0::C_00cb1ec0(const C_00cb1ec0 &o) : a(o.a), b(o.b) {}

struct C_00cb1f30 { int sub_00cb1f30(void); };

// @baa 0x00cb1f30
int C_00cb1f30::sub_00cb1f30(void) { return *(int*)((char*)this + 68); }

struct C_00cb2010 { C_00cb2010* sub_00cb2010(void); };

// @baa 0x00cb2010
C_00cb2010* C_00cb2010::sub_00cb2010(void) { *(int*)((char*)this + 0) = 0; return this; }

int sub_00627f00(...);
// @baa 0x00cb2020
void sub_00cb2020(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x4c);
  return;
}

struct C_00cb2040 { unsigned sub_00cb2040(void); };

// @baa 0x00cb2040
unsigned C_00cb2040::sub_00cb2040(void) { return *(unsigned*)((char*)this + 112) >> 31; }

struct C_00cb2050 {
    bool sub_00cb2050();
};

// @baa 0x00cb2050
bool C_00cb2050::sub_00cb2050(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00cb2060 { int sub_00cb2060(void); };

// @baa 0x00cb2060
int C_00cb2060::sub_00cb2060(void) { return *(int*)((char*)this + 0); }

struct C_00cb2070 { char* sub_00cb2070(void); };

// @baa 0x00cb2070
char* C_00cb2070::sub_00cb2070(void) { return (char*)this + 16; }

struct C_00cb2080 { int sub_00cb2080(void); };

// @baa 0x00cb2080
int C_00cb2080::sub_00cb2080(void) { return *(int*)((char*)this + 80); }

struct C_00cb2090 {
    void sub_00cb2090();
};

// @baa 0x00cb2090
void C_00cb2090::sub_00cb2090(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct C_00cb20b0 { C_00cb20b0* sub_00cb20b0(void); };

// @baa 0x00cb20b0
C_00cb20b0* C_00cb20b0::sub_00cb20b0(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_00cb20f0 { C_00cb20f0* sub_00cb20f0(void); };

// @baa 0x00cb20f0
C_00cb20f0* C_00cb20f0::sub_00cb20f0(void) { return this; }

struct A_00cb2100 { virtual void sub_00cb30c0(); char pad[16]; };

struct B_00cb2100 { virtual void sub_00cb30c0(); };

struct C_00cb2100 : A_00cb2100, B_00cb2100 { virtual void sub_00cb30c0(); C_00cb2100(); };

C_00cb2100::C_00cb2100() {}

// @baa 0x00cb2100
void C_00cb2100::sub_00cb30c0() {}

struct A_00cb2110 { virtual void sub_00cb3150(); char pad[16]; };

struct B_00cb2110 { virtual void sub_00cb3150(); };

struct C_00cb2110 : A_00cb2110, B_00cb2110 { virtual void sub_00cb3150(); C_00cb2110(); };

C_00cb2110::C_00cb2110() {}

// @baa 0x00cb2110
void C_00cb2110::sub_00cb3150() {}

struct A_00cb2120 { virtual void sub_00cb3030(); char pad[16]; };

struct B_00cb2120 { virtual void sub_00cb3030(); };

struct C_00cb2120 : A_00cb2120, B_00cb2120 { virtual void sub_00cb3030(); C_00cb2120(); };

C_00cb2120::C_00cb2120() {}

// @baa 0x00cb2120
void C_00cb2120::sub_00cb3030() {}

int sub_00c38ac0(void);
// @baa 0x00cb2500
undefined4 UCodecMovie::sub_00cb2500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00cb2520
undefined4 UObject::sub_00cb2520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00cb2540
undefined4 UObject::sub_00cb2540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00cb25f0
IMPLEMENT_CLASS_AT(UDistributionFloatSoundParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2604);

struct C_00cb3700 { int sub_00cb3700(void); };

// @baa 0x00cb3700
int C_00cb3700::sub_00cb3700(void) { return *(int*)((char*)this + 4); }

struct C_00cb4370{
int*sub_00cb4370(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x00cb4370
int*C_00cb4370::sub_00cb4370(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar2=*param_1;
iVar1=*param_2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1c8))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x214))((int)(iVar2));
}
return param_1;
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
	FFaceFXElement* sub_00cb5090(INT Index);
};

// @baa 0x00cb5090
FFaceFXElement* UFxRenderWidget::sub_00cb5090(INT Index)
{
	return &BoneArray(Index);
}

struct C_00cb50e0 {
    void sub_00cb50e0();
};

// @baa 0x00cb50e0
void C_00cb50e0::sub_00cb50e0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct S_00cb5130 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb5130(INT Index);
};

// @baa 0x00cb5130
DWORD* S_00cb5130::sub_00cb5130(INT Index)
{
    return &Items(Index);
}

struct S_00cb5180 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb5180(INT Index);
};

// @baa 0x00cb5180
DWORD* S_00cb5180::sub_00cb5180(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_00cb51d0 {
    TArray<E> Items; // 0x00
    E* sub_00cb51d0(INT Index);
};

// @baa 0x00cb51d0
E* S_00cb51d0::sub_00cb51d0(INT Index)
{
    return &Items(Index);
}

struct S_00cb5220 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb5220(INT Index);
};

// @baa 0x00cb5220
DWORD* S_00cb5220::sub_00cb5220(INT Index)
{
    return &Items(Index);
}

struct S_00cb5270 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb5270(INT Index);
};

// @baa 0x00cb5270
DWORD* S_00cb5270::sub_00cb5270(INT Index)
{
    return &Items(Index);
}

int sub_005413d0(...);
// @baa 0x00cb52c0
void sub_00cb52c0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00cb52d0 {
    void sub_00cb52d0(undefined4 *);
};

// @baa 0x00cb52d0
void C_00cb52d0::sub_00cb52d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00cb5350 {
    int sub_00cb5350(int);
};

// @baa 0x00cb5350
int C_00cb5350::sub_00cb5350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00cb5360 { C_00cb5360* sub_00cb5360(void); };

// @baa 0x00cb5360
C_00cb5360* C_00cb5360::sub_00cb5360(void) { *(int*)((char*)this + 12) = -1; return this; }

struct C_00cb53b0 { int sub_00cb53b0(void); };

// @baa 0x00cb53b0
int C_00cb53b0::sub_00cb53b0(void) { return *(int*)((char*)this + 20); }

struct C_00cb53c0 { C_00cb53c0* sub_00cb53c0(void); };

// @baa 0x00cb53c0
C_00cb53c0* C_00cb53c0::sub_00cb53c0(void) { *(int*)((char*)this + 6336) = 0; return this; }

struct C_00cb53d0 {
    uint sub_00cb53d0();
};

// @baa 0x00cb53d0
uint C_00cb53d0::sub_00cb53d0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00cb5460 {
    int sub_00cb5460(int);
};

// @baa 0x00cb5460
int C_00cb5460::sub_00cb5460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00cb5470 {
    uint sub_00cb5470();
};

// @baa 0x00cb5470
uint C_00cb5470::sub_00cb5470(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00cb5550 {
    int sub_00cb5550();
};

// @baa 0x00cb5550
int C_00cb5550::sub_00cb5550(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00cb58d0
void sub_00cb58d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00cb58f0
void sub_00cb58f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_00cb5980 { C_00cb5980* sub_00cb5980(void); };

// @baa 0x00cb5980
C_00cb5980* C_00cb5980::sub_00cb5980(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_00cb59a0 {
    uint sub_00cb59a0();
};

// @baa 0x00cb59a0
uint C_00cb59a0::sub_00cb59a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

int sub_00cafe30(void);
int sub_00cb4180(...);
extern undefined4 g_026c3cf0;
// @baa 0x00cb8330
int sub_00cb8330(void)
{
  if (g_026c3cf0 == 0) {
    g_026c3cf0 = sub_00cb4180(L"Engine");
    sub_00cafe30();
  }
  return g_026c3cf0;
}

int sub_005c7a20(void);
extern undefined * g_020865a8;
// @baa 0x00cb8be0
undefined4 * UObject::sub_00cb8be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020865a8);
  return param_1;
}

// @baa 0x00cb8c00
IMPLEMENT_CLASS_AT(USaveGameSummary, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 238);

// @baa 0x00cb8c70
struct C_00cbbbf0{
void sub_00cbbbf0();
};

// @baa 0x00cbbbf0
void C_00cbbbf0::sub_00cbbbf0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+8);
*(undefined4*)(param_1+8)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x230))((int)(iVar1));
}
return;
}

struct C_00cbc270{
void sub_00cbc270();
};

// @baa 0x00cbc270
void C_00cbc270::sub_00cbc270(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00cbe9a0 { void* Data; int Num; int Max; void sub_00cbe9a0(); };

// @baa 0x00cbe9a0
void C_00cbe9a0::sub_00cbe9a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cbea00 {
    void sub_00cbea00(int);
};

int sub_0053df70(...);
// @baa 0x00cbea00
void C_00cbea00::sub_00cbea00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00cbea40 {
    void sub_00cbea40(int);
};

// @baa 0x00cbea40
void C_00cbea40::sub_00cbea40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00cbeb60 { void sub_00cbeb60(void); };

// @baa 0x00cbeb60
void C_00cbeb60::sub_00cbeb60(void) { *(int*)((char*)this + 4) = 0; }

struct C_00cbeeb0 {
    undefined4 sub_00cbeeb0();
};

// @baa 0x00cbeeb0
undefined4 C_00cbeeb0::sub_00cbeeb0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00cbf020 { void* Data; int Num; int Max; void sub_00cbf020(); };

// @baa 0x00cbf020
void C_00cbf020::sub_00cbf020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cbf080 {
    void sub_00cbf080(int);
};

// @baa 0x00cbf080
void C_00cbf080::sub_00cbf080(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00cbf200 { void* Data; int Num; int Max; void sub_00cbf200(); };

// @baa 0x00cbf200
void C_00cbf200::sub_00cbf200() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cbf260 { void* Data; int Num; int Max; void sub_00cbf260(); };

// @baa 0x00cbf260
void C_00cbf260::sub_00cbf260() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00cbf2c0
void __stdcall sub_00cbf2c0(int a1, int a2)
{
    (void)a1; (void)a2;
}

// @baa 0x00cbf2d0
void __stdcall sub_00cbf2d0(int a0, int a1) {  }

// @baa 0x00cbf2e0
void __stdcall sub_00cbf2e0(int a0, int a1) {  }

// @baa 0x00cbf2f0
void __stdcall sub_00cbf2f0(int a0, int a1) {  }

// @baa 0x00cbf300
void __stdcall sub_00cbf300(int a0, int a1) {  }

// @baa 0x00cbf310
void __stdcall sub_00cbf310(int a0, int a1) {  }

// @baa 0x00cbf320
void __stdcall sub_00cbf320(int a0, int a1) {  }

struct M_00cbf330 { void sub_00765d90(); };

struct C_00cbf330 { char pad[8]; M_00cbf330 m; void sub_00cbf330(); };

// @baa 0x00cbf330
void C_00cbf330::sub_00cbf330() { m.sub_00765d90(); }

// @baa 0x00cbf420
int UObject::sub_00cbf420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00cbf430
int UObject::sub_00cbf430(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00cbf440
int UObject::sub_00cbf440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00cbf450
int UObject::sub_00cbf450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00cbf470
int UObject::sub_00cbf470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00cbf4a0 {
    uint sub_00cbf4a0();
};

// @baa 0x00cbf4a0
uint C_00cbf4a0::sub_00cbf4a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

// @baa 0x00cbf540
int UObject::sub_00cbf540(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00cbf550
int UObject::sub_00cbf550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00cbf560 {
    uint sub_00cbf560();
};

// @baa 0x00cbf560
uint C_00cbf560::sub_00cbf560(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00cbf580 {
    uint sub_00cbf580();
};

// @baa 0x00cbf580
uint C_00cbf580::sub_00cbf580(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00cbf5a0 {
    uint sub_00cbf5a0();
};

// @baa 0x00cbf5a0
uint C_00cbf5a0::sub_00cbf5a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

// @baa 0x00cbf640
int UObject::sub_00cbf640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00cbf860 {
    uint sub_00cbf860();
};

// @baa 0x00cbf860
uint C_00cbf860::sub_00cbf860(void)
{
    uint param_1 = (uint)this;
  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00cbf880 {
    uint sub_00cbf880();
};

// @baa 0x00cbf880
uint C_00cbf880::sub_00cbf880(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

