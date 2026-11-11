// FCDGeometryMesh.cpp (part 1 of 3): 15 functions
// Placed here by: neighbours 15.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_01847f00(void); };

// @baa 0x01847f00
int C::sub_01847f00(void) { return *(int*)((char*)this + 4); }

struct C_01847f10 { int sub_01847f10(void); };

// @baa 0x01847f10
int C_01847f10::sub_01847f10(void) { return *(int*)((char*)this + 8); }

struct C_01847f40 {
    void sub_01847f40();
};

void sub_01826080(void *);
// @baa 0x01847f40
void C_01847f40::sub_01847f40(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01847f50 { int sub_01847f50(void); };

// @baa 0x01847f50
int C_01847f50::sub_01847f50(void) { return *(int*)((char*)this + 8); }

struct C_018481e0 { int sub_018481e0(void); };

// @baa 0x018481e0
int C_018481e0::sub_018481e0(void) { return *(int*)((char*)this + 104); }

struct C_018481f0 { char* sub_018481f0(void); };

// @baa 0x018481f0
char* C_018481f0::sub_018481f0(void) { return (char*)this + 120; }

struct C_01848210 { char* sub_01848210(void); };

// @baa 0x01848210
char* C_01848210::sub_01848210(void) { return (char*)this + 56; }

struct C_01848220 { void sub_01848220(int a0); };

// @baa 0x01848220
void C_01848220::sub_01848220(int a0) { *(int*)((char*)this + 120) = a0; }

struct C_01848270 {
    void sub_01848270(int *);
};

// @baa 0x01848270
void C_01848270::sub_01848270(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_018483e0 {
    void sub_018483e0();
};

int sub_01848020(void);
// @baa 0x018483e0
void C_018483e0::sub_018483e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01848020();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01848660 {
    void sub_01848660();
};

extern undefined4 g_023e4d30;
// @baa 0x01848660
void C_01848660::sub_01848660(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01848680 {
    void sub_01848680();
};

// @baa 0x01848680
void C_01848680::sub_01848680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01848020();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

// @baa 0x01848ae0
void sub_01848ae0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

struct C_01848b50 {
    undefined4 sub_01848b50(byte);
};

int sub_00402660(...);
int sub_018486a0(void);
// @baa 0x01848b50
undefined4 C_01848b50::sub_01848b50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018486a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01848b70 {
    undefined4 sub_01848b70(byte);
};

int sub_01848760(void);
// @baa 0x01848b70
undefined4 C_01848b70::sub_01848b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01848760();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
