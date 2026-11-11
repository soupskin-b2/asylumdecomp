// GFx_1900000.cpp (part 1 of 6): 357 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_018d3de0();
// @baa 0x01900050
void sub_01900050(void) { sub_018d3de0(); }

extern char g_023f5e04[];
struct C { void sub_01900060(void); };

// @baa 0x01900060
void C::sub_01900060(void) { *(int*)((char*)this + 0) = (int)g_023f5e04; }

struct C_01900120 {
    undefined4 * sub_01900120(byte);
};

int sub_00402660(...);
// @baa 0x01900120
undefined4 * C_01900120::sub_01900120(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01900170 {
    void sub_01900170(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01900170
void C_01900170::sub_01900170(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  return;
}

struct C_019001a0 { void sub_019001a0(int a0); };

// @baa 0x019001a0
void C_019001a0::sub_019001a0(int a0) { *(int*)((char*)this + 0) = a0; }

// @baa 0x01900230
void sub_01900230(void) { sub_018d3de0(); }

// @baa 0x01900240
void sub_01900240(void) { sub_018d3de0(); }

extern char g_023f5e18[];
struct C_01900250 { C_01900250* sub_01900250(void); };

// @baa 0x01900250
C_01900250* C_01900250::sub_01900250(void) { *(int*)((char*)this + 0) = (int)g_023f5e18; return this; }

struct C_019002a0 { void sub_019002a0(void); };

// @baa 0x019002a0
void C_019002a0::sub_019002a0(void) { *(int*)((char*)this + 0) = (int)g_023f5e04; }

struct C_019002b0 { C_019002b0* sub_019002b0(void); };

// @baa 0x019002b0
C_019002b0* C_019002b0::sub_019002b0(void) { *(int*)((char*)this + 0) = (int)g_023f5e04; return this; }

extern char g_023f5e24[];
struct C_019002c0 { C_019002c0* sub_019002c0(void); };

// @baa 0x019002c0
C_019002c0* C_019002c0::sub_019002c0(void) { *(int*)((char*)this + 0) = (int)g_023f5e24; return this; }

struct C_019002d0 { void sub_019002d0(void); };

// @baa 0x019002d0
void C_019002d0::sub_019002d0(void) { *(int*)((char*)this + 0) = (int)g_023f5e04; }

struct C_019002e0 {
    undefined4 * sub_019002e0(byte);
};

// @baa 0x019002e0
undefined4 * C_019002e0::sub_019002e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023f5e38[];
struct C_01900300 { C_01900300* sub_01900300(void); };

// @baa 0x01900300
C_01900300* C_01900300::sub_01900300(void) { *(int*)((char*)this + 0) = (int)g_023f5e38; return this; }

struct C_01900310 { void sub_01900310(void); };

// @baa 0x01900310
void C_01900310::sub_01900310(void) { *(int*)((char*)this + 0) = (int)g_023f5e04; }

struct C_01900320 {
    undefined4 * sub_01900320(byte);
};

// @baa 0x01900320
undefined4 * C_01900320::sub_01900320(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01900360 { C_01900360* sub_01900360(void); };

// @baa 0x01900360
C_01900360* C_01900360::sub_01900360(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019003c0 { int sub_019003c0(void); };

// @baa 0x019003c0
int C_019003c0::sub_019003c0(void) { return *(int*)((char*)this + 0); }

struct C_01900400 { C_01900400* sub_01900400(void); };

// @baa 0x01900400
C_01900400* C_01900400::sub_01900400(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900410 { int sub_01900410(void); };

// @baa 0x01900410
int C_01900410::sub_01900410(void) { return *(int*)((char*)this + 0); }

struct C_01900420 { int sub_01900420(void); };

// @baa 0x01900420
int C_01900420::sub_01900420(void) { return *(int*)((char*)this + 0); }

struct C_01900430 { C_01900430* sub_01900430(void); };

// @baa 0x01900430
C_01900430* C_01900430::sub_01900430(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900470 { C_01900470* sub_01900470(void); };

// @baa 0x01900470
C_01900470* C_01900470::sub_01900470(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019004d0 { C_019004d0* sub_019004d0(void); };

// @baa 0x019004d0
C_019004d0* C_019004d0::sub_019004d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019004e0 { C_019004e0* sub_019004e0(void); };

// @baa 0x019004e0
C_019004e0* C_019004e0::sub_019004e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900570 { C_01900570* sub_01900570(void); };

// @baa 0x01900570
C_01900570* C_01900570::sub_01900570(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900580 { C_01900580* sub_01900580(void); };

// @baa 0x01900580
C_01900580* C_01900580::sub_01900580(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900590 { C_01900590* sub_01900590(void); };

// @baa 0x01900590
C_01900590* C_01900590::sub_01900590(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019005f0 { int sub_019005f0(void); };

// @baa 0x019005f0
int C_019005f0::sub_019005f0(void) { return *(int*)((char*)this + 0); }

struct C_01900600 { C_01900600* sub_01900600(void); };

// @baa 0x01900600
C_01900600* C_01900600::sub_01900600(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900640 { C_01900640* sub_01900640(void); };

// @baa 0x01900640
C_01900640* C_01900640::sub_01900640(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900670 { C_01900670* sub_01900670(void); };

// @baa 0x01900670
C_01900670* C_01900670::sub_01900670(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900680 { C_01900680* sub_01900680(void); };

// @baa 0x01900680
C_01900680* C_01900680::sub_01900680(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900690 { C_01900690* sub_01900690(void); };

// @baa 0x01900690
C_01900690* C_01900690::sub_01900690(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019006f0 { C_019006f0* sub_019006f0(void); };

// @baa 0x019006f0
C_019006f0* C_019006f0::sub_019006f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01900780 { int sub_01900780(void); };

// @baa 0x01900780
int C_01900780::sub_01900780(void) { return *(int*)((char*)this + 0); }

struct C_019007f0 { void sub_019007f0(void); };

// @baa 0x019007f0
void C_019007f0::sub_019007f0(void) { *(int*)((char*)this + 0) = (int)g_023f5e18; }

// @baa 0x01900800
undefined1 sub_01900800(void)
{
  return 1;
}

struct C_01900810 {
    void sub_01900810(int);
};

// @baa 0x01900810
void C_01900810::sub_01900810(int param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x3fffffff | param_2 << 0x1e;
  return;
}

struct C_01900830 {
    int sub_01900830(int);
};

// @baa 0x01900830
int C_01900830::sub_01900830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019008a0 { int sub_019008a0(void); };

// @baa 0x019008a0
int C_019008a0::sub_019008a0(void) { return *(int*)((char*)this + 0); }

struct C_019008b0 { int sub_019008b0(void); };

// @baa 0x019008b0
int C_019008b0::sub_019008b0(void) { return *(int*)((char*)this + 0); }

struct C_019008c0 { int sub_019008c0(void); };

// @baa 0x019008c0
int C_019008c0::sub_019008c0(void) { return *(int*)((char*)this + 0); }

struct C_01900930 { int sub_01900930(void); };

// @baa 0x01900930
int C_01900930::sub_01900930(void) { return *(int*)((char*)this + 0); }

struct C_01900940 { int sub_01900940(void); };

// @baa 0x01900940
int C_01900940::sub_01900940(void) { return *(int*)((char*)this + 0); }

struct C_01900950 { int sub_01900950(void); };

// @baa 0x01900950
int C_01900950::sub_01900950(void) { return *(int*)((char*)this + 0); }

struct C_01900960 { int sub_01900960(void); };

// @baa 0x01900960
int C_01900960::sub_01900960(void) { return *(int*)((char*)this + 0); }

struct C_01900970 { int sub_01900970(void); };

// @baa 0x01900970
int C_01900970::sub_01900970(void) { return *(int*)((char*)this + 0); }

struct C_01900980 { int sub_01900980(void); };

// @baa 0x01900980
int C_01900980::sub_01900980(void) { return *(int*)((char*)this + 0); }

struct C_01900990 { int sub_01900990(void); };

// @baa 0x01900990
int C_01900990::sub_01900990(void) { return *(int*)((char*)this + 0); }

struct C_019009a0 { int sub_019009a0(void); };

// @baa 0x019009a0
int C_019009a0::sub_019009a0(void) { return *(int*)((char*)this + 0); }

struct C_019009b0 { int sub_019009b0(void); };

// @baa 0x019009b0
int C_019009b0::sub_019009b0(void) { return *(int*)((char*)this + 0); }

struct C_019009c0 { int sub_019009c0(void); };

// @baa 0x019009c0
int C_019009c0::sub_019009c0(void) { return *(int*)((char*)this + 0); }

struct C_019009e0 {
    uint sub_019009e0();
};

// @baa 0x019009e0
uint C_019009e0::sub_019009e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019009f0 { unsigned sub_019009f0(void); };

// @baa 0x019009f0
unsigned C_019009f0::sub_019009f0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01900a00 { unsigned sub_01900a00(void); };

// @baa 0x01900a00
unsigned C_01900a00::sub_01900a00(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01900a10 {
    uint sub_01900a10();
};

// @baa 0x01900a10
uint C_01900a10::sub_01900a10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01900a20 {
    void sub_01900a20(uint);
};

// @baa 0x01900a20
void C_01900a20::sub_01900a20(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01900a40
int sub_01900a40(int a0) { return a0; }

struct C_01900a50 { int sub_01900a50(void); };

// @baa 0x01900a50
int C_01900a50::sub_01900a50(void) { return *(int*)((char*)this + 0); }

struct C_01900b70 { int sub_01900b70(void); };

// @baa 0x01900b70
int C_01900b70::sub_01900b70(void) { return *(int*)((char*)this + 32); }

struct C_01900e30 {
    undefined4 sub_01900e30();
};

// @baa 0x01900e30
undefined4 C_01900e30::sub_01900e30(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
}

struct C_01900e40 {
    undefined4 sub_01900e40();
};

// @baa 0x01900e40
undefined4 C_01900e40::sub_01900e40(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14);
}

struct C_01900ec0 {
    int sub_01900ec0(byte);
};

// @baa 0x01900ec0
int C_01900ec0::sub_01900ec0(byte param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((((param_2 & 0x80) == 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x18), iVar1 != 0))
     && (*(char *)(iVar1 + 0x14) == '\0')) {
    iVar2 = iVar1;
  }
  return iVar2;
}

struct C_01901010 {
    undefined4 * sub_01901010(byte);
};

// @baa 0x01901010
undefined4 * C_01901010::sub_01901010(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5e18));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023f5e9c[];
struct C_01901070 { C_01901070* sub_01901070(void); };

// @baa 0x01901070
C_01901070* C_01901070::sub_01901070(void) { *(int*)((char*)this + 0) = (int)g_023f5e9c; return this; }

struct C_01901080 {
    undefined4 * sub_01901080(byte);
};

// @baa 0x01901080
undefined4 * C_01901080::sub_01901080(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f5e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01901ea0
undefined4 * sub_01901ea0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x01901ec0
undefined4 * sub_01901ec0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x40000;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x01901ee0
undefined4 * sub_01901ee0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

void sub_01901dd0();
// @baa 0x019020d0
void sub_019020d0(void) { sub_01901dd0(); }

void sub_01902310();
// @baa 0x019029b0
void sub_019029b0(void) { sub_01902310(); }

struct C_01902b20 { int sub_01902b20(void); };

// @baa 0x01902b20
int C_01902b20::sub_01902b20(void) { return *(int*)((char*)this + 0); }

// @baa 0x019033d0
void __stdcall sub_019033d0(int a0) {  }

struct C_019033e0 { int sub_019033e0(void); };

// @baa 0x019033e0
int C_019033e0::sub_019033e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019033f0
bool sub_019033f0(int param_1)
{
  return param_1 == -1;
}

struct C_019034b0 {
    int sub_019034b0(int);
};

// @baa 0x019034b0
int C_019034b0::sub_019034b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 0xc + param_2;
}

struct C_01903510 {
    undefined2 * sub_01903510();
};

extern undefined2 g_01e3f3dc;
// @baa 0x01903510
undefined2 * C_01903510::sub_01903510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  if (puVar1 == (undefined2 *)0x0) {
    puVar1 = &g_01e3f3dc;
  }
  return puVar1;
}

struct C_01903520 { int sub_01903520(void); };

// @baa 0x01903520
int C_01903520::sub_01903520(void) { return *(int*)((char*)this + 4); }

struct C_01903530 { int sub_01903530(void); };

// @baa 0x01903530
int C_01903530::sub_01903530(void) { return *(int*)((char*)this + 0); }

struct C_01903580 { C_01903580* sub_01903580(void); };

// @baa 0x01903580
C_01903580* C_01903580::sub_01903580(void) { *(int*)((char*)this + 4) = -1; return this; }

struct C_019035c0 {
    void sub_019035c0();
};

// @baa 0x019035c0
void C_019035c0::sub_019035c0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

struct C_01903620 {
    undefined4 sub_01903620();
};

// @baa 0x01903620
undefined4 C_01903620::sub_01903620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

struct C_01903640 {
    undefined4 sub_01903640();
};

// @baa 0x01903640
undefined4 C_01903640::sub_01903640(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_01903650 { int sub_01903650(void); };

// @baa 0x01903650
int C_01903650::sub_01903650(void) { return *(int*)((char*)this + 0); }

struct C_01903750 {
    int sub_01903750(int);
};

// @baa 0x01903750
int C_01903750::sub_01903750(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

struct C_01903760 {
    int sub_01903760(int);
};

// @baa 0x01903760
int C_01903760::sub_01903760(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

struct C_01903800 { int sub_01903800(void); };

// @baa 0x01903800
int C_01903800::sub_01903800(void) { return *(int*)((char*)this + 0); }

struct C_01903810 { int sub_01903810(void); };

// @baa 0x01903810
int C_01903810::sub_01903810(void) { return *(int*)((char*)this + 0); }

void sub_019722d0();
// @baa 0x01903860
void sub_01903860(void) { sub_019722d0(); }

// @baa 0x01903890
void sub_01903890(void) { sub_019722d0(); }

struct C_01903950 {
    bool sub_01903950();
};

// @baa 0x01903950
bool C_01903950::sub_01903950(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\x06';
}

struct C_01903960 {
    bool sub_01903960();
};

// @baa 0x01903960
bool C_01903960::sub_01903960(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\0';
}

struct C_01903970 {
    bool sub_01903970();
};

// @baa 0x01903970
bool C_01903970::sub_01903970(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\x01';
}

struct C_01903980 {
    void sub_01903980();
};

int sub_01976050(void);
// @baa 0x01903980
void C_01903980::sub_01903980(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  sub_01976050();
  *param_1 = 0;
  return;
}

struct C_01903990 {
    void sub_01903990();
};

// @baa 0x01903990
void C_01903990::sub_01903990(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  sub_01976050();
  *param_1 = 1;
  return;
}

struct C_019039f0 {
    void sub_019039f0(undefined1);
};

// @baa 0x019039f0
void C_019039f0::sub_019039f0(undefined1 param_2)
{
    undefined1 * param_1 = (undefined1 *)this;

  sub_01976050();
  *param_1 = 2;
  param_1[4] = param_2;
  return;
}

// @baa 0x01903a30
void sub_01903a30(void) { sub_018d3de0(); }

struct C_01903b20 { int sub_01903b20(void); };

// @baa 0x01903b20
int C_01903b20::sub_01903b20(void) { return *(int*)((char*)this + 116); }

struct C_01903b30 { int sub_01903b30(void); };

// @baa 0x01903b30
int C_01903b30::sub_01903b30(void) { return *(int*)((char*)this + 120); }

struct C_01903b40 { char* sub_01903b40(void); };

// @baa 0x01903b40
char* C_01903b40::sub_01903b40(void) { return (char*)this + 120; }

// @baa 0x01903ea0
void sub_01903ea0(void) { sub_018d3de0(); }

// @baa 0x01903f20
void sub_01903f20(void) { sub_018d3de0(); }

// @baa 0x01903fc0
void sub_01903fc0(void) { sub_018d3de0(); }

void sub_0197b310();
// @baa 0x01904000
void sub_01904000(void) { sub_0197b310(); }

struct C_01904090 {
    void sub_01904090();
};

// @baa 0x01904090
void C_01904090::sub_01904090(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) | 2;
  return;
}

struct C_019040a0 {
    void sub_019040a0();
};

// @baa 0x019040a0
void C_019040a0::sub_019040a0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) | 4;
  return;
}

struct C_019040b0 {
    void sub_019040b0();
};

// @baa 0x019040b0
void C_019040b0::sub_019040b0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xfb;
  return;
}

struct C_019040c0 {
    void sub_019040c0();
};

// @baa 0x019040c0
void C_019040c0::sub_019040c0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) | 0x10;
  return;
}

struct C_019040d0 {
    void sub_019040d0();
};

// @baa 0x019040d0
void C_019040d0::sub_019040d0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) | 0x20;
  return;
}

struct C_019040e0 {
    void sub_019040e0();
};

// @baa 0x019040e0
void C_019040e0::sub_019040e0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) | 0x40;
  return;
}

struct C_01904100 { void sub_01904100(int a0); };

// @baa 0x01904100
void C_01904100::sub_01904100(int a0) { *(int*)((char*)this + 272) = a0; }

struct C_01904110 { int sub_01904110(void); };

// @baa 0x01904110
int C_01904110::sub_01904110(void) { return *(int*)((char*)this + 272); }

struct C_01904120 {
    bool sub_01904120();
};

// @baa 0x01904120
bool C_01904120::sub_01904120(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x110) != 0;
}

// @baa 0x01904130
void sub_01904130(void) { sub_018d3de0(); }

// @baa 0x01904140
void sub_01904140(void) { sub_018d3de0(); }

struct C_019041a0 { int sub_019041a0(void); };

// @baa 0x019041a0
int C_019041a0::sub_019041a0(void) { return *(int*)((char*)this + 56); }

struct C_019041c0 {
    void sub_019041c0();
};

// @baa 0x019041c0
void C_019041c0::sub_019041c0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 1;
  return;
}

struct C_019041d0 {
    byte sub_019041d0();
};

// @baa 0x019041d0
byte C_019041d0::sub_019041d0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) & 1;
}

struct C_019041e0 {
    void sub_019041e0();
};

// @baa 0x019041e0
void C_019041e0::sub_019041e0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 2;
  return;
}

struct C_019041f0 {
    void sub_019041f0();
};

// @baa 0x019041f0
void C_019041f0::sub_019041f0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 4;
  return;
}

struct C_01904200 {
    void sub_01904200();
};

// @baa 0x01904200
void C_01904200::sub_01904200(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfffb;
  return;
}

struct C_01904210 {
    byte sub_01904210();
};

// @baa 0x01904210
byte C_01904210::sub_01904210(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) >> 2 & 1;
}

struct C_01904250 { int sub_01904250(void); };

// @baa 0x01904250
int C_01904250::sub_01904250(void) { return *(int*)((char*)this + 84); }

struct C_01904260 {
    void sub_01904260(char);
};

// @baa 0x01904260
void C_01904260::sub_01904260(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 1;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfffe;
  return;
}

struct C_01904280 {
    byte sub_01904280();
};

// @baa 0x01904280
byte C_01904280::sub_01904280(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) & 1;
}

struct C_01904290 {
    void sub_01904290(char);
};

// @baa 0x01904290
void C_01904290::sub_01904290(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 2;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfffd;
  return;
}

struct C_019042b0 {
    byte sub_019042b0();
};

// @baa 0x019042b0
byte C_019042b0::sub_019042b0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) >> 1 & 1;
}

struct C_019042c0 {
    void sub_019042c0(char);
};

// @baa 0x019042c0
void C_019042c0::sub_019042c0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 4;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfffb;
  return;
}

struct C_019042e0 {
    byte sub_019042e0();
};

// @baa 0x019042e0
byte C_019042e0::sub_019042e0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) >> 2 & 1;
}

struct C_019042f0 {
    void sub_019042f0(char);
};

// @baa 0x019042f0
void C_019042f0::sub_019042f0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 8;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfff7;
  return;
}

struct C_01904310 {
    byte sub_01904310();
};

// @baa 0x01904310
byte C_01904310::sub_01904310(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) >> 3 & 1;
}

struct C_01904320 {
    void sub_01904320(char);
};

// @baa 0x01904320
void C_01904320::sub_01904320(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x10;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xffef;
  return;
}

struct C_01904340 {
    byte sub_01904340();
};

// @baa 0x01904340
byte C_01904340::sub_01904340(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) >> 4 & 1;
}

struct C_01904350 {
    void sub_01904350(char);
};

// @baa 0x01904350
void C_01904350::sub_01904350(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x20;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xffdf;
  return;
}

struct C_01904370 {
    byte sub_01904370();
};

// @baa 0x01904370
byte C_01904370::sub_01904370(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) >> 5 & 1;
}

struct C_01904380 {
    void sub_01904380(char);
};

// @baa 0x01904380
void C_01904380::sub_01904380(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x40;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xffbf;
  return;
}

struct C_019043a0 {
    byte sub_019043a0();
};

// @baa 0x019043a0
byte C_019043a0::sub_019043a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x50) >> 6 & 1;
}

struct C_019043b0 {
    void sub_019043b0(char);
};

// @baa 0x019043b0
void C_019043b0::sub_019043b0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x80;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xff7f;
  return;
}

struct C_019043e0 {
    void sub_019043e0(char);
};

// @baa 0x019043e0
void C_019043e0::sub_019043e0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x100;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfeff;
  return;
}

struct C_01904400 {
    ushort sub_01904400();
};

// @baa 0x01904400
ushort C_01904400::sub_01904400(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x50) >> 8 & 1;
}

struct C_01904410 {
    void sub_01904410(char);
};

// @baa 0x01904410
void C_01904410::sub_01904410(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x200;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfdff;
  return;
}

struct C_01904430 {
    ushort sub_01904430();
};

// @baa 0x01904430
ushort C_01904430::sub_01904430(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x50) >> 9 & 1;
}

struct C_01904440 {
    void sub_01904440(char);
};

// @baa 0x01904440
void C_01904440::sub_01904440(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x400;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xfbff;
  return;
}

struct C_01904460 {
    ushort sub_01904460();
};

// @baa 0x01904460
ushort C_01904460::sub_01904460(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x50) >> 10 & 1;
}

struct C_01904470 {
    void sub_01904470(char);
};

// @baa 0x01904470
void C_01904470::sub_01904470(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x800;
    return;
  }
  *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) & 0xf7ff;
  return;
}

struct C_01904490 {
    ushort sub_01904490();
};

// @baa 0x01904490
ushort C_01904490::sub_01904490(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x50) >> 0xb & 1;
}

struct C_019044a0 {
    void sub_019044a0(char);
};

// @baa 0x019044a0
void C_019044a0::sub_019044a0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
    return;
  }
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfe;
  return;
}

// @baa 0x01904550
int __stdcall sub_01904550(int a0) { return 0; }

// @baa 0x01904560
undefined1 sub_01904560(void)
{
  return 0;
}

// @baa 0x01904570
undefined1 sub_01904570(void)
{
  return 0;
}

// @baa 0x01904580
void __stdcall sub_01904580(int a0, int a1, int a2) {  }

// @baa 0x01904590
void __stdcall sub_01904590(int a0) {  }

// @baa 0x019045b0
int __stdcall sub_019045b0(int a0, int a1, int a2) { return 0; }

// @baa 0x019045c0
int sub_019045c0(void) { return 0; }

// @baa 0x019045d0
void sub_019045d0(void) {  }

// @baa 0x01904640
void __stdcall sub_01904640(int a0) {  }

// @baa 0x01904650
void sub_01904650(void) {  }

// @baa 0x01904660
void __stdcall sub_01904660(int a0, int a1) {  }

// @baa 0x01904710
int sub_01904710(void) { return 1; }

struct C_01904720 {
    void sub_01904720(char);
};

// @baa 0x01904720
void C_01904720::sub_01904720(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 1;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffe;
  return;
}

struct C_01904740 {
    byte sub_01904740();
};

// @baa 0x01904740
byte C_01904740::sub_01904740(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x8c) & 1;
}

struct C_01904750 {
    ushort sub_01904750();
};

// @baa 0x01904750
ushort C_01904750::sub_01904750(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xc & 1;
}

struct C_01904760 {
    ushort sub_01904760();
};

// @baa 0x01904760
ushort C_01904760::sub_01904760(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xf;
}

struct C_01904770 { int sub_01904770(void); };

// @baa 0x01904770
int C_01904770::sub_01904770(void) { return *(int*)((char*)this + 124); }

struct C_01904780 {
    void sub_01904780(undefined4);
};

int sub_0196b010(void);
// @baa 0x01904780
void C_01904780::sub_01904780(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x7c) = param_2;
  sub_0196b010();
  return;
}

struct C_01904790 {
    void sub_01904790(char);
};

// @baa 0x01904790
void C_01904790::sub_01904790(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 1;
    sub_0196b010();
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffe;
  sub_0196b010();
  return;
}

struct C_019047c0 {
    byte sub_019047c0();
};

// @baa 0x019047c0
byte C_019047c0::sub_019047c0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x8c) & 1;
}

struct C_019047d0 {
    ushort sub_019047d0();
};

// @baa 0x019047d0
ushort C_019047d0::sub_019047d0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xc & 1;
}

// @baa 0x019047e0
undefined1 sub_019047e0(void)
{
  return 1;
}

// @baa 0x019047f0
undefined1 sub_019047f0(void)
{
  return 0;
}

// @baa 0x01904800
void __stdcall sub_01904800(int a0, int a1, int a2) {  }

// @baa 0x01904810
void sub_01904810(void) {  }

// @baa 0x01904860
int sub_01904860(void) { return 0; }

// @baa 0x01904870
int sub_01904870(void) { return 0; }

// @baa 0x01904890
int __stdcall sub_01904890(int a0, int a1) { return 0; }

struct C_019048a0 {
    void sub_019048a0(undefined4, undefined4);
};

// @baa 0x019048a0
void C_019048a0::sub_019048a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x90) = param_2;
  *(undefined4 *)(param_1 + 0x94) = param_3;
  return;
}

struct C_019048c0 {
    void sub_019048c0();
};

// @baa 0x019048c0
void C_019048c0::sub_019048c0(void)
{
    int param_1 = (int)this;

  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    (**(code **)(param_1 + 0x90))(*(undefined4 *)(param_1 + 0x94));
  }
  return;
}

// @baa 0x019048e0
int sub_019048e0(void) { return 0; }

// @baa 0x01904960
int sub_01904960(void) { return 1; }

// @baa 0x01904990
int sub_01904990(void) { return 0; }

// @baa 0x019049b0
void __stdcall sub_019049b0(int a0) {  }

// @baa 0x019049c0
void __stdcall sub_019049c0(int a0) {  }

// @baa 0x019049e0
int sub_019049e0(void) { return 0; }

struct C_019049f0 {
    void sub_019049f0(undefined1);
};

// @baa 0x019049f0
void C_019049f0::sub_019049f0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x8e) = param_2;
  return;
}

struct C_01904a00 {
    undefined1 sub_01904a00();
};

// @baa 0x01904a00
undefined1 C_01904a00::sub_01904a00(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x8e);
}

void sub_019708e0();
// @baa 0x01904a10
void sub_01904a10(void) { sub_019708e0(); }

struct C_01904a20 { char* sub_01904a20(void); };

// @baa 0x01904a20
char* C_01904a20::sub_01904a20(void) { return (char*)this + 48; }

struct C_01904a60 {
    void sub_01904a60();
};

// @baa 0x01904a60
void C_01904a60::sub_01904a60(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x9ca) = 1;
  return;
}

struct C_01904ac0 {
    uint sub_01904ac0();
};

// @baa 0x01904ac0
uint C_01904ac0::sub_01904ac0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x20) & 1;
}

struct C_01904b10 {
    void sub_01904b10(char);
};

// @baa 0x01904b10
void C_01904b10::sub_01904b10(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 2;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfffd;
  return;
}

struct C_01904b30 {
    byte sub_01904b30();
};

// @baa 0x01904b30
byte C_01904b30::sub_01904b30(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc4) >> 1 & 1;
}

struct C_01904b40 {
    void sub_01904b40(char);
};

// @baa 0x01904b40
void C_01904b40::sub_01904b40(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x1000;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xefff;
  return;
}

struct C_01904b60 {
    void sub_01904b60(char);
};

// @baa 0x01904b60
void C_01904b60::sub_01904b60(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 4;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfffb;
  return;
}

struct C_01904b80 {
    byte sub_01904b80();
};

// @baa 0x01904b80
byte C_01904b80::sub_01904b80(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc4) >> 2 & 1;
}

struct C_01904b90 {
    byte sub_01904b90();
};

// @baa 0x01904b90
byte C_01904b90::sub_01904b90(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc4) >> 4 & 1;
}

struct C_01904ba0 {
    void sub_01904ba0(char);
};

// @baa 0x01904ba0
void C_01904ba0::sub_01904ba0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x80;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xff7f;
  return;
}

struct C_01904bc0 {
    byte sub_01904bc0();
};

// @baa 0x01904bc0
byte C_01904bc0::sub_01904bc0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc4) >> 3 & 1;
}

struct C_01904bd0 {
    ushort sub_01904bd0();
};

// @baa 0x01904bd0
ushort C_01904bd0::sub_01904bd0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0xc4) >> 8 & 1;
}

struct C_01904be0 {
    int sub_01904be0();
};

// @baa 0x01904be0
int C_01904be0::sub_01904be0(void)
{
    int param_1 = (int)this;

  return param_1 + -0xd4;
}

struct C_01904bf0 {
    void sub_01904bf0();
};

// @baa 0x01904bf0
void C_01904bf0::sub_01904bf0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x2000;
  return;
}

// @baa 0x01904c00
void sub_01904c00(void) { sub_018d3de0(); }

struct C_01904c10 { C_01904c10* sub_01904c10(int a0); };

// @baa 0x01904c10
C_01904c10* C_01904c10::sub_01904c10(int a0) { return this; }

// @baa 0x01904cb0
void sub_01904cb0(void) {  }

struct C_01904e30 { char* sub_01904e30(void); };

// @baa 0x01904e30
char* C_01904e30::sub_01904e30(void) { return (char*)this + 20; }

struct C_01904ea0 { int sub_01904ea0(void); };

// @baa 0x01904ea0
int C_01904ea0::sub_01904ea0(void) { return *(int*)((char*)this + 36); }

struct C_01904f00 {
    int sub_01904f00(int);
};

// @baa 0x01904f00
int C_01904f00::sub_01904f00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01904f10 { int sub_01904f10(void); };

// @baa 0x01904f10
int C_01904f10::sub_01904f10(void) { return *(int*)((char*)this + 4); }

struct C_01904f20 { int sub_01904f20(void); };

// @baa 0x01904f20
int C_01904f20::sub_01904f20(void) { return *(int*)((char*)this + 0); }

struct C_01905030 { int sub_01905030(void); };

// @baa 0x01905030
int C_01905030::sub_01905030(void) { return *(int*)((char*)this + 0); }

struct C_01905040 { int sub_01905040(void); };

// @baa 0x01905040
int C_01905040::sub_01905040(void) { return *(int*)((char*)this + 0); }

struct C_01905060 { C_01905060* sub_01905060(void); };

// @baa 0x01905060
C_01905060* C_01905060::sub_01905060(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905090 { int sub_01905090(void); };

// @baa 0x01905090
int C_01905090::sub_01905090(void) { return *(int*)((char*)this + 0); }

struct C_019050f0 { C_019050f0* sub_019050f0(void); };

// @baa 0x019050f0
C_019050f0* C_019050f0::sub_019050f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905150 { int sub_01905150(void); };

// @baa 0x01905150
int C_01905150::sub_01905150(void) { return *(int*)((char*)this + 0); }

struct C_01905160 { int sub_01905160(void); };

// @baa 0x01905160
int C_01905160::sub_01905160(void) { return *(int*)((char*)this + 0); }

struct C_01905190 { C_01905190* sub_01905190(void); };

// @baa 0x01905190
C_01905190* C_01905190::sub_01905190(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905210 { int sub_01905210(void); };

// @baa 0x01905210
int C_01905210::sub_01905210(void) { return *(int*)((char*)this + 0); }

struct C_01905220 { int sub_01905220(void); };

// @baa 0x01905220
int C_01905220::sub_01905220(void) { return *(int*)((char*)this + 0); }

struct C_01905230 { int sub_01905230(void); };

// @baa 0x01905230
int C_01905230::sub_01905230(void) { return *(int*)((char*)this + 0); }

struct C_01905260 { C_01905260* sub_01905260(void); };

// @baa 0x01905260
C_01905260* C_01905260::sub_01905260(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905290 { int sub_01905290(void); };

// @baa 0x01905290
int C_01905290::sub_01905290(void) { return *(int*)((char*)this + 0); }

struct C_019052e0 { int sub_019052e0(void); };

// @baa 0x019052e0
int C_019052e0::sub_019052e0(void) { return *(int*)((char*)this + 0); }

struct C_019052f0 { int sub_019052f0(void); };

// @baa 0x019052f0
int C_019052f0::sub_019052f0(void) { return *(int*)((char*)this + 0); }

struct C_01905300 { int sub_01905300(void); };

// @baa 0x01905300
int C_01905300::sub_01905300(void) { return *(int*)((char*)this + 0); }

struct C_01905310 {
    int sub_01905310(int);
};

// @baa 0x01905310
int C_01905310::sub_01905310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01905320 { int sub_01905320(void); };

// @baa 0x01905320
int C_01905320::sub_01905320(void) { return *(int*)((char*)this + 4); }

struct C_01905330 { C_01905330* sub_01905330(void); };

// @baa 0x01905330
C_01905330* C_01905330::sub_01905330(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019053b0 { int sub_019053b0(void); };

// @baa 0x019053b0
int C_019053b0::sub_019053b0(void) { return *(int*)((char*)this + 0); }

struct C_019053c0 { int sub_019053c0(void); };

// @baa 0x019053c0
int C_019053c0::sub_019053c0(void) { return *(int*)((char*)this + 0); }

struct C_01905410 { int sub_01905410(void); };

// @baa 0x01905410
int C_01905410::sub_01905410(void) { return *(int*)((char*)this + 0); }

struct C_01905440 { int sub_01905440(void); };

// @baa 0x01905440
int C_01905440::sub_01905440(void) { return *(int*)((char*)this + 0); }

struct C_01905450 { int sub_01905450(void); };

// @baa 0x01905450
int C_01905450::sub_01905450(void) { return *(int*)((char*)this + 0); }

struct C_01905490 { int sub_01905490(void); };

// @baa 0x01905490
int C_01905490::sub_01905490(void) { return *(int*)((char*)this + 0); }

struct C_019054a0 { int sub_019054a0(void); };

// @baa 0x019054a0
int C_019054a0::sub_019054a0(void) { return *(int*)((char*)this + 0); }

struct C_019054b0 { C_019054b0* sub_019054b0(void); };

// @baa 0x019054b0
C_019054b0* C_019054b0::sub_019054b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905510 { int sub_01905510(void); };

// @baa 0x01905510
int C_01905510::sub_01905510(void) { return *(int*)((char*)this + 0); }

struct C_01905560 { int sub_01905560(void); };

// @baa 0x01905560
int C_01905560::sub_01905560(void) { return *(int*)((char*)this + 0); }

struct C_01905570 { int sub_01905570(void); };

// @baa 0x01905570
int C_01905570::sub_01905570(void) { return *(int*)((char*)this + 0); }

struct C_019056e0 {
    int sub_019056e0(int);
};

// @baa 0x019056e0
int C_019056e0::sub_019056e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019056f0 { int sub_019056f0(void); };

// @baa 0x019056f0
int C_019056f0::sub_019056f0(void) { return *(int*)((char*)this + 4); }

struct C_01905720 { int sub_01905720(void); };

// @baa 0x01905720
int C_01905720::sub_01905720(void) { return *(int*)((char*)this + 0); }

struct C_01905730 { int sub_01905730(void); };

// @baa 0x01905730
int C_01905730::sub_01905730(void) { return *(int*)((char*)this + 0); }

struct C_01905740 { int sub_01905740(void); };

// @baa 0x01905740
int C_01905740::sub_01905740(void) { return *(int*)((char*)this + 0); }

struct C_01905760 {
    bool sub_01905760();
};

// @baa 0x01905760
bool C_01905760::sub_01905760(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_01905770 { int sub_01905770(void); };

// @baa 0x01905770
int C_01905770::sub_01905770(void) { return *(int*)((char*)this + 0); }

struct C_01905780 { C_01905780* sub_01905780(void); };

// @baa 0x01905780
C_01905780* C_01905780::sub_01905780(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905810 { int sub_01905810(void); };

// @baa 0x01905810
int C_01905810::sub_01905810(void) { return *(int*)((char*)this + 0); }

struct C_01905820 { int sub_01905820(void); };

// @baa 0x01905820
int C_01905820::sub_01905820(void) { return *(int*)((char*)this + 0); }

struct C_01905840 {
    int sub_01905840(int);
};

// @baa 0x01905840
int C_01905840::sub_01905840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01905850 { int sub_01905850(void); };

// @baa 0x01905850
int C_01905850::sub_01905850(void) { return *(int*)((char*)this + 4); }

struct C_01905860 { char* sub_01905860(void); };

// @baa 0x01905860
char* C_01905860::sub_01905860(void) { return (char*)this + 8; }

struct C_019058c0 { int sub_019058c0(void); };

// @baa 0x019058c0
int C_019058c0::sub_019058c0(void) { return *(int*)((char*)this + 0); }

struct C_019058d0 { int sub_019058d0(void); };

// @baa 0x019058d0
int C_019058d0::sub_019058d0(void) { return *(int*)((char*)this + 0); }

struct C_01905910 { int sub_01905910(void); };

// @baa 0x01905910
int C_01905910::sub_01905910(void) { return *(int*)((char*)this + 0); }

struct C_01905920 { int sub_01905920(void); };

// @baa 0x01905920
int C_01905920::sub_01905920(void) { return *(int*)((char*)this + 0); }

struct C_01905930 { C_01905930* sub_01905930(void); };

// @baa 0x01905930
C_01905930* C_01905930::sub_01905930(void) { return this; }

struct C_01905970 { int sub_01905970(void); };

// @baa 0x01905970
int C_01905970::sub_01905970(void) { return *(int*)((char*)this + 0); }

struct C_01905980 { int sub_01905980(void); };

// @baa 0x01905980
int C_01905980::sub_01905980(void) { return *(int*)((char*)this + 0); }

struct C_01905a40 { C_01905a40* sub_01905a40(void); };

// @baa 0x01905a40
C_01905a40* C_01905a40::sub_01905a40(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905af0 {
    void sub_01905af0(int);
};

// @baa 0x01905af0
void C_01905af0::sub_01905af0(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 0x200) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

struct C_01905b10 { int sub_01905b10(void); };

// @baa 0x01905b10
int C_01905b10::sub_01905b10(void) { return *(int*)((char*)this + 4); }

struct C_01905b20 { int sub_01905b20(void); };

// @baa 0x01905b20
int C_01905b20::sub_01905b20(void) { return *(int*)((char*)this + 0); }

struct C_01905bb0 {
    int sub_01905bb0(int);
};

// @baa 0x01905bb0
int C_01905bb0::sub_01905bb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01905bc0 { int sub_01905bc0(void); };

// @baa 0x01905bc0
int C_01905bc0::sub_01905bc0(void) { return *(int*)((char*)this + 4); }

struct C_01905be0 { C_01905be0* sub_01905be0(void); };

// @baa 0x01905be0
C_01905be0* C_01905be0::sub_01905be0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01905c60 { unsigned sub_01905c60(void); };

// @baa 0x01905c60
unsigned C_01905c60::sub_01905c60(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01905c70 {
    uint sub_01905c70();
};

// @baa 0x01905c70
uint C_01905c70::sub_01905c70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01905c80 {
    int sub_01905c80(int);
};

// @baa 0x01905c80
int C_01905c80::sub_01905c80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01905c90 {
    uint sub_01905c90();
};

// @baa 0x01905c90
uint C_01905c90::sub_01905c90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01905ca0 {
    void sub_01905ca0(uint);
};

// @baa 0x01905ca0
void C_01905ca0::sub_01905ca0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01905cc0 {
    undefined4 sub_01905cc0();
};

// @baa 0x01905cc0
undefined4 C_01905cc0::sub_01905cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined1 *)(param_1 + 1) = 0;
  return *param_1;
}

struct C_01905cd0 {
    bool sub_01905cd0();
};

// @baa 0x01905cd0
bool C_01905cd0::sub_01905cd0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

// @baa 0x01906370
void __stdcall sub_01906370(int a0) {  }

struct C_019063b0 { int sub_019063b0(void); };

// @baa 0x019063b0
int C_019063b0::sub_019063b0(void) { return *(int*)((char*)this + 0); }

struct C_019063e0 { C_019063e0* sub_019063e0(void); };

// @baa 0x019063e0
C_019063e0* C_019063e0::sub_019063e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019064e0 {
    undefined4 sub_019064e0();
};

// @baa 0x019064e0
undefined4 C_019064e0::sub_019064e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

struct C_019064f0 {
    bool sub_019064f0();
};

// @baa 0x019064f0
bool C_019064f0::sub_019064f0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

// @baa 0x01906500
void __stdcall sub_01906500(int a0) {  }

struct C_01906580 { int sub_01906580(void); };

// @baa 0x01906580
int C_01906580::sub_01906580(void) { return *(int*)((char*)this + 0); }

struct C_01906590 { C_01906590* sub_01906590(void); };

// @baa 0x01906590
C_01906590* C_01906590::sub_01906590(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01906620 {
    undefined4 sub_01906620();
};

// @baa 0x01906620
undefined4 C_01906620::sub_01906620(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_01906630 {
    int sub_01906630(int);
};

// @baa 0x01906630
int C_01906630::sub_01906630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01906960 {
    uint sub_01906960();
};

// @baa 0x01906960
uint C_01906960::sub_01906960(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xc) + 0x1c) & 1;
}

struct C_01906970 {
    uint sub_01906970();
};

// @baa 0x01906970
uint C_01906970::sub_01906970(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xc) + 0x1c) >> 1 & 1;
}

struct C_01906a80 {
    void sub_01906a80();
};

// @baa 0x01906a80
void C_01906a80::sub_01906a80(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf9 | 1;
  return;
}

struct C_01906a90 {
    void sub_01906a90();
};

// @baa 0x01906a90
void C_01906a90::sub_01906a90(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfa | 2;
  return;
}

struct C_01906aa0 {
    void sub_01906aa0();
};

// @baa 0x01906aa0
void C_01906aa0::sub_01906aa0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfb | 3;
  return;
}

struct C_01906ab0 {
    void sub_01906ab0();
};

// @baa 0x01906ab0
void C_01906ab0::sub_01906ab0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfc | 4;
  return;
}

struct C_01906ac0 {
    void sub_01906ac0();
};

// @baa 0x01906ac0
void C_01906ac0::sub_01906ac0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfd | 5;
  return;
}

struct C_01906c00 { int sub_01906c00(void); };

// @baa 0x01906c00
int C_01906c00::sub_01906c00(void) { return *(int*)((char*)this + 36); }

struct C_01906c10 { int sub_01906c10(void); };

// @baa 0x01906c10
int C_01906c10::sub_01906c10(void) { return *(int*)((char*)this + 32); }

struct C_01906c20 { int sub_01906c20(void); };

// @baa 0x01906c20
int C_01906c20::sub_01906c20(void) { return *(int*)((char*)this + 24); }

// @baa 0x01906c60
void __stdcall sub_01906c60(int a0, int a1) {  }

// @baa 0x01906c70
void __stdcall sub_01906c70(int a0, int a1) {  }

// @baa 0x01906c80
void __stdcall sub_01906c80(int a0) {  }

// @baa 0x01906c90
void __stdcall sub_01906c90(int a0) {  }

// @baa 0x01906ca0
int __stdcall sub_01906ca0(int a0, int a1) { return a1; }

// @baa 0x01906cc0
void __stdcall sub_01906cc0(int a0) {  }

struct C_01906d00 { int sub_01906d00(void); };

// @baa 0x01906d00
int C_01906d00::sub_01906d00(void) { return *(int*)((char*)this + 16); }

struct C_01906d10 {
    byte sub_01906d10();
};

// @baa 0x01906d10
byte C_01906d10::sub_01906d10(void)
{
    int param_1 = (int)this;

  return *(byte *)(*(int *)(param_1 + 0x10) + 0x28) & 1;
}

struct C_01906d80 {
    undefined4 sub_01906d80();
};

// @baa 0x01906d80
undefined4 C_01906d80::sub_01906d80(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
}

struct C_01906d90 {
    undefined4 sub_01906d90();
};

// @baa 0x01906d90
undefined4 C_01906d90::sub_01906d90(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20);
}

struct C_01906e10 { int sub_01906e10(void); };

// @baa 0x01906e10
int C_01906e10::sub_01906e10(void) { return *(int*)((char*)this + 284); }

struct C_01906e20 {
    bool sub_01906e20();
};

// @baa 0x01906e20
bool C_01906e20::sub_01906e20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x11c) != 0;
}

struct C_01906e30 {
    uint sub_01906e30();
};

// @baa 0x01906e30
uint C_01906e30::sub_01906e30(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x28)) {
    uVar1 = *(uint *)(param_1 + 0x24);
  }
  return uVar1;
}

struct C_01906e40 {
    uint sub_01906e40();
};

// @baa 0x01906e40
uint C_01906e40::sub_01906e40(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x24)) {
    uVar1 = *(uint *)(param_1 + 0x24);
  }
  return uVar1;
}

struct C_01906e90 { int sub_01906e90(void); };

// @baa 0x01906e90
int C_01906e90::sub_01906e90(void) { return *(int*)((char*)this + 16); }

// @baa 0x01906f70
int __stdcall sub_01906f70(int a0) { return 0; }

struct C_01906f80 {
    bool sub_01906f80(undefined4, int);
};

// @baa 0x01906f80
bool C_01906f80::sub_01906f80(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  return param_1 == param_3;
}

// @baa 0x01906f90
int sub_01906f90(void) { return 0; }

// @baa 0x01906fa0
int sub_01906fa0(void) { return 0; }

// @baa 0x01906fb0
int sub_01906fb0(void) { return 23; }

// @baa 0x01906fc0
undefined1 sub_01906fc0(void)
{
  return 0;
}

struct C_01906fd0 {
    bool sub_01906fd0();
};

// @baa 0x01906fd0
bool C_01906fd0::sub_01906fd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x30) == 0;
}

// @baa 0x01906fe0
undefined1 sub_01906fe0(void)
{
  return 1;
}

// @baa 0x01906ff0
undefined4 sub_01906ff0(void)
{
  return 0xffffffff;
}

void sub_01973ce0();
// @baa 0x01907000
void sub_01907000(void) { sub_01973ce0(); }

struct C_01907080 { int sub_01907080(void); };

// @baa 0x01907080
int C_01907080::sub_01907080(void) { return *(int*)((char*)this + 48); }

struct C_01907090 { int sub_01907090(void); };

// @baa 0x01907090
int C_01907090::sub_01907090(void) { return *(int*)((char*)this + 56); }

struct C_019070a0 {
    undefined4 sub_019070a0(int);
};

// @baa 0x019070a0
undefined4 C_019070a0::sub_019070a0(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2 * 4);
}

// @baa 0x01907110
int sub_01907110(void) { return 33536; }

struct C_01907130 {
    undefined4 sub_01907130(int *);
};

// @baa 0x01907130
undefined4 C_01907130::sub_01907130(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_01907320 {
    void sub_01907320();
};

// @baa 0x01907320
void C_01907320::sub_01907320(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_019073a0 { C_019073a0* sub_019073a0(void); };

// @baa 0x019073a0
C_019073a0* C_019073a0::sub_019073a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019073b0 { int sub_019073b0(void); };

// @baa 0x019073b0
int C_019073b0::sub_019073b0(void) { return *(int*)((char*)this + 4); }

struct C_019073c0 { C_019073c0* sub_019073c0(void); };

// @baa 0x019073c0
C_019073c0* C_019073c0::sub_019073c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01907430 {
    int sub_01907430(int);
};

// @baa 0x01907430
int C_01907430::sub_01907430(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01907440 {
    int sub_01907440(int);
};

// @baa 0x01907440
int C_01907440::sub_01907440(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01907450 {
    uint sub_01907450();
};

// @baa 0x01907450
uint C_01907450::sub_01907450(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01907460 { unsigned sub_01907460(void); };

// @baa 0x01907460
unsigned C_01907460::sub_01907460(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01907470 { unsigned sub_01907470(void); };

// @baa 0x01907470
unsigned C_01907470::sub_01907470(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01907480 {
    uint sub_01907480();
};

// @baa 0x01907480
uint C_01907480::sub_01907480(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01907490 {
    void sub_01907490(uint);
};

// @baa 0x01907490
void C_01907490::sub_01907490(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01907620 {
    undefined4 sub_01907620();
};

// @baa 0x01907620
undefined4 C_01907620::sub_01907620(void)
{
    int param_1 = (int)this;

  if ((*(int **)(param_1 + 0xcc) != (int *)0x0) && (**(int **)(param_1 + 0xcc) != 0)) {
    return 1;
  }
  return 0;
}

struct C_01907640 {
    int sub_01907640();
};

// @baa 0x01907640
int C_01907640::sub_01907640(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int **)(param_1 + 0xcc) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0xcc), iVar1 != 0))
  {
    return iVar1 + 0x30;
  }
  return 0;
}

struct C_019089a0 { C_019089a0* sub_019089a0(void); };

// @baa 0x019089a0
C_019089a0* C_019089a0::sub_019089a0(void) { *(int*)((char*)this + 40) = 0; return this; }

struct C_01908f50 {
    undefined4 sub_01908f50();
};

// @baa 0x01908f50
undefined4 C_01908f50::sub_01908f50(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + 0x11c);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x58);
  }
  return 0xffffffff;
}

struct C_01908f70 {
    undefined4 sub_01908f70();
};

// @baa 0x01908f70
undefined4 C_01908f70::sub_01908f70(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + 0x11c);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x54);
  }
  return 0xff000000;
}

// @baa 0x01909450
void __stdcall sub_01909450(int a0, int a1) {  }

struct C_019096d0 {
    int sub_019096d0(int);
};

// @baa 0x019096d0
int C_019096d0::sub_019096d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_019096e0 { int sub_019096e0(void); };

// @baa 0x019096e0
int C_019096e0::sub_019096e0(void) { return *(int*)((char*)this + 4); }

// @baa 0x01909db0
int sub_01909db0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_1;
  }
  return 0;
}

// @baa 0x01909e10
undefined4 * sub_01909e10(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0190a050 {
    undefined4 sub_0190a050(int *);
};

// @baa 0x0190a050
undefined4 C_0190a050::sub_0190a050(int * param_2)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 8) == *param_2) && (*(int *)(param_1 + 0xc) == param_2[1])) &&
     (*(int *)(param_1 + 0x10) == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_0190a120 {
    int sub_0190a120();
};

// @baa 0x0190a120
int C_0190a120::sub_0190a120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 0x14;
}

struct C_0190a130 {
    int sub_0190a130();
};

// @baa 0x0190a130
int C_0190a130::sub_0190a130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[1] * 0x14;
}

struct C_0190a140 {
    int sub_0190a140();
};

// @baa 0x0190a140
int C_0190a140::sub_0190a140(void)
{
    int * param_1 = (int *)this;

  if (param_1[1] < ((int *)*param_1)[1]) {
    return *(int *)*param_1 + param_1[1] * 0x14;
  }
  return 0;
}

struct C_0190a7e0 {
    undefined4 sub_0190a7e0(uint);
};

// @baa 0x0190a7e0
undefined4 C_0190a7e0::sub_0190a7e0(uint param_2)
{
    int param_1 = (int)this;

  if (param_2 < *(uint *)(param_1 + 0x18)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  }
  return 0;
}

void sub_01909940();
// @baa 0x0190bce0
void sub_0190bce0(void) { sub_01909940(); }

void sub_0190bb80();
// @baa 0x0190cab0
void sub_0190cab0(void) { sub_0190bb80(); }

void sub_0190bc40();
// @baa 0x0190caf0
void sub_0190caf0(void) { sub_0190bc40(); }

void sub_0190cb00();
// @baa 0x0190ccf0
void sub_0190ccf0(void) { sub_0190cb00(); }

void sub_0190bda0();
// @baa 0x0190cd00
void sub_0190cd00(void) { sub_0190bda0(); }

void sub_0190be70();
// @baa 0x0190cd10
void sub_0190cd10(void) { sub_0190be70(); }

void sub_0190c1f0();
// @baa 0x0190d240
void sub_0190d240(void) { sub_0190c1f0(); }

void sub_0190c410();
// @baa 0x0190d2b0
void sub_0190d2b0(void) { sub_0190c410(); }
