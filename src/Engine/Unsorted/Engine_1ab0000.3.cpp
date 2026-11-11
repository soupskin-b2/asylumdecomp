// Engine_1ab0000.cpp (part 3 of 5): 100 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int * sub_01ab0110(int, int);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01ab0110
int * C::sub_01ab0110(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

// @baa 0x01ab01b0
undefined4 sub_01ab01b0(void)
{
  return 0xffffffff;
}

// @baa 0x01ab0240
void __stdcall sub_01ab0240(int a0, int a1) {  }

// @baa 0x01ab0250
void sub_01ab0250(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

struct C_01ab03a0 {
    int * sub_01ab03a0(int *);
};

// @baa 0x01ab03a0
int * C_01ab03a0::sub_01ab03a0(int * param_2)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (*param_2 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_2;
  return param_1;
}

void sub_01ab0490();
// @baa 0x01ab0720
void sub_01ab0720(void) { sub_01ab0490(); }

struct C_01ab0a50 {
    undefined4 sub_01ab0a50();
};

int sub_01ab07f0(void);
// @baa 0x01ab0a50
undefined4 C_01ab0a50::sub_01ab0a50(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab07f0();
  return param_1;
}

struct C_01ab0c10 {
    undefined4 sub_01ab0c10();
};

// @baa 0x01ab0c10
undefined4 C_01ab0c10::sub_01ab0c10(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab07f0();
  return param_1;
}

extern char g_0240d098[];
// @baa 0x01ab2630
int sub_01ab2630(void) { return (int)g_0240d098; }

extern char g_0240d0a0[];
// @baa 0x01ab2640
int sub_01ab2640(void) { return (int)g_0240d0a0; }

extern char g_0240a6b8[];
// @baa 0x01ab2650
int sub_01ab2650(void) { return (int)g_0240a6b8; }

extern char g_0240d0a8[];
// @baa 0x01ab2660
int sub_01ab2660(void) { return (int)g_0240d0a8; }

extern char g_0240d0b0[];
// @baa 0x01ab2670
int sub_01ab2670(void) { return (int)g_0240d0b0; }

struct C_01ab80a0 {
    undefined4 sub_01ab80a0(byte);
};

int sub_01ab3290(...);
int sub_01ab7dc0(void);
// @baa 0x01ab80a0
undefined4 C_01ab80a0::sub_01ab80a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab7dc0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x50);
  }
  return param_1;
}

struct C_01ab8330 { int sub_01ab8330(void); };

// @baa 0x01ab8330
int C_01ab8330::sub_01ab8330(void) { return *(int*)((char*)this + 8); }

struct C_01ab8340 { int sub_01ab8340(void); };

// @baa 0x01ab8340
int C_01ab8340::sub_01ab8340(void) { return *(int*)((char*)this + 0); }

struct C_01ab8350 { int sub_01ab8350(void); };

// @baa 0x01ab8350
int C_01ab8350::sub_01ab8350(void) { return *(int*)((char*)this + 0); }

struct C_01ab83f0 { int sub_01ab83f0(void); };

// @baa 0x01ab83f0
int C_01ab83f0::sub_01ab83f0(void) { return *(int*)((char*)this + 52); }

struct C_01ab8400 { int sub_01ab8400(void); };

// @baa 0x01ab8400
int C_01ab8400::sub_01ab8400(void) { return *(int*)((char*)this + 8); }

struct C_01ab8410 {
    int sub_01ab8410(int);
};

// @baa 0x01ab8410
int C_01ab8410::sub_01ab8410(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01ab8420 {
    int sub_01ab8420(int);
};

// @baa 0x01ab8420
int C_01ab8420::sub_01ab8420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01ab8430 { int sub_01ab8430(void); };

// @baa 0x01ab8430
int C_01ab8430::sub_01ab8430(void) { return *(int*)((char*)this + 8); }

struct C_01ab8440 {
    int sub_01ab8440(int);
};

// @baa 0x01ab8440
int C_01ab8440::sub_01ab8440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01ab8480 { int sub_01ab8480(void); };

// @baa 0x01ab8480
int C_01ab8480::sub_01ab8480(void) { return *(int*)((char*)this + 8); }

struct C_01ab8490 {
    int sub_01ab8490(int);
};

// @baa 0x01ab8490
int C_01ab8490::sub_01ab8490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01ab84d0 { int sub_01ab84d0(void); };

// @baa 0x01ab84d0
int C_01ab84d0::sub_01ab84d0(void) { return *(int*)((char*)this + 4); }

struct C_01ab84e0 { int sub_01ab84e0(void); };

// @baa 0x01ab84e0
int C_01ab84e0::sub_01ab84e0(void) { return *(int*)((char*)this + 8); }

struct C_01ab84f0 {
    int sub_01ab84f0(int);
};

// @baa 0x01ab84f0
int C_01ab84f0::sub_01ab84f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01ab8bc0 {
    bool sub_01ab8bc0();
};

// @baa 0x01ab8bc0
bool C_01ab8bc0::sub_01ab8bc0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01ab8bd0 { int sub_01ab8bd0(void); };

// @baa 0x01ab8bd0
int C_01ab8bd0::sub_01ab8bd0(void) { return *(int*)((char*)this + 0); }

struct C_01ab8be0 {
    int sub_01ab8be0();
};

// @baa 0x01ab8be0
int C_01ab8be0::sub_01ab8be0(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x01ab8bf0
int sub_01ab8bf0(void) { return 128; }

struct C_01ab8c00 {
    int sub_01ab8c00();
};

// @baa 0x01ab8c00
int C_01ab8c00::sub_01ab8c00(void)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x24);
  iVar3 = 0x20;
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

// @baa 0x01ab8c90
void sub_01ab8c90(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x01ab8cb0
void sub_01ab8cb0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x01ab8cd0
void sub_01ab8cd0(void) {  }

// @baa 0x01ab8ce0
void sub_01ab8ce0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x01ab8d00
void sub_01ab8d00(void) {  }

// @baa 0x01ab8d10
void sub_01ab8d10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ab8d30
void sub_01ab8d30(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ab8d50
void sub_01ab8d50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ab8d70
void sub_01ab8d70(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ab8d90
void sub_01ab8d90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01ab8df0 { int sub_01ab8df0(void); };

// @baa 0x01ab8df0
int C_01ab8df0::sub_01ab8df0(void) { return *(int*)((char*)this + 0); }

struct C_01ab8e00 {
    int sub_01ab8e00();
};

// @baa 0x01ab8e00
int C_01ab8e00::sub_01ab8e00(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x01ab8e60
void sub_01ab8e60(void) {  }

struct C_01ab8e70 {
    undefined4 sub_01ab8e70(uint);
};

// @baa 0x01ab8e70
undefined4 C_01ab8e70::sub_01ab8e70(uint param_2)
{
    int param_1 = (int)this;

  if ((param_2 != 0xffffffff) && (param_2 < (uint)(*(int **)(param_1 + 0x34))[2])) {
    return *(undefined4 *)(**(int **)(param_1 + 0x34) + param_2 * 4);
  }
  return 0;
}

struct C_01ab8ec0 {
    undefined4 sub_01ab8ec0(int);
};

// @baa 0x01ab8ec0
undefined4 C_01ab8ec0::sub_01ab8ec0(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x18) + 0xc + param_2 * 0x10);
}

extern undefined4 g_027ca4e4;
// @baa 0x01ab8ee0
undefined4 sub_01ab8ee0(void)
{
  if (g_027ca4e4 == 0) {
    return 0;
  }
  return *(undefined4 *)(g_027ca4e4 + 8);
}

struct C_01ab93e0 {
    void sub_01ab93e0(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x01ab93e0
void C_01ab93e0::sub_01ab93e0(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

// @baa 0x01ab9420
void sub_01ab9420(void) {  }

// @baa 0x01ab9430
void sub_01ab9430(void) {  }

// @baa 0x01ab9610
void sub_01ab9610(void) {  }

struct C_01ab96d0 {
    void sub_01ab96d0();
};

// @baa 0x01ab96d0
void C_01ab96d0::sub_01ab96d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9700 {
    void sub_01ab9700();
};

// @baa 0x01ab9700
void C_01ab9700::sub_01ab9700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9960 {
    void sub_01ab9960();
};

// @baa 0x01ab9960
void C_01ab9960::sub_01ab9960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9a90 {
    void sub_01ab9a90();
};

// @baa 0x01ab9a90
void C_01ab9a90::sub_01ab9a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9ac0 {
    void sub_01ab9ac0();
};

// @baa 0x01ab9ac0
void C_01ab9ac0::sub_01ab9ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9de0 {
    void sub_01ab9de0();
};

// @baa 0x01ab9de0
void C_01ab9de0::sub_01ab9de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9e00 {
    void sub_01ab9e00();
};

// @baa 0x01ab9e00
void C_01ab9e00::sub_01ab9e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab9f10 {
    undefined4 * sub_01ab9f10(byte);
};

int sub_00402660(...);
// @baa 0x01ab9f10
undefined4 * C_01ab9f10::sub_01ab9f10(byte param_2)
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

struct C_01ab9f50 {
    undefined4 sub_01ab9f50(byte);
};

int sub_01ab9c00(void);
// @baa 0x01ab9f50
undefined4 C_01ab9f50::sub_01ab9f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab9c00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ab9f70 {
    undefined4 * sub_01ab9f70(byte);
};

// @baa 0x01ab9f70
undefined4 * C_01ab9f70::sub_01ab9f70(byte param_2)
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

// @baa 0x01aba3d0
void sub_01aba3d0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 4);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01aba480
void sub_01aba480(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01aba6b0
void sub_01aba6b0(undefined4 * param_1)
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

// @baa 0x01aba730
void sub_01aba730(undefined4 * param_1, undefined4 * param_2)
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

struct C_01abb360 {
    void sub_01abb360();
};

// @baa 0x01abb360
void C_01abb360::sub_01abb360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_01abbd30 {
    undefined4 sub_01abbd30(byte);
};

int sub_01abbc40(void);
// @baa 0x01abbd30
undefined4 C_01abbd30::sub_01abbd30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01abbc40();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01abc2f0();
// @baa 0x01abc3b0
void sub_01abc3b0(void) { sub_01abc2f0(); }

struct C_01abc790 {
    void sub_01abc790(undefined1);
};

// @baa 0x01abc790
void C_01abc790::sub_01abc790(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}

// @baa 0x01abc800
void sub_01abc800(void) {  }

// @baa 0x01abc810
void sub_01abc810(void) {  }

struct C_01abc820 { int sub_01abc820(void); };

// @baa 0x01abc820
int C_01abc820::sub_01abc820(void) { return *(int*)((char*)this + 8); }

// @baa 0x01abcf30
void __stdcall sub_01abcf30(int a0) {  }

struct C_01abd4a0 {
    undefined4 sub_01abd4a0(byte);
};

int sub_01abce90(void);
// @baa 0x01abd4a0
undefined4 C_01abd4a0::sub_01abd4a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01abce90();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x44);
  }
  return param_1;
}

struct C_01abd6c0 { void sub_01abd6c0(int a0); };

// @baa 0x01abd6c0
void C_01abd6c0::sub_01abd6c0(int a0) { *(int*)((char*)this + 76) = a0; }

struct C_01abd6d0 { void sub_01abd6d0(int a0); };

// @baa 0x01abd6d0
void C_01abd6d0::sub_01abd6d0(int a0) { *(int*)((char*)this + 80) = a0; }

// @baa 0x01abd8b0
void sub_01abd8b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01abd8d0
void sub_01abd8d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01abd8f0
void sub_01abd8f0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return;
}

void sub_01abe090();
// @baa 0x01abe820
void sub_01abe820(void) { sub_01abe090(); }

struct C_01abea70 {
    undefined4 sub_01abea70(byte);
};

int sub_01abe830(void);
// @baa 0x01abea70
undefined4 C_01abea70::sub_01abea70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01abe830();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_01abf040 {
    undefined4 sub_01abf040(byte);
};

int sub_01abed60(void);
// @baa 0x01abf040
undefined4 C_01abf040::sub_01abf040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01abed60();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x54);
  }
  return param_1;
}

struct C_01abfc50 { void sub_01abfc50(int a0); };

// @baa 0x01abfc50
void C_01abfc50::sub_01abfc50(int a0) { *(int*)((char*)this + 0) = a0; }

extern char g_0240d1a0[];
struct C_01abfc60 { C_01abfc60* sub_01abfc60(int a0); };

// @baa 0x01abfc60
C_01abfc60* C_01abfc60::sub_01abfc60(int a0) { *(int*)((char*)this + 0) = (int)g_0240d1a0; return this; }

struct C_01abfc70 {
    int sub_01abfc70(int);
};

// @baa 0x01abfc70
int C_01abfc70::sub_01abfc70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01abfcb0 {
    int sub_01abfcb0(int);
};

// @baa 0x01abfcb0
int C_01abfcb0::sub_01abfcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01abfcc0 {
    int sub_01abfcc0();
};

// @baa 0x01abfcc0
int C_01abfcc0::sub_01abfcc0(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + -0x10 + *param_1;
}

// @baa 0x01abfd10
int sub_01abfd10(void) { return 2048; }

struct C_01abfd70 {
    bool sub_01abfd70();
};

// @baa 0x01abfd70
bool C_01abfd70::sub_01abfd70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

// @baa 0x01abfd80
void sub_01abfd80(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return;
}

// @baa 0x01abfd90
void sub_01abfd90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01abfdf0 { int sub_01abfdf0(void); };

// @baa 0x01abfdf0
int C_01abfdf0::sub_01abfdf0(void) { return *(int*)((char*)this + 0); }

struct C_01abfe00 { int sub_01abfe00(void); };

// @baa 0x01abfe00
int C_01abfe00::sub_01abfe00(void) { return *(int*)((char*)this + 0); }

struct C_01abfe10 {
    int sub_01abfe10();
};

// @baa 0x01abfe10
int C_01abfe10::sub_01abfe10(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

struct C_01abfe20 {
    int sub_01abfe20();
};

// @baa 0x01abfe20
int C_01abfe20::sub_01abfe20(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x01abfe80
void sub_01abfe80(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01abfea0 { int sub_01abfea0(void); };

// @baa 0x01abfea0
int C_01abfea0::sub_01abfea0(void) { return *(int*)((char*)this + 12); }

struct C_01abff60 {
    void sub_01abff60(int);
};

// @baa 0x01abff60
void C_01abff60::sub_01abff60(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}
