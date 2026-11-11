// FCollada_1860000.cpp (part 1 of 15): 62 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023e8dd0[];
struct C { void sub_01861d30(void); };

// @baa 0x01861d30
void C::sub_01861d30(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_01861d50 {
    undefined4 * sub_01861d50(byte);
};

int sub_00402660(...);
// @baa 0x01861d50
undefined4 * C_01861d50::sub_01861d50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01863300 { void sub_01863300(void); };

// @baa 0x01863300
void C_01863300::sub_01863300(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_01865250 { void sub_01865250(void); };

// @baa 0x01865250
void C_01865250::sub_01865250(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_01866220 { void sub_01866220(void); };

// @baa 0x01866220
void C_01866220::sub_01866220(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_01866240 {
    undefined4 * sub_01866240(byte);
};

// @baa 0x01866240
undefined4 * C_01866240::sub_01866240(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01866270 {
    void sub_01866270();
};

void sub_01826080(void *);
// @baa 0x01866270
void C_01866270::sub_01866270(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01866280 {
    int sub_01866280();
};

// @baa 0x01866280
int C_01866280::sub_01866280(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_01866290 {
    int sub_01866290();
};

// @baa 0x01866290
int C_01866290::sub_01866290(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_018662a0 { int sub_018662a0(void); };

// @baa 0x018662a0
int C_018662a0::sub_018662a0(void) { return *(int*)((char*)this + 8); }

struct C_018662e0 { int sub_018662e0(void); };

// @baa 0x018662e0
int C_018662e0::sub_018662e0(void) { return *(int*)((char*)this + 8); }

struct C_018663a0 {
    void sub_018663a0(int *);
};

// @baa 0x018663a0
void C_018663a0::sub_018663a0(int * param_2)
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

struct C_018663d0 {
    undefined2 * sub_018663d0();
};

extern undefined2 g_026ccbcc;
// @baa 0x018663d0
undefined2 * C_018663d0::sub_018663d0(void)
{
    int param_1 = (int)this;

  undefined2 *puVar1;
  
  puVar1 = &g_026ccbcc;
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = *(undefined2 **)(param_1 + 8);
  }
  return puVar1;
}

extern char g_027b8040[];
// @baa 0x01866810
int sub_01866810(void) { return (int)g_027b8040; }

extern char g_027b8058[];
// @baa 0x01866900
int sub_01866900(void) { return (int)g_027b8058; }

extern char g_027b8060[];
// @baa 0x01866910
int sub_01866910(void) { return (int)g_027b8060; }

struct C_01866920 { void sub_01866920(void); };

// @baa 0x01866920
void C_01866920::sub_01866920(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

void sub_01854460();
// @baa 0x01866940
void sub_01866940(void) { sub_01854460(); }

extern char g_027b8048[];
// @baa 0x01866950
int sub_01866950(void) { return (int)g_027b8048; }

extern char g_027b8050[];
// @baa 0x01866960
int sub_01866960(void) { return (int)g_027b8050; }

extern char g_027b8068[];
// @baa 0x01866970
int sub_01866970(void) { return (int)g_027b8068; }

struct C_01866980 {
    undefined4 * sub_01866980(byte);
};

// @baa 0x01866980
undefined4 * C_01866980::sub_01866980(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018669a0 {
    undefined4 * sub_018669a0();
};

int sub_01854260(void);
extern undefined4 g_023eb314;
// @baa 0x018669a0
undefined4 * C_018669a0::sub_018669a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01854260();
  *param_1 = (undefined4)((&g_023eb314));
  return param_1;
}

// @baa 0x018669c0
int sub_018669c0(void) { return (int)g_027b8058; }

struct C_01866a00 {
    undefined4 * sub_01866a00();
};

extern undefined4 g_023eb324;
// @baa 0x01866a00
undefined4 * C_01866a00::sub_01866a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01854260();
  *param_1 = (undefined4)((&g_023eb324));
  return param_1;
}

// @baa 0x01866a20
int sub_01866a20(void) { return (int)g_027b8060; }

struct C_01868ca0 {
    undefined4 sub_01868ca0(byte);
};

int sub_01867830(void);
// @baa 0x01868ca0
undefined4 C_01868ca0::sub_01868ca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01867830();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01868cc0 { void sub_01868cc0(void); };

// @baa 0x01868cc0
void C_01868cc0::sub_01868cc0(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_01869ed0 { void sub_01869ed0(void); };

// @baa 0x01869ed0
void C_01869ed0::sub_01869ed0(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_01869ef0 {
    undefined4 * sub_01869ef0(byte);
};

// @baa 0x01869ef0
undefined4 * C_01869ef0::sub_01869ef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01869f10 {
    bool sub_01869f10();
};

// @baa 0x01869f10
bool C_01869f10::sub_01869f10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_01869f20 { int sub_01869f20(void); };

// @baa 0x01869f20
int C_01869f20::sub_01869f20(void) { return *(int*)((char*)this + 4); }

struct C_0186c790 { void sub_0186c790(void); };

// @baa 0x0186c790
void C_0186c790::sub_0186c790(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_0186c7b0 {
    undefined4 * sub_0186c7b0(byte);
};

// @baa 0x0186c7b0
undefined4 * C_0186c7b0::sub_0186c7b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186c7d0 { int sub_0186c7d0(void); };

// @baa 0x0186c7d0
int C_0186c7d0::sub_0186c7d0(void) { return *(int*)((char*)this + 4); }

extern char g_027b8088[];
// @baa 0x0186d380
int sub_0186d380(void) { return (int)g_027b8088; }

struct C_0186d3b0 {
    int sub_0186d3b0();
};

// @baa 0x0186d3b0
int C_0186d3b0::sub_0186d3b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x28) != 0) {
    return *(int *)(param_1 + 0x28) + 0x30;
  }
  return param_1 + 0x40;
}

struct C_0186d7c0 { int sub_0186d7c0(void); };

// @baa 0x0186d7c0
int C_0186d7c0::sub_0186d7c0(void) { return *(int*)((char*)this + 12); }

// @baa 0x0186d9e0
int sub_0186d9e0(void) { return (int)g_027b8088; }

struct C_0186da00 {
    undefined4 sub_0186da00(byte);
};

int sub_0186d930(void);
// @baa 0x0186da00
undefined4 C_0186da00::sub_0186da00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0186d930();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186da20 {
    undefined4 sub_0186da20(byte);
};

int sub_0186d4c0(void);
// @baa 0x0186da20
undefined4 C_0186da20::sub_0186da20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0186d4c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186dce0 { char* sub_0186dce0(void); };

// @baa 0x0186dce0
char* C_0186dce0::sub_0186dce0(void) { return (char*)this + 40; }

extern char g_027b827c[];
// @baa 0x0186dcf0
int sub_0186dcf0(void) { return (int)g_027b827c; }

struct C_0186dd00 { int sub_0186dd00(void); };

// @baa 0x0186dd00
int C_0186dd00::sub_0186dd00(void) { return *(int*)((char*)this + 36); }

extern char g_027b8090[];
// @baa 0x0186dd10
int sub_0186dd10(void) { return (int)g_027b8090; }

struct C_0186e1f0 { int sub_0186e1f0(void); };

// @baa 0x0186e1f0
int C_0186e1f0::sub_0186e1f0(void) { return *(int*)((char*)this + 8); }

struct C_0186e220 {
    void sub_0186e220();
};

// @baa 0x0186e220
void C_0186e220::sub_0186e220(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0186e230 { int sub_0186e230(void); };

// @baa 0x0186e230
int C_0186e230::sub_0186e230(void) { return *(int*)((char*)this + 8); }

struct C_0186e260 {
    void sub_0186e260();
};

// @baa 0x0186e260
void C_0186e260::sub_0186e260(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

extern char g_023e4520[];
struct C_0186e2f0 { void sub_0186e2f0(void); };

// @baa 0x0186e2f0
void C_0186e2f0::sub_0186e2f0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0186e300 {
    undefined4 * sub_0186e300(byte);
};

// @baa 0x0186e300
undefined4 * C_0186e300::sub_0186e300(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186e340 {
    void sub_0186e340(int *);
};

// @baa 0x0186e340
void C_0186e340::sub_0186e340(int * param_2)
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

struct C_0186e390 {
    void sub_0186e390(int *);
};

// @baa 0x0186e390
void C_0186e390::sub_0186e390(int * param_2)
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

struct C_0186e5f0 {
    void sub_0186e5f0();
};

extern undefined4 g_023e4d38;
// @baa 0x0186e5f0
void C_0186e5f0::sub_0186e5f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

// @baa 0x0186e8a0
int sub_0186e8a0(void) { return (int)g_027b8090; }

struct C_0186e8b0 { int sub_0186e8b0(void); };

// @baa 0x0186e8b0
int C_0186e8b0::sub_0186e8b0(void) { return *(int*)((char*)this + 72); }

struct C_0186e8c0 {
    undefined4 sub_0186e8c0(byte);
};

int sub_0186e610(void);
// @baa 0x0186e8c0
undefined4 C_0186e8c0::sub_0186e8c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0186e610();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186e8e0 {
    undefined4 sub_0186e8e0(byte);
};

int sub_0186e6d0(void);
// @baa 0x0186e8e0
undefined4 C_0186e8e0::sub_0186e8e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0186e6d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186ea80 {
    undefined4 sub_0186ea80(byte);
};

int sub_0186ddb0(void);
// @baa 0x0186ea80
undefined4 C_0186ea80::sub_0186ea80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0186ddb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0186eaa0 { int sub_0186eaa0(void); };

// @baa 0x0186eaa0
int C_0186eaa0::sub_0186eaa0(void) { return *(int*)((char*)this + 60); }

struct C_0186eab0 { int sub_0186eab0(void); };

// @baa 0x0186eab0
int C_0186eab0::sub_0186eab0(void) { return *(int*)((char*)this + 36); }

extern char g_027b8098[];
// @baa 0x0186eac0
int sub_0186eac0(void) { return (int)g_027b8098; }
