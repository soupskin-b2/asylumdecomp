// FUFunctorTest.cpp (part 1 of 2): 40 functions
// Placed here by: neighbours 33, callers 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01865280(int);
};

// @baa 0x01865280
undefined4 C::sub_01865280(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + param_2 * 4);
}

struct C_01865290 {
    void sub_01865290();
};

// @baa 0x01865290
void C_01865290::sub_01865290(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_018652a0 {
    void sub_018652a0(int);
};

// @baa 0x018652a0
void C_018652a0::sub_018652a0(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return;
}

struct C_018652b0 {
    void sub_018652b0(int, int);
};

// @baa 0x018652b0
void C_018652b0::sub_018652b0(int param_2, int param_3)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = (int *)(param_1 + param_3 * 4);
  *piVar1 = *piVar1 + param_2;
  return;
}

struct C_018652d0 {
    void sub_018652d0();
};

// @baa 0x018652d0
void C_018652d0::sub_018652d0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_018652e0 {
    void sub_018652e0(int);
};

// @baa 0x018652e0
void C_018652e0::sub_018652e0(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return;
}

struct C_018652f0 {
    void sub_018652f0(int, int);
};

// @baa 0x018652f0
void C_018652f0::sub_018652f0(int param_2, int param_3)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = (int *)(param_1 + param_3 * 4);
  *piVar1 = *piVar1 + param_2;
  return;
}

struct C_01865300 {
    undefined4 * sub_01865300(byte);
};

int sub_00402660(...);
extern undefined4 g_023e8dd0;
// @baa 0x01865300
undefined4 * C_01865300::sub_01865300(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023eae64[];
struct C_01865320 { void sub_01865320(void); };

// @baa 0x01865320
void C_01865320::sub_01865320(void) { *(int*)((char*)this + 0) = (int)g_023eae64; }

extern char g_023eae78[];
struct C_01865330 { void sub_01865330(void); };

// @baa 0x01865330
void C_01865330::sub_01865330(void) { *(int*)((char*)this + 0) = (int)g_023eae78; }

extern char g_023eae8c[];
struct C_01865340 { void sub_01865340(void); };

// @baa 0x01865340
void C_01865340::sub_01865340(void) { *(int*)((char*)this + 0) = (int)g_023eae8c; }

struct C_01865350 { void sub_01865350(void); };

// @baa 0x01865350
void C_01865350::sub_01865350(void) { *(int*)((char*)this + 0) = (int)g_023eae64; }

struct C_01865360 { void sub_01865360(void); };

// @baa 0x01865360
void C_01865360::sub_01865360(void) { *(int*)((char*)this + 0) = (int)g_023eae78; }

struct C_01865370 { C_01865370* sub_01865370(void); };

// @baa 0x01865370
C_01865370* C_01865370::sub_01865370(void) { *(int*)((char*)this + 0) = (int)g_023eae64; return this; }

struct C_01865380 {
    undefined4 * sub_01865380(byte);
};

// @baa 0x01865380
undefined4 * C_01865380::sub_01865380(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae64));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018653a0 { C_018653a0* sub_018653a0(void); };

// @baa 0x018653a0
C_018653a0* C_018653a0::sub_018653a0(void) { *(int*)((char*)this + 0) = (int)g_023eae78; return this; }

struct C_018653b0 {
    undefined4 * sub_018653b0(byte);
};

// @baa 0x018653b0
undefined4 * C_018653b0::sub_018653b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae78));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018653d0 { C_018653d0* sub_018653d0(void); };

// @baa 0x018653d0
C_018653d0* C_018653d0::sub_018653d0(void) { *(int*)((char*)this + 0) = (int)g_023eae8c; return this; }

struct C_018653e0 {
    undefined4 * sub_018653e0(byte);
};

// @baa 0x018653e0
undefined4 * C_018653e0::sub_018653e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae8c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01865430 {
    undefined4 sub_01865430(int, int);
};

// @baa 0x01865430
undefined4 C_01865430::sub_01865430(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

extern char g_023eab30[];
struct C_01865450 { void sub_01865450(void); };

// @baa 0x01865450
void C_01865450::sub_01865450(void) { *(int*)((char*)this + 0) = (int)g_023eab30; }

struct C_018654c0 {
    undefined4 sub_018654c0(int, int);
};

// @baa 0x018654c0
undefined4 C_018654c0::sub_018654c0(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_018654e0 { void sub_018654e0(void); };

// @baa 0x018654e0
void C_018654e0::sub_018654e0(void) { *(int*)((char*)this + 0) = (int)g_023eae64; }

struct C_01865550 {
    undefined4 sub_01865550(int, int);
};

// @baa 0x01865550
undefined4 C_01865550::sub_01865550(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01865570 { void sub_01865570(void); };

// @baa 0x01865570
void C_01865570::sub_01865570(void) { *(int*)((char*)this + 0) = (int)g_023eae78; }

struct C_018655e0 {
    undefined4 sub_018655e0(int, int);
};

// @baa 0x018655e0
undefined4 C_018655e0::sub_018655e0(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01865600 { void sub_01865600(void); };

// @baa 0x01865600
void C_01865600::sub_01865600(void) { *(int*)((char*)this + 0) = (int)g_023eae8c; }

struct C_01865660 {
    void sub_01865660();
};

void sub_01826080(void *);
// @baa 0x01865660
void C_01865660::sub_01865660(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01865690 {
    void sub_01865690();
};

// @baa 0x01865690
void C_01865690::sub_01865690(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018656d0 {
    undefined4 sub_018656d0(int, int);
};

// @baa 0x018656d0
undefined4 C_018656d0::sub_018656d0(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_018656f0 { void sub_018656f0(void); };

// @baa 0x018656f0
void C_018656f0::sub_018656f0(void) { *(int*)((char*)this + 0) = (int)g_023eab30; }

struct C_01865760 {
    undefined4 sub_01865760(int, int);
};

// @baa 0x01865760
undefined4 C_01865760::sub_01865760(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01865780 {
    undefined4 * sub_01865780(byte);
};

// @baa 0x01865780
undefined4 * C_01865780::sub_01865780(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae64));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01865800 {
    undefined4 sub_01865800(int, int);
};

// @baa 0x01865800
undefined4 C_01865800::sub_01865800(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01865820 {
    undefined4 * sub_01865820(byte);
};

// @baa 0x01865820
undefined4 * C_01865820::sub_01865820(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae78));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01865870 {
    undefined4 * sub_01865870(byte);
};

// @baa 0x01865870
undefined4 * C_01865870::sub_01865870(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eab30));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01865890 {
    undefined4 * sub_01865890(byte);
};

// @baa 0x01865890
undefined4 * C_01865890::sub_01865890(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae64));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018658b0 {
    undefined4 * sub_018658b0(byte);
};

// @baa 0x018658b0
undefined4 * C_018658b0::sub_018658b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae78));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018658d0 {
    undefined4 * sub_018658d0(byte);
};

// @baa 0x018658d0
undefined4 * C_018658d0::sub_018658d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eae8c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018658f0 {
    undefined4 * sub_018658f0(byte);
};

// @baa 0x018658f0
undefined4 * C_018658f0::sub_018658f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eab30));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
