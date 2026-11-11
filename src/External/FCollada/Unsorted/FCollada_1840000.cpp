// FCollada_1840000.cpp (part 1 of 21): 191 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_01840060(void); };

// @baa 0x01840060
int C::sub_01840060(void) { return *(int*)((char*)this + 108); }

struct C_01840070 { char* sub_01840070(void); };

// @baa 0x01840070
char* C_01840070::sub_01840070(void) { return (char*)this + 208; }

struct C_018400c0 {
    void sub_018400c0(int *);
};

// @baa 0x018400c0
void C_018400c0::sub_018400c0(int * param_2)
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

struct C_01840110 {
    void sub_01840110(int *);
};

// @baa 0x01840110
void C_01840110::sub_01840110(int * param_2)
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

struct C_018407c0 {
    void sub_018407c0();
};

void sub_01826080(void *);
extern undefined4 g_023e4d30;
// @baa 0x018407c0
void C_018407c0::sub_018407c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01840de0 {
    undefined4 sub_01840de0(byte);
};

int sub_00402660(...);
int sub_01840ae0(void);
// @baa 0x01840de0
undefined4 C_01840de0::sub_01840de0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01840ae0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01840e00 {
    undefined4 sub_01840e00(byte);
};

int sub_01840830(void);
// @baa 0x01840e00
undefined4 C_01840e00::sub_01840e00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01840830();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e48[];
// @baa 0x018410d0
int sub_018410d0(void) { return (int)g_027b7e48; }

// @baa 0x018410e0
int sub_018410e0(void) { return 10; }

struct C_01841100 {
    undefined4 sub_01841100(byte);
};

int sub_01840eb0(void);
// @baa 0x01841100
undefined4 C_01841100::sub_01841100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01840eb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01841180 {
    undefined4 sub_01841180(byte);
};

int sub_0183ed00(void);
// @baa 0x01841180
undefined4 C_01841180::sub_01841180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183ed00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01841b30 { int sub_01841b30(void); };

// @baa 0x01841b30
int C_01841b30::sub_01841b30(void) { return *(int*)((char*)this + 8); }

struct C_01841b60 {
    void sub_01841b60();
};

// @baa 0x01841b60
void C_01841b60::sub_01841b60(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01841b70 { int sub_01841b70(void); };

// @baa 0x01841b70
int C_01841b70::sub_01841b70(void) { return *(int*)((char*)this + 8); }

struct C_01841ba0 {
    void sub_01841ba0();
};

// @baa 0x01841ba0
void C_01841ba0::sub_01841ba0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01841c50 { void sub_01841c50(int a0); };

// @baa 0x01841c50
void C_01841c50::sub_01841c50(int a0) { *(int*)((char*)this + 72) = a0; }

struct C_01841c60 { char* sub_01841c60(void); };

// @baa 0x01841c60
char* C_01841c60::sub_01841c60(void) { return (char*)this + 80; }

struct C_01841c90 {
    void sub_01841c90(int *);
};

// @baa 0x01841c90
void C_01841c90::sub_01841c90(int * param_2)
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

struct C_01841ce0 {
    void sub_01841ce0(int *);
};

// @baa 0x01841ce0
void C_01841ce0::sub_01841ce0(int * param_2)
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

extern char g_027b7e90[];
// @baa 0x018421a0
int sub_018421a0(void) { return (int)g_027b7e90; }

// @baa 0x018421b0
int sub_018421b0(void) { return 7; }

struct C_018421c0 {
    undefined4 sub_018421c0(byte);
};

int sub_01841fc0(void);
// @baa 0x018421c0
undefined4 C_018421c0::sub_018421c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01841fc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018421e0 {
    undefined4 sub_018421e0(byte);
};

int sub_01842080(void);
// @baa 0x018421e0
undefined4 C_018421e0::sub_018421e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01842080();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01842320 {
    undefined4 sub_01842320(byte);
};

int sub_01841680(void);
// @baa 0x01842320
undefined4 C_01842320::sub_01842320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01841680();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018427d0 {
    bool sub_018427d0(int);
};

// @baa 0x018427d0
bool C_018427d0::sub_018427d0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_018427e0 { int sub_018427e0(void); };

// @baa 0x018427e0
int C_018427e0::sub_018427e0(void) { return *(int*)((char*)this + 4); }

struct C_018427f0 { int sub_018427f0(void); };

// @baa 0x018427f0
int C_018427f0::sub_018427f0(void) { return *(int*)((char*)this + 4); }

struct C_01842800 { int sub_01842800(void); };

// @baa 0x01842800
int C_01842800::sub_01842800(void) { return *(int*)((char*)this + 4); }

struct C_01842810 { int sub_01842810(void); };

// @baa 0x01842810
int C_01842810::sub_01842810(void) { return *(int*)((char*)this + 4); }

struct C_01842870 {
    undefined4 sub_01842870(byte);
};

int sub_01842740(void);
// @baa 0x01842870
undefined4 C_01842870::sub_01842870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01842740();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01842940 {
    undefined4 sub_01842940(byte);
};

int sub_018428e0(void);
// @baa 0x01842940
undefined4 C_01842940::sub_01842940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018428e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e98[];
// @baa 0x01842b00
int sub_01842b00(void) { return (int)g_027b7e98; }

// @baa 0x01842b10
int sub_01842b10(void) { return 6; }

struct C_01842b30 {
    undefined4 sub_01842b30(byte);
};

int sub_01842670(void);
// @baa 0x01842b30
undefined4 C_01842b30::sub_01842b30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01842670();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01842be0 { char* sub_01842be0(void); };

// @baa 0x01842be0
char* C_01842be0::sub_01842be0(void) { return (char*)this + 88; }

struct C_01842cb0 {
    bool sub_01842cb0();
};

// @baa 0x01842cb0
bool C_01842cb0::sub_01842cb0(void)
{
    int param_1 = (int)this;

  return 1 < *(uint *)(param_1 + 0x5c);
}

struct C_018430c0 { char* sub_018430c0(void); };

// @baa 0x018430c0
char* C_018430c0::sub_018430c0(void) { return (char*)this + 4; }

struct C_018430e0 {
    void sub_018430e0();
};

extern undefined4 g_023e4d38;
// @baa 0x018430e0
void C_018430e0::sub_018430e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843100 {
    void sub_01843100();
};

// @baa 0x01843100
void C_01843100::sub_01843100(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b7ea0[];
// @baa 0x01843120
int sub_01843120(void) { return (int)g_027b7ea0; }

// @baa 0x01843130
int sub_01843130(void) { return 0; }

struct C_01843320 {
    uint sub_01843320(uint);
};

// @baa 0x01843320
uint C_01843320::sub_01843320(uint param_2)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) & param_2;
}

struct C_01843330 {
    void sub_01843330();
};

// @baa 0x01843330
void C_01843330::sub_01843330(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffdf;
  return;
}

struct C_01843340 {
    void sub_01843340();
};

// @baa 0x01843340
void C_01843340::sub_01843340(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffbf;
  return;
}

struct C_01843460 {
    undefined4 sub_01843460();
};

// @baa 0x01843460
undefined4 C_01843460::sub_01843460(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((1 < *(uint *)(param_1 + 0x2c)) || (1 < *(uint *)(param_1 + 0x3c))) ||
      (1 < *(uint *)(param_1 + 0x4c))) ||
     ((1 < *(uint *)(param_1 + 0x5c) || (1 < *(uint *)(param_1 + 0x6c))))) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01843c10 { int sub_01843c10(void); };

// @baa 0x01843c10
int C_01843c10::sub_01843c10(void) { return *(int*)((char*)this + 8); }

struct C_01843c70 {
    void sub_01843c70();
};

// @baa 0x01843c70
void C_01843c70::sub_01843c70(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01843d40 {
    void sub_01843d40();
};

// @baa 0x01843d40
void C_01843d40::sub_01843d40(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843d60 {
    void sub_01843d60();
};

// @baa 0x01843d60
void C_01843d60::sub_01843d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843d80 {
    void sub_01843d80();
};

// @baa 0x01843d80
void C_01843d80::sub_01843d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843da0 {
    void sub_01843da0();
};

// @baa 0x01843da0
void C_01843da0::sub_01843da0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843dc0 {
    void sub_01843dc0();
};

// @baa 0x01843dc0
void C_01843dc0::sub_01843dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843de0 {
    void sub_01843de0();
};

// @baa 0x01843de0
void C_01843de0::sub_01843de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843e00 {
    void sub_01843e00();
};

// @baa 0x01843e00
void C_01843e00::sub_01843e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843e20 {
    void sub_01843e20();
};

// @baa 0x01843e20
void C_01843e20::sub_01843e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843e40 {
    void sub_01843e40();
};

// @baa 0x01843e40
void C_01843e40::sub_01843e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01843e80 {
    void sub_01843e80(int *);
};

// @baa 0x01843e80
void C_01843e80::sub_01843e80(int * param_2)
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

extern char g_027b7eb0[];
// @baa 0x01843ef0
int sub_01843ef0(void) { return (int)g_027b7eb0; }

struct C_018442f0 {
    undefined4 sub_018442f0(byte);
};

int sub_01843f00(void);
// @baa 0x018442f0
undefined4 C_018442f0::sub_018442f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01843f00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ea8[];
// @baa 0x01844310
int sub_01844310(void) { return (int)g_027b7ea8; }

struct C_01844320 {
    undefined4 sub_01844320(byte);
};

int sub_01843390(void);
// @baa 0x01844320
undefined4 C_01844320::sub_01844320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01843390();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01844400 {
    undefined4 sub_01844400(byte);
};

int sub_01843490(void);
// @baa 0x01844400
undefined4 C_01844400::sub_01844400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01843490();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7f10[];
// @baa 0x018446f0
int sub_018446f0(void) { return (int)g_027b7f10; }

struct C_01844700 { int sub_01844700(void); };

// @baa 0x01844700
int C_01844700::sub_01844700(void) { return *(int*)((char*)this + 40); }

extern char g_027b7eb8[];
// @baa 0x01844710
int sub_01844710(void) { return (int)g_027b7eb8; }

struct C_01844720 { int sub_01844720(void); };

// @baa 0x01844720
int C_01844720::sub_01844720(void) { return *(int*)((char*)this + 96); }

void sub_0184a950();
// @baa 0x01844730
void sub_01844730(void) { sub_0184a950(); }

struct C_01844dd0 { int sub_01844dd0(void); };

// @baa 0x01844dd0
int C_01844dd0::sub_01844dd0(void) { return *(int*)((char*)this + 8); }

struct C_01844e00 {
    void sub_01844e00();
};

// @baa 0x01844e00
void C_01844e00::sub_01844e00(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

void sub_01827a90();
// @baa 0x01844e70
void sub_01844e70(void) { sub_01827a90(); }

struct C_01844e80 { char* sub_01844e80(void); };

// @baa 0x01844e80
char* C_01844e80::sub_01844e80(void) { return (char*)this + 100; }

struct C_01844eb0 {
    void sub_01844eb0(int *);
};

// @baa 0x01844eb0
void C_01844eb0::sub_01844eb0(int * param_2)
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

// @baa 0x01845230
int sub_01845230(void) { return (int)g_027b7eb8; }

// @baa 0x01845240
int sub_01845240(void) { return 1; }

struct C_01845260 {
    undefined4 sub_01845260(byte);
};

int sub_01845080(void);
// @baa 0x01845260
undefined4 C_01845260::sub_01845260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845080();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01845490 { int sub_01845490(void); };

// @baa 0x01845490
int C_01845490::sub_01845490(void) { return *(int*)((char*)this + 36); }

extern char g_027b7ec8[];
// @baa 0x018454a0
int sub_018454a0(void) { return (int)g_027b7ec8; }

struct C_018454e0 {
    undefined4 * sub_018454e0(byte);
};

int sub_0181b5f0(void);
extern undefined4 g_023e5fb8;
// @baa 0x018454e0
undefined4 * C_018454e0::sub_018454e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5fb8));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ed8[];
// @baa 0x01845510
int sub_01845510(void) { return (int)g_027b7ed8; }

struct C_01845570 {
    undefined4 * sub_01845570(byte);
};

extern undefined4 g_023e5fc8;
// @baa 0x01845570
undefined4 * C_01845570::sub_01845570(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5fc8));
  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ed0[];
// @baa 0x018455a0
int sub_018455a0(void) { return (int)g_027b7ed0; }

struct C_018455e0 {
    undefined4 * sub_018455e0(byte);
};

int sub_0181b640(void);
extern undefined4 g_023e5fd8;
// @baa 0x018455e0
undefined4 * C_018455e0::sub_018455e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5fd8));
  sub_0181b640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ee0[];
// @baa 0x01845610
int sub_01845610(void) { return (int)g_027b7ee0; }

struct C_01845670 { C_01845670* sub_01845670(void); };

// @baa 0x01845670
C_01845670* C_01845670::sub_01845670(void) { return this; }

struct C_01845680 {
    undefined4 * sub_01845680(byte);
};

int sub_0181b630(void);
extern undefined4 g_023e5fe8;
// @baa 0x01845680
undefined4 * C_01845680::sub_01845680(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5fe8));
  sub_0181b630();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ee8[];
// @baa 0x018456b0
int sub_018456b0(void) { return (int)g_027b7ee8; }

struct C_01845740 {
    undefined4 * sub_01845740(byte);
};

int sub_0181b650(void);
extern undefined4 g_023e5ff8;
// @baa 0x01845740
undefined4 * C_01845740::sub_01845740(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5ff8));
  sub_0181b650();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ef0[];
// @baa 0x01845770
int sub_01845770(void) { return (int)g_027b7ef0; }

struct C_018457d0 {
    undefined4 * sub_018457d0(byte);
};

int sub_0181b660(void);
extern undefined4 g_023e6008;
// @baa 0x018457d0
undefined4 * C_018457d0::sub_018457d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e6008));
  sub_0181b660();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01845830 {
    void sub_01845830();
};

// @baa 0x01845830
void C_01845830::sub_01845830(void)
{
    int param_1 = (int)this;

  uint *puVar1;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x24) + 0x18);
    *puVar1 = *puVar1 | 0x80;
  }
  return;
}

struct C_018459d0 {
    undefined4 sub_018459d0(undefined4);
};

int sub_0184c430(...);
// @baa 0x018459d0
undefined4 C_018459d0::sub_018459d0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_0184c430(param_2,param_1 + 0x48);
  return param_2;
}

struct C_01845b60 {
    undefined4 sub_01845b60(undefined4);
};

int sub_0184c730(...);
// @baa 0x01845b60
undefined4 C_01845b60::sub_01845b60(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_0184c730(param_2,param_1 + 0x48);
  return param_2;
}

struct C_01845b80 {
    undefined4 sub_01845b80(undefined4);
};

int sub_0184c760(...);
// @baa 0x01845b80
undefined4 C_01845b80::sub_01845b80(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_0184c760(param_2,param_1 + 0x48,param_1 + 0x58,param_1 + 0x68);
  return param_2;
}

struct C_018468b0 { char* sub_018468b0(void); };

// @baa 0x018468b0
char* C_018468b0::sub_018468b0(void) { return (char*)this + 16; }

struct C_018468c0 { char* sub_018468c0(void); };

// @baa 0x018468c0
char* C_018468c0::sub_018468c0(void) { return (char*)this + 16; }

struct C_018468d0 { char* sub_018468d0(void); };

// @baa 0x018468d0
char* C_018468d0::sub_018468d0(void) { return (char*)this + 16; }

struct C_018468e0 { char* sub_018468e0(void); };

// @baa 0x018468e0
char* C_018468e0::sub_018468e0(void) { return (char*)this + 16; }

struct C_018468f0 { char* sub_018468f0(void); };

// @baa 0x018468f0
char* C_018468f0::sub_018468f0(void) { return (char*)this + 16; }

struct C_01846900 {
    void sub_01846900();
};

// @baa 0x01846900
void C_01846900::sub_01846900(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b7ec0[];
// @baa 0x01846920
int sub_01846920(void) { return (int)g_027b7ec0; }

// @baa 0x01846930
int sub_01846930(void) { return (int)g_027b7ec8; }

// @baa 0x01846940
int sub_01846940(void) { return 0; }

// @baa 0x01846950
int sub_01846950(void) { return (int)g_027b7ed0; }

// @baa 0x01846960
int sub_01846960(void) { return 1; }

// @baa 0x01846970
int sub_01846970(void) { return (int)g_027b7ed8; }

// @baa 0x01846980
int sub_01846980(void) { return 2; }

// @baa 0x01846990
int sub_01846990(void) { return (int)g_027b7ee0; }

// @baa 0x018469a0
int sub_018469a0(void) { return 3; }

// @baa 0x018469d0
int sub_018469d0(void) { return (int)g_027b7ee8; }

// @baa 0x018469e0
int sub_018469e0(void) { return 4; }

// @baa 0x018469f0
int sub_018469f0(void) { return (int)g_027b7ef0; }

// @baa 0x01846a00
int sub_01846a00(void) { return 5; }

struct C_01846a60 {
    undefined4 sub_01846a60(byte);
};

int sub_01845ca0(void);
// @baa 0x01846a60
undefined4 C_01846a60::sub_01846a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845ca0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01846a80 {
    undefined4 sub_01846a80(byte);
};

int sub_01845d10(void);
// @baa 0x01846a80
undefined4 C_01846a80::sub_01846a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845d10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01846aa0 {
    undefined4 sub_01846aa0(byte);
};

int sub_01845d70(void);
// @baa 0x01846aa0
undefined4 C_01846aa0::sub_01846aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845d70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01846ac0 {
    undefined4 sub_01846ac0(byte);
};

int sub_01845dd0(void);
// @baa 0x01846ac0
undefined4 C_01846ac0::sub_01846ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845dd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01846ae0 {
    undefined4 sub_01846ae0(byte);
};

int sub_01845e30(void);
// @baa 0x01846ae0
undefined4 C_01846ae0::sub_01846ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845e30();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01846b00 {
    undefined4 sub_01846b00(byte);
};

int sub_01845e90(void);
// @baa 0x01846b00
undefined4 C_01846b00::sub_01846b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845e90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01846b20 {
    undefined4 sub_01846b20(byte);
};

int sub_01845ef0(void);
// @baa 0x01846b20
undefined4 C_01846b20::sub_01846b20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01845ef0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

int sub_01846d60(void);
// @baa 0x01846f70
undefined4 sub_01846f70(void)
{
  int iVar1;
  
  iVar1 = sub_01846d60();
  return *(undefined4 *)(iVar1 + 8);
}

// @baa 0x01846f80
undefined4 sub_01846f80(void)
{
  int iVar1;
  
  iVar1 = sub_01846d60();
  return *(undefined4 *)(iVar1 + 4);
}

struct C_01847100 {
    bool sub_01847100(int);
};

// @baa 0x01847100
bool C_01847100::sub_01847100(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01847110 { int sub_01847110(void); };

// @baa 0x01847110
int C_01847110::sub_01847110(void) { return *(int*)((char*)this + 4); }

extern char g_023e61ac[];
struct C_01847180 { void sub_01847180(void); };

// @baa 0x01847180
void C_01847180::sub_01847180(void) { *(int*)((char*)this + 0) = (int)g_023e61ac; }

struct C_01847190 {
    undefined4 sub_01847190(byte);
};

int sub_01847070(void);
// @baa 0x01847190
undefined4 C_01847190::sub_01847190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01847070();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018471b0 {
    undefined4 * sub_018471b0(byte);
};

// @baa 0x018471b0
undefined4 * C_018471b0::sub_018471b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e61ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018471f0 { void sub_018471f0(void); };

// @baa 0x018471f0
void C_018471f0::sub_018471f0(void) { *(int*)((char*)this + 0) = (int)g_023e61ac; }

extern char g_023e4520[];
struct C_01847220 { void sub_01847220(void); };

// @baa 0x01847220
void C_01847220::sub_01847220(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01847230 {
    undefined4 * sub_01847230(byte);
};

// @baa 0x01847230
undefined4 * C_01847230::sub_01847230(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e61ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01847250 {
    undefined4 * sub_01847250(byte);
};

// @baa 0x01847250
undefined4 * C_01847250::sub_01847250(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ef8[];
// @baa 0x01847270
int sub_01847270(void) { return (int)g_027b7ef8; }

struct C_018472d0 {
    undefined4 sub_018472d0(byte);
};

int sub_01846c30(void);
// @baa 0x018472d0
undefined4 C_018472d0::sub_018472d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01846c30();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01847320 {
    void sub_01847320(undefined4);
};

// @baa 0x01847320
void C_01847320::sub_01847320(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

struct C_01847330 {
    void sub_01847330(undefined4);
};

// @baa 0x01847330
void C_01847330::sub_01847330(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}

struct C_01847340 {
    void sub_01847340(undefined4);
};

// @baa 0x01847340
void C_01847340::sub_01847340(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}

struct C_01848e70 {
    undefined4 * sub_01848e70();
};

void * sub_01826070(size_t);
// @baa 0x01848e70
undefined4 * C_01848e70::sub_01848e70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)(sub_01826070(0x18));
  *param_1 = (undefined4)(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return param_1;
}

extern char g_027b7f00[];
// @baa 0x01849020
int sub_01849020(void) { return (int)g_027b7f00; }

struct C_01849030 {
    undefined4 sub_01849030(byte);
};

int sub_01848d10(void);
// @baa 0x01849030
undefined4 C_01849030::sub_01849030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01848d10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01849050 {
    undefined4 * sub_01849050();
};

// @baa 0x01849050
undefined4 * C_01849050::sub_01849050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)(sub_01826070(0x18));
  *param_1 = (undefined4)(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return param_1;
}

struct C_018490d0 {
    undefined4 sub_018490d0(byte);
};

int sub_01847750(void);
// @baa 0x018490d0
undefined4 C_018490d0::sub_018490d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01847750();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01849500 {
    void sub_01849500(int);
};

int sub_018260a0(...);
// @baa 0x01849500
void C_01849500::sub_01849500(int param_2)
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

struct C_01849600 { int sub_01849600(void); };

// @baa 0x01849600
int C_01849600::sub_01849600(void) { return *(int*)((char*)this + 4); }

struct C_01849610 { int sub_01849610(void); };

// @baa 0x01849610
int C_01849610::sub_01849610(void) { return *(int*)((char*)this + 4); }

struct C_01849620 {
    void sub_01849620(int);
};

// @baa 0x01849620
void C_01849620::sub_01849620(int param_2)
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

struct C_01849650 {
    undefined4 sub_01849650(byte);
};

int sub_01849430(void);
// @baa 0x01849650
undefined4 C_01849650::sub_01849650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01849430();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01849670 {
    undefined4 sub_01849670(byte);
};

int sub_01849530(void);
// @baa 0x01849670
undefined4 C_01849670::sub_01849670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01849530();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01849690 {
    bool sub_01849690();
};

// @baa 0x01849690
bool C_01849690::sub_01849690(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x70) != 0;
}

struct C_018496a0 { int sub_018496a0(void); };

// @baa 0x018496a0
int C_018496a0::sub_018496a0(void) { return *(int*)((char*)this + 112); }

extern char g_027b7f08[];
// @baa 0x018496b0
int sub_018496b0(void) { return (int)g_027b7f08; }

// @baa 0x018496c0
int sub_018496c0(void) { return 8; }

struct C_018497d0 {
    undefined4 sub_018497d0(byte);
};

int sub_01849150(void);
// @baa 0x018497d0
undefined4 C_018497d0::sub_018497d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01849150();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018497f0 { int sub_018497f0(void); };

// @baa 0x018497f0
int C_018497f0::sub_018497f0(void) { return *(int*)((char*)this + 72); }

struct C_01849800 { int sub_01849800(void); };

// @baa 0x01849800
int C_01849800::sub_01849800(void) { return *(int*)((char*)this + 76); }

struct C_01849810 { int sub_01849810(void); };

// @baa 0x01849810
int C_01849810::sub_01849810(void) { return *(int*)((char*)this + 40); }

struct C_01849820 {
    void sub_01849820(undefined4);
};

// @baa 0x01849820
void C_01849820::sub_01849820(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}

struct C_01849830 {
    void sub_01849830(undefined4);
};

// @baa 0x01849830
void C_01849830::sub_01849830(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}

struct C_01849840 {
    void sub_01849840(undefined4);
};

// @baa 0x01849840
void C_01849840::sub_01849840(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}

struct C_0184a910 { int sub_0184a910(void); };

// @baa 0x0184a910
int C_0184a910::sub_0184a910(void) { return *(int*)((char*)this + 44); }

struct C_0184b280 {
    void sub_0184b280();
};

// @baa 0x0184b280
void C_0184b280::sub_0184b280(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

// @baa 0x0184b2a0
int sub_0184b2a0(void) { return (int)g_027b7f10; }

// @baa 0x0184b2b0
int sub_0184b2b0(void) { return 0; }

struct C_0184b320 {
    undefined4 sub_0184b320(byte);
};

int sub_0184aa60(void);
// @baa 0x0184b320
undefined4 C_0184b320::sub_0184b320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184aa60();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0184d0a0 {
    int sub_0184d0a0(int);
};

// @baa 0x0184d0a0
int C_0184d0a0::sub_0184d0a0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

struct C_0184d0b0 { char* sub_0184d0b0(void); };

// @baa 0x0184d0b0
char* C_0184d0b0::sub_0184d0b0(void) { return (char*)this + 48; }

struct C_0184d0f0 { C_0184d0f0* sub_0184d0f0(void); };

// @baa 0x0184d0f0
C_0184d0f0* C_0184d0f0::sub_0184d0f0(void) { return this; }

// @baa 0x0184d100
void sub_0184d100(void) {  }

void sub_0184daa0();
// @baa 0x0184e240
void sub_0184e240(void) { sub_0184daa0(); }

struct C_0184e610 { int sub_0184e610(void); };

// @baa 0x0184e610
int C_0184e610::sub_0184e610(void) { return *(int*)((char*)this + 4); }

struct C_0184e620 { int sub_0184e620(void); };

// @baa 0x0184e620
int C_0184e620::sub_0184e620(void) { return *(int*)((char*)this + 4); }

struct C_0184e630 { int sub_0184e630(void); };

// @baa 0x0184e630
int C_0184e630::sub_0184e630(void) { return *(int*)((char*)this + 4); }

struct C_0184e640 {
    void sub_0184e640(int);
};

// @baa 0x0184e640
void C_0184e640::sub_0184e640(int param_2)
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

struct C_0184e740 { int sub_0184e740(void); };

// @baa 0x0184e740
int C_0184e740::sub_0184e740(void) { return *(int*)((char*)this + 4); }

struct C_0184e750 { int sub_0184e750(void); };

// @baa 0x0184e750
int C_0184e750::sub_0184e750(void) { return *(int*)((char*)this + 4); }

struct C_0184e760 { int sub_0184e760(void); };

// @baa 0x0184e760
int C_0184e760::sub_0184e760(void) { return *(int*)((char*)this + 4); }

struct C_0184e770 { int sub_0184e770(void); };

// @baa 0x0184e770
int C_0184e770::sub_0184e770(void) { return *(int*)((char*)this + 4); }

struct C_0184e780 {
    void sub_0184e780(int);
};

// @baa 0x0184e780
void C_0184e780::sub_0184e780(int param_2)
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

struct C_0184e7b0 { int sub_0184e7b0(void); };

// @baa 0x0184e7b0
int C_0184e7b0::sub_0184e7b0(void) { return *(int*)((char*)this + 4); }

struct C_0184e7c0 { int sub_0184e7c0(void); };

// @baa 0x0184e7c0
int C_0184e7c0::sub_0184e7c0(void) { return *(int*)((char*)this + 4); }

struct C_0184e7d0 {
    undefined4 sub_0184e7d0(byte);
};

int sub_0184e540(void);
// @baa 0x0184e7d0
undefined4 C_0184e7d0::sub_0184e7d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184e540();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0184e7f0 {
    undefined4 sub_0184e7f0(byte);
};

int sub_0184e670(void);
// @baa 0x0184e7f0
undefined4 C_0184e7f0::sub_0184e7f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184e670();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0184e810 { int sub_0184e810(void); };

// @baa 0x0184e810
int C_0184e810::sub_0184e810(void) { return *(int*)((char*)this + 52); }

struct C_0184e820 { int sub_0184e820(void); };

// @baa 0x0184e820
int C_0184e820::sub_0184e820(void) { return *(int*)((char*)this + 52); }

extern char g_027b7f7c[];
// @baa 0x0184e830
int sub_0184e830(void) { return (int)g_027b7f7c; }

// @baa 0x0184e840
int sub_0184e840(void) { return 9; }

struct C_0184e950 {
    undefined4 sub_0184e950(byte);
};

int sub_0184e270(void);
// @baa 0x0184e950
undefined4 C_0184e950::sub_0184e950(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184e270();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0184e970 { char* sub_0184e970(void); };

// @baa 0x0184e970
char* C_0184e970::sub_0184e970(void) { return (char*)this + 68; }

extern char g_027b7f84[];
// @baa 0x0184e980
int sub_0184e980(void) { return (int)g_027b7f84; }

extern char g_027b7f90[];
// @baa 0x0184e990
int sub_0184e990(void) { return (int)g_027b7f90; }

struct C_0184f150 { int sub_0184f150(void); };

// @baa 0x0184f150
int C_0184f150::sub_0184f150(void) { return *(int*)((char*)this + 0); }

struct C_0184f160 { char* sub_0184f160(void); };

// @baa 0x0184f160
char* C_0184f160::sub_0184f160(void) { return (char*)this + 80; }

extern char g_00400000[];
// @baa 0x0184f170
int sub_0184f170(void) { return (int)g_00400000; }
