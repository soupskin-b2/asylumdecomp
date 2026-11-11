// GFx_19b0000.cpp (part 1 of 14): 138 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_019b01a0(void); };

// @baa 0x019b01a0
int C::sub_019b01a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019b0630
int sub_019b0630(void) { return 26; }

// @baa 0x019b0850
undefined1 sub_019b0850(void)
{
  return 1;
}

// @baa 0x019b1470
int __stdcall sub_019b1470(int a0) { return 0; }

void sub_01973ce0();
// @baa 0x019b1480
void sub_019b1480(void) { sub_01973ce0(); }

struct C_019b1910 { int sub_019b1910(void); };

// @baa 0x019b1910
int C_019b1910::sub_019b1910(void) { return *(int*)((char*)this + 0); }

struct C_019b1920 { C_019b1920* sub_019b1920(void); };

// @baa 0x019b1920
C_019b1920* C_019b1920::sub_019b1920(void) { return this; }

struct C_019b1930 { C_019b1930* sub_019b1930(void); };

// @baa 0x019b1930
C_019b1930* C_019b1930::sub_019b1930(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019b1a70 {
    void sub_019b1a70(double);
};

// @baa 0x019b1a70
void C_019b1a70::sub_019b1a70(double param_2)
{
    double * param_1 = (double *)this;

  param_1[2] = *param_1 + param_2;
  return;
}

struct C_019b1a80 {
    void sub_019b1a80(double);
};

// @baa 0x019b1a80
void C_019b1a80::sub_019b1a80(double param_2)
{
    int param_1 = (int)this;

  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 8) + param_2;
  return;
}

struct C_019b24a0 {
    void sub_019b24a0(double, double);
};

// @baa 0x019b24a0
void C_019b24a0::sub_019b24a0(double param_2, double param_3)
{
    double * param_1 = (double *)this;

  param_1[2] = *param_1 + param_2;
  param_1[3] = param_1[1] + param_3;
  return;
}

// @baa 0x019b3890
int sub_019b3890(void) { return 17; }

// @baa 0x019b4190
undefined1 sub_019b4190(void)
{
  return 1;
}

void sub_019b4570();
// @baa 0x019b4be0
void sub_019b4be0(void) { sub_019b4570(); }

struct C_019b4f00 { C_019b4f00* sub_019b4f00(void); };

// @baa 0x019b4f00
C_019b4f00* C_019b4f00::sub_019b4f00(void) { return this; }

extern char g_023fdc88[];
struct C_019b4f10 { void sub_019b4f10(void); };

// @baa 0x019b4f10
void C_019b4f10::sub_019b4f10(void) { *(int*)((char*)this + 0) = (int)g_023fdc88; }

extern char g_023fdc9c[];
struct C_019b4f20 { void sub_019b4f20(void); };

// @baa 0x019b4f20
void C_019b4f20::sub_019b4f20(void) { *(int*)((char*)this + 0) = (int)g_023fdc9c; }

struct C_019b4f30 {
    undefined4 * sub_019b4f30(byte);
};

int sub_00402660(...);
// @baa 0x019b4f30
undefined4 * C_019b4f30::sub_019b4f30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fdc88));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019b4f50 {
    undefined4 * sub_019b4f50(byte);
};

// @baa 0x019b4f50
undefined4 * C_019b4f50::sub_019b4f50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fdc9c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019b4fa0 {
    bool sub_019b4fa0();
};

// @baa 0x019b4fa0
bool C_019b4fa0::sub_019b4fa0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_019b4fb0 { C_019b4fb0* sub_019b4fb0(void); };

// @baa 0x019b4fb0
C_019b4fb0* C_019b4fb0::sub_019b4fb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019b5010 {
    bool sub_019b5010();
};

// @baa 0x019b5010
bool C_019b5010::sub_019b5010(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_019b5020 { C_019b5020* sub_019b5020(void); };

// @baa 0x019b5020
C_019b5020* C_019b5020::sub_019b5020(void) { *(int*)((char*)this + 0) = (int)g_023fdc88; return this; }

struct C_019b5030 { C_019b5030* sub_019b5030(void); };

// @baa 0x019b5030
C_019b5030* C_019b5030::sub_019b5030(void) { *(int*)((char*)this + 0) = (int)g_023fdc9c; return this; }

struct C_019b50b0 {
    uint sub_019b50b0();
};

// @baa 0x019b50b0
uint C_019b50b0::sub_019b50b0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019b50c0 { unsigned sub_019b50c0(void); };

// @baa 0x019b50c0
unsigned C_019b50c0::sub_019b50c0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019b50d0 { unsigned sub_019b50d0(void); };

// @baa 0x019b50d0
unsigned C_019b50d0::sub_019b50d0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019b50e0 {
    uint sub_019b50e0();
};

// @baa 0x019b50e0
uint C_019b50e0::sub_019b50e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019b50f0 {
    void sub_019b50f0(uint);
};

// @baa 0x019b50f0
void C_019b50f0::sub_019b50f0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019b5110 {
    uint sub_019b5110();
};

// @baa 0x019b5110
uint C_019b5110::sub_019b5110(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019b5120 {
    uint sub_019b5120();
};

// @baa 0x019b5120
uint C_019b5120::sub_019b5120(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019b5130 { unsigned sub_019b5130(void); };

// @baa 0x019b5130
unsigned C_019b5130::sub_019b5130(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019b5140 { unsigned sub_019b5140(void); };

// @baa 0x019b5140
unsigned C_019b5140::sub_019b5140(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019b5150 {
    uint sub_019b5150();
};

// @baa 0x019b5150
uint C_019b5150::sub_019b5150(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019b5160 {
    void sub_019b5160(uint);
};

// @baa 0x019b5160
void C_019b5160::sub_019b5160(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019b5180 { unsigned sub_019b5180(void); };

// @baa 0x019b5180
unsigned C_019b5180::sub_019b5180(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019b5190 { unsigned sub_019b5190(void); };

// @baa 0x019b5190
unsigned C_019b5190::sub_019b5190(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019b51a0 {
    uint sub_019b51a0();
};

// @baa 0x019b51a0
uint C_019b51a0::sub_019b51a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019b51b0 {
    void sub_019b51b0(uint);
};

// @baa 0x019b51b0
void C_019b51b0::sub_019b51b0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019b51d0
int sub_019b51d0(int a0) { return a0; }

// @baa 0x019b51e0
undefined4 * sub_019b51e0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xb;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x019b5200
undefined4 * sub_019b5200(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xb;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_019b5220 { int sub_019b5220(void); };

// @baa 0x019b5220
int C_019b5220::sub_019b5220(void) { return *(int*)((char*)this + 20); }

struct C_019b5230 { int sub_019b5230(void); };

// @baa 0x019b5230
int C_019b5230::sub_019b5230(void) { return *(int*)((char*)this + 24); }

struct C_019b5240 {
    bool sub_019b5240(int);
};

// @baa 0x019b5240
bool C_019b5240::sub_019b5240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_019b5250 {
    void sub_019b5250(int);
};

// @baa 0x019b5250
void C_019b5250::sub_019b5250(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8);
  return;
}

struct C_019b5260 { int sub_019b5260(void); };

// @baa 0x019b5260
int C_019b5260::sub_019b5260(void) { return *(int*)((char*)this + 20); }

struct C_019b5270 { int sub_019b5270(void); };

// @baa 0x019b5270
int C_019b5270::sub_019b5270(void) { return *(int*)((char*)this + 24); }

struct C_019b5280 {
    bool sub_019b5280(int);
};

// @baa 0x019b5280
bool C_019b5280::sub_019b5280(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_019b5290 {
    void sub_019b5290(int);
};

// @baa 0x019b5290
void C_019b5290::sub_019b5290(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8);
  return;
}

// @baa 0x019b52a0
void __stdcall sub_019b52a0(int a0) {  }

struct C_019b5320 {
    int sub_019b5320(int);
};

// @baa 0x019b5320
int C_019b5320::sub_019b5320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_019b5330 {
    int sub_019b5330(int);
};

// @baa 0x019b5330
int C_019b5330::sub_019b5330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_019b5a70 { void sub_019b5a70(void); };

// @baa 0x019b5a70
void C_019b5a70::sub_019b5a70(void) { *(int*)((char*)this + 0) = (int)g_023fdc88; }

struct C_019b5a80 { void sub_019b5a80(void); };

// @baa 0x019b5a80
void C_019b5a80::sub_019b5a80(void) { *(int*)((char*)this + 0) = (int)g_023fdc9c; }

struct C_019b5a90 {
    int sub_019b5a90();
};

// @baa 0x019b5a90
int C_019b5a90::sub_019b5a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x14;
}

struct C_019b5bb0 { int sub_019b5bb0(void); };

// @baa 0x019b5bb0
int C_019b5bb0::sub_019b5bb0(void) { return *(int*)((char*)this + 4); }

struct C_019b5bc0 {
    int sub_019b5bc0(int);
};

// @baa 0x019b5bc0
int C_019b5bc0::sub_019b5bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019b5bd0 {
    int sub_019b5bd0(int);
};

// @baa 0x019b5bd0
int C_019b5bd0::sub_019b5bd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019b5be0 { int sub_019b5be0(void); };

// @baa 0x019b5be0
int C_019b5be0::sub_019b5be0(void) { return *(int*)((char*)this + 4); }

struct C_019b5bf0 {
    int sub_019b5bf0(int);
};

// @baa 0x019b5bf0
int C_019b5bf0::sub_019b5bf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_019b5c20 {
    undefined4 * sub_019b5c20(byte);
};

// @baa 0x019b5c20
undefined4 * C_019b5c20::sub_019b5c20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fdc88));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019b5cc0 { int sub_019b5cc0(void); };

// @baa 0x019b5cc0
int C_019b5cc0::sub_019b5cc0(void) { return *(int*)((char*)this + 4); }

struct C_019b5cd0 {
    int sub_019b5cd0(int);
};

// @baa 0x019b5cd0
int C_019b5cd0::sub_019b5cd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_019b5ce0 {
    undefined4 * sub_019b5ce0(byte);
};

// @baa 0x019b5ce0
undefined4 * C_019b5ce0::sub_019b5ce0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023fdc9c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019b68e0 { int sub_019b68e0(void); };

// @baa 0x019b68e0
int C_019b68e0::sub_019b68e0(void) { return *(int*)((char*)this + 8); }

struct C_019b6970 {
    undefined4 sub_019b6970();
};

// @baa 0x019b6970
undefined4 C_019b6970::sub_019b6970(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 8);
}

struct C_019b6ad0 {
    int sub_019b6ad0();
};

// @baa 0x019b6ad0
int C_019b6ad0::sub_019b6ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x14;
}

struct C_019b6f80 {
    uint sub_019b6f80(uint);
};

// @baa 0x019b6f80
uint C_019b6f80::sub_019b6f80(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) & param_2;
}

void sub_019b6be0();
// @baa 0x019b6f90
void sub_019b6f90(void) { sub_019b6be0(); }

void sub_019b6c50();
// @baa 0x019b6fa0
void sub_019b6fa0(void) { sub_019b6c50(); }

void sub_019b6d00();
// @baa 0x019b6fb0
void sub_019b6fb0(void) { sub_019b6d00(); }

void sub_019b7cc0();
// @baa 0x019b7d30
void sub_019b7d30(void) { sub_019b7cc0(); }

// @baa 0x019b8d50
void sub_019b8d50(void) { sub_019b7cc0(); }

void sub_019b81a0();
// @baa 0x019b8d60
void sub_019b8d60(void) { sub_019b81a0(); }

// @baa 0x019b8d70
void sub_019b8d70(void) { sub_019b7cc0(); }

void sub_019b8380();
// @baa 0x019b8eb0
void sub_019b8eb0(void) { sub_019b8380(); }

struct C_019b9bd0 {
    undefined4 sub_019b9bd0();
};

// @baa 0x019b9bd0
undefined4 C_019b9bd0::sub_019b9bd0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) || (*(int *)(param_1 + 0x20) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

void sub_018d3de0();
// @baa 0x019b9bf0
void sub_019b9bf0(void) { sub_018d3de0(); }

extern char g_023f9644[];
struct C_019b9d20 { void sub_019b9d20(void); };

// @baa 0x019b9d20
void C_019b9d20::sub_019b9d20(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

struct C_019b9d60 { void sub_019b9d60(void); };

// @baa 0x019b9d60
void C_019b9d60::sub_019b9d60(void) { *(int*)((char*)this + 0) = (int)g_023f9644; }

struct C_019baf70 {
    undefined4 * sub_019baf70(byte);
};

// @baa 0x019baf70
undefined4 * C_019baf70::sub_019baf70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019bb680 {
    undefined4 * sub_019bb680(byte);
};

// @baa 0x019bb680
undefined4 * C_019bb680::sub_019bb680(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f9644));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019bb780 {
    int sub_019bb780();
};

// @baa 0x019bb780
int C_019bb780::sub_019bb780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x14;
}

struct C_019bbb90 { C_019bbb90* sub_019bbb90(void); };

// @baa 0x019bbb90
C_019bbb90* C_019bbb90::sub_019bbb90(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019bbba0 { C_019bbba0* sub_019bbba0(void); };

// @baa 0x019bbba0
C_019bbba0* C_019bbba0::sub_019bbba0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019bbbb0 { C_019bbbb0* sub_019bbbb0(void); };

// @baa 0x019bbbb0
C_019bbbb0* C_019bbbb0::sub_019bbbb0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019bbc00
int sub_019bbc00(void) { return 31; }

// @baa 0x019bbeb0
undefined1 sub_019bbeb0(void)
{
  return 1;
}

struct C_019bc690 { void sub_019bc690(int a0); };

// @baa 0x019bc690
void C_019bc690::sub_019bc690(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_019bca50 {
    undefined4 sub_019bca50();
};

// @baa 0x019bca50
undefined4 C_019bca50::sub_019bca50(void)
{
    int param_1 = (int)this;

  return **(undefined4 **)(param_1 + 0x14);
}

// @baa 0x019bca60
void __stdcall sub_019bca60(int a0, int a1, int a2) {  }

// @baa 0x019bca70
int __stdcall sub_019bca70(int a0, int a1) { return 0; }

// @baa 0x019bca80
void __stdcall sub_019bca80(int a0) {  }

struct C_019bcb20 { int sub_019bcb20(void); };

// @baa 0x019bcb20
int C_019bcb20::sub_019bcb20(void) { return *(int*)((char*)this + 0); }

struct C_019bcb30 { int sub_019bcb30(void); };

// @baa 0x019bcb30
int C_019bcb30::sub_019bcb30(void) { return *(int*)((char*)this + 0); }

struct C_019bcb70 { int sub_019bcb70(void); };

// @baa 0x019bcb70
int C_019bcb70::sub_019bcb70(void) { return *(int*)((char*)this + 0); }

extern char g_023efcf8[];
// @baa 0x019bccb0
int sub_019bccb0(void) { return (int)g_023efcf8; }

// @baa 0x019bccd0
undefined1 sub_019bccd0(void)
{
  return 0;
}

// @baa 0x019bccf0
int __stdcall sub_019bccf0(int a0) { return 1; }

// @baa 0x019bcd30
void __stdcall sub_019bcd30(int a0, int a1, int a2) {  }

// @baa 0x019bcd40
void sub_019bcd40(void) {  }

// @baa 0x019bcd50
void sub_019bcd50(void) {  }

// @baa 0x019bcd60
void __stdcall sub_019bcd60(int a0) {  }

// @baa 0x019bcd70
void __stdcall sub_019bcd70(int a0) {  }

void sub_019bda70();
// @baa 0x019bdc00
void sub_019bdc00(void) { sub_019bda70(); }

// @baa 0x019be510
void sub_019be510(void) { sub_019bda70(); }

// @baa 0x019be520
void sub_019be520(void) { sub_019bda70(); }

// @baa 0x019be5c0
int sub_019be5c0(void) { return 25; }

void sub_019be530();
// @baa 0x019be7b0
void sub_019be7b0(void) { sub_019be530(); }

struct C_019be930 {
    void sub_019be930();
};

// @baa 0x019be930
void C_019be930::sub_019be930(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 4;
  return;
}

struct C_019be940 {
    void sub_019be940();
};

// @baa 0x019be940
void C_019be940::sub_019be940(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 4;
  return;
}

struct C_019be970 {
    void sub_019be970(char);
};

// @baa 0x019be970
void C_019be970::sub_019be970(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 2;
    return;
  }
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfd;
  return;
}

struct C_019be990 {
    byte sub_019be990();
};

// @baa 0x019be990
byte C_019be990::sub_019be990(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x44) >> 1 & 1;
}

struct C_019be9e0 {
    int sub_019be9e0(int);
};

// @baa 0x019be9e0
int C_019be9e0::sub_019be9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_019be9f0 {
    int sub_019be9f0(int);
};

// @baa 0x019be9f0
int C_019be9f0::sub_019be9f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_019bea00 { int sub_019bea00(void); };

// @baa 0x019bea00
int C_019bea00::sub_019bea00(void) { return *(int*)((char*)this + 4); }

struct C_019bea10 {
    int sub_019bea10(int);
};

// @baa 0x019bea10
int C_019bea10::sub_019bea10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019bea20 { int sub_019bea20(void); };

// @baa 0x019bea20
int C_019bea20::sub_019bea20(void) { return *(int*)((char*)this + 4); }

struct C_019bea50 { int sub_019bea50(void); };

// @baa 0x019bea50
int C_019bea50::sub_019bea50(void) { return *(int*)((char*)this + 0); }

struct C_019bea60 { int sub_019bea60(void); };

// @baa 0x019bea60
int C_019bea60::sub_019bea60(void) { return *(int*)((char*)this + 0); }

struct C_019bea90 {
    uint sub_019bea90();
};

// @baa 0x019bea90
uint C_019bea90::sub_019bea90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019beaa0 { unsigned sub_019beaa0(void); };

// @baa 0x019beaa0
unsigned C_019beaa0::sub_019beaa0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019beab0 { unsigned sub_019beab0(void); };

// @baa 0x019beab0
unsigned C_019beab0::sub_019beab0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019beac0 {
    uint sub_019beac0();
};

// @baa 0x019beac0
uint C_019beac0::sub_019beac0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019bead0 {
    void sub_019bead0(uint);
};

// @baa 0x019bead0
void C_019bead0::sub_019bead0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_019beaf0 {
    uint sub_019beaf0();
};

// @baa 0x019beaf0
uint C_019beaf0::sub_019beaf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019beb00 { unsigned sub_019beb00(void); };

// @baa 0x019beb00
unsigned C_019beb00::sub_019beb00(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_019beb10 { unsigned sub_019beb10(void); };

// @baa 0x019beb10
unsigned C_019beb10::sub_019beb10(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_019beb20 {
    uint sub_019beb20();
};

// @baa 0x019beb20
uint C_019beb20::sub_019beb20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_019beb30 {
    void sub_019beb30(uint);
};

// @baa 0x019beb30
void C_019beb30::sub_019beb30(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x019beb70
int sub_019beb70(int a0) { return a0; }

struct C_019beb80 { int sub_019beb80(void); };

// @baa 0x019beb80
int C_019beb80::sub_019beb80(void) { return *(int*)((char*)this + 4); }

void sub_019bedc0();
// @baa 0x019bef30
void sub_019bef30(void) { sub_019bedc0(); }

void sub_019beec0();
// @baa 0x019bef40
void sub_019bef40(void) { sub_019beec0(); }

struct C_019bf580 {
    byte sub_019bf580();
};

// @baa 0x019bf580
byte C_019bf580::sub_019bf580(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x44) & 1;
}

void sub_019bf880();
// @baa 0x019bf920
void sub_019bf920(void) { sub_019bf880(); }

// @baa 0x019bff80
int sub_019bff80(void) { return 33280; }
