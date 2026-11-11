// Unknown_1bb0000.cpp (part 1 of 3): 72 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bab2c0(...);
int sub_01bb51e0(...);
// @baa 0x01bb0e70
void sub_01bb0e70(int param_1)
{
  if (param_1 != 0) {
    sub_01bab2c0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    sub_01bb51e0(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

int sub_01bb2410(...);
// @baa 0x01bb2530
void sub_01bb2530(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  sub_01bb2410(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

struct C { int sub_01bb2560(void); };

// @baa 0x01bb2560
int C::sub_01bb2560(void) { return *(int*)((char*)this + 8); }

struct C_01bb2570 {
    int sub_01bb2570(int);
};

// @baa 0x01bb2570
int C_01bb2570::sub_01bb2570(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01bb2580 {
    int sub_01bb2580(int);
};

// @baa 0x01bb2580
int C_01bb2580::sub_01bb2580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01bb2660 { int sub_01bb2660(void); };

// @baa 0x01bb2660
int C_01bb2660::sub_01bb2660(void) { return *(int*)((char*)this + 8); }

struct C_01bb2670 {
    int sub_01bb2670(int);
};

// @baa 0x01bb2670
int C_01bb2670::sub_01bb2670(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01bb2680 {
    int sub_01bb2680(int);
};

// @baa 0x01bb2680
int C_01bb2680::sub_01bb2680(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

// @baa 0x01bb2690
void sub_01bb2690(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01bb26b0
void sub_01bb26b0(undefined1 * param_1)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return;
}

// @baa 0x01bb26c0
void sub_01bb26c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01bb26e0
void sub_01bb26e0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01bb2a80 {
    void sub_01bb2a80();
};

int sub_01ab3290(...);
// @baa 0x01bb2a80
void C_01bb2a80::sub_01bb2a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01bb2cb0 {
    undefined4 * sub_01bb2cb0(byte);
};

int sub_00402660(...);
// @baa 0x01bb2cb0
undefined4 * C_01bb2cb0::sub_01bb2cb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01bb2e30
void sub_01bb2e30(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

struct C_01bb2eb0 {
    undefined4 sub_01bb2eb0(byte);
};

int sub_01bb2d40(void);
// @baa 0x01bb2eb0
undefined4 C_01bb2eb0::sub_01bb2eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01bb2d40();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01bb3280
void sub_01bb3280(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

struct C_01bb3bd0 {
    undefined4 sub_01bb3bd0(byte);
};

int sub_01bb3850(void);
// @baa 0x01bb3bd0
undefined4 C_01bb3bd0::sub_01bb3bd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01bb3850();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01bb3c40();
// @baa 0x01bb3ec0
void sub_01bb3ec0(void) { sub_01bb3c40(); }

int sub_01bb53d0(...);
// @baa 0x01bb4880
int sub_01bb4880(int param_1)
{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = sub_01bb53d0(1,0x18);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = param_1;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  return iVar1;
}

// @baa 0x01bb4ac0
undefined4 sub_01bb4ac0(int param_1)
{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x204c) == 0x140)) {
    return 1;
  }
  return 0;
}

int sub_01bbff80(void);
// @baa 0x01bb4bf0
undefined4 sub_01bb4bf0(void)
{
  int iVar1;
  
  iVar1 = sub_01bbff80();
  return *(undefined4 *)(iVar1 + 0x20);
}

// @baa 0x01bb4cb0
void sub_01bb4cb0(void)
{
  int iVar1;
  
  iVar1 = sub_01bbff80();
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 8);
  return;
}

void * sub_01a375f0(void *, void *, size_t);
int sub_01bb5550(...);
// @baa 0x01bb55e0
undefined4 * sub_01bb55e0(undefined4 * param_1, int param_2, int param_3)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bb5550(param_2,param_3);
  sub_01a375f0((void *)*puVar1,(void *)*param_1,param_2 * param_3 * 4);
  return puVar1;
}

// @baa 0x01bb5620
void sub_01bb5620(int * param_1)
{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    sub_01bb51e0(*param_1);
    *param_1 = 0;
  }
  return;
}

int sub_01bbac00(...);
int sub_01bc3060(...);
int sub_01bc6420(...);
// @baa 0x01bb5880
undefined4 sub_01bb5880(int * param_1)
{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      sub_01bbac00(*param_1);
    }
    if (param_1[0xd] != 0) {
      sub_01bb51e0(param_1[0xd]);
    }
    if (param_1[5] != 0) {
      sub_01bb51e0(param_1[5]);
    }
    if (param_1[10] != 0) {
      sub_01bc6420(param_1[10]);
    }
    if (param_1[6] != 0) {
      sub_01bc3060(param_1[6]);
    }
    if (param_1[7] != 0) {
      sub_01bc3060(param_1[7]);
    }
    sub_01bb51e0(param_1);
  }
  return 0;
}

struct C_01bb5f00 {
    undefined4 sub_01bb5f00();
};

// @baa 0x01bb5f00
undefined4 C_01bb5f00::sub_01bb5f00(void)
{
    char * param_1 = (char *)this;

  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (*param_1 == '_') {
      *param_1 = ' ';
      uVar2 = 1;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2;
}

typedef uint size_t;

extern "C" __declspec(dllimport) int strncpy(...);
// @baa 0x01bb6960
char * sub_01bb6960(char * param_1, char * param_2, size_t param_3)
{
  strncpy(param_1,param_2,param_3);
  param_1[param_3] = '\0';
  return param_1;
}

int sub_01bcab10(...);
// @baa 0x01bb6a90
int sub_01bb6a90(int * param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = sub_01bcab10(*param_1,param_2,param_3);
    return (iVar1 != 0) - 1;
  }
  return -1;
}

int sub_01bcb970(...);
// @baa 0x01bb6b40
undefined4 sub_01bb6b40(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != 0)) {
    sub_01bcb970(param_1,*(undefined4 *)(iVar1 + 0x48),iVar1,param_3,param_4);
    return 0;
  }
  return 0xffffffff;
}

int sub_01bcf260(...);
// @baa 0x01bb6d70
void sub_01bb6d70(int * param_1, undefined4 param_2)
{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      if (param_1[1] != 0) {
        *(undefined4 *)(*param_1 + 0x40) = 0;
      }
      if (param_1[2] != 0) {
        *(undefined4 *)(*param_1 + 0x48) = 0;
      }
      sub_01bcf260(*param_1,param_2);
      *param_1 = 0;
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bcfe50(...);
// @baa 0x01bb6e60
int * sub_01bb6e60(undefined4 param_1)
{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = sub_01bcfe50(param_1,&local_8,&local_4,0);
  if (iVar1 != 0) {
    piVar2 = (int *)sub_01bb53d0(1,0x10);
    *piVar2 = iVar1;
    piVar2[2] = local_8;
    *(undefined4 *)(local_8 + 200) = 0;
    piVar2[1] = local_4;
    piVar2[3] = 0;
    return piVar2;
  }
  return (int *)0x0;
}

// @baa 0x01bb6f50
undefined4 sub_01bb6f50(int * param_1)
{
  if ((param_1 != (int *)0x0) && (*(int *)(*param_1 + 0x40) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x01bb7140
undefined4 sub_01bb7140(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x38), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x2c);
  }
  return 0xffffffff;
}

// @baa 0x01bb7160
undefined4 sub_01bb7160(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x38), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x7c);
  }
  return 0xffffffff;
}

int sub_01bd5d80(...);
// @baa 0x01bb7180
undefined4 sub_01bb7180(int * param_1, int param_2)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x38), iVar1 != 0)) {
    sub_01bd5d80(iVar1,-param_2);
    return *(undefined4 *)(iVar1 + 0x7c);
  }
  return 0xffffffff;
}

// @baa 0x01bb71b0
int sub_01bb71b0(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x38), iVar1 != 0)) {
    return (*(int *)(iVar1 + 0x7c) * 100) / *(int *)(iVar1 + 0x2c);
  }
  return -1;
}

// @baa 0x01bb7240
undefined4 sub_01bb7240(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

// @baa 0x01bb7250
int sub_01bb7250(int * param_1)
{
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, param_1 != (int *)0x0)) {
    if (param_1[4] == 3) {
      return param_1[5];
    }
    return *param_1 / 2;
  }
  return 0;
}

// @baa 0x01bb7280
undefined4 sub_01bb7280(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 0x10) == 3))
  {
    return *(undefined4 *)(iVar1 + 0x34);
  }
  return 0;
}

// @baa 0x01bb7340
undefined4 sub_01bb7340(int * param_1)
{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return *(undefined4 *)(*(int *)(*param_1 + 0x48) + 0x70);
  }
  return 0xffffffff;
}

// @baa 0x01bb73f0
undefined4 sub_01bb73f0(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x48), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x28);
  }
  return 0;
}

// @baa 0x01bb7530
undefined4 sub_01bb7530(int param_1)
{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 4);
}

// @baa 0x01bb7540
void sub_01bb7540(int param_1, undefined4 param_2)
{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0xb8) = param_2;
  return;
}

void sub_01bbf760();
// @baa 0x01bb7930
void sub_01bb7930(void) { sub_01bbf760(); }

void sub_01bbfa90();
// @baa 0x01bb7940
void sub_01bb7940(void) { sub_01bbfa90(); }

void sub_01bbfa20();
// @baa 0x01bb7950
void sub_01bb7950(void) { sub_01bbfa20(); }

void sub_01bbfa30();
// @baa 0x01bb7960
void sub_01bb7960(void) { sub_01bbfa30(); }

// @baa 0x01bb7eb0
undefined4 sub_01bb7eb0(int param_1)
{
  return *(undefined4 *)(param_1 + 0x18);
}

extern "C" __declspec(dllimport) int atoi(...);
// @baa 0x01bb7ec0
int sub_01bb7ec0(int param_1, int param_2)
{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = atoi((char *)**(undefined4 **)(param_1 + 0x18));
    return param_2 + iVar1 * 4;
  }
  return *(int *)(param_1 + 0x18);
}

// @baa 0x01bb7ef0
undefined4 sub_01bb7ef0(int param_1)
{
  return *(undefined4 *)(param_1 + 0x1c);
}

void sub_01bdddb0();
// @baa 0x01bb7f00
void sub_01bb7f00(void) { sub_01bdddb0(); }

// @baa 0x01bb8040
undefined4 sub_01bb8040(undefined4 * param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}

int sub_01bdd9a0(...);
// @baa 0x01bb8060
int sub_01bb8060(undefined4 * param_1, undefined4 param_2)
{
  int iVar1;
  
  sub_01bdd9a0(*param_1,param_2,&param_1);
  iVar1 = 100 - (int)param_1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

// @baa 0x01bb8230
undefined4 sub_01bb8230(int param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0xffffffff;
}

// @baa 0x01bb8240
undefined4 sub_01bb8240(int param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0xffffffff;
}

// @baa 0x01bb8250
undefined4 sub_01bb8250(int param_1, undefined4 * param_2, undefined4 * param_3)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

// @baa 0x01bb8280
undefined4 sub_01bb8280(int param_1, undefined4 param_2, undefined4 param_3)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}

int sub_01bb6510(...);
// @baa 0x01bb8510
undefined4 sub_01bb8510(undefined4 param_1)
{
  undefined4 local_4;
  
  sub_01bb6510(param_1,&local_4);
  return local_4;
}

// @baa 0x01bb8620
undefined4 sub_01bb8620(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x38), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x60);
  }
  return 0xffffffff;
}

// @baa 0x01bb8680
undefined4 sub_01bb8680(int * param_1, undefined4 * param_2, undefined4 * param_3)
{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_2 != (undefined4 *)0x0)) &&
     (param_3 != (undefined4 *)0x0)) {
    iVar1 = *(int *)(*param_1 + 0x38);
    if (iVar1 != 0) {
      *param_2 = *(undefined4 *)(iVar1 + 0x3c);
      *param_3 = *(undefined4 *)(iVar1 + 0x40);
      return 0;
    }
    *param_2 = 0;
    *param_3 = 0;
  }
  return 0xffffffff;
}

int sub_01bb50e0(...);
// @baa 0x01bb86e0
int sub_01bb86e0(int * param_1, int * param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_01bb50e0(*param_1 * 4);
    iVar2 = 0;
    if (0 < *param_1) {
      iVar3 = 0;
      do {
        *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(iVar3 + param_1[2]);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x38;
      } while (iVar2 < *param_1);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = *param_1;
      return iVar1;
    }
  }
  return iVar1;
}

// @baa 0x01bb8730
undefined4 sub_01bb8730(int * param_1, int param_2, undefined4 * param_3, undefined4 * param_4)
{
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_2 <= *param_1)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1[2] + 0x24 + param_2 * 0x38);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1[2] + 0x28 + param_2 * 0x38);
    }
    return *(undefined4 *)(param_1[2] + param_2 * 0x38);
  }
  return 0;
}

// @baa 0x01bb87a0
undefined4 sub_01bb87a0(int * param_1, int param_2, undefined4 * param_3)
{
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_2 <= *param_1)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1[7] + param_2 * 4);
    }
    return *(undefined4 *)(param_1[2] + param_2 * 0x38);
  }
  return 0;
}

// @baa 0x01bb8960
void sub_01bb8960(int * param_1)
{
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    *(undefined4 *)(*param_1 + 0xc) = 0;
  }
  return;
}

// @baa 0x01bb8980
undefined4 sub_01bb8980(int * param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 != (int *)0x0) && (puVar1 = (undefined4 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *param_1 = puVar1[1];
    uVar2 = *puVar1;
    sub_01bb51e0(puVar1);
    return uVar2;
  }
  return 0;
}

// @baa 0x01bb89b0
int sub_01bb89b0(int a0) { return *(int*)a0; }

// @baa 0x01bb89d0
void sub_01bb89d0(uint * param_1, int param_2)
{
  if (param_2 != 0) {
    *param_1 = *param_1 | 0x400;
    return;
  }
  *param_1 = 0;
  return;
}

// @baa 0x01bb8a30
void sub_01bb8a30(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x10);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 4);
  }
  return;
}

// @baa 0x01bb8a90
undefined4 sub_01bb8a90(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x48), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x28);
  }
  return 0xffffffff;
}

// @baa 0x01bb8ab0
undefined4 sub_01bb8ab0(int * param_1)
{
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(int *)(*param_1 + 8) == 1)) {
    return 1;
  }
  return 0;
}

// @baa 0x01bb8ad0
int sub_01bb8ad0(void) { return 1; }
