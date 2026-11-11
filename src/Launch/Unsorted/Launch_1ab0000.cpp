// Launch_1ab0000.cpp (part 1 of 4): 89 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01ab2680();
// @baa 0x01ab2a70
void sub_01ab2a70(void) { sub_01ab2680(); }

struct C {
    undefined4 sub_01ab2bc0(byte);
};

int sub_00402660(...);
int sub_01ab2aa0(void);
// @baa 0x01ab2bc0
undefined4 C::sub_01ab2bc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab2aa0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ab2c90
void sub_01ab2c90(void) {  }

// @baa 0x01ab2d10
void sub_01ab2d10(void) {  }

struct C_01ab2d20 { int sub_01ab2d20(void); };

// @baa 0x01ab2d20
int C_01ab2d20::sub_01ab2d20(void) { return *(int*)((char*)this + 0); }

struct C_01ab2e10 {
    void sub_01ab2e10();
};

extern code * g_027be3f0;
// @baa 0x01ab2e10
void C_01ab2e10::sub_01ab2e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  (*g_027be3f0)(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  return;
}

struct C_01ab2e40 {
    void sub_01ab2e40(int, char);
};

// @baa 0x01ab2e40
void C_01ab2e40::sub_01ab2e40(int param_2, char param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  char cVar1;
  char *pcVar2;
  
  cVar1 = '\0';
  *(undefined1 *)(param_1 + 2) = 0;
  *(char *)((int)param_1 + 9) = param_3;
  pcVar2 = (char *)*param_1;
  if (param_3 != '\0') {
    do {
      cVar1 = cVar1 + '\x01';
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + param_2;
    } while (cVar1 != param_3);
  }
  return;
}

struct C_01ab2e70 {
    undefined1 * sub_01ab2e70(int);
};

// @baa 0x01ab2e70
undefined1 * C_01ab2e70::sub_01ab2e70(int param_2)
{
    int * param_1 = (int *)this;

  undefined1 *puVar1;
  
  if (*(char *)((int)param_1 + 9) == '\0') {
    return (undefined1 *)0x0;
  }
  puVar1 = (undefined1 *)((uint)*(byte *)(param_1 + 2) * param_2 + *param_1);
  *(undefined1 *)(param_1 + 2) = *puVar1;
  *(char *)((int)param_1 + 9) = *(char *)((int)param_1 + 9) + -1;
  return puVar1;
}

struct C_01ab2ea0 {
    void sub_01ab2ea0(undefined1 *, uint);
};

// @baa 0x01ab2ea0
void C_01ab2ea0::sub_01ab2ea0(undefined1 * param_2, uint param_3)
{
    int * param_1 = (int *)this;

  *param_2 = (char)param_1[2];
  *(char *)((int)param_1 + 9) = *(char *)((int)param_1 + 9) + '\x01';
  *(char *)(param_1 + 2) = (char)((uint)((int)param_2 - *param_1) / param_3);
  return;
}

// @baa 0x01ab2f00
int sub_01ab2f00(void) { return 0; }

// @baa 0x01ab2f10
int sub_01ab2f10(void) { return 0; }

// @baa 0x01ab2f20
int sub_01ab2f20(void) { return 0; }

// @baa 0x01ab2f30
int sub_01ab2f30(void) { return 0; }

// @baa 0x01ab2f40
int sub_01ab2f40(void) { return 0; }

// @baa 0x01ab2f50
int sub_01ab2f50(void) { return 0; }

// @baa 0x01ab2f60
int sub_01ab2f60(void) { return 0; }

// @baa 0x01ab2f70
int sub_01ab2f70(void) { return 0; }

// @baa 0x01ab3010
int sub_01ab3010(void) { return 0; }

// @baa 0x01ab3020
int sub_01ab3020(void) { return 0; }

// @baa 0x01ab3030
int sub_01ab3030(void) { return 0; }

// @baa 0x01ab3040
undefined1 sub_01ab3040(void)
{
  return 0;
}

struct C_01ab3b20 {
    undefined4 sub_01ab3b20();
};

// @baa 0x01ab3b20
undefined4 C_01ab3b20::sub_01ab3b20(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return *(undefined4 *)(param_1 + 4);
}

struct C_01ab3b70 { int sub_01ab3b70(void); };

// @baa 0x01ab3b70
int C_01ab3b70::sub_01ab3b70(void) { return *(int*)((char*)this + 4); }

struct C_01ab3b80 { char* sub_01ab3b80(void); };

// @baa 0x01ab3b80
char* C_01ab3b80::sub_01ab3b80(void) { return (char*)this + 8; }

struct C_01ab3c30 {
    int sub_01ab3c30();
};

extern undefined4 g_027be4bc;
// @baa 0x01ab3c30
int C_01ab3c30::sub_01ab3c30(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    *param_1 = g_027be4bc;
  }
  return *(int *)*param_1 + 8;
}

struct C_01ab3c70 { int sub_01ab3c70(void); };

// @baa 0x01ab3c70
int C_01ab3c70::sub_01ab3c70(void) { return *(int*)((char*)this + 0); }

// @baa 0x01ab3cc0
int sub_01ab3cc0(void) { return 4096; }

struct C_01ab3cd0 { int sub_01ab3cd0(void); };

// @baa 0x01ab3cd0
int C_01ab3cd0::sub_01ab3cd0(void) { return *(int*)((char*)this + 0); }

struct C_01ab3ce0 { int sub_01ab3ce0(void); };

// @baa 0x01ab3ce0
int C_01ab3ce0::sub_01ab3ce0(void) { return *(int*)((char*)this + 8); }

struct C_01ab3cf0 { int sub_01ab3cf0(void); };

// @baa 0x01ab3cf0
int C_01ab3cf0::sub_01ab3cf0(void) { return *(int*)((char*)this + 12); }

struct C_01ab3d00 { int sub_01ab3d00(void); };

// @baa 0x01ab3d00
int C_01ab3d00::sub_01ab3d00(void) { return *(int*)((char*)this + 4); }

struct C_01ab3d10 { int sub_01ab3d10(void); };

// @baa 0x01ab3d10
int C_01ab3d10::sub_01ab3d10(void) { return *(int*)((char*)this + 0); }

struct C_01ab3d90 {
    bool sub_01ab3d90();
};

// @baa 0x01ab3d90
bool C_01ab3d90::sub_01ab3d90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01ab3da0 { int sub_01ab3da0(void); };

// @baa 0x01ab3da0
int C_01ab3da0::sub_01ab3da0(void) { return *(int*)((char*)this + 0); }

struct C_01ab3db0 {
    int sub_01ab3db0();
};

// @baa 0x01ab3db0
int C_01ab3db0::sub_01ab3db0(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

struct C_01ab3e60 { int sub_01ab3e60(void); };

// @baa 0x01ab3e60
int C_01ab3e60::sub_01ab3e60(void) { return *(int*)((char*)this + 0); }

struct C_01ab3e70 {
    int sub_01ab3e70();
};

// @baa 0x01ab3e70
int C_01ab3e70::sub_01ab3e70(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x01ab3e80
void sub_01ab3e80(void) {  }

// @baa 0x01ab3e90
void sub_01ab3e90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern undefined4 g_027be4b8;
// @baa 0x01ab3eb0
undefined4 sub_01ab3eb0(void)
{
  return *(undefined4 *)(g_027be4b8 + 4);
}

struct C_01ab3ec0 {
    int sub_01ab3ec0();
};

// @baa 0x01ab3ec0
int C_01ab3ec0::sub_01ab3ec0(void)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x24);
  iVar3 = 0x400;
  do {
    if (piVar2[-3] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (*piVar2 != 0) {
      iVar1 = iVar1 + 1;
    }
    if (piVar2[3] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (piVar2[6] != 0) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

struct C_01ab3f00 {
    int sub_01ab3f00();
};

// @baa 0x01ab3f00
int C_01ab3f00::sub_01ab3f00(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = 0xc000;
  piVar4 = (int *)(param_1 + 0x10);
  iVar5 = 0x1000;
  do {
    iVar2 = *piVar4;
    iVar3 = piVar4[2] * 0x10 + iVar2;
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0x10) {
      iVar1 = iVar1 + 0x11 + *(int *)(iVar2 + 8);
    }
    piVar4 = piVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return iVar1;
}

// @baa 0x01ab3f90
void sub_01ab3f90(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01ab3fe0
void sub_01ab3fe0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

int sub_01ab3290(...);
// @baa 0x01ab4000
void sub_01ab4000(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

struct C_01ab4280 {
    void sub_01ab4280();
};

int sub_01ab4080(void);
// @baa 0x01ab4280
void C_01ab4280::sub_01ab4280(void)
{
    int * param_1 = (int *)this;

  sub_01ab4080();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  return;
}

struct C_01ab4360 {
    void sub_01ab4360();
};

// @baa 0x01ab4360
void C_01ab4360::sub_01ab4360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab4450 {
    int * sub_01ab4450(byte);
};

// @baa 0x01ab4450
int * C_01ab4450::sub_01ab4450(byte param_2)
{
    int * param_1 = (int *)this;

  sub_01ab4080();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ab4490 {
    undefined4 * sub_01ab4490(byte);
};

// @baa 0x01ab4490
undefined4 * C_01ab4490::sub_01ab4490(byte param_2)
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

// @baa 0x01ab4830
void sub_01ab4830(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01ab4990
void sub_01ab4990(undefined4 * param_1, undefined4 * param_2)
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

struct C_01ab4e60 {
    void sub_01ab4e60();
};

// @baa 0x01ab4e60
void C_01ab4e60::sub_01ab4e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

extern char g_0240d1a0[];
struct C_01ab5c90 { C_01ab5c90* sub_01ab5c90(void); };

// @baa 0x01ab5c90
C_01ab5c90* C_01ab5c90::sub_01ab5c90(void) { *(int*)((char*)this + 0) = (int)g_0240d1a0; return this; }

struct C_01ab5ca0 { void sub_01ab5ca0(void); };

// @baa 0x01ab5ca0
void C_01ab5ca0::sub_01ab5ca0(void) { *(int*)((char*)this + 0) = (int)g_0240d1a0; }

struct C_01ab5cd0 { C_01ab5cd0* sub_01ab5cd0(void); };

// @baa 0x01ab5cd0
C_01ab5cd0* C_01ab5cd0::sub_01ab5cd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01ab5d00 { int sub_01ab5d00(void); };

// @baa 0x01ab5d00
int C_01ab5d00::sub_01ab5d00(void) { return *(int*)((char*)this + 0); }

struct C_01ab5d10 { void sub_01ab5d10(int a0); };

// @baa 0x01ab5d10
void C_01ab5d10::sub_01ab5d10(int a0) { *(int*)((char*)this + 0) = a0; }

int sub_01ab3960(...);
// @baa 0x01ab5d20
undefined4 * sub_01ab5d20(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)sub_01ab3960(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)((&g_0240d1a0));
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_01ab5dc0 {
    undefined4 * sub_01ab5dc0(byte);
};

// @baa 0x01ab5dc0
undefined4 * C_01ab5dc0::sub_01ab5dc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d1a0));
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,4);
  }
  return param_1;
}

void sub_01ab58f0();
// @baa 0x01ab5e30
void sub_01ab5e30(void) { sub_01ab58f0(); }

struct C_01ab5e40 { C_01ab5e40* sub_01ab5e40(void); };

// @baa 0x01ab5e40
C_01ab5e40* C_01ab5e40::sub_01ab5e40(void) { return this; }

struct C_01ab5e50 {
    undefined2 sub_01ab5e50();
};

// @baa 0x01ab5e50
undefined2 C_01ab5e50::sub_01ab5e50(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 4);
}

struct C_01ab5e60 { int sub_01ab5e60(void); };

// @baa 0x01ab5e60
int C_01ab5e60::sub_01ab5e60(void) { return *(int*)((char*)this + 8); }

struct C_01ab5e70 { int sub_01ab5e70(void); };

// @baa 0x01ab5e70
int C_01ab5e70::sub_01ab5e70(void) { return *(int*)((char*)this + 16); }

struct C_01ab5e80 { int sub_01ab5e80(void); };

// @baa 0x01ab5e80
int C_01ab5e80::sub_01ab5e80(void) { return *(int*)((char*)this + 12); }

struct C_01ab5e90 {
    undefined4 sub_01ab5e90();
};

// @baa 0x01ab5e90
undefined4 C_01ab5e90::sub_01ab5e90(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
                    
                    
    uVar1 = (**(code **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}

struct C_01ab5ec0 {
    bool sub_01ab5ec0(int);
};

// @baa 0x01ab5ec0
bool C_01ab5ec0::sub_01ab5ec0(int param_2)
{
    int param_1 = (int)this;

  return param_1 == param_2;
}

struct C_01ab5ed0 { int sub_01ab5ed0(void); };

// @baa 0x01ab5ed0
int C_01ab5ed0::sub_01ab5ed0(void) { return *(int*)((char*)this + 8); }

struct C_01ab5ee0 {
    int sub_01ab5ee0(int);
};

// @baa 0x01ab5ee0
int C_01ab5ee0::sub_01ab5ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01ab5f50
void sub_01ab5f50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern undefined4 g_027ca4d4;
// @baa 0x01ab6010
undefined4 sub_01ab6010(void)
{
  if (g_027ca4d4 != 0) {
    return *(undefined4 *)(g_027ca4d4 + 8);
  }
  return 0;
}

struct C_01ab6040 {
    bool sub_01ab6040(int);
};

// @baa 0x01ab6040
bool C_01ab6040::sub_01ab6040(int param_2)
{
    int param_1 = (int)this;

  return param_1 == param_2;
}

// @baa 0x01ab60c0
void sub_01ab60c0(void) {  }

struct C_01ab6100 {
    void sub_01ab6100();
};

// @baa 0x01ab6100
void C_01ab6100::sub_01ab6100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab62d0 {
    void sub_01ab62d0();
};

// @baa 0x01ab62d0
void C_01ab62d0::sub_01ab62d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab6300 {
    undefined4 * sub_01ab6300(byte);
};

// @baa 0x01ab6300
undefined4 * C_01ab6300::sub_01ab6300(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ab64b0
void sub_01ab64b0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 4);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01ab64f0
void sub_01ab64f0(undefined4 * param_1)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    sub_01ab3290(*puVar1,puVar1[1] * 4);
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

struct C_01ab68f0 {
    undefined4 sub_01ab68f0(byte);
};

int sub_01ab6720(void);
// @baa 0x01ab68f0
undefined4 C_01ab68f0::sub_01ab68f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab6720();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,8);
  }
  return param_1;
}

// @baa 0x01ab6990
int sub_01ab6990(void) { return 0; }

struct C_01ab6a50 { void sub_01ab6a50(int a0); };

// @baa 0x01ab6a50
void C_01ab6a50::sub_01ab6a50(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_01ab6a60 {
    undefined1 sub_01ab6a60();
};

// @baa 0x01ab6a60
undefined1 C_01ab6a60::sub_01ab6a60(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x34);
}

struct C_01ab6a70 {
    int sub_01ab6a70(int);
};

// @baa 0x01ab6a70
int C_01ab6a70::sub_01ab6a70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01ab6a80 {
    int sub_01ab6a80(int);
};

// @baa 0x01ab6a80
int C_01ab6a80::sub_01ab6a80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x01ab6b40
void sub_01ab6b40(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x01ab6bb0
void sub_01ab6bb0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ab6bd0
void sub_01ab6bd0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01ab6d00 { int sub_01ab6d00(void); };

// @baa 0x01ab6d00
int C_01ab6d00::sub_01ab6d00(void) { return *(int*)((char*)this + 64); }

struct C_01ab6d70 {
    int sub_01ab6d70(int);
};

// @baa 0x01ab6d70
int C_01ab6d70::sub_01ab6d70(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x20 + *(int *)(param_1 + 0x38);
}
