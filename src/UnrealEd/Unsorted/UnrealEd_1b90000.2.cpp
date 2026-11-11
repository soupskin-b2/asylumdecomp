// UnrealEd_1b90000.cpp (part 2 of 2): 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01b8f2c0(void);
int sub_01b92c90(void);
extern undefined4 g_027d3448;
extern undefined4 g_027d344c;
// @baa 0x01b92d60
void sub_01b92d60(void)
{
  if (g_027d3448 == 0) {
    g_027d3448 = sub_01b8f2c0();
  }
  if (g_027d344c == 0) {
    g_027d344c = sub_01b92c90();
  }
  return;
}

// @baa 0x01b92d90
void sub_01b92d90(void) {  }

// @baa 0x01b92da0
int sub_01b92da0(void) { return 1000; }

struct C { int sub_01b92ee0(void); };

// @baa 0x01b92ee0
int C::sub_01b92ee0(void) { return *(int*)((char*)this + 8); }

struct C_01b92ef0 {
    int sub_01b92ef0(int);
};

// @baa 0x01b92ef0
int C_01b92ef0::sub_01b92ef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_01b92f10 {
    int sub_01b92f10(int);
};

// @baa 0x01b92f10
int C_01b92f10::sub_01b92f10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_01b92f30 { int sub_01b92f30(void); };

// @baa 0x01b92f30
int C_01b92f30::sub_01b92f30(void) { return *(int*)((char*)this + 8); }

struct C_01b92f40 {
    int sub_01b92f40(int);
};

// @baa 0x01b92f40
int C_01b92f40::sub_01b92f40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01b92fc0
void sub_01b92fc0(void) {  }

// @baa 0x01b92fd0
void sub_01b92fd0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01b92ff0 { int sub_01b92ff0(void); };

// @baa 0x01b92ff0
int C_01b92ff0::sub_01b92ff0(void) { return *(int*)((char*)this + 8); }

struct C_01b93000 {
    undefined4 sub_01b93000(int);
};

// @baa 0x01b93000
undefined4 C_01b93000::sub_01b93000(int param_2)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + param_2 * 4);
}

struct C_01b93010 {
    float10 sub_01b93010(int);
};

// @baa 0x01b93010
float10 C_01b93010::sub_01b93010(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0xc) + param_2 * 4);
}

struct C_01b93020 {
    float10 sub_01b93020(uint);
};

// @baa 0x01b93020
float10 C_01b93020::sub_01b93020(uint param_2)
{
    int param_1 = (int)this;

  if (param_2 < *(int *)(param_1 + 0x14) - 1U) {
    return (float10)*(float *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 4);
  }
  return (float10)*(float *)(param_1 + 0x18);
}

struct C_01b932d0 {
    int sub_01b932d0(int);
};

// @baa 0x01b932d0
int C_01b932d0::sub_01b932d0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x34) + param_2 * 0x44;
}

struct C_01b932f0 { int sub_01b932f0(void); };

// @baa 0x01b932f0
int C_01b932f0::sub_01b932f0(void) { return *(int*)((char*)this + 60); }

// @baa 0x01b93300
void sub_01b93300(void) {  }

struct C_01b93400 {
    void sub_01b93400();
};

int sub_01ab3290(...);
// @baa 0x01b93400
void C_01b93400::sub_01b93400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x44);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01b93570 {
    void sub_01b93570();
};

// @baa 0x01b93570
void C_01b93570::sub_01b93570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x44);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01b94590 { char* sub_01b94590(void); };

// @baa 0x01b94590
char* C_01b94590::sub_01b94590(void) { return (char*)this + 180; }

struct C_01b94660 { int sub_01b94660(void); };

// @baa 0x01b94660
int C_01b94660::sub_01b94660(void) { return *(int*)((char*)this + 0); }

struct C_01b946b0 { int sub_01b946b0(void); };

// @baa 0x01b946b0
int C_01b946b0::sub_01b946b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x01b946e0
void sub_01b946e0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01b94710
void sub_01b94710(void) {  }

// @baa 0x01b94780
void sub_01b94780(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

// @baa 0x01b947a0
void sub_01b947a0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

struct C_01b94950 {
    void sub_01b94950(int);
};

// @baa 0x01b94950
void C_01b94950::sub_01b94950(int param_2)
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

struct C_01b94980 {
    void sub_01b94980();
};

int sub_01b94900(void);
// @baa 0x01b94980
void C_01b94980::sub_01b94980(void)
{
    int * param_1 = (int *)this;

  sub_01b94900();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  return;
}

struct C_01b949b0 {
    void sub_01b949b0(int);
};

// @baa 0x01b949b0
void C_01b949b0::sub_01b949b0(int param_2)
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
