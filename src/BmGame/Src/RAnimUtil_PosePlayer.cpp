// RAnimUtil_PosePlayer.cpp: 21 functions
// Placed here by: neighbours 18, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_015bdd00 { int a; C_015bdd00(int); };

// @baa 0x015bdd00
C_015bdd00::C_015bdd00(int x) : a(x) {}

// @baa 0x015bdd10
bool sub_015bdd10(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

// @baa 0x015bdd30
bool sub_015bdd30(int * param_1, int * param_2)
{
  return *param_1 != *param_2;
}

struct C {
    bool sub_015bdd70();
};

// @baa 0x015bdd70
bool C::sub_015bdd70(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_015bdec0 {
    undefined4 sub_015bdec0(undefined4, undefined4);
    int sub_015a4a00(int, int, int);
};

// @baa 0x015bdec0
undefined4 C_015bdec0::sub_015bdec0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_015bdec0 *)(this))->sub_015a4a00(param_2, param_3, param_1 + 0x28);
  return param_2;
}

struct C_015c1f70 {
    uint sub_015c1f70();
};

// @baa 0x015c1f70
uint C_015c1f70::sub_015c1f70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x444) & 1;
}

struct C_015c1f80 {
    undefined4 sub_015c1f80();
};

int sub_01598a60(...);
// @baa 0x015c1f80
undefined4 C_015c1f80::sub_015c1f80(void)
{
    int param_1 = (int)this;
  float fVar1;
  float fVar2;
  undefined1 local_4 [4];
  if ((*(byte *)(param_1 + 0x444) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0x5b0);
    fVar2 = *(float *)(param_1 + 0x59c);
    sub_01598a60(local_4,param_1 + 0x53c);
    if (fVar2 <= fVar1) {
      return 1;
    }
  }
  return 0;
}

struct C_015c2530 { C_015c2530* sub_015c2530(void); };

// @baa 0x015c2530
C_015c2530* C_015c2530::sub_015c2530(void) { return this; }

// @baa 0x015c25d0
void sub_015c25d0(void) {  }

// @baa 0x015c25e0
void sub_015c25e0(void) {  }

struct C_015c26e0 {
    bool sub_015c26e0();
};

// @baa 0x015c26e0
bool C_015c26e0::sub_015c26e0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_015c26f0 {
    undefined4 sub_015c26f0();
};

// @baa 0x015c26f0
undefined4 C_015c26f0::sub_015c26f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x53c);
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 2);
  return 0;
}

struct C_015c2810 {
    int * sub_015c2810();
};

// @baa 0x015c2810
int * C_015c2810::sub_015c2810(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return (int *)0x0;
  }
  return param_1 + 1;
}

struct C_015c2820 {
    int * sub_015c2820();
};

// @baa 0x015c2820
int * C_015c2820::sub_015c2820(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return (int *)0x0;
  }
  return param_1 + 1;
}

struct C_015c2830 {
    int * sub_015c2830(int);
};

// @baa 0x015c2830
int * C_015c2830::sub_015c2830(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 0x16c;
    do {
      if (*piVar2 == param_2) {
        return param_1 + iVar1 * 0x191 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x191;
    } while (iVar1 < *param_1);
  }
  return (int *)0x0;
}

struct C_015c2870 {
    int * sub_015c2870(int);
};

// @baa 0x015c2870
int * C_015c2870::sub_015c2870(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 0x16c;
    do {
      if (*piVar2 == param_2) {
        return param_1 + iVar1 * 0x191 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x191;
    } while (iVar1 < *param_1);
  }
  return (int *)0x0;
}

struct C_015c2a40 {
    int sub_015c2a40();
};

int sub_006311e0(...);
int sub_015c2a6d(...);
extern undefined4 g_02323934;
// @baa 0x015c2a40
int C_015c2a40::sub_015c2a40(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = param_1 + 1;
    if (param_1 != (int *)0x0) goto sub_015c2a6d;
  }
  sub_006311e0("HeadChange",
               "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PosePlayer.cpp"
               ,0xf2b,&g_02323934);
sub_015c2a6d:
  return param_1[0x128];
}

// @baa 0x015c3ff0
IMPLEMENT_CLASS_AT(URAnimUtil_PosePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PosePlayer.cpp", 16);

// @baa 0x015c63a0
struct C_015c6640 {
    uint sub_015c6640();
};

int sub_0159b550(...);
// @baa 0x015c6640
uint C_015c6640::sub_015c6640(void)
{
    int param_1 = (int)this;

  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x50) + 0x50);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return 0;
    }
    iVar2 = sub_0159b550(*(undefined4 *)(param_1 + 0x20));
    if (iVar2 != 0) {
      return *(uint *)(iVar2 + 500) >> 10 & 1;
    }
  }
  return 1;
}

struct C_015c6680 {
    uint sub_015c6680();
};

// @baa 0x015c6680
uint C_015c6680::sub_015c6680(void)
{
    int param_1 = (int)this;

  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x50) + 0x50);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return 0;
    }
    iVar2 = sub_0159b550(*(undefined4 *)(param_1 + 0x20));
    if (iVar2 != 0) {
      return *(uint *)(iVar2 + 500) >> 10 & 1;
    }
  }
  return 1;
}
