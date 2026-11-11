// BmEditor_05c0000.cpp: 16 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_005c8790(int);
};

// @baa 0x005c8790
int C::sub_005c8790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005c87a0 {
    int sub_005c87a0(int);
};

// @baa 0x005c87a0
int C_005c87a0::sub_005c87a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005c87b0 { int sub_005c87b0(void); };

// @baa 0x005c87b0
int C_005c87b0::sub_005c87b0(void) { return *(int*)((char*)this + 20); }

struct C_005c87c0 {
    int sub_005c87c0(int);
};

// @baa 0x005c87c0
int C_005c87c0::sub_005c87c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005c87e0 {
    int sub_005c87e0(int);
};

// @baa 0x005c87e0
int C_005c87e0::sub_005c87e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005c87f0 {
    int sub_005c87f0(int);
};

// @baa 0x005c87f0
int C_005c87f0::sub_005c87f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_005c8800 { int sub_005c8800(void); };

// @baa 0x005c8800
int C_005c8800::sub_005c8800(void) { return *(int*)((char*)this + 20); }

struct C_005c8810 { int sub_005c8810(void); };

// @baa 0x005c8810
int C_005c8810::sub_005c8810(void) { return *(int*)((char*)this + 20); }

struct C_005c8820 { int sub_005c8820(void); };

// @baa 0x005c8820
int C_005c8820::sub_005c8820(void) { return *(int*)((char*)this + 20); }

struct C_005c8830 { int sub_005c8830(void); };

// @baa 0x005c8830
int C_005c8830::sub_005c8830(void) { return *(int*)((char*)this + 20); }

struct C_005c8840 { int sub_005c8840(void); };

// @baa 0x005c8840
int C_005c8840::sub_005c8840(void) { return *(int*)((char*)this + 20); }

struct C_005c8850 { int sub_005c8850(void); };

// @baa 0x005c8850
int C_005c8850::sub_005c8850(void) { return *(int*)((char*)this + 20); }

// @baa 0x005c8860
int sub_005c8860(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xde) & 1) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

int sub_006326d0(...);
int sub_00634470(void);
extern undefined4 g_026acc08;
// @baa 0x005c8880
int sub_005c8880(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026acc08 == 0) {
      g_026acc08 = sub_006326d0(L"Core");
      sub_00634470();
    }
    if (iVar1 == g_026acc08) {
      return param_1;
    }
  }
  return 0;
}

struct C_005c8970 {
    void sub_005c8970(undefined4, undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x005c8970
void C_005c8970::sub_005c8970(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4);
  return;
}

int sub_00588dd0(...);
int sub_00589470(void);
int sub_0062d220(...);
extern undefined4 g_02688448;
// @baa 0x005c8990
void sub_005c8990(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  sub_0062d220(param_1,param_2,g_02688448,param_3,param_4);
  return;
}
