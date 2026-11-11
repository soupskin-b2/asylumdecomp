// UnEdViewport.cpp: 51 functions
// Placed here by: neighbours 41, callers 9, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00779c70(...);
int sub_0077f260(void);
extern undefined4 g_026b3bcc;
// @baa 0x00781cb0
int sub_00781cb0(void)
{
  if (g_026b3bcc == 0) {
    g_026b3bcc = sub_00779c70(L"Engine");
    sub_0077f260();
  }
  return g_026b3bcc;
}

int sub_00779370(...);
int sub_0077e930(void);
extern undefined4 g_026b3b68;
// @baa 0x00781f80
int sub_00781f80(void)
{
  if (g_026b3b68 == 0) {
    g_026b3b68 = sub_00779370(L"Engine");
    sub_0077e930();
  }
  return g_026b3b68;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026b5594;
extern undefined4 g_026b5598;
extern undefined4 g_026b559c;
// @baa 0x008314f0
undefined * sub_008314f0(void)
{
  if ((g_026b559c & 1) == 0) {
    g_026b559c = g_026b559c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026b5594 = (undefined4)(&g_026af518);
    g_026b5598 = (undefined4)(L"HModel");
  }
  return (undefined *)(&g_026b5594);
}

int sub_006951d0(...);
int sub_00698420(void);
extern undefined4 g_026aeea8;
// @baa 0x00c9ec40
int sub_00c9ec40(void)
{
  if (g_026aeea8 == 0) {
    g_026aeea8 = sub_006951d0(L"Engine");
    sub_00698420();
  }
  return g_026aeea8;
}

struct C {
    bool sub_00ec13f0();
};

// @baa 0x00ec13f0
bool C::sub_00ec13f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x40) != 0;
}

struct C_00ec4700 {
    undefined4 sub_00ec4700();
};

// @baa 0x00ec4700
undefined4 C_00ec4700::sub_00ec4700(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}

int sub_00eeeb20(void);
int sub_00f0f640(...);
extern undefined4 g_026ccbe0;
// @baa 0x00ec4720
int sub_00ec4720(void)
{
  if (g_026ccbe0 == 0) {
    g_026ccbe0 = sub_00f0f640(L"Editor");
    sub_00eeeb20();
  }
  return g_026ccbe0;
}

int sub_00f0f580(...);
int sub_00f13820(void);
extern undefined4 g_026ccbdc;
// @baa 0x00ec4750
int sub_00ec4750(void)
{
  if (g_026ccbdc == 0) {
    g_026ccbdc = sub_00f0f580(L"Editor");
    sub_00f13820();
  }
  return g_026ccbdc;
}

struct C_00ec4780 { void sub_00ec4780(int a0); };

// @baa 0x00ec4780
void C_00ec4780::sub_00ec4780(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_00ec4790 { int sub_00ec4790(void); };

// @baa 0x00ec4790
int C_00ec4790::sub_00ec4790(void) { return *(int*)((char*)this + 0); }

struct C_00ec47a0 { int sub_00ec47a0(void); };

// @baa 0x00ec47a0
int C_00ec47a0::sub_00ec47a0(void) { return *(int*)((char*)this + 96); }

int sub_00f4ee00(void);
int sub_00f684f0(...);
extern undefined4 g_026cce44;
// @baa 0x00ec47b0
int sub_00ec47b0(void)
{
  if (g_026cce44 == 0) {
    g_026cce44 = sub_00f684f0(L"Editor");
    sub_00f4ee00();
  }
  return g_026cce44;
}

int sub_00eef500(void);
int sub_00f0f700(...);
extern undefined4 g_026ccbe4;
// @baa 0x00ec47e0
int sub_00ec47e0(void)
{
  if (g_026ccbe4 == 0) {
    g_026ccbe4 = sub_00f0f700(L"Editor");
    sub_00eef500();
  }
  return g_026ccbe4;
}

int sub_00eef660(void);
int sub_00f0f7c0(...);
extern undefined4 g_026ccbe8;
// @baa 0x00ec4810
int sub_00ec4810(void)
{
  if (g_026ccbe8 == 0) {
    g_026ccbe8 = sub_00f0f7c0(L"Editor");
    sub_00eef660();
  }
  return g_026ccbe8;
}

int sub_00eef7c0(void);
int sub_00f0f880(...);
extern undefined4 g_026ccbec;
// @baa 0x00ec4840
int sub_00ec4840(void)
{
  if (g_026ccbec == 0) {
    g_026ccbec = sub_00f0f880(L"Editor");
    sub_00eef7c0();
  }
  return g_026ccbec;
}

int sub_00eef920(void);
int sub_00f0f940(...);
extern undefined4 g_026ccbf0;
// @baa 0x00ec4870
int sub_00ec4870(void)
{
  if (g_026ccbf0 == 0) {
    g_026ccbf0 = sub_00f0f940(L"Editor");
    sub_00eef920();
  }
  return g_026ccbf0;
}

int sub_00eefa80(void);
int sub_00f0fa00(...);
extern undefined4 g_026ccbf4;
// @baa 0x00ec48a0
int sub_00ec48a0(void)
{
  if (g_026ccbf4 == 0) {
    g_026ccbf4 = sub_00f0fa00(L"Editor");
    sub_00eefa80();
  }
  return g_026ccbf4;
}

int sub_00eefbe0(void);
int sub_00f0fac0(...);
extern undefined4 g_026ccbf8;
// @baa 0x00ec48d0
int sub_00ec48d0(void)
{
  if (g_026ccbf8 == 0) {
    g_026ccbf8 = sub_00f0fac0(L"Editor");
    sub_00eefbe0();
  }
  return g_026ccbf8;
}

int sub_00eefd40(void);
int sub_00f0fb80(...);
extern undefined4 g_026ccbfc;
// @baa 0x00ec4900
int sub_00ec4900(void)
{
  if (g_026ccbfc == 0) {
    g_026ccbfc = sub_00f0fb80(L"Editor");
    sub_00eefd40();
  }
  return g_026ccbfc;
}

int sub_00eefea0(void);
int sub_00f10010(...);
extern undefined4 g_026ccc00;
// @baa 0x00ec4930
int sub_00ec4930(void)
{
  if (g_026ccc00 == 0) {
    g_026ccc00 = sub_00f10010(L"Editor");
    sub_00eefea0();
  }
  return g_026ccc00;
}

int sub_00ef0000(void);
int sub_00f100d0(...);
extern undefined4 g_026ccc04;
// @baa 0x00ec4960
int sub_00ec4960(void)
{
  if (g_026ccc04 == 0) {
    g_026ccc04 = sub_00f100d0(L"Editor");
    sub_00ef0000();
  }
  return g_026ccc04;
}

int sub_00ef02c0(void);
int sub_00f103b0(...);
extern undefined4 g_026ccc0c;
// @baa 0x00ec4990
int sub_00ec4990(void)
{
  if (g_026ccc0c == 0) {
    g_026ccc0c = sub_00f103b0(L"Editor");
    sub_00ef02c0();
  }
  return g_026ccc0c;
}

int sub_00f1e240(void);
int sub_00f373d0(...);
extern undefined4 g_026ccd5c;
// @baa 0x00ec49c0
int sub_00ec49c0(void)
{
  if (g_026ccd5c == 0) {
    g_026ccd5c = sub_00f373d0(L"Editor");
    sub_00f1e240();
  }
  return g_026ccd5c;
}

int sub_00f1e5a0(void);
int sub_00f37490(...);
extern undefined4 g_026ccd60;
// @baa 0x00ec49f0
int sub_00ec49f0(void)
{
  if (g_026ccd60 == 0) {
    g_026ccd60 = sub_00f37490(L"Editor");
    sub_00f1e5a0();
  }
  return g_026ccd60;
}

int sub_00f1e700(void);
int sub_00f37550(...);
extern undefined4 g_026ccd64;
// @baa 0x00ec4a20
int sub_00ec4a20(void)
{
  if (g_026ccd64 == 0) {
    g_026ccd64 = sub_00f37550(L"Editor");
    sub_00f1e700();
  }
  return g_026ccd64;
}

int sub_00ef06e0(void);
int sub_00f105f0(...);
extern undefined4 g_026ccc18;
// @baa 0x00ec4a50
int sub_00ec4a50(void)
{
  if (g_026ccc18 == 0) {
    g_026ccc18 = sub_00f105f0(L"Editor");
    sub_00ef06e0();
  }
  return g_026ccc18;
}

int sub_00f1e860(void);
int sub_00f37610(...);
extern undefined4 g_026ccd68;
// @baa 0x00ec4a80
int sub_00ec4a80(void)
{
  if (g_026ccd68 == 0) {
    g_026ccd68 = sub_00f37610(L"Editor");
    sub_00f1e860();
  }
  return g_026ccd68;
}

int sub_00f1eb20(void);
int sub_00f37790(...);
extern undefined4 g_026ccd70;
// @baa 0x00ec4ab0
int sub_00ec4ab0(void)
{
  if (g_026ccd70 == 0) {
    g_026ccd70 = sub_00f37790(L"Editor");
    sub_00f1eb20();
  }
  return g_026ccd70;
}

int sub_00ef0160(void);
int sub_00f10190(...);
extern undefined4 g_026ccc08;
// @baa 0x00ec4ae0
int sub_00ec4ae0(void)
{
  if (g_026ccc08 == 0) {
    g_026ccc08 = sub_00f10190(L"Editor");
    sub_00ef0160();
  }
  return g_026ccc08;
}

int sub_00ef0580(void);
int sub_00f10530(...);
extern undefined4 g_026ccc14;
// @baa 0x00ec4b10
int sub_00ec4b10(void)
{
  if (g_026ccc14 == 0) {
    g_026ccc14 = sub_00f10530(L"Editor");
    sub_00ef0580();
  }
  return g_026ccc14;
}

int sub_00f1af50(void);
int sub_00f35280(...);
extern undefined4 g_026cccc4;
// @baa 0x00ec4b40
int sub_00ec4b40(void)
{
  if (g_026cccc4 == 0) {
    g_026cccc4 = sub_00f35280(L"Editor");
    sub_00f1af50();
  }
  return g_026cccc4;
}

int sub_00f1b0b0(void);
int sub_00f35340(...);
extern undefined4 g_026cccc8;
// @baa 0x00ec4b70
int sub_00ec4b70(void)
{
  if (g_026cccc8 == 0) {
    g_026cccc8 = sub_00f35340(L"Editor");
    sub_00f1b0b0();
  }
  return g_026cccc8;
}

int sub_00f35400(...);
int sub_00f39490(void);
extern undefined4 g_026ccccc;
// @baa 0x00ec4ba0
int sub_00ec4ba0(void)
{
  if (g_026ccccc == 0) {
    g_026ccccc = sub_00f35400(L"Editor");
    sub_00f39490();
  }
  return g_026ccccc;
}

int sub_00f354c0(...);
int sub_00f395e0(void);
extern undefined4 g_026cccd0;
// @baa 0x00ec4bd0
int sub_00ec4bd0(void)
{
  if (g_026cccd0 == 0) {
    g_026cccd0 = sub_00f354c0(L"Editor");
    sub_00f395e0();
  }
  return g_026cccd0;
}

int sub_00ef0840(void);
int sub_00f106b0(...);
extern undefined4 g_026ccc1c;
// @baa 0x00ec4c00
int sub_00ec4c00(void)
{
  if (g_026ccc1c == 0) {
    g_026ccc1c = sub_00f106b0(L"Editor");
    sub_00ef0840();
  }
  return g_026ccc1c;
}

int sub_00f125b0(...);
int sub_00f145f0(void);
extern undefined4 g_026ccc20;
// @baa 0x00ec4c30
int sub_00ec4c30(void)
{
  if (g_026ccc20 == 0) {
    g_026ccc20 = sub_00f125b0(L"Editor");
    sub_00f145f0();
  }
  return g_026ccc20;
}

int sub_00f12670(...);
int sub_00f14740(void);
extern undefined4 g_026ccc24;
// @baa 0x00ec4c60
int sub_00ec4c60(void)
{
  if (g_026ccc24 == 0) {
    g_026ccc24 = sub_00f12670(L"Editor");
    sub_00f14740();
  }
  return g_026ccc24;
}

int sub_00f12730(...);
int sub_00f14890(void);
extern undefined4 g_026ccc28;
// @baa 0x00ec4c90
int sub_00ec4c90(void)
{
  if (g_026ccc28 == 0) {
    g_026ccc28 = sub_00f12730(L"Editor");
    sub_00f14890();
  }
  return g_026ccc28;
}

// @baa 0x00ec4cc0
int sub_00ec4cc0(int a0, int a1) { return a1; }

struct C_00ec4cd0 { C_00ec4cd0* sub_00ec4cd0(int a0); };

// @baa 0x00ec4cd0
C_00ec4cd0* C_00ec4cd0::sub_00ec4cd0(int a0) { return this; }

struct C_00ec4ce0 { int sub_00ec4ce0(void); };

// @baa 0x00ec4ce0
int C_00ec4ce0::sub_00ec4ce0(void) { return *(int*)((char*)this + 0); }

struct C_00ec4cf0 { int sub_00ec4cf0(void); };

// @baa 0x00ec4cf0
int C_00ec4cf0::sub_00ec4cf0(void) { return *(int*)((char*)this + 0); }

struct C_00f4d4e0 { void sub_00f4d4e0(int a0); };

// @baa 0x00f4d4e0
void C_00f4d4e0::sub_00f4d4e0(int a0) { *(int*)((char*)this + 88) = a0; }

extern undefined4 g_026cdb8c;
extern undefined4 g_026cdb90;
extern undefined4 g_026cdb94;
// @baa 0x00f73760
undefined * sub_00f73760(void)
{
  if ((g_026cdb94 & 1) == 0) {
    g_026cdb94 = g_026cdb94 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cdb8c = (undefined4)(&g_026af518);
    g_026cdb90 = (undefined4)(L"HLevelSocketProxy");
  }
  return (undefined *)(&g_026cdb8c);
}

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x00f737f0
undefined4 UObject::sub_00f737f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f73f30 {
    undefined4 sub_00f73f30(byte);
};

int sub_00ed22d0(void);
// @baa 0x00f73f30
undefined4 C_00f73f30::sub_00f73f30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ed22d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f73f50
void sub_00f73f50(void) {  }

// @baa 0x00f74800
void sub_00f74800(void) {  }

struct C_00f87330 {
    undefined4 sub_00f87330(byte);
};

int sub_00f80980(void);
// @baa 0x00f87330
undefined4 C_00f87330::sub_00f87330(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f80980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f9c410
IMPLEMENT_CLASS_AT(UEditorViewportInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdViewport.cpp", 4666);

// @baa 0x00f9c430
