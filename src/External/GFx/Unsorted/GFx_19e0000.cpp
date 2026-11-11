// GFx_19e0000.cpp (part 1 of 4): 75 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x019e0ac0
int __stdcall sub_019e0ac0(int a0) { return 0; }

struct C {
    bool sub_019e0af0();
};

// @baa 0x019e0af0
bool C::sub_019e0af0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) == 0;
}

// @baa 0x019e1260
undefined1 sub_019e1260(void)
{
  return 1;
}

void sub_019e1640();
// @baa 0x019e17a0
void sub_019e17a0(void) { sub_019e1640(); }

extern undefined4 g_02602e28;
// @baa 0x019e1930
undefined * sub_019e1930(int param_1)
{
  return (undefined *)((&g_02602e28)[param_1]);
}

struct C_019e1b30 {
    void sub_019e1b30();
};

// @baa 0x019e1b30
void C_019e1b30::sub_019e1b30(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0x10;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_019e21e0 { int sub_019e21e0(void); };

// @baa 0x019e21e0
int C_019e21e0::sub_019e21e0(void) { return *(int*)((char*)this + 48); }

struct C_019e21f0 {
    void sub_019e21f0();
};

// @baa 0x019e21f0
void C_019e21f0::sub_019e21f0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}

struct C_019e2200 {
    void sub_019e2200();
};

// @baa 0x019e2200
void C_019e2200::sub_019e2200(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  return;
}

struct C_019e2220 {
    void sub_019e2220();
};

// @baa 0x019e2220
void C_019e2220::sub_019e2220(void)
{
    int * param_1 = (int *)this;

  *(int *)(*param_1 + 0x44) = *(int *)(*param_1 + 0x44) + -1;
  return;
}

struct C_019e2230 {
    undefined4 sub_019e2230();
};

// @baa 0x019e2230
undefined4 C_019e2230::sub_019e2230(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x44);
}

// @baa 0x019e2320
int sub_019e2320(void) { return 7; }

struct C_019e23e0 {
    int sub_019e23e0(int);
};

// @baa 0x019e23e0
int C_019e23e0::sub_019e23e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019e23f0 {
    int sub_019e23f0(int);
};

// @baa 0x019e23f0
int C_019e23f0::sub_019e23f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_019e2410 {
    int sub_019e2410(int);
};

// @baa 0x019e2410
int C_019e2410::sub_019e2410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_019e2430 { int sub_019e2430(void); };

// @baa 0x019e2430
int C_019e2430::sub_019e2430(void) { return *(int*)((char*)this + 4); }

struct C_019e2550 {
    int sub_019e2550(int);
};

// @baa 0x019e2550
int C_019e2550::sub_019e2550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019e2560 { int sub_019e2560(void); };

// @baa 0x019e2560
int C_019e2560::sub_019e2560(void) { return *(int*)((char*)this + 4); }

struct C_019e2630 {
    uint sub_019e2630();
};

// @baa 0x019e2630
uint C_019e2630::sub_019e2630(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019e2640 {
    uint sub_019e2640();
};

// @baa 0x019e2640
uint C_019e2640::sub_019e2640(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019e2650 { unsigned sub_019e2650(void); };

// @baa 0x019e2650
unsigned C_019e2650::sub_019e2650(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019e2660 { unsigned sub_019e2660(void); };

// @baa 0x019e2660
unsigned C_019e2660::sub_019e2660(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019e2670 {
    uint sub_019e2670();
};

// @baa 0x019e2670
uint C_019e2670::sub_019e2670(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019e2680 {
    void sub_019e2680(uint);
};

// @baa 0x019e2680
void C_019e2680::sub_019e2680(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019e26a0 { unsigned sub_019e26a0(void); };

// @baa 0x019e26a0
unsigned C_019e26a0::sub_019e26a0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019e26b0 { unsigned sub_019e26b0(void); };

// @baa 0x019e26b0
unsigned C_019e26b0::sub_019e26b0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019e26c0 {
    uint sub_019e26c0();
};

// @baa 0x019e26c0
uint C_019e26c0::sub_019e26c0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019e26d0 {
    void sub_019e26d0(uint);
};

// @baa 0x019e26d0
void C_019e26d0::sub_019e26d0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019e26f0
void sub_019e26f0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x019e2730
int sub_019e2730(int a0) { return a0; }

struct C_019e27a0 { int sub_019e27a0(void); };

// @baa 0x019e27a0
int C_019e27a0::sub_019e27a0(void) { return *(int*)((char*)this + 4); }

struct C_019e27b0 {
    int sub_019e27b0(int);
};

// @baa 0x019e27b0
int C_019e27b0::sub_019e27b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x019e27c0
void sub_019e27c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_019e2960 {
    void sub_019e2960();
};

// @baa 0x019e2960
void C_019e2960::sub_019e2960(void)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x38) + -1;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(param_1 + 0x34);
      uVar2 = *(undefined4 *)(iVar1 + iVar4 * 4);
      *(undefined4 *)(iVar1 + iVar4 * 4) = *(undefined4 *)(iVar1 + iVar3 * 4);
      *(undefined4 *)(iVar1 + iVar3 * 4) = uVar2;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar4 < iVar3);
  }
  return;
}

void sub_019e30a0();
// @baa 0x019e3200
void sub_019e3200(void) { sub_019e30a0(); }

void sub_019e3190();
// @baa 0x019e3210
void sub_019e3210(void) { sub_019e3190(); }

void sub_019e39b0();
// @baa 0x019e4040
void sub_019e4040(void) { sub_019e39b0(); }

// @baa 0x019e57a0
undefined1 sub_019e57a0(void)
{
  return 1;
}

void sub_01973ce0();
// @baa 0x019e5e00
void sub_019e5e00(void) { sub_01973ce0(); }

// @baa 0x019e60f0
uint sub_019e60f0(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x18);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x18);
  if (iVar2 < iVar1) {
    return 0xffffffff;
  }
  return (uint)(iVar2 != iVar1);
}

struct C_019e6db0 { char* sub_019e6db0(void); };

// @baa 0x019e6db0
char* C_019e6db0::sub_019e6db0(void) { return (char*)this + 48; }

struct C_019e6de0 { C_019e6de0* sub_019e6de0(void); };

// @baa 0x019e6de0
C_019e6de0* C_019e6de0::sub_019e6de0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019e6e50 { int sub_019e6e50(void); };

// @baa 0x019e6e50
int C_019e6e50::sub_019e6e50(void) { return *(int*)((char*)this + 0); }

struct C_019e6e60 { int sub_019e6e60(void); };

// @baa 0x019e6e60
int C_019e6e60::sub_019e6e60(void) { return *(int*)((char*)this + 0); }

struct C_019e6e70 { int sub_019e6e70(void); };

// @baa 0x019e6e70
int C_019e6e70::sub_019e6e70(void) { return *(int*)((char*)this + 0); }

struct C_019e6e80 { C_019e6e80* sub_019e6e80(void); };

// @baa 0x019e6e80
C_019e6e80* C_019e6e80::sub_019e6e80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019e6ef0 { int sub_019e6ef0(void); };

// @baa 0x019e6ef0
int C_019e6ef0::sub_019e6ef0(void) { return *(int*)((char*)this + 0); }

struct C_019e6f00 { int sub_019e6f00(void); };

// @baa 0x019e6f00
int C_019e6f00::sub_019e6f00(void) { return *(int*)((char*)this + 0); }

struct C_019e6f10 { int sub_019e6f10(void); };

// @baa 0x019e6f10
int C_019e6f10::sub_019e6f10(void) { return *(int*)((char*)this + 0); }

struct C_019e6f20 { C_019e6f20* sub_019e6f20(void); };

// @baa 0x019e6f20
C_019e6f20* C_019e6f20::sub_019e6f20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019e6f90 { int sub_019e6f90(void); };

// @baa 0x019e6f90
int C_019e6f90::sub_019e6f90(void) { return *(int*)((char*)this + 0); }

struct C_019e6fa0 { int sub_019e6fa0(void); };

// @baa 0x019e6fa0
int C_019e6fa0::sub_019e6fa0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019e7990
int sub_019e7990(void) { return 20; }

// @baa 0x019e7d60
undefined1 sub_019e7d60(void)
{
  return 1;
}

// @baa 0x019e9e40
int sub_019e9e40(void) { return 15; }

// @baa 0x019ea260
undefined1 sub_019ea260(void)
{
  return 1;
}

void sub_019ea640();
// @baa 0x019ea830
void sub_019ea830(void) { sub_019ea640(); }

struct C_019eaa10 { int sub_019eaa10(void); };

// @baa 0x019eaa10
int C_019eaa10::sub_019eaa10(void) { return *(int*)((char*)this + 0); }

struct C_019eaa80 { int sub_019eaa80(void); };

// @baa 0x019eaa80
int C_019eaa80::sub_019eaa80(void) { return *(int*)((char*)this + 0); }

// @baa 0x019eb780
float10 sub_019eb780(void)
{
  return (float10)2.2250738585072014e-308;
}

// @baa 0x019ec230
void sub_019ec230(void) { sub_01973ce0(); }

// @baa 0x019ec2d0
int sub_019ec2d0(void) { return 9; }

// @baa 0x019ec500
undefined1 sub_019ec500(void)
{
  return 1;
}

struct D { void sub_019ecd10(); };

extern D g_027b8a38;
// @baa 0x019ecd90
void sub_019ecd90() { g_027b8a38.sub_019ecd10(); }

struct C_019ecdf0 { char* sub_019ecdf0(void); };

// @baa 0x019ecdf0
char* C_019ecdf0::sub_019ecdf0(void) { return (char*)this + 48; }

// @baa 0x019eda40
void sub_019eda40(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x019ee2a0
void sub_019ee2a0(void) { sub_01973ce0(); }

// @baa 0x019ee520
int sub_019ee520(void) { return 8; }

// @baa 0x019ee7c0
undefined1 sub_019ee7c0(void)
{
  return 1;
}

// @baa 0x019ef4d0
int sub_019ef4d0(void) { return 10; }

// @baa 0x019ef6c0
undefined1 sub_019ef6c0(void)
{
  return 1;
}

void sub_019efaa0();
// @baa 0x019efc30
void sub_019efc30(void) { sub_019efaa0(); }

struct C_019eff00 { C_019eff00* sub_019eff00(void); };

// @baa 0x019eff00
C_019eff00* C_019eff00::sub_019eff00(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019eff90 { int sub_019eff90(void); };

// @baa 0x019eff90
int C_019eff90::sub_019eff90(void) { return *(int*)((char*)this + 0); }

struct C_019effa0 { int sub_019effa0(void); };

// @baa 0x019effa0
int C_019effa0::sub_019effa0(void) { return *(int*)((char*)this + 0); }
