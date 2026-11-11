// FCDAnimated.cpp (part 2 of 3): 11 functions
// Placed here by: neighbours 11.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01832e50();
};

void sub_01826080(void *);
// @baa 0x01832e50
void C::sub_01832e50(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01832e80 {
    void sub_01832e80();
};

// @baa 0x01832e80
void C_01832e80::sub_01832e80(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01832ef0 { int sub_01832ef0(void); };

// @baa 0x01832ef0
int C_01832ef0::sub_01832ef0(void) { return *(int*)((char*)this + 4); }

struct C_01832f00 { int sub_01832f00(void); };

// @baa 0x01832f00
int C_01832f00::sub_01832f00(void) { return *(int*)((char*)this + 8); }

struct C_01832f10 {
    int sub_01832f10();
};

// @baa 0x01832f10
int C_01832f10::sub_01832f10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0x14;
}

struct C_01832f50 {
    bool sub_01832f50();
};

// @baa 0x01832f50
bool C_01832f50::sub_01832f50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01832fe0 {
    int sub_01832fe0();
};

// @baa 0x01832fe0
int C_01832fe0::sub_01832fe0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0x14;
}

struct C_01833500 {
    void sub_01833500(int *);
};

// @baa 0x01833500
void C_01833500::sub_01833500(int * param_2)
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

extern undefined4 g_023e5660;
// @baa 0x018338b0
void sub_018338b0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = (undefined4)(param_1 + 3);
    *param_1 = (undefined4)((&g_023e5660));
  }
  return;
}

struct C_01833ac0 {
    undefined4 sub_01833ac0(byte);
};

int sub_00402660(...);
int sub_01833a10(void);
// @baa 0x01833ac0
undefined4 C_01833ac0::sub_01833ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01833a10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7d9c[];
// @baa 0x01833c80
int sub_01833c80(void) { return (int)g_027b7d9c; }
