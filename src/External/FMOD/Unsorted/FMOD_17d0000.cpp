// FMOD_17d0000.cpp (part 1 of 2): 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { char* sub_017d6410(void); };

// @baa 0x017d6410
char* C::sub_017d6410(void) { return (char*)this + 24; }

extern char g_023df864[];
struct C_017d7e70 { void sub_017d7e70(void); };

// @baa 0x017d7e70
void C_017d7e70::sub_017d7e70(void) { *(int*)((char*)this + 0) = (int)g_023df864; }

struct C_017d7e80 {
    undefined4 * sub_017d7e80(byte);
};

int sub_00402660(...);
// @baa 0x017d7e80
undefined4 * C_017d7e80::sub_017d7e80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023df864));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017d7ea0 {
    undefined4 sub_017d7ea0();
};

// @baa 0x017d7ea0
undefined4 C_017d7ea0::sub_017d7ea0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8);
}

struct C_017d7ec0 { C_017d7ec0* sub_017d7ec0(void); };

// @baa 0x017d7ec0
C_017d7ec0* C_017d7ec0::sub_017d7ec0(void) { *(int*)((char*)this + 0) = (int)g_023df864; return this; }

struct C_017d7ed0 {
    void sub_017d7ed0();
};

// @baa 0x017d7ed0
void C_017d7ed0::sub_017d7ed0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

struct C_017dadc0 { void sub_017dadc0(int a0); };

// @baa 0x017dadc0
void C_017dadc0::sub_017dadc0(int a0) { *(int*)((char*)this + 16) = a0; }

extern char g_023df96c[];
struct C_017db370 { void sub_017db370(void); };

// @baa 0x017db370
void C_017db370::sub_017db370(void) { *(int*)((char*)this + 0) = (int)g_023df96c; }

struct C_017db380 {
    undefined4 * sub_017db380(byte);
};

// @baa 0x017db380
undefined4 * C_017db380::sub_017db380(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023df96c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017db3b0 { void sub_017db3b0(int a0); };

// @baa 0x017db3b0
void C_017db3b0::sub_017db3b0(int a0) { *(int*)((char*)this + 116) = a0; }

struct C_017db3c0 { int sub_017db3c0(void); };

// @baa 0x017db3c0
int C_017db3c0::sub_017db3c0(void) { return *(int*)((char*)this + 116); }

extern char g_023dfa10[];
struct C_017db3d0 { void sub_017db3d0(void); };

// @baa 0x017db3d0
void C_017db3d0::sub_017db3d0(void) { *(int*)((char*)this + 0) = (int)g_023dfa10; }

struct C_017db3e0 {
    undefined4 * sub_017db3e0(byte);
};

// @baa 0x017db3e0
undefined4 * C_017db3e0::sub_017db3e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfa10));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017db400 {
    int sub_017db400();
};

// @baa 0x017db400
int C_017db400::sub_017db400(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -8;
}
