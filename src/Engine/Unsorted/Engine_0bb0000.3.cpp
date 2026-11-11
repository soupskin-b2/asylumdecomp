// Engine_0bb0000.cpp (part 3 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01ecdfc8[];
struct C { void sub_00bb8f10(void); };

// @baa 0x00bb8f10
void C::sub_00bb8f10(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_00bbc500 {
    void sub_00bbc500(int);
};

int sub_0053df70(...);
// @baa 0x00bbc500
void C_00bbc500::sub_00bbc500(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x34,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bbc5a0 {
    void sub_00bbc5a0(int);
};

// @baa 0x00bbc5a0
void C_00bbc5a0::sub_00bbc5a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bbc640 {
    void sub_00bbc640(int);
};

// @baa 0x00bbc640
void C_00bbc640::sub_00bbc640(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bbc800 {
    void sub_00bbc800(int);
};

// @baa 0x00bbc800
void C_00bbc800::sub_00bbc800(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bbd580 {
    void sub_00bbd580(int);
};

// @baa 0x00bbd580
void C_00bbd580::sub_00bbd580(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00bbdcf0 {
    void sub_00bbdcf0(int);
};

// @baa 0x00bbdcf0
void C_00bbdcf0::sub_00bbdcf0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}
