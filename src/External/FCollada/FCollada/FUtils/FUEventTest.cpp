// FUEventTest.cpp (part 1 of 2): 42 functions
// Placed here by: neighbours 38, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01863340();
};

// @baa 0x01863340
void C::sub_01863340(void)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_1 = 1;
  return;
}

struct C_01863350 {
    void sub_01863350();
};

// @baa 0x01863350
void C_01863350::sub_01863350(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

struct C_01863360 {
    void sub_01863360(undefined4, undefined4);
};

// @baa 0x01863360
void C_01863360::sub_01863360(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

struct C_01863390 {
    undefined4 sub_01863390();
};

// @baa 0x01863390
undefined4 C_01863390::sub_01863390(void)
{
    int param_1 = (int)this;

  if (((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 5) != '\0')) &&
     (*(char *)(param_1 + 6) != '\0')) {
    return 1;
  }
  return 0;
}

struct C_018633b0 {
    undefined4 * sub_018633b0(byte);
};

int sub_00402660(...);
extern undefined4 g_023e8dd0;
// @baa 0x018633b0
undefined4 * C_018633b0::sub_018633b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023eaaf4[];
struct C_018633d0 { void sub_018633d0(void); };

// @baa 0x018633d0
void C_018633d0::sub_018633d0(void) { *(int*)((char*)this + 0) = (int)g_023eaaf4; }

extern char g_023eab08[];
struct C_018633e0 { void sub_018633e0(void); };

// @baa 0x018633e0
void C_018633e0::sub_018633e0(void) { *(int*)((char*)this + 0) = (int)g_023eab08; }

extern char g_023eab1c[];
struct C_018633f0 { void sub_018633f0(void); };

// @baa 0x018633f0
void C_018633f0::sub_018633f0(void) { *(int*)((char*)this + 0) = (int)g_023eab1c; }

struct C_01863400 {
    undefined4 * sub_01863400(byte);
};

// @baa 0x01863400
undefined4 * C_01863400::sub_01863400(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eaaf4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863580 { C_01863580* sub_01863580(void); };

// @baa 0x01863580
C_01863580* C_01863580::sub_01863580(void) { *(int*)((char*)this + 0) = (int)g_023eaaf4; return this; }

struct C_01863590 { C_01863590* sub_01863590(void); };

// @baa 0x01863590
C_01863590* C_01863590::sub_01863590(void) { *(int*)((char*)this + 0) = (int)g_023eab1c; return this; }

struct C_018635a0 { C_018635a0* sub_018635a0(void); };

// @baa 0x018635a0
C_018635a0* C_018635a0::sub_018635a0(void) { *(int*)((char*)this + 0) = (int)g_023eab08; return this; }

extern char g_023eab30[];
struct C_018635b0 { void sub_018635b0(void); };

// @baa 0x018635b0
void C_018635b0::sub_018635b0(void) { *(int*)((char*)this + 0) = (int)g_023eab30; }

struct C_018635c0 {
    undefined4 * sub_018635c0(byte);
};

// @baa 0x018635c0
undefined4 * C_018635c0::sub_018635c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eab30));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018635e0 { C_018635e0* sub_018635e0(void); };

// @baa 0x018635e0
C_018635e0* C_018635e0::sub_018635e0(void) { *(int*)((char*)this + 0) = (int)g_023eab30; return this; }

struct C_018636a0 { int sub_018636a0(void); };

// @baa 0x018636a0
int C_018636a0::sub_018636a0(void) { return *(int*)((char*)this + 4); }

struct C_01863700 { int sub_01863700(void); };

// @baa 0x01863700
int C_01863700::sub_01863700(void) { return *(int*)((char*)this + 4); }

struct C_01863780 {
    void sub_01863780();
};

void sub_01826080(void *);
// @baa 0x01863780
void C_01863780::sub_01863780(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018637b0 {
    void sub_018637b0();
};

// @baa 0x018637b0
void C_018637b0::sub_018637b0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018637e0 {
    void sub_018637e0();
};

// @baa 0x018637e0
void C_018637e0::sub_018637e0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01863820 {
    undefined4 sub_01863820(int, int);
};

// @baa 0x01863820
undefined4 C_01863820::sub_01863820(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01863840 { void sub_01863840(void); };

// @baa 0x01863840
void C_01863840::sub_01863840(void) { *(int*)((char*)this + 0) = (int)g_023eab30; }

struct C_018638a0 { void sub_018638a0(void); };

// @baa 0x018638a0
void C_018638a0::sub_018638a0(void) { *(int*)((char*)this + 0) = (int)g_023eaaf4; }

struct C_018638c0 {
    undefined4 sub_018638c0(int, int);
};

// @baa 0x018638c0
undefined4 C_018638c0::sub_018638c0(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_018638e0 {
    undefined4 * sub_018638e0(byte);
};

// @baa 0x018638e0
undefined4 * C_018638e0::sub_018638e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eaaf4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863960 {
    undefined4 sub_01863960(int, int);
};

// @baa 0x01863960
undefined4 C_01863960::sub_01863960(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01863980 { void sub_01863980(void); };

// @baa 0x01863980
void C_01863980::sub_01863980(void) { *(int*)((char*)this + 0) = (int)g_023eab30; }

struct C_018639e0 { void sub_018639e0(void); };

// @baa 0x018639e0
void C_018639e0::sub_018639e0(void) { *(int*)((char*)this + 0) = (int)g_023eab1c; }

struct C_01863a00 {
    undefined4 sub_01863a00(int, int);
};

// @baa 0x01863a00
undefined4 C_01863a00::sub_01863a00(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01863a70 {
    undefined4 * sub_01863a70(byte);
};

// @baa 0x01863a70
undefined4 * C_01863a70::sub_01863a70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eab30));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863a90 {
    undefined4 * sub_01863a90(byte);
};

// @baa 0x01863a90
undefined4 * C_01863a90::sub_01863a90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eab30));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863bc0 { void sub_01863bc0(void); };

// @baa 0x01863bc0
void C_01863bc0::sub_01863bc0(void) { *(int*)((char*)this + 0) = (int)g_023eab08; }

struct C_01863be0 {
    undefined4 sub_01863be0(int, int);
};

// @baa 0x01863be0
undefined4 C_01863be0::sub_01863be0(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_01863c50 { int sub_01863c50(void); };

// @baa 0x01863c50
int C_01863c50::sub_01863c50(void) { return *(int*)((char*)this + 4); }

struct C_01863cc0 {
    void sub_01863cc0();
};

// @baa 0x01863cc0
void C_01863cc0::sub_01863cc0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01864a10 {
    undefined4 sub_01864a10(byte);
};

int sub_01864860(void);
// @baa 0x01864a10
undefined4 C_01864a10::sub_01864a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01864860();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01864a30 {
    undefined4 sub_01864a30(byte);
};

int sub_018641c0(void);
// @baa 0x01864a30
undefined4 C_01864a30::sub_01864a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018641c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01864980();
// @baa 0x01864ae0
void sub_01864ae0(void) { sub_01864980(); }

void sub_01864740();
// @baa 0x01864af0
void sub_01864af0(void) { sub_01864740(); }

void sub_018647d0();
// @baa 0x01864b00
void sub_01864b00(void) { sub_018647d0(); }

// @baa 0x01864b10
void sub_01864b10(void) { sub_01864980(); }

void sub_018646b0();
// @baa 0x01864b20
void sub_01864b20(void) { sub_018646b0(); }
