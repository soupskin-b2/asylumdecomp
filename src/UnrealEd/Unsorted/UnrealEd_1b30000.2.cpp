// UnrealEd_1b30000.cpp (part 2 of 4): 141 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b30530
int sub_01b30530(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  return ((param_2 + 3 >> 2) * param_3 + param_4) * (param_1 + 3 >> 2) + param_5;
}

int sub_01b30cd0(...);
int sub_01b31420(...);
// @baa 0x01b31ad0
void sub_01b31ad0(undefined4 param_1, int param_2)
{
  if (param_2 == 3) {
    sub_01b30cd0(param_1);
    return;
  }
  sub_01b31420(param_1);
  return;
}

struct C { int sub_01b31b00(void); };

// @baa 0x01b31b00
int C::sub_01b31b00(void) { return *(int*)((char*)this + 8); }

struct C_01b31b10 { int sub_01b31b10(void); };

// @baa 0x01b31b10
int C_01b31b10::sub_01b31b10(void) { return *(int*)((char*)this + 12); }

struct C_01b31b40 {
    void sub_01b31b40();
};

// @baa 0x01b31b40
void C_01b31b40::sub_01b31b40(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b31b50 {
    int sub_01b31b50();
};

// @baa 0x01b31b50
int C_01b31b50::sub_01b31b50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
}

// @baa 0x01b31b60
int sub_01b31b60(void) { return 16; }

struct C_01b31b70 {
    int sub_01b31b70();
};

// @baa 0x01b31b70
int C_01b31b70::sub_01b31b70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8) * 0x10;
}

struct C_01b31b80 {
    undefined1 sub_01b31b80();
};

// @baa 0x01b31b80
undefined1 C_01b31b80::sub_01b31b80(void)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 4) != 0) && (0 < *(int *)(param_1 + 8))) && (0 < *(int *)(param_1 + 0xc))
     ) {
    return 1;
  }
  return 0;
}

struct C_01b31ba0 {
    void sub_01b31ba0();
};

// @baa 0x01b31ba0
void C_01b31ba0::sub_01b31ba0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

struct C_01b31cc0 {
    void sub_01b31cc0();
};

extern undefined4 g_024122dc;
// @baa 0x01b31cc0
void C_01b31cc0::sub_01b31cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024122dc));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

struct C_01b31fe0 {
    void sub_01b31fe0();
};

// @baa 0x01b31fe0
void C_01b31fe0::sub_01b31fe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = (undefined4)((&g_024122dc));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// @baa 0x01b32530
void sub_01b32530(void) {  }

struct C_01b32540 { int sub_01b32540(void); };

// @baa 0x01b32540
int C_01b32540::sub_01b32540(void) { return *(int*)((char*)this + 4); }

struct C_01b32550 {
    undefined4 sub_01b32550();
};

// @baa 0x01b32550
undefined4 C_01b32550::sub_01b32550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

struct C_01b32570 {
    undefined4 sub_01b32570(byte);
};

int sub_00402660(...);
int sub_01b34be0(void);
// @baa 0x01b32570
undefined4 C_01b32570::sub_01b32570(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01b34be0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b345e0 {
    void sub_01b345e0();
};

int sub_00402680(...);
// @baa 0x01b345e0
void C_01b345e0::sub_01b345e0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_00402680(*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}

// @baa 0x01b34e20
bool sub_01b34e20(uint param_1)
{
  return (param_1 - 1 & param_1) == 0;
}

struct C_01b34e40 {
    int sub_01b34e40();
};

// @baa 0x01b34e40
int C_01b34e40::sub_01b34e40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b34ec0 {
    int sub_01b34ec0();
};

// @baa 0x01b34ec0
int C_01b34ec0::sub_01b34ec0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b34ee0 {
    int sub_01b34ee0();
};

// @baa 0x01b34ee0
int C_01b34ee0::sub_01b34ee0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b34f00 { C_01b34f00* sub_01b34f00(void); };

// @baa 0x01b34f00
C_01b34f00* C_01b34f00::sub_01b34f00(void) { return this; }

struct C_01b34f10 {
    int sub_01b34f10();
};

// @baa 0x01b34f10
int C_01b34f10::sub_01b34f10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b34f30 { C_01b34f30* sub_01b34f30(void); };

// @baa 0x01b34f30
C_01b34f30* C_01b34f30::sub_01b34f30(void) { return this; }

struct C_01b34f40 { C_01b34f40* sub_01b34f40(void); };

// @baa 0x01b34f40
C_01b34f40* C_01b34f40::sub_01b34f40(void) { return this; }

struct C_01b34f50 { C_01b34f50* sub_01b34f50(int a0); };

// @baa 0x01b34f50
C_01b34f50* C_01b34f50::sub_01b34f50(int a0) { return this; }

struct C_01b34fe0 { C_01b34fe0* sub_01b34fe0(int a0); };

// @baa 0x01b34fe0
C_01b34fe0* C_01b34fe0::sub_01b34fe0(int a0) { return this; }

struct C_01b35070 { C_01b35070* sub_01b35070(void); };

// @baa 0x01b35070
C_01b35070* C_01b35070::sub_01b35070(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b35080
int sub_01b35080(void) { return 268435455; }

struct C_01b35090 {
    int sub_01b35090();
};

// @baa 0x01b35090
int C_01b35090::sub_01b35090(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b35120 {
    int sub_01b35120(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01b35120
int C_01b35120::sub_01b35120(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b351b0 { C_01b351b0* sub_01b351b0(void); };

// @baa 0x01b351b0
C_01b351b0* C_01b351b0::sub_01b351b0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b351c0
int sub_01b351c0(void) { return 1073741823; }

// @baa 0x01b353a0
void sub_01b353a0(void) {  }

struct C_01b353c0 {
    int sub_01b353c0();
};

// @baa 0x01b353c0
int C_01b353c0::sub_01b353c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

// @baa 0x01b35420
int sub_01b35420(int a0) { return *(int*)a0; }

// @baa 0x01b35430
int sub_01b35430(int a0) { return a0; }

struct C_01b35440 { int sub_01b35440(void); };

// @baa 0x01b35440
int C_01b35440::sub_01b35440(void) { return *(int*)((char*)this + 4); }

// @baa 0x01b35480
int sub_01b35480(int a0) { return *(int*)a0; }

// @baa 0x01b35490
undefined1 sub_01b35490(void)
{
  return 1;
}

// @baa 0x01b354a0
void sub_01b354a0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01b35500 { int sub_01b35500(void); };

// @baa 0x01b35500
int C_01b35500::sub_01b35500(void) { return *(int*)((char*)this + 4); }

struct C_01b355a0 { C_01b355a0* sub_01b355a0(int a0); };

// @baa 0x01b355a0
C_01b355a0* C_01b355a0::sub_01b355a0(int a0) { return this; }

struct C_01b355b0 { C_01b355b0* sub_01b355b0(int a0); };

// @baa 0x01b355b0
C_01b355b0* C_01b355b0::sub_01b355b0(int a0) { return this; }

struct C_01b355c0 { C_01b355c0* sub_01b355c0(int a0); };

// @baa 0x01b355c0
C_01b355c0* C_01b355c0::sub_01b355c0(int a0) { return this; }

// @baa 0x01b355d0
int sub_01b355d0(void) { return 268435455; }

// @baa 0x01b35600
int sub_01b35600(void) { return 268435455; }

struct C_01b35630 {
    int sub_01b35630(int *);
};

// @baa 0x01b35630
int C_01b35630::sub_01b35630(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

// @baa 0x01b35700
int sub_01b35700(void) { return 1073741823; }

// @baa 0x01b35830
void sub_01b35830(void) {  }

// @baa 0x01b35840
int sub_01b35840(int a0) { return *(int*)a0; }

// @baa 0x01b35920
undefined4 sub_01b35920(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b35960
int sub_01b35960(int a0) { return *(int*)a0; }

// @baa 0x01b359b0
undefined4 sub_01b359b0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b369d0
void __stdcall sub_01b369d0(int a0, int a1) {  }

// @baa 0x01b36b40
undefined4 sub_01b36b40(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b36b90
undefined4 sub_01b36b90(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01b36ce0 {
    void sub_01b36ce0();
};

// @baa 0x01b36ce0
void C_01b36ce0::sub_01b36ce0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b36d90 {
    void sub_01b36d90();
};

// @baa 0x01b36d90
void C_01b36d90::sub_01b36d90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b36e90 {
    int sub_01b36e90(byte);
};

// @baa 0x01b36e90
int C_01b36e90::sub_01b36e90(byte param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b37040 {
    void sub_01b37040();
};

// @baa 0x01b37040
void C_01b37040::sub_01b37040(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// @baa 0x01b370a0
void sub_01b370a0(int param_1)
{
  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// @baa 0x01b37590
void sub_01b37590(int param_1, int param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (*(int *)(param_1 + 4) != 0) {
      sub_00402660(*(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// @baa 0x01b38f80
void sub_01b38f80(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 8);
      for (; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
        if (*(int *)(iVar2 + 4) != 0) {
          sub_00402660(*(int *)(iVar2 + 4));
        }
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      sub_00402660(*(undefined4 *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// @baa 0x01b3a530
undefined4 sub_01b3a530(undefined4 param_1)
{
  if (0xff < (short)param_1) {
    return 0xff;
  }
  if ((short)param_1 < 0) {
    param_1 = 0;
  }
  return param_1;
}

struct C_01b3b070 { int sub_01b3b070(void); };

// @baa 0x01b3b070
int C_01b3b070::sub_01b3b070(void) { return *(int*)((char*)this + 4); }

// @baa 0x01b3ba80
void sub_01b3ba80(void) {  }

struct C_01b3bb80 {
    int sub_01b3bb80(int, int *);
};

// @baa 0x01b3bb80
int C_01b3bb80::sub_01b3bb80(int param_2, int * param_3)
{
    int * param_1 = (int *)this;

  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 4)) {
    iVar1 = *param_1;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        piVar3 = param_3;
        do {
          if (*(int *)((*(int *)(*(int *)(*(int *)(param_2 + 0x10) + iVar2 * 4) + 8) - (int)param_3)
                      + (int)piVar3) != *piVar3) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar1);
      }
      if (iVar4 == iVar1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  return -1;
}

struct C_01b3bc30 {
    void sub_01b3bc30(int);
};

// @baa 0x01b3bc30
void C_01b3bc30::sub_01b3bc30(int param_2)
{
    int param_1 = (int)this;

  sub_00402680(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = 0;
  sub_00402680(param_2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}

struct C_01b3c6c0 {
    void sub_01b3c6c0(undefined4, int, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01b3c6c0
void C_01b3c6c0::sub_01b3c6c0(undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_7;
  *(undefined4 *)(param_1 + 8) = param_8;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 4) = param_9;
  return;
}

struct C_01b3cad0 { int sub_01b3cad0(void); };

// @baa 0x01b3cad0
int C_01b3cad0::sub_01b3cad0(void) { return *(int*)((char*)this + 8); }

struct C_01b3cae0 { int sub_01b3cae0(void); };

// @baa 0x01b3cae0
int C_01b3cae0::sub_01b3cae0(void) { return *(int*)((char*)this + 12); }

struct C_01b3cb30 {
    void sub_01b3cb30(int, int, undefined1 *);
};

// @baa 0x01b3cb30
void C_01b3cb30::sub_01b3cb30(int param_2, int param_3, undefined1 * param_4)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * param_2 + param_3) * 4);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  return;
}

struct C_01b3cb70 {
    void sub_01b3cb70(undefined1 *, int);
};

// @baa 0x01b3cb70
void C_01b3cb70::sub_01b3cb70(undefined1 * param_2, int param_3)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 4;
  *param_2 = *(undefined1 *)(*(int *)(param_1 + 4) + param_3 * 4);
  param_2[1] = *(undefined1 *)(iVar1 + 1);
  param_2[2] = *(undefined1 *)(iVar1 + 2);
  param_2[3] = *(undefined1 *)(iVar1 + 3);
  return;
}

struct C_01b3cba0 {
    void sub_01b3cba0(int, undefined1 *);
};

// @baa 0x01b3cba0
void C_01b3cba0::sub_01b3cba0(int param_2, undefined1 * param_3)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + param_2 * 4);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return;
}

struct C_01b3cbf0 {
    void sub_01b3cbf0();
};

// @baa 0x01b3cbf0
void C_01b3cbf0::sub_01b3cbf0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b3cc00 {
    int sub_01b3cc00();
};

// @baa 0x01b3cc00
int C_01b3cc00::sub_01b3cc00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
}

// @baa 0x01b3cc10
int sub_01b3cc10(void) { return 4; }

struct C_01b3cc20 {
    int sub_01b3cc20();
};

// @baa 0x01b3cc20
int C_01b3cc20::sub_01b3cc20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8) * 4;
}

struct C_01b3cc30 {
    undefined1 sub_01b3cc30();
};

// @baa 0x01b3cc30
undefined1 C_01b3cc30::sub_01b3cc30(void)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 4) != 0) && (0 < *(int *)(param_1 + 8))) && (0 < *(int *)(param_1 + 0xc))
     ) {
    return 1;
  }
  return 0;
}

struct C_01b3ce40 {
    void sub_01b3ce40();
};

// @baa 0x01b3ce40
void C_01b3ce40::sub_01b3ce40(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

struct C_01b3d0e0 {
    void sub_01b3d0e0();
};

extern undefined4 g_02412404;
// @baa 0x01b3d0e0
void C_01b3d0e0::sub_01b3d0e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02412404));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

struct C_01b3d170 {
    void sub_01b3d170();
};

// @baa 0x01b3d170
void C_01b3d170::sub_01b3d170(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = (undefined4)((&g_02412404));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

extern undefined4 g_027d32f4;
// @baa 0x01b3d2f0
int sub_01b3d2f0(int param_1, int param_2)
{
  return (uint)*(byte *)(*(int *)(param_1 + 4) + g_027d32f4) -
         (uint)*(byte *)(*(int *)(param_2 + 4) + g_027d32f4);
}

struct C_01b3d9b0 {
    void sub_01b3d9b0();
};

// @baa 0x01b3d9b0
void C_01b3d9b0::sub_01b3d9b0(void)
{
    int param_1 = (int)this;

  sub_00402660(*(undefined4 *)(param_1 + 4));
  sub_00402660(*(undefined4 *)(param_1 + 0xc));
  return;
}

struct C_01b3da20 {
    void sub_01b3da20(uint);
};

// @baa 0x01b3da20
void C_01b3da20::sub_01b3da20(uint param_2)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 | param_2;
  return;
}

struct C_01b3db40 {
    int sub_01b3db40(byte);
};

// @baa 0x01b3db40
int C_01b3db40::sub_01b3db40(byte param_2)
{
    int param_1 = (int)this;

  sub_00402660(*(undefined4 *)(param_1 + 4));
  sub_00402660(*(undefined4 *)(param_1 + 0xc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b3de00 { C_01b3de00* sub_01b3de00(void); };

// @baa 0x01b3de00
C_01b3de00* C_01b3de00::sub_01b3de00(void) { return this; }

struct C_01b3de30 { C_01b3de30* sub_01b3de30(void); };

// @baa 0x01b3de30
C_01b3de30* C_01b3de30::sub_01b3de30(void) { return this; }

struct C_01b3de40 { C_01b3de40* sub_01b3de40(void); };

// @baa 0x01b3de40
C_01b3de40* C_01b3de40::sub_01b3de40(void) { return this; }

struct C_01b3de50 {
    int sub_01b3de50();
};

// @baa 0x01b3de50
int C_01b3de50::sub_01b3de50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b3de70 {
    int sub_01b3de70();
};

// @baa 0x01b3de70
int C_01b3de70::sub_01b3de70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b3ded0 {
    int sub_01b3ded0();
};

// @baa 0x01b3ded0
int C_01b3ded0::sub_01b3ded0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b3df20 {
    int sub_01b3df20();
};

// @baa 0x01b3df20
int C_01b3df20::sub_01b3df20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b3df40 { C_01b3df40* sub_01b3df40(void); };

// @baa 0x01b3df40
C_01b3df40* C_01b3df40::sub_01b3df40(void) { return this; }

struct C_01b3dff0 { C_01b3dff0* sub_01b3dff0(void); };

// @baa 0x01b3dff0
C_01b3dff0* C_01b3dff0::sub_01b3dff0(void) { return this; }

struct C_01b3e000 {
    int sub_01b3e000();
};

// @baa 0x01b3e000
int C_01b3e000::sub_01b3e000(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b3e020 { C_01b3e020* sub_01b3e020(void); };

// @baa 0x01b3e020
C_01b3e020* C_01b3e020::sub_01b3e020(void) { return this; }

struct C_01b3e030 { C_01b3e030* sub_01b3e030(void); };

// @baa 0x01b3e030
C_01b3e030* C_01b3e030::sub_01b3e030(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b3e1f0
int sub_01b3e1f0(void) { return 1073741823; }

struct C_01b3e200 {
    int sub_01b3e200(int *);
};

// @baa 0x01b3e200
int C_01b3e200::sub_01b3e200(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01b3e230
int sub_01b3e230(void) { return 357913941; }

// @baa 0x01b3e240
int sub_01b3e240(void) { return 1073741823; }

struct C_01b3e250 {
    int sub_01b3e250(int *);
};

// @baa 0x01b3e250
int C_01b3e250::sub_01b3e250(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01b3e4b0
void sub_01b3e4b0(void) {  }

// @baa 0x01b3e4d0
void sub_01b3e4d0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01b3e500
void sub_01b3e500(void) {  }

// @baa 0x01b3e510
int sub_01b3e510(int a0) { return *(int*)a0; }

struct C_01b3e590 { int sub_01b3e590(void); };

// @baa 0x01b3e590
int C_01b3e590::sub_01b3e590(void) { return *(int*)((char*)this + 4); }

// @baa 0x01b3e5c0
int sub_01b3e5c0(void) { return 0; }

// @baa 0x01b3e5d0
int sub_01b3e5d0(void) { return 0; }

// @baa 0x01b3e5e0
int sub_01b3e5e0(int a0) { return a0; }

// @baa 0x01b3e5f0
void sub_01b3e5f0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01b3e7d0 {
    void sub_01b3e7d0();
};

// @baa 0x01b3e7d0
void C_01b3e7d0::sub_01b3e7d0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    sub_00402660(*(undefined4 *)(iVar1 + 4));
    sub_00402660(*(undefined4 *)(iVar1 + 0xc));
    sub_00402660(iVar1);
  }
  return;
}

struct C_01b3ebf0 {
    int sub_01b3ebf0(byte);
};

// @baa 0x01b3ebf0
int C_01b3ebf0::sub_01b3ebf0(byte param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    sub_00402660(*(undefined4 *)(iVar1 + 4));
    sub_00402660(*(undefined4 *)(iVar1 + 0xc));
    sub_00402660(iVar1);
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b3ed00 { C_01b3ed00* sub_01b3ed00(int a0); };

// @baa 0x01b3ed00
C_01b3ed00* C_01b3ed00::sub_01b3ed00(int a0) { return this; }

struct C_01b3ed70 { C_01b3ed70* sub_01b3ed70(int a0); };

// @baa 0x01b3ed70
C_01b3ed70* C_01b3ed70::sub_01b3ed70(int a0) { return this; }

// @baa 0x01b3ed80
int sub_01b3ed80(void) { return 1073741823; }

struct C_01b3edb0 {
    int sub_01b3edb0(int *);
};

// @baa 0x01b3edb0
int C_01b3edb0::sub_01b3edb0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01b3ede0
int sub_01b3ede0(void) { return 357913941; }

// @baa 0x01b3ee10
int sub_01b3ee10(void) { return 1073741823; }

struct C_01b3ee40 {
    int sub_01b3ee40(int *);
};

// @baa 0x01b3ee40
int C_01b3ee40::sub_01b3ee40(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01b3ef60
void sub_01b3ef60(void) {  }

// @baa 0x01b3ef70
void sub_01b3ef70(void) {  }

// @baa 0x01b3ef80
int sub_01b3ef80(int a0) { return *(int*)a0; }

// @baa 0x01b3f000
undefined4 sub_01b3f000(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b3f040
void sub_01b3f040(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

int sub_01b3e6d0(...);
// @baa 0x01b3f190
void sub_01b3f190(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01b3e6d0(param_1,param_2,param_3,0,0);
  return;
}

// @baa 0x01b3f2a0
void __stdcall sub_01b3f2a0(int a0, int a1) {  }

struct C_01b3f2b0 {
    void sub_01b3f2b0();
};

// @baa 0x01b3f2b0
void C_01b3f2b0::sub_01b3f2b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// @baa 0x01b3f3c0
void __stdcall sub_01b3f3c0(int a0, int a1) {  }

// @baa 0x01b3f4d0
void sub_01b3f4d0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01b3f560
void sub_01b3f560(void) {  }

// @baa 0x01b3f6c0
void sub_01b3f6c0(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_01b3e6d0(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01b3f120(...);
// @baa 0x01b3f6f0
void sub_01b3f6f0(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  sub_01b3f120(param_1,0,(param_2 - (int)param_1) + -4 >> 2,uVar1,param_3);
  return;
}

struct C_01b3f730 {
    void sub_01b3f730();
};

// @baa 0x01b3f730
void C_01b3f730::sub_01b3f730(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01b3f8a0 {
    void sub_01b3f8a0();
};

// @baa 0x01b3f8a0
void C_01b3f8a0::sub_01b3f8a0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// @baa 0x01b3f910
void sub_01b3f910(void) {  }

int sub_01b3f680(...);
// @baa 0x01b3fd10
void sub_01b3fd10(int param_1, int param_2, undefined4 param_3)
{
  if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    sub_01b3f680(param_1,param_2,param_3,0,0);
  }
  return;
}

// @baa 0x01b3fdd0
void sub_01b3fdd0(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  if (4 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    sub_01b3f120(param_1,0,(int)((param_2 - (int)param_1) - 4U) >> 2,uVar1,param_3);
  }
  return;
}

struct C_01b3ff90 {
    void sub_01b3ff90();
};

// @baa 0x01b3ff90
void C_01b3ff90::sub_01b3ff90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
