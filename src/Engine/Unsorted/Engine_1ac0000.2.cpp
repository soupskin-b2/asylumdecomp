// Engine_1ac0000.cpp (part 2 of 4): 47 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01ac0310();
};

int sub_01ab3290(...);
// @baa 0x01ac0310
void C::sub_01ac0310(void)
{
    int param_1 = (int)this;

  sub_01ab3290(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_01ac03f0 {
    void sub_01ac03f0();
};

// @baa 0x01ac03f0
void C_01ac03f0::sub_01ac03f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ac0550 {
    int sub_01ac0550(byte);
};

int sub_00402660(...);
// @baa 0x01ac0550
int C_01ac0550::sub_01ac0550(byte param_2)
{
    int param_1 = (int)this;

  sub_01ab3290(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ac0590 {
    undefined4 * sub_01ac0590(byte);
};

// @baa 0x01ac0590
undefined4 * C_01ac0590::sub_01ac0590(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ac0840
void sub_01ac0840(int param_1)
{
  if (param_1 != 0) {
    sub_01ab3290(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 4);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// @baa 0x01ac08e0
void sub_01ac08e0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01ac0e20
void sub_01ac0e20(int param_1, int param_2)
{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (param_1 != 0) {
        sub_01ab3290(piVar1[-1],*piVar1 * 4);
        piVar1[-1] = 0;
        piVar1[1] = 0;
        *piVar1 = 0;
      }
      param_1 = param_1 + 0x10;
      piVar1 = piVar1 + 4;
    } while (param_1 != param_2);
  }
  return;
}

// @baa 0x01ac0fb0
void sub_01ac0fb0(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

struct C_01ac2f70 {
    undefined4 sub_01ac2f70(byte);
};

int sub_01ac2e50(void);
// @baa 0x01ac2f70
undefined4 C_01ac2f70::sub_01ac2f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ac2e50();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ac3060 {
    undefined4 sub_01ac3060(byte);
};

int sub_01ac2f90(void);
// @baa 0x01ac3060
undefined4 C_01ac3060::sub_01ac3060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ac2f90();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x20);
  }
  return param_1;
}

struct C_01ac30e0 { char* sub_01ac30e0(void); };

// @baa 0x01ac30e0
char* C_01ac30e0::sub_01ac30e0(void) { return (char*)this + 16; }

struct C_01ac30f0 {
    void sub_01ac30f0(undefined1);
};

// @baa 0x01ac30f0
void C_01ac30f0::sub_01ac30f0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

struct C_01ac3100 {
    void sub_01ac3100(undefined1);
};

// @baa 0x01ac3100
void C_01ac3100::sub_01ac3100(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}

extern undefined1 g_026056c8;
// @baa 0x01ac3140
void sub_01ac3140(undefined1 param_1)
{
  g_026056c8 = param_1;
  return;
}

// @baa 0x01ac3150
undefined1 sub_01ac3150(void)
{
  return g_026056c8;
}

struct C_01ac44e0 {
    void sub_01ac44e0();
};

int sub_01ac4130(void);
// @baa 0x01ac44e0
void C_01ac44e0::sub_01ac44e0(void)
{
    int * param_1 = (int *)this;

  sub_01ac4130();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  return;
}

struct C_01ac5190 {
    void sub_01ac5190();
};

int sub_01ac4430(void);
// @baa 0x01ac5190
void C_01ac5190::sub_01ac5190(void)
{
    int * param_1 = (int *)this;

  sub_01ac4430();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  return;
}

struct C_01ac51c0 {
    void sub_01ac51c0(int);
};

// @baa 0x01ac51c0
void C_01ac51c0::sub_01ac51c0(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    sub_01ab3290(param_2,0xc);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

struct C_01ac6140 {
    undefined4 sub_01ac6140(byte);
};

int sub_01ac5c70(void);
// @baa 0x01ac6140
undefined4 C_01ac6140::sub_01ac6140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ac5c70();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x60a4);
  }
  return param_1;
}

struct C_01ac64c0 {
    int sub_01ac64c0(int);
};

// @baa 0x01ac64c0
int C_01ac64c0::sub_01ac64c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

// @baa 0x01ac65b0
void sub_01ac65b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ac65d0
void sub_01ac65d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

void sub_01ac7400();
// @baa 0x01ac79f0
void sub_01ac79f0(void) { sub_01ac7400(); }

struct C_01ac7bd0 {
    undefined4 sub_01ac7bd0(byte);
};

int sub_01ac7aa0(void);
// @baa 0x01ac7bd0
undefined4 C_01ac7bd0::sub_01ac7bd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ac7aa0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ac81b0 {
    void sub_01ac81b0();
};

int sub_01ac8140(...);
// @baa 0x01ac81b0
void C_01ac81b0::sub_01ac81b0(void)
{
    int * param_1 = (int *)this;

  sub_01ac8140(*param_1,param_1[2] * 0x58 + *param_1);
  sub_01ab3290(*param_1,param_1[1] * 0x58);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ac85a0 {
    void sub_01ac85a0();
};

// @baa 0x01ac85a0
void C_01ac85a0::sub_01ac85a0(void)
{
    int * param_1 = (int *)this;

  sub_01ac8140(*param_1,param_1[2] * 0x58 + *param_1);
  sub_01ab3290(*param_1,param_1[1] * 0x58);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern char g_0240d37c[];
struct C_01ac8b50 { C_01ac8b50* sub_01ac8b50(void); };

// @baa 0x01ac8b50
C_01ac8b50* C_01ac8b50::sub_01ac8b50(void) { *(int*)((char*)this + 0) = (int)g_0240d37c; return this; }

struct C_01ac8b60 { void sub_01ac8b60(void); };

// @baa 0x01ac8b60
void C_01ac8b60::sub_01ac8b60(void) { *(int*)((char*)this + 0) = (int)g_0240d37c; }

struct C_01ac8b70 {
    undefined4 * sub_01ac8b70(byte);
};

// @baa 0x01ac8b70
undefined4 * C_01ac8b70::sub_01ac8b70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d37c));
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,4);
  }
  return param_1;
}

struct C_01ac8bc0 {
    undefined1 sub_01ac8bc0();
};

// @baa 0x01ac8bc0
undefined1 C_01ac8bc0::sub_01ac8bc0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x01ac8be0
undefined1 sub_01ac8be0(void)
{
  return 0;
}

// @baa 0x01ac8bf0
undefined1 sub_01ac8bf0(void)
{
  return 1;
}

struct C_01ac8c50 { int sub_01ac8c50(void); };

// @baa 0x01ac8c50
int C_01ac8c50::sub_01ac8c50(void) { return *(int*)((char*)this + 16); }

struct C_01ac8c60 { void sub_01ac8c60(int a0); };

// @baa 0x01ac8c60
void C_01ac8c60::sub_01ac8c60(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_01ac8c70 { int sub_01ac8c70(void); };

// @baa 0x01ac8c70
int C_01ac8c70::sub_01ac8c70(void) { return *(int*)((char*)this + 4); }

struct C_01ac8c80 { int sub_01ac8c80(void); };

// @baa 0x01ac8c80
int C_01ac8c80::sub_01ac8c80(void) { return *(int*)((char*)this + 12); }

struct C_01ac8c90 { int sub_01ac8c90(void); };

// @baa 0x01ac8c90
int C_01ac8c90::sub_01ac8c90(void) { return *(int*)((char*)this + 8); }

struct C_01ac8ce0 { void sub_01ac8ce0(void); };

// @baa 0x01ac8ce0
void C_01ac8ce0::sub_01ac8ce0(void) { *(int*)((char*)this + 0) = (int)g_0240d37c; }

// @baa 0x01ac8d00
int sub_01ac8d00(void) { return 20; }

struct C_01ac8d60 {
    undefined4 * sub_01ac8d60(byte);
};

// @baa 0x01ac8d60
undefined4 * C_01ac8d60::sub_01ac8d60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d37c));
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_01ac8ee0 { int sub_01ac8ee0(void); };

// @baa 0x01ac8ee0
int C_01ac8ee0::sub_01ac8ee0(void) { return *(int*)((char*)this + 8); }

struct C_01ac8ef0 {
    int sub_01ac8ef0(int);
};

// @baa 0x01ac8ef0
int C_01ac8ef0::sub_01ac8ef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01ac8f00 {
    int sub_01ac8f00(int);
};

// @baa 0x01ac8f00
int C_01ac8f00::sub_01ac8f00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01ac9060 { int sub_01ac9060(void); };

// @baa 0x01ac9060
int C_01ac9060::sub_01ac9060(void) { return *(int*)((char*)this + 12); }

struct C_01ac9070 {
    int sub_01ac9070(int);
};

// @baa 0x01ac9070
int C_01ac9070::sub_01ac9070(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + param_2 * 0xc;
}

struct C_01ac9080 { int sub_01ac9080(void); };

// @baa 0x01ac9080
int C_01ac9080::sub_01ac9080(void) { return *(int*)((char*)this + 24); }

struct C_01ac9090 {
    int sub_01ac9090(int);
};

// @baa 0x01ac9090
int C_01ac9090::sub_01ac9090(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) + param_2 * 4;
}
