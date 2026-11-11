// FMOD_17c0000.cpp (part 2 of 3): 81 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017c81d7(undefined4);
};

// @baa 0x017c81d7
undefined4 C::sub_017c81d7(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x13c) = param_2;
  return 0;
}

struct C_017ce2c0 {
    int sub_017ce2c0(undefined4 *);
};

// @baa 0x017ce2c0
int C_017ce2c0::sub_017ce2c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  iVar2 = 0;
  while( true ) {
    if (puVar1 == param_1) {
      return -1;
    }
    if (puVar1 == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

struct C_017ce2f0 {
    bool sub_017ce2f0();
};

// @baa 0x017ce2f0
bool C_017ce2f0::sub_017ce2f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xb0) != 0;
}

struct C_017ce300 {
    bool sub_017ce300();
};

// @baa 0x017ce300
bool C_017ce300::sub_017ce300(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xb4) != 0;
}

struct C_017ce310 { int sub_017ce310(void); };

// @baa 0x017ce310
int C_017ce310::sub_017ce310(void) { return *(int*)((char*)this + 320); }

struct C_017ce320 {
    undefined4 sub_017ce320();
};

// @baa 0x017ce320
undefined4 C_017ce320::sub_017ce320(void)
{
    int param_1 = (int)this;

  return **(undefined4 **)(param_1 + 0xb0);
}

struct C_017ce330 {
    void sub_017ce330(undefined4);
};

// @baa 0x017ce330
void C_017ce330::sub_017ce330(undefined4 param_2)
{
    int param_1 = (int)this;

  **(undefined4 **)(param_1 + 0xb0) = param_2;
  return;
}

struct C_017ce340 {
    undefined4 sub_017ce340();
};

// @baa 0x017ce340
undefined4 C_017ce340::sub_017ce340(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 4);
}

struct C_017ce3a0 { void sub_017ce3a0(int a0); };

// @baa 0x017ce3a0
void C_017ce3a0::sub_017ce3a0(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_017ce3b0 {
    int sub_017ce3b0();
};

// @baa 0x017ce3b0
int C_017ce3b0::sub_017ce3b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xb4) + 4;
}

struct C_017ce3c0 { char* sub_017ce3c0(void); };

// @baa 0x017ce3c0
char* C_017ce3c0::sub_017ce3c0(void) { return (char*)this + 28; }

struct C_017ce3d0 { int sub_017ce3d0(void); };

// @baa 0x017ce3d0
int C_017ce3d0::sub_017ce3d0(void) { return *(int*)((char*)this + 40); }

struct C_017ce3e0 { void sub_017ce3e0(int a0); };

// @baa 0x017ce3e0
void C_017ce3e0::sub_017ce3e0(int a0) { *(int*)((char*)this + 40) = a0; }

struct C_017ce3f0 {
    undefined4 sub_017ce3f0();
};

// @baa 0x017ce3f0
undefined4 C_017ce3f0::sub_017ce3f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int **)(param_1 + 0xb4) == (int *)0x0) || (iVar1 = **(int **)(param_1 + 0xb4), iVar1 == 0))
  {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xb0);
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

struct C_017ce420 {
    void sub_017ce420(undefined4);
};

// @baa 0x017ce420
void C_017ce420::sub_017ce420(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xc) = param_2;
  return;
}

struct C_017ce430 {
    undefined4 sub_017ce430();
};

// @baa 0x017ce430
undefined4 C_017ce430::sub_017ce430(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int **)(param_1 + 0xb4) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0xb4), iVar1 != 0))
  {
    return *(undefined4 *)(*(int *)(iVar1 + 0xb0) + 0x10);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x10);
}

struct C_017ce490 {
    void sub_017ce490(undefined4);
};

// @baa 0x017ce490
void C_017ce490::sub_017ce490(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10) = param_2;
  return;
}

struct C_017ce4a0 {
    undefined4 sub_017ce4a0();
};

// @baa 0x017ce4a0
undefined4 C_017ce4a0::sub_017ce4a0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(int **)(param_1 + 0xb4) == (int *)0x0) || (iVar1 = **(int **)(param_1 + 0xb4), iVar1 == 0))
  {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xb0);
  }
  return *(undefined4 *)(iVar1 + 0x14);
}

struct C_017ce4f0 { float sub_017ce4f0(void); };

// @baa 0x017ce4f0
float C_017ce4f0::sub_017ce4f0(void) { return *(float*)((char*)this + 48); }

struct C_017ce510 { float sub_017ce510(void); };

// @baa 0x017ce510
float C_017ce510::sub_017ce510(void) { return *(float*)((char*)this + 52); }

struct C_017ce530 { float sub_017ce530(void); };

// @baa 0x017ce530
float C_017ce530::sub_017ce530(void) { return *(float*)((char*)this + 56); }

struct C_017ce550 { float sub_017ce550(void); };

// @baa 0x017ce550
float C_017ce550::sub_017ce550(void) { return *(float*)((char*)this + 60); }

struct C_017ce570 { float sub_017ce570(void); };

// @baa 0x017ce570
float C_017ce570::sub_017ce570(void) { return *(float*)((char*)this + 64); }

struct C_017ce590 { int sub_017ce590(void); };

// @baa 0x017ce590
int C_017ce590::sub_017ce590(void) { return *(int*)((char*)this + 68); }

struct C_017ce5a0 { void sub_017ce5a0(int a0); };

// @baa 0x017ce5a0
void C_017ce5a0::sub_017ce5a0(int a0) { *(int*)((char*)this + 68) = a0; }

struct C_017ce5b0 { int sub_017ce5b0(void); };

// @baa 0x017ce5b0
int C_017ce5b0::sub_017ce5b0(void) { return *(int*)((char*)this + 72); }

struct C_017ce5c0 { void sub_017ce5c0(int a0); };

// @baa 0x017ce5c0
void C_017ce5c0::sub_017ce5c0(int a0) { *(int*)((char*)this + 72) = a0; }

struct C_017ce5d0 { char* sub_017ce5d0(void); };

// @baa 0x017ce5d0
char* C_017ce5d0::sub_017ce5d0(void) { return (char*)this + 184; }

struct C_017ce5e0 { char* sub_017ce5e0(void); };

// @baa 0x017ce5e0
char* C_017ce5e0::sub_017ce5e0(void) { return (char*)this + 196; }

struct C_017ce5f0 { char* sub_017ce5f0(void); };

// @baa 0x017ce5f0
char* C_017ce5f0::sub_017ce5f0(void) { return (char*)this + 208; }

struct C_017ce600 { int sub_017ce600(void); };

// @baa 0x017ce600
int C_017ce600::sub_017ce600(void) { return *(int*)((char*)this + 220); }

struct C_017ce610 { void sub_017ce610(int a0); };

// @baa 0x017ce610
void C_017ce610::sub_017ce610(int a0) { *(int*)((char*)this + 220) = a0; }

struct C_017ce620 { char* sub_017ce620(void); };

// @baa 0x017ce620
char* C_017ce620::sub_017ce620(void) { return (char*)this + 224; }

struct C_017ce630 { char* sub_017ce630(void); };

// @baa 0x017ce630
char* C_017ce630::sub_017ce630(void) { return (char*)this + 236; }

struct C_017ce640 { int sub_017ce640(void); };

// @baa 0x017ce640
int C_017ce640::sub_017ce640(void) { return *(int*)((char*)this + 76); }

struct C_017ce650 { void sub_017ce650(int a0); };

// @baa 0x017ce650
void C_017ce650::sub_017ce650(int a0) { *(int*)((char*)this + 76) = a0; }

struct C_017ce660 { float sub_017ce660(void); };

// @baa 0x017ce660
float C_017ce660::sub_017ce660(void) { return *(float*)((char*)this + 248); }

struct C_017ce680 { float sub_017ce680(void); };

// @baa 0x017ce680
float C_017ce680::sub_017ce680(void) { return *(float*)((char*)this + 252); }

struct C_017ce6a0 { float sub_017ce6a0(void); };

// @baa 0x017ce6a0
float C_017ce6a0::sub_017ce6a0(void) { return *(float*)((char*)this + 256); }

struct C_017ce6c0 { float sub_017ce6c0(void); };

// @baa 0x017ce6c0
float C_017ce6c0::sub_017ce6c0(void) { return *(float*)((char*)this + 260); }

struct C_017ce6e0 { float sub_017ce6e0(void); };

// @baa 0x017ce6e0
float C_017ce6e0::sub_017ce6e0(void) { return *(float*)((char*)this + 264); }

struct C_017ce700 { float sub_017ce700(void); };

// @baa 0x017ce700
float C_017ce700::sub_017ce700(void) { return *(float*)((char*)this + 268); }

struct C_017ce720 { char* sub_017ce720(void); };

// @baa 0x017ce720
char* C_017ce720::sub_017ce720(void) { return (char*)this + 288; }

struct C_017ce730 { float sub_017ce730(void); };

// @baa 0x017ce730
float C_017ce730::sub_017ce730(void) { return *(float*)((char*)this + 80); }

struct C_017ce750 { float sub_017ce750(void); };

// @baa 0x017ce750
float C_017ce750::sub_017ce750(void) { return *(float*)((char*)this + 84); }

struct C_017ce770 { int sub_017ce770(void); };

// @baa 0x017ce770
int C_017ce770::sub_017ce770(void) { return *(int*)((char*)this + 88); }

struct C_017ce780 { void sub_017ce780(int a0); };

// @baa 0x017ce780
void C_017ce780::sub_017ce780(int a0) { *(int*)((char*)this + 88) = a0; }

struct C_017ce790 { float sub_017ce790(void); };

// @baa 0x017ce790
float C_017ce790::sub_017ce790(void) { return *(float*)((char*)this + 272); }

struct C_017ce7b0 { float sub_017ce7b0(void); };

// @baa 0x017ce7b0
float C_017ce7b0::sub_017ce7b0(void) { return *(float*)((char*)this + 276); }

struct C_017ce7f0 {
    void sub_017ce7f0(undefined4, undefined4);
};

// @baa 0x017ce7f0
void C_017ce7f0::sub_017ce7f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = param_3;
  return;
}

struct C_017ce830 {
    void sub_017ce830(undefined4, undefined4);
};

// @baa 0x017ce830
void C_017ce830::sub_017ce830(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  return;
}

struct C_017ce870 {
    void sub_017ce870(undefined4, undefined4);
};

// @baa 0x017ce870
void C_017ce870::sub_017ce870(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  return;
}

struct C_017ce890 { float sub_017ce890(void); };

// @baa 0x017ce890
float C_017ce890::sub_017ce890(void) { return *(float*)((char*)this + 280); }

struct C_017ce8b0 { float sub_017ce8b0(void); };

// @baa 0x017ce8b0
float C_017ce8b0::sub_017ce8b0(void) { return *(float*)((char*)this + 284); }

struct C_017ce8d0 { float sub_017ce8d0(void); };

// @baa 0x017ce8d0
float C_017ce8d0::sub_017ce8d0(void) { return *(float*)((char*)this + 120); }

struct C_017ce8f0 { float sub_017ce8f0(void); };

// @baa 0x017ce8f0
float C_017ce8f0::sub_017ce8f0(void) { return *(float*)((char*)this + 124); }

struct C_017ce910 { float sub_017ce910(void); };

// @baa 0x017ce910
float C_017ce910::sub_017ce910(void) { return *(float*)((char*)this + 128); }

struct C_017ce930 { float sub_017ce930(void); };

// @baa 0x017ce930
float C_017ce930::sub_017ce930(void) { return *(float*)((char*)this + 132); }

struct C_017ce950 { int sub_017ce950(void); };

// @baa 0x017ce950
int C_017ce950::sub_017ce950(void) { return *(int*)((char*)this + 136); }

struct C_017ce960 { void sub_017ce960(int a0); };

// @baa 0x017ce960
void C_017ce960::sub_017ce960(int a0) { *(int*)((char*)this + 136) = a0; }

struct C_017ce990 {
    void sub_017ce990(undefined2);
};

// @baa 0x017ce990
void C_017ce990::sub_017ce990(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x98) = param_2;
  return;
}

struct C_017ce9a0 {
    undefined2 sub_017ce9a0();
};

// @baa 0x017ce9a0
undefined2 C_017ce9a0::sub_017ce9a0(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x9a);
}

struct C_017ce9b0 {
    void sub_017ce9b0(undefined2);
};

// @baa 0x017ce9b0
void C_017ce9b0::sub_017ce9b0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x9a) = param_2;
  return;
}

struct C_017ce9d0 {
    void sub_017ce9d0(undefined2);
};

// @baa 0x017ce9d0
void C_017ce9d0::sub_017ce9d0(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(*(int *)(param_1 + 0xb4) + 0x18) = param_2;
  return;
}

struct C_017ce9f0 {
    undefined2 sub_017ce9f0();
};

// @baa 0x017ce9f0
undefined2 C_017ce9f0::sub_017ce9f0(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x8c);
}

struct C_017cea00 {
    void sub_017cea00(undefined2);
};

// @baa 0x017cea00
void C_017cea00::sub_017cea00(undefined2 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0x8c) = param_2;
  return;
}

struct C_017cea10 { int sub_017cea10(void); };

// @baa 0x017cea10
int C_017cea10::sub_017cea10(void) { return *(int*)((char*)this + 148); }

struct C_017cea20 { void sub_017cea20(int a0); };

// @baa 0x017cea20
void C_017cea20::sub_017cea20(int a0) { *(int*)((char*)this + 148) = a0; }

struct C_017cea30 { int sub_017cea30(void); };

// @baa 0x017cea30
int C_017cea30::sub_017cea30(void) { return *(int*)((char*)this + 156); }

struct C_017cea40 { void sub_017cea40(int a0); };

// @baa 0x017cea40
void C_017cea40::sub_017cea40(int a0) { *(int*)((char*)this + 156) = a0; }

struct C_017cea50 { int sub_017cea50(void); };

// @baa 0x017cea50
int C_017cea50::sub_017cea50(void) { return *(int*)((char*)this + 160); }

struct C_017cea60 { void sub_017cea60(int a0); };

// @baa 0x017cea60
void C_017cea60::sub_017cea60(int a0) { *(int*)((char*)this + 160) = a0; }

struct C_017cea70 { int sub_017cea70(void); };

// @baa 0x017cea70
int C_017cea70::sub_017cea70(void) { return *(int*)((char*)this + 164); }

struct C_017cea80 { void sub_017cea80(int a0); };

// @baa 0x017cea80
void C_017cea80::sub_017cea80(int a0) { *(int*)((char*)this + 164) = a0; }

struct C_017cea90 {
    undefined4 sub_017cea90();
};

// @baa 0x017cea90
undefined4 C_017cea90::sub_017cea90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xb4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x1c);
  }
  return 0;
}

struct C_017ceaf0 { void sub_017ceaf0(int a0); };

// @baa 0x017ceaf0
void C_017ceaf0::sub_017ceaf0(int a0) { *(int*)((char*)this + 144) = a0; }

struct C_017ceb00 {
    undefined4 sub_017ceb00();
};

// @baa 0x017ceb00
undefined4 C_017ceb00::sub_017ceb00(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x1c);
}

struct C_017cec00 { void sub_017cec00(int a0); };

// @baa 0x017cec00
void C_017cec00::sub_017cec00(int a0) { *(int*)((char*)this + 168) = a0; }

struct C_017cec40 {
    void sub_017cec40(undefined4);
};

// @baa 0x017cec40
void C_017cec40::sub_017cec40(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3c) = param_2;
  return;
}

struct C_017cecc0 { int sub_017cecc0(void); };

// @baa 0x017cecc0
int C_017cecc0::sub_017cecc0(void) { return *(int*)((char*)this + 8); }

struct C_017cecd0 { int sub_017cecd0(void); };

// @baa 0x017cecd0
int C_017cecd0::sub_017cecd0(void) { return *(int*)((char*)this + 16); }
