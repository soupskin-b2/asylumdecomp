// UnrealEd_1b20000.cpp (part 1 of 2): 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01b22cf0(int);
};

// @baa 0x01b22cf0
int C::sub_01b22cf0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) + param_2 * 8;
}

struct C_01b22d70 {
    int sub_01b22d70(int);
};

// @baa 0x01b22d70
int C_01b22d70::sub_01b22d70(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) + param_2 * 4;
}

struct C_01b22d80 {
    int sub_01b22d80(int);
};

// @baa 0x01b22d80
int C_01b22d80::sub_01b22d80(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) + param_2 * 4;
}

struct C_01b23420 {
    undefined4 sub_01b23420(int);
};

// @baa 0x01b23420
undefined4 C_01b23420::sub_01b23420(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
}

struct C_01b23430 {
    undefined4 sub_01b23430(int);
};

// @baa 0x01b23430
undefined4 C_01b23430::sub_01b23430(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
}

struct C_01b23500 {
    undefined4 * sub_01b23500(undefined4 *);
};

int sub_01b22e30(void);
// @baa 0x01b23500
undefined4 * C_01b23500::sub_01b23500(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)param_1[1];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *(int *)param_1[1] == 0)) {
      sub_01b22e30();
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    if (param_2[1] != 0) {
      *(int *)param_2[1] = *(int *)param_2[1] + 1;
    }
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return param_1;
}

struct C_01b26c60 {
    undefined4 * sub_01b26c60(undefined4 *);
};

int sub_01b22d90(void);
// @baa 0x01b26c60
undefined4 * C_01b26c60::sub_01b26c60(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)param_1[1];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *(int *)param_1[1] == 0)) {
      sub_01b22d90();
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    if (param_2[1] != 0) {
      *(int *)param_2[1] = *(int *)param_2[1] + 1;
    }
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return param_1;
}

struct C_01b26d60 {
    undefined4 * sub_01b26d60(undefined4 *);
};

// @baa 0x01b26d60
undefined4 * C_01b26d60::sub_01b26d60(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)param_1[1];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *(int *)param_1[1] == 0)) {
      sub_01b22e30();
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    if (param_2[1] != 0) {
      *(int *)param_2[1] = *(int *)param_2[1] + 1;
    }
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return param_1;
}

struct C_01b26ef0 {
    undefined4 * sub_01b26ef0(undefined4 *);
};

// @baa 0x01b26ef0
undefined4 * C_01b26ef0::sub_01b26ef0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)param_1[1];
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *(int *)param_1[1] == 0)) {
      sub_01b22d90();
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    if (param_2[1] != 0) {
      *(int *)param_2[1] = *(int *)param_2[1] + 1;
    }
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return param_1;
}

struct C_01b28b00 {
    undefined4 sub_01b28b00(byte);
};

int sub_00402660(...);
int sub_01b31cc0(void);
// @baa 0x01b28b00
undefined4 C_01b28b00::sub_01b28b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b31cc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b28b20 {
    int sub_01b28b20();
};

// @baa 0x01b28b20
int C_01b28b20::sub_01b28b20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
}

struct C_01b28b40 {
    int sub_01b28b40(int *, int *);
};

// @baa 0x01b28b40
int C_01b28b40::sub_01b28b40(int * param_2, int * param_3)
{
    int * param_1 = (int *)this;

  return *(int *)(*param_1 + *param_2 * 4) + *param_3 * 4;
}

// @baa 0x01b28c20
uint sub_01b28c20(uint * param_1, uint * param_2)
{
  uint uVar1;
  
  uVar1 = *param_1;
  if (*param_1 < *param_2) {
    uVar1 = *param_2;
  }
  return uVar1;
}

void sub_01b28b60();
// @baa 0x01b29090
void sub_01b29090(void) { sub_01b28b60(); }

struct C_01b2a7b0 {
    int sub_01b2a7b0(uint);
};

// @baa 0x01b2a7b0
int C_01b2a7b0::sub_01b2a7b0(uint param_2)
{
    int * param_1 = (int *)this;

  return (param_2 % (uint)param_1[2]) * 0x10 + *(int *)(*param_1 + (param_2 / (uint)param_1[2]) * 4)
  ;
}

struct C_01b2d3e0 {
    void sub_01b2d3e0();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x01b2d3e0
void C_01b2d3e0::sub_01b2d3e0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    free(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

struct C_01b2dbe0 {
    void sub_01b2dbe0();
};

int sub_00402680(...);
// @baa 0x01b2dbe0
void C_01b2dbe0::sub_01b2dbe0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xd5044) != 0) {
    sub_00402680(*(int *)(param_1 + 0xd5044));
  }
  *(undefined4 *)(param_1 + 0xd5044) = 0;
  return;
}

struct C_01b2f260 {
    int sub_01b2f260(int);
};

// @baa 0x01b2f260
int C_01b2f260::sub_01b2f260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01b2f270 {
    void sub_01b2f270(int);
};

extern "C" __declspec(dllimport) int realloc(...);
extern "C" __declspec(dllimport) int malloc(...);
// @baa 0x01b2f270
void C_01b2f270::sub_01b2f270(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 0xc));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 0xc));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01b2f2d0 {
    undefined4 * sub_01b2f2d0(byte);
};

// @baa 0x01b2f2d0
undefined4 * C_01b2f2d0::sub_01b2f2d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = 0;
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
