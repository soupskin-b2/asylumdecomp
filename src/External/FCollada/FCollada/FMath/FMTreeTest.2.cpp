// FMTreeTest.cpp (part 2 of 2): 13 functions
// Placed here by: neighbours 11, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_0186a080(void); };

// @baa 0x0186a080
C* C::sub_0186a080(void) { return this; }

struct C_0186a100 {
    int sub_0186a100();
};

// @baa 0x0186a100
int C_0186a100::sub_0186a100(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_0186a110 {
    int sub_0186a110();
};

// @baa 0x0186a110
int C_0186a110::sub_0186a110(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_0186a120 { int sub_0186a120(void); };

// @baa 0x0186a120
int C_0186a120::sub_0186a120(void) { return *(int*)((char*)this + 4); }

struct C_0186a130 { int sub_0186a130(void); };

// @baa 0x0186a130
int C_0186a130::sub_0186a130(void) { return *(int*)((char*)this + 4); }

struct C_0186a490 {
    void sub_0186a490();
};

void sub_01826080(void *);
int sub_01869f30(void);
// @baa 0x0186a490
void C_0186a490::sub_0186a490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01869f30();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_0186a5c0 {
    void sub_0186a5c0();
};

int sub_0186a170(void);
// @baa 0x0186a5c0
void C_0186a5c0::sub_0186a5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0186a170();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_0186a5e0 {
    undefined4 * sub_0186a5e0(byte);
};

int sub_00402660(...);
// @baa 0x0186a5e0
undefined4 * C_0186a5e0::sub_0186a5e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0186a170();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0186aa00
void sub_0186aa00(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}

// @baa 0x0186aa20
void sub_0186aa20(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}

struct C_0186aa40 {
    undefined4 * sub_0186aa40();
};

void * sub_01826070(size_t);
// @baa 0x0186aa40
undefined4 * C_0186aa40::sub_0186aa40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)(sub_01826070(0x18));
  *param_1 = (undefined4)(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
  }
  return param_1;
}

struct C_0186aba0 {
    undefined4 * sub_0186aba0();
};

// @baa 0x0186aba0
undefined4 * C_0186aba0::sub_0186aba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)(sub_01826070(0x18));
  *param_1 = (undefined4)(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
  }
  return param_1;
}

struct C_0186af60 {
    undefined4 * sub_0186af60();
};

int sub_0186aee0(...);
// @baa 0x0186af60
undefined4 * C_0186af60::sub_0186af60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  pvVar1 = sub_01826070(0x1c);
  *param_1 = (undefined4)(pvVar1);
  sub_0186aee0(pvVar1);
  return param_1;
}
