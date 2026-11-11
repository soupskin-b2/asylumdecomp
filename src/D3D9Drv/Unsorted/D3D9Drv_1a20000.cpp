// D3D9Drv_1a20000.cpp (part 1 of 3): 39 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a205c0
void sub_01a205c0(void) {  }

// @baa 0x01a213b0
void sub_01a213b0(void) {  }

// @baa 0x01a23330
void sub_01a23330(void) {  }

extern undefined4 g_02603b10;
// @baa 0x01a26710
undefined4 sub_01a26710(void)
{
  return g_02603b10;
}

struct C { char* sub_01a26d60(void); };

// @baa 0x01a26d60
char* C::sub_01a26d60(void) { return (char*)this + 88; }

struct C_01a26d70 { char* sub_01a26d70(void); };

// @baa 0x01a26d70
char* C_01a26d70::sub_01a26d70(void) { return (char*)this + 88; }

// @baa 0x01a26ed0
uint sub_01a26ed0(uint param_1, uint param_2, uint param_3)
{
  return ~param_1 & param_3 | param_1 & param_2;
}

// @baa 0x01a26ef0
uint sub_01a26ef0(uint param_1, uint param_2, uint param_3)
{
  return ~param_3 & param_2 | param_1 & param_3;
}

// @baa 0x01a26f10
uint sub_01a26f10(uint param_1, uint param_2, uint param_3)
{
  return param_1 ^ param_2 ^ param_3;
}

// @baa 0x01a26f20
uint sub_01a26f20(uint param_1, uint param_2, uint param_3)
{
  return (~param_3 | param_1) ^ param_2;
}

extern char g_024052a4[];
struct C_01a278d0 { C_01a278d0* sub_01a278d0(void); };

// @baa 0x01a278d0
C_01a278d0* C_01a278d0::sub_01a278d0(void) { *(int*)((char*)this + 0) = (int)g_024052a4; return this; }

// @baa 0x01a278e0
void sub_01a278e0(void) {  }

// @baa 0x01a27980
undefined2 sub_01a27980(void)
{
  return 0x82;
}

// @baa 0x01a27990
undefined2 sub_01a27990(void)
{
  return 3;
}

// @baa 0x01a279a0
undefined2 sub_01a279a0(void)
{
  return 0x11;
}

// @baa 0x01a279b0
undefined2 sub_01a279b0(void)
{
  return 4;
}

// @baa 0x01a279c0
int sub_01a279c0(void) { return 0; }

// @baa 0x01a27af0
void sub_01a27af0(void) {  }

struct C_01a27b00 { int sub_01a27b00(void); };

// @baa 0x01a27b00
int C_01a27b00::sub_01a27b00(void) { return *(int*)((char*)this + 4); }

struct C_01a27b50 { int sub_01a27b50(void); };

// @baa 0x01a27b50
int C_01a27b50::sub_01a27b50(void) { return *(int*)((char*)this + 8); }

struct C_01a27b60 { void sub_01a27b60(int a0); };

// @baa 0x01a27b60
void C_01a27b60::sub_01a27b60(int a0) { *(int*)((char*)this + 8) = a0; }

// @baa 0x01a27b70
undefined1 sub_01a27b70(void)
{
  return 0;
}

struct C_01a27d80 {
    int sub_01a27d80(int);
};

// @baa 0x01a27d80
int C_01a27d80::sub_01a27d80(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_2 * 0x30 + 4 + *(int *)(param_1 + 0x14)) + *(int *)(param_1 + 8);
}

// @baa 0x01a27da0
undefined1 sub_01a27da0(void)
{
  return 0;
}

// @baa 0x01a27db0
int sub_01a27db0(void) { return 0; }

// @baa 0x01a27dc0
int sub_01a27dc0(void) { return 0; }

extern undefined4 g_02604290;
// @baa 0x01a27dd0
undefined * sub_01a27dd0(int param_1)
{
  return (undefined *)((&g_02604290)[param_1 * 2]);
}

// @baa 0x01a27de0
int sub_01a27de0(void) { return 1; }

// @baa 0x01a27df0
undefined1 sub_01a27df0(void)
{
  return 1;
}

// @baa 0x01a27e20
int sub_01a27e20(void) { return 1; }

// @baa 0x01a27e30
undefined1 sub_01a27e30(void)
{
  return 1;
}

// @baa 0x01a27e60
int sub_01a27e60(void) { return 1; }

// @baa 0x01a27e70
undefined1 sub_01a27e70(void)
{
  return 1;
}

// @baa 0x01a27e80
undefined1 sub_01a27e80(void)
{
  return 1;
}

// @baa 0x01a27e90
int sub_01a27e90(void) { return 1; }

// @baa 0x01a27ea0
undefined1 sub_01a27ea0(void)
{
  return 1;
}

// @baa 0x01a27eb0
undefined1 sub_01a27eb0(void)
{
  return 1;
}

// @baa 0x01a27ec0
int sub_01a27ec0(void) { return 1; }

// @baa 0x01a27ed0
undefined1 sub_01a27ed0(void)
{
  return 1;
}
