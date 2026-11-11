// FUObjectTest.cpp (part 1 of 7): 22 functions
// Placed here by: neighbours 21, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01866a60();
};

int sub_018260a0(...);
// @baa 0x01866a60
int C::sub_01866a60(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUTracker.h"
                 ,0x97);
    iVar1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}

struct C_01866a90 { int sub_01866a90(void); };

// @baa 0x01866a90
int C_01866a90::sub_01866a90(void) { return *(int*)((char*)this + 4); }

struct C_01866aa0 { int sub_01866aa0(void); };

// @baa 0x01866aa0
int C_01866aa0::sub_01866aa0(void) { return *(int*)((char*)this + 4); }

struct C_01866ae0 {
    int * sub_01866ae0();
};

// @baa 0x01866ae0
int * C_01866ae0::sub_01866ae0(void)
{
    int * param_1 = (int *)this;

  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((int *)*param_1 == (int *)0x0) {
    piVar1 = param_1;
  }
  return piVar1;
}

struct C_01866b10 {
    undefined4 * sub_01866b10();
};

int sub_01854260(void);
extern undefined4 g_023eb334;
// @baa 0x01866b10
undefined4 * C_01866b10::sub_01866b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01854260();
  *param_1 = (undefined4)((&g_023eb334));
  return param_1;
}

extern char g_027b8068[];
// @baa 0x01866b30
int sub_01866b30(void) { return (int)g_027b8068; }

struct C_01866b50 {
    undefined4 * sub_01866b50();
};

extern undefined4 g_023eb344;
// @baa 0x01866b50
undefined4 * C_01866b50::sub_01866b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01854260();
  *param_1 = (undefined4)((&g_023eb344));
  return param_1;
}

extern char g_027b8070[];
// @baa 0x01866b70
int sub_01866b70(void) { return (int)g_027b8070; }

struct C_01866b90 {
    undefined4 sub_01866b90(byte);
};

int sub_00402660(...);
int sub_01854460(void);
// @baa 0x01866b90
undefined4 C_01866b90::sub_01866b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01866bb0 {
    undefined4 sub_01866bb0(byte);
};

// @baa 0x01866bb0
undefined4 C_01866bb0::sub_01866bb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01866bd0 {
    bool sub_01866bd0();
};

// @baa 0x01866bd0
bool C_01866bd0::sub_01866bd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01866c00 {
    void sub_01866c00();
};

void sub_01826080(void *);
// @baa 0x01866c00
void C_01866c00::sub_01866c00(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01866c10 {
    bool sub_01866c10();
};

// @baa 0x01866c10
bool C_01866c10::sub_01866c10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01866ca0 {
    void sub_01866ca0(int);
};

// @baa 0x01866ca0
void C_01866ca0::sub_01866ca0(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != *(int *)(param_1 + 4)) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0xdd);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_01866da0 {
    undefined4 sub_01866da0(byte);
};

int sub_01866cd0(void);
// @baa 0x01866da0
undefined4 C_01866da0::sub_01866da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01866cd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01866dc0 { int sub_01866dc0(void); };

// @baa 0x01866dc0
int C_01866dc0::sub_01866dc0(void) { return *(int*)((char*)this + 8); }

struct C_01866e80 {
    void sub_01866e80(int *);
};

// @baa 0x01866e80
void C_01866e80::sub_01866e80(int * param_2)
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

extern char g_027b8040[];
// @baa 0x018676b0
int sub_018676b0(void) { return (int)g_027b8040; }

struct C_018676c0 {
    undefined4 sub_018676c0(byte);
};

// @baa 0x018676c0
undefined4 C_018676c0::sub_018676c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8048[];
// @baa 0x01867770
int sub_01867770(void) { return (int)g_027b8048; }

extern char g_027b8050[];
// @baa 0x018677d0
int sub_018677d0(void) { return (int)g_027b8050; }

struct C_01867810 {
    undefined4 sub_01867810(byte);
};

int sub_018671c0(void);
// @baa 0x01867810
undefined4 C_01867810::sub_01867810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018671c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
