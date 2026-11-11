// Unknown_1b90000.cpp (part 1 of 2): 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01b95480(int);
};

// @baa 0x01b95480
int C::sub_01b95480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01b95490 {
    int sub_01b95490(int);
};

// @baa 0x01b95490
int C_01b95490::sub_01b95490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01b954a0 {
    int sub_01b954a0(int);
};

// @baa 0x01b954a0
int C_01b954a0::sub_01b954a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01b954b0 { int sub_01b954b0(void); };

// @baa 0x01b954b0
int C_01b954b0::sub_01b954b0(void) { return *(int*)((char*)this + 8); }

struct C_01b954c0 {
    int sub_01b954c0(int);
};

// @baa 0x01b954c0
int C_01b954c0::sub_01b954c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

// @baa 0x01b95530
void sub_01b95530(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01b955c0 {
    undefined4 sub_01b955c0(byte);
};

int sub_00402660(...);
int sub_01b952a0(void);
// @baa 0x01b955c0
undefined4 C_01b955c0::sub_01b955c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b952a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b95ab0 {
    void sub_01b95ab0();
};

int sub_01ab3290(...);
int sub_01b95a30(...);
// @baa 0x01b95ab0
void C_01b95ab0::sub_01b95ab0(void)
{
    int * param_1 = (int *)this;

  sub_01b95a30(*param_1,*param_1 + param_1[2] * 0x3c);
  sub_01ab3290(*param_1,param_1[1] * 0x3c);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01b95ca0 {
    void sub_01b95ca0();
};

// @baa 0x01b95ca0
void C_01b95ca0::sub_01b95ca0(void)
{
    int * param_1 = (int *)this;

  sub_01b95a30(*param_1,*param_1 + param_1[2] * 0x3c);
  sub_01ab3290(*param_1,param_1[1] * 0x3c);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01b96720 {
    int sub_01b96720(undefined4);
};

// @baa 0x01b96720
int C_01b96720::sub_01b96720(undefined4 param_2)
{
    int param_1 = (int)this;

  switch(param_2) {
  case 0:
    return param_1 + 0x2c;
  default:
    return param_1 + 0xc;
  case 2:
    return param_1 + 0x4c;
  case 3:
    return param_1 + 0x6c;
  case 4:
    return param_1 + 0x8c;
  }
}

struct C_01b96770 {
    int sub_01b96770(int);
};

// @baa 0x01b96770
int C_01b96770::sub_01b96770(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01b96780 { int sub_01b96780(void); };

// @baa 0x01b96780
int C_01b96780::sub_01b96780(void) { return *(int*)((char*)this + 8); }

struct C_01b96790 {
    int sub_01b96790(int);
};

// @baa 0x01b96790
int C_01b96790::sub_01b96790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x01b96820
void sub_01b96820(void) {  }

// @baa 0x01b96830
void sub_01b96830(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01b973c0 {
    void sub_01b973c0();
};

// @baa 0x01b973c0
void C_01b973c0::sub_01b973c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x1c);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01b97530 {
    void sub_01b97530();
};

// @baa 0x01b97530
void C_01b97530::sub_01b97530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x1c);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strncpy_s(...);
// @baa 0x01b97cd0
char * sub_01b97cd0(char * param_1, rsize_t param_2, char * param_3)
{
  strncpy_s(param_1,param_2,param_3,0xffffffff);
  return param_1;
}

struct C_01b97dc0 {
    void * sub_01b97dc0();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01b97dc0
void * C_01b97dc0::sub_01b97dc0(void)
{
    void * param_1 = (void *)this;

  *(undefined1 *)((int)param_1 + 0x180) = 1;
  sub_01a37612(param_1,0,0x80);
  sub_01a37612((void *)((int)param_1 + 0x80),0,0x80);
  sub_01a37612((void *)((int)param_1 + 0x100),0,0x80);
  return param_1;
}

// @baa 0x01b97ea0
void sub_01b97ea0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern undefined4 g_0260fdb0;
// @baa 0x01b9df80
void sub_01b9df80(undefined4 param_1)
{
  g_0260fdb0 = param_1;
  return;
}

extern undefined4 g_027d3460;
// @baa 0x01b9df90
undefined4 sub_01b9df90(undefined4 param_1)
{
  g_027d3460 = param_1;
  return 0;
}

int sub_01bab430(void);
// @baa 0x01b9e020
undefined4 sub_01b9e020(undefined4 * param_1)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bab430();
  *param_1 = uVar1;
  g_0260fdb0 = 0;
  return 0;
}

struct C_01b9e4d0 { int sub_01b9e4d0(void); };

// @baa 0x01b9e4d0
int C_01b9e4d0::sub_01b9e4d0(void) { return *(int*)((char*)this + 8); }

struct C_01b9e4e0 {
    int sub_01b9e4e0(int);
};

// @baa 0x01b9e4e0
int C_01b9e4e0::sub_01b9e4e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01b9e4f0 { int sub_01b9e4f0(void); };

// @baa 0x01b9e4f0
int C_01b9e4f0::sub_01b9e4f0(void) { return *(int*)((char*)this + 8); }

struct C_01b9e500 { int sub_01b9e500(void); };

// @baa 0x01b9e500
int C_01b9e500::sub_01b9e500(void) { return *(int*)((char*)this + 0); }

// @baa 0x01b9e550
void sub_01b9e550(void) {  }

// @baa 0x01b9e560
void sub_01b9e560(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01b9e580
void sub_01b9e580(void) {  }

struct C_01b9e5c0 {
    void sub_01b9e5c0();
};

// @baa 0x01b9e5c0
void C_01b9e5c0::sub_01b9e5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
