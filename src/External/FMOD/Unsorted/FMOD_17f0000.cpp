// FMOD_17f0000.cpp (part 1 of 2): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { char* sub_017f0ec0(void); };

// @baa 0x017f0ec0
char* C::sub_017f0ec0(void) { return (char*)this + 12; }

struct C_017f0ed0 { char* sub_017f0ed0(void); };

// @baa 0x017f0ed0
char* C_017f0ed0::sub_017f0ed0(void) { return (char*)this + 36; }

struct C_017f0ee0 { int sub_017f0ee0(void); };

// @baa 0x017f0ee0
int C_017f0ee0::sub_017f0ee0(void) { return *(int*)((char*)this + 44); }

struct C_017f67a0 { void sub_017f67a0(int a0); };

// @baa 0x017f67a0
void C_017f67a0::sub_017f67a0(int a0) { *(int*)((char*)this + 148) = a0; }

struct C_017f67b0 { void sub_017f67b0(int a0); };

// @baa 0x017f67b0
void C_017f67b0::sub_017f67b0(int a0) { *(int*)((char*)this + 144) = a0; }

struct C_017f67c0 { void sub_017f67c0(int a0); };

// @baa 0x017f67c0
void C_017f67c0::sub_017f67c0(int a0) { *(int*)((char*)this + 152) = a0; }

struct C_017f67f0 { int sub_017f67f0(void); };

// @baa 0x017f67f0
int C_017f67f0::sub_017f67f0(void) { return *(int*)((char*)this + 0); }

struct C_017f6800 { int sub_017f6800(void); };

// @baa 0x017f6800
int C_017f6800::sub_017f6800(void) { return *(int*)((char*)this + 4); }

struct C_017f6810 {
    void sub_017f6810(undefined4, undefined4);
};

// @baa 0x017f6810
void C_017f6810::sub_017f6810(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

extern char g_023e08ac[];
struct C_017f84a0 { void sub_017f84a0(void); };

// @baa 0x017f84a0
void C_017f84a0::sub_017f84a0(void) { *(int*)((char*)this + 0) = (int)g_023e08ac; }

struct C_017f84f0 {
    undefined4 * sub_017f84f0(byte);
};

int sub_00402660(...);
// @baa 0x017f84f0
undefined4 * C_017f84f0::sub_017f84f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e08ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017f8510 { C_017f8510* sub_017f8510(void); };

// @baa 0x017f8510
C_017f8510* C_017f8510::sub_017f8510(void) { *(int*)((char*)this + 0) = (int)g_023e08ac; return this; }

struct C_017f8520 { void sub_017f8520(void); };

// @baa 0x017f8520
void C_017f8520::sub_017f8520(void) { *(int*)((char*)this + 0) = (int)g_023e08ac; }

struct C_017f8530 {
    undefined1 sub_017f8530();
};

// @baa 0x017f8530
undefined1 C_017f8530::sub_017f8530(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x24);
}

// @baa 0x017f8540
int __stdcall sub_017f8540(int a0) { return 0; }

// @baa 0x017f8550
int __stdcall sub_017f8550(int a0) { return 0; }

// @baa 0x017f8aa0
int sub_017f8aa0(void) { return 3; }

struct C_017f8ab0 { void sub_017f8ab0(void); };

// @baa 0x017f8ab0
void C_017f8ab0::sub_017f8ab0(void) { *(int*)((char*)this + 0) = (int)g_023e08ac; }

struct C_017f8ac0 {
    undefined4 * sub_017f8ac0(byte);
};

// @baa 0x017f8ac0
undefined4 * C_017f8ac0::sub_017f8ac0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e08ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017fa3c0 {
    undefined8 sub_017fa3c0();
};

// @baa 0x017fa3c0
undefined8 C_017fa3c0::sub_017fa3c0(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x18);
}

struct C_017fa3d0 {
    undefined8 sub_017fa3d0();
};

// @baa 0x017fa3d0
undefined8 C_017fa3d0::sub_017fa3d0(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x20);
}

struct C_017fa3e0 {
    undefined4 sub_017fa3e0(char *);
};

// @baa 0x017fa3e0
undefined4 C_017fa3e0::sub_017fa3e0(char * param_2)
{
    char * param_1 = (char *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 0;
  }
  return 1;
}

struct C_017fa400 { int sub_017fa400(void); };

// @baa 0x017fa400
int C_017fa400::sub_017fa400(void) { return *(int*)((char*)this + 16); }

struct C_017fa410 {
    bool sub_017fa410();
};

// @baa 0x017fa410
bool C_017fa410::sub_017fa410(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) == 0;
}

struct C_017fa420 {
    void sub_017fa420(undefined1);
};

// @baa 0x017fa420
void C_017fa420::sub_017fa420(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

struct C_017fa430 {
    void sub_017fa430(undefined1);
};

// @baa 0x017fa430
void C_017fa430::sub_017fa430(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}

struct C_017fa440 {
    void sub_017fa440(undefined4, undefined4);
};

// @baa 0x017fa440
void C_017fa440::sub_017fa440(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

struct C_017fa460 {
    void sub_017fa460(undefined4, undefined4);
};

// @baa 0x017fa460
void C_017fa460::sub_017fa460(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

struct C_017fa480 { C_017fa480* sub_017fa480(void); };

// @baa 0x017fa480
C_017fa480* C_017fa480::sub_017fa480(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_017fa490 {
    int sub_017fa490();
};

// @baa 0x017fa490
int C_017fa490::sub_017fa490(void)
{
    int param_1 = (int)this;

  return param_1 + *(int *)(param_1 + 8) * 4;
}

struct C_017fa4a0 {
    int sub_017fa4a0();
};

// @baa 0x017fa4a0
int C_017fa4a0::sub_017fa4a0(void)
{
    int param_1 = (int)this;

  return param_1 + *(int *)(param_1 + 8) * 4;
}

struct C_017fa4b0 { int sub_017fa4b0(void); };

// @baa 0x017fa4b0
int C_017fa4b0::sub_017fa4b0(void) { return *(int*)((char*)this + 12); }

struct C_017fa4c0 { int sub_017fa4c0(void); };

// @baa 0x017fa4c0
int C_017fa4c0::sub_017fa4c0(void) { return *(int*)((char*)this + 16); }

struct C_017fa4d0 { int sub_017fa4d0(void); };

// @baa 0x017fa4d0
int C_017fa4d0::sub_017fa4d0(void) { return *(int*)((char*)this + 148); }

struct C_017fa4e0 { int sub_017fa4e0(void); };

// @baa 0x017fa4e0
int C_017fa4e0::sub_017fa4e0(void) { return *(int*)((char*)this + 144); }

struct C_017fa500 { float sub_017fa500(void); };

// @baa 0x017fa500
float C_017fa500::sub_017fa500(void) { return *(float*)((char*)this + 4); }

struct C_017fa510 {
    undefined8 sub_017fa510();
};

// @baa 0x017fa510
undefined8 C_017fa510::sub_017fa510(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 8);
}

struct C_017fa520 {
    undefined8 sub_017fa520();
};

// @baa 0x017fa520
undefined8 C_017fa520::sub_017fa520(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x10);
}

struct C_017fa530 {
    undefined8 sub_017fa530();
};

// @baa 0x017fa530
undefined8 C_017fa530::sub_017fa530(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x18);
}

struct C_017fa540 {
    void sub_017fa540(undefined2);
};

// @baa 0x017fa540
void C_017fa540::sub_017fa540(undefined2 param_2)
{
    undefined2 * param_1 = (undefined2 *)this;

  *param_1 = param_2;
  return;
}

struct C_017fa560 { void sub_017fa560(int a0); };

// @baa 0x017fa560
void C_017fa560::sub_017fa560(int a0) { *(int*)((char*)this + 36) = a0; }

struct C_017fa570 {
    void sub_017fa570(undefined4, undefined4);
};

// @baa 0x017fa570
void C_017fa570::sub_017fa570(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

struct C_017fa590 { void sub_017fa590(int a0); };

// @baa 0x017fa590
void C_017fa590::sub_017fa590(int a0) { *(int*)((char*)this + 32) = a0; }
