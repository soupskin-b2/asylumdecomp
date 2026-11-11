// FCollada_1820000.cpp (part 1 of 6): 181 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined2 * sub_018200f0();
};

extern undefined2 g_026ccbcc;
// @baa 0x018200f0
undefined2 * C::sub_018200f0(void)
{
    int param_1 = (int)this;

  undefined2 *puVar1;
  
  puVar1 = &g_026ccbcc;
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar1 = *(undefined2 **)(param_1 + 0x44);
  }
  return puVar1;
}

extern char g_023e4c7c[];
struct C_01821800 { void sub_01821800(void); };

// @baa 0x01821800
void C_01821800::sub_01821800(void) { *(int*)((char*)this + 0) = (int)g_023e4c7c; }

struct C_01821870 {
    undefined4 * sub_01821870(byte);
};

int sub_00402660(...);
// @baa 0x01821870
undefined4 * C_01821870::sub_01821870(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4c7c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018218f0 {
    bool sub_018218f0();
};

// @baa 0x018218f0
bool C_018218f0::sub_018218f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01821920 {
    void sub_01821920();
};

void sub_01826080(void *);
// @baa 0x01821920
void C_01821920::sub_01821920(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01821930 { char* sub_01821930(void); };

// @baa 0x01821930
char* C_01821930::sub_01821930(void) { return (char*)this + 4; }

struct C_01821940 { char* sub_01821940(void); };

// @baa 0x01821940
char* C_01821940::sub_01821940(void) { return (char*)this + 4; }

struct C_01821950 { char* sub_01821950(void); };

// @baa 0x01821950
char* C_01821950::sub_01821950(void) { return (char*)this + 4; }

struct C_01821960 { int sub_01821960(void); };

// @baa 0x01821960
int C_01821960::sub_01821960(void) { return *(int*)((char*)this + 8); }

struct C_01821990 {
    void sub_01821990();
};

// @baa 0x01821990
void C_01821990::sub_01821990(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018219a0 { char* sub_018219a0(void); };

// @baa 0x018219a0
char* C_018219a0::sub_018219a0(void) { return (char*)this + 4; }

struct C_018219b0 { int sub_018219b0(void); };

// @baa 0x018219b0
int C_018219b0::sub_018219b0(void) { return *(int*)((char*)this + 8); }

struct C_018219c0 {
    bool sub_018219c0();
};

// @baa 0x018219c0
bool C_018219c0::sub_018219c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018219f0 {
    void sub_018219f0();
};

// @baa 0x018219f0
void C_018219f0::sub_018219f0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01821a00 { int sub_01821a00(void); };

// @baa 0x01821a00
int C_01821a00::sub_01821a00(void) { return *(int*)((char*)this + 8); }

struct C_01821a30 {
    void sub_01821a30();
};

// @baa 0x01821a30
void C_01821a30::sub_01821a30(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01821b90 { int sub_01821b90(void); };

// @baa 0x01821b90
int C_01821b90::sub_01821b90(void) { return *(int*)((char*)this + 4); }

struct C_01821ba0 {
    void sub_01821ba0(int);
};

int sub_018260a0(...);
// @baa 0x01821ba0
void C_01821ba0::sub_01821ba0(int param_2)
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

struct C_01821c30 {
    bool sub_01821c30(int);
};

// @baa 0x01821c30
bool C_01821c30::sub_01821c30(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01821c80 {
    undefined4 sub_01821c80(byte);
};

int sub_01821ac0(void);
// @baa 0x01821c80
undefined4 C_01821c80::sub_01821c80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01821ac0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01821ca0 {
    undefined4 sub_01821ca0(byte);
};

int sub_01821bd0(void);
// @baa 0x01821ca0
undefined4 C_01821ca0::sub_01821ca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01821bd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01821cc0 { C_01821cc0* sub_01821cc0(void); };

// @baa 0x01821cc0
C_01821cc0* C_01821cc0::sub_01821cc0(void) { *(int*)((char*)this + 0) = (int)g_023e4c7c; return this; }

struct C_01821cd0 {
    int sub_01821cd0();
};

// @baa 0x01821cd0
int C_01821cd0::sub_01821cd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4);
}

struct C_01821ce0 {
    int sub_01821ce0();
};

// @baa 0x01821ce0
int C_01821ce0::sub_01821ce0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_01821e50 { int sub_01821e50(void); };

// @baa 0x01821e50
int C_01821e50::sub_01821e50(void) { return *(int*)((char*)this + 8); }

struct C_01821f70 { char* sub_01821f70(void); };

// @baa 0x01821f70
char* C_01821f70::sub_01821f70(void) { return (char*)this + 44; }

struct C_01821f80 { int sub_01821f80(void); };

// @baa 0x01821f80
int C_01821f80::sub_01821f80(void) { return *(int*)((char*)this + 64); }

struct C_01821f90 { int sub_01821f90(void); };

// @baa 0x01821f90
int C_01821f90::sub_01821f90(void) { return *(int*)((char*)this + 80); }

struct C_01821fa0 { char* sub_01821fa0(void); };

// @baa 0x01821fa0
char* C_01821fa0::sub_01821fa0(void) { return (char*)this + 32; }

struct C_01821fb0 { char* sub_01821fb0(void); };

// @baa 0x01821fb0
char* C_01821fb0::sub_01821fb0(void) { return (char*)this + 48; }

struct C_01821fe0 {
    void sub_01821fe0(int *);
};

// @baa 0x01821fe0
void C_01821fe0::sub_01821fe0(int * param_2)
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

struct C_01822030 {
    void sub_01822030(int *);
};

// @baa 0x01822030
void C_01822030::sub_01822030(int * param_2)
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

struct C_01822080 {
    void sub_01822080(int *);
};

// @baa 0x01822080
void C_01822080::sub_01822080(int * param_2)
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

struct C_018220d0 {
    void sub_018220d0(int *);
};

// @baa 0x018220d0
void C_018220d0::sub_018220d0(int * param_2)
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

struct C_01822160 {
    void sub_01822160();
};

extern undefined4 g_023e4d30;
// @baa 0x01822160
void C_01822160::sub_01822160(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_018221d0 {
    void sub_018221d0();
};

extern undefined4 g_023e4d38;
// @baa 0x018221d0
void C_018221d0::sub_018221d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_018228c0 {
    void sub_018228c0();
};

// @baa 0x018228c0
void C_018228c0::sub_018228c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01822920 {
    void sub_01822920();
};

// @baa 0x01822920
void C_01822920::sub_01822920(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01822940 {
    void sub_01822940();
};

// @baa 0x01822940
void C_01822940::sub_01822940(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01822960 {
    undefined1 * sub_01822960();
};

extern undefined1 g_026ccbc8;
// @baa 0x01822960
undefined1 * C_01822960::sub_01822960(void)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = &g_026ccbc8;
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined1 **)(param_1 + 0x34);
  }
  return puVar1;
}

struct C_01822970 {
    void sub_01822970();
};

// @baa 0x01822970
void C_01822970::sub_01822970(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01822990 {
    undefined1 * sub_01822990();
};

// @baa 0x01822990
undefined1 * C_01822990::sub_01822990(void)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = &g_026ccbc8;
  if (*(int *)(param_1 + 0x8c) != 0) {
    puVar1 = *(undefined1 **)(param_1 + 0x90);
  }
  return puVar1;
}

struct C_018229b0 {
    void sub_018229b0();
};

// @baa 0x018229b0
void C_018229b0::sub_018229b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_018229d0 {
    void sub_018229d0();
};

// @baa 0x018229d0
void C_018229d0::sub_018229d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_018231b0 {
    undefined4 sub_018231b0(byte);
};

int sub_01822a70(void);
// @baa 0x018231b0
undefined4 C_018231b0::sub_018231b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01822a70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7d3c[];
// @baa 0x018231d0
int sub_018231d0(void) { return (int)g_027b7d3c; }

struct C_018231e0 {
    undefined4 sub_018231e0(byte);
};

int sub_01822b50(void);
// @baa 0x018231e0
undefined4 C_018231e0::sub_018231e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01822b50();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7d44[];
// @baa 0x01823200
int sub_01823200(void) { return (int)g_027b7d44; }

extern char g_027b7d4c[];
// @baa 0x01823210
int sub_01823210(void) { return (int)g_027b7d4c; }

struct C_01823220 {
    undefined4 sub_01823220(byte);
};

int sub_01822c30(void);
// @baa 0x01823220
undefined4 C_01823220::sub_01823220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01822c30();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01823240 {
    undefined4 sub_01823240(byte);
};

int sub_01822d20(void);
// @baa 0x01823240
undefined4 C_01823240::sub_01823240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01822d20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7d54[];
// @baa 0x01823260
int sub_01823260(void) { return (int)g_027b7d54; }

extern char g_027b7fd4[];
// @baa 0x01823270
int sub_01823270(void) { return (int)g_027b7fd4; }

// @baa 0x01823280
void sub_01823280(void) {  }

struct C_01823310 {
    undefined4 sub_01823310(byte);
};

int sub_01823290(void);
// @baa 0x01823310
undefined4 C_01823310::sub_01823310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01823290();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01823a40 {
    undefined4 sub_01823a40(byte);
};

int sub_01820100(void);
// @baa 0x01823a40
undefined4 C_01823a40::sub_01823a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01820100();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01823a60 {
    undefined4 sub_01823a60(byte);
};

int sub_01820160(void);
// @baa 0x01823a60
undefined4 C_01823a60::sub_01823a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01820160();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01823a80 {
    undefined4 sub_01823a80(byte);
};

int sub_018202b0(void);
// @baa 0x01823a80
undefined4 C_01823a80::sub_01823a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018202b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01823ae0 {
    undefined4 sub_01823ae0(byte);
};

int sub_01820410(void);
// @baa 0x01823ae0
undefined4 C_01823ae0::sub_01823ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01820410();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_018204d0();
// @baa 0x01823c40
void sub_01823c40(void) { sub_018204d0(); }

void sub_01820650();
// @baa 0x01823cd0
void sub_01823cd0(void) { sub_01820650(); }

void sub_01820950();
// @baa 0x01823d60
void sub_01823d60(void) { sub_01820950(); }

void sub_01847810();
// @baa 0x01824170
void sub_01824170(void) { sub_01847810(); }

struct C_01824180 { int sub_01824180(void); };

// @baa 0x01824180
int C_01824180::sub_01824180(void) { return *(int*)((char*)this + 36); }

void sub_01846f70();
// @baa 0x01824190
void sub_01824190(void) { sub_01846f70(); }

// @baa 0x01825020
uint * sub_01825020(uint * param_1, uint * param_2)
{
  if (*param_1 <= *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

struct C_01825040 {
    void sub_01825040(int *);
};

// @baa 0x01825040
void C_01825040::sub_01825040(int * param_2)
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

extern char g_023e4520[];
struct C_01825090 { void sub_01825090(void); };

// @baa 0x01825090
void C_01825090::sub_01825090(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_018250a0 { int sub_018250a0(void); };

// @baa 0x018250a0
int C_018250a0::sub_018250a0(void) { return *(int*)((char*)this + 76); }

struct C_018250b0 { int sub_018250b0(void); };

// @baa 0x018250b0
int C_018250b0::sub_018250b0(void) { return *(int*)((char*)this + 64) - *(int*)((char*)this + 76); }

struct C_018250c0 {
    undefined4 * sub_018250c0(byte);
};

// @baa 0x018250c0
undefined4 * C_018250c0::sub_018250c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018250f0 { int sub_018250f0(void); };

// @baa 0x018250f0
int C_018250f0::sub_018250f0(void) { return *(int*)((char*)this + 48); }

struct C_01825100 { void sub_01825100(int a0); };

// @baa 0x01825100
void C_01825100::sub_01825100(int a0) { *(int*)((char*)this + 64) = a0; }

struct C_01825110 { int sub_01825110(void); };

// @baa 0x01825110
int C_01825110::sub_01825110(void) { return *(int*)((char*)this + 64); }

struct C_01825120 { int sub_01825120(void); };

// @baa 0x01825120
int C_01825120::sub_01825120(void) { return *(int*)((char*)this + 56); }

struct C_01825130 {
    bool sub_01825130();
};

// @baa 0x01825130
bool C_01825130::sub_01825130(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x48) != 0;
}

struct C_01825160 {
    void sub_01825160(int *);
};

// @baa 0x01825160
void C_01825160::sub_01825160(int * param_2)
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

struct C_018253a0 {
    void sub_018253a0();
};

// @baa 0x018253a0
void C_018253a0::sub_018253a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b7d5c[];
// @baa 0x01825660
int sub_01825660(void) { return (int)g_027b7d5c; }

struct C_01825670 {
    undefined4 sub_01825670(byte);
};

int sub_01825410(void);
// @baa 0x01825670
undefined4 C_01825670::sub_01825670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01825410();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825770 {
    undefined4 sub_01825770(byte);
};

int sub_01824640(void);
// @baa 0x01825770
undefined4 C_01825770::sub_01825770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01824640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825800 {
    void sub_01825800();
};

int sub_0181b600(void);
extern undefined4 g_023e4f4c;
// @baa 0x01825800
void C_01825800::sub_01825800(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f4c));
  sub_0181b600();
  return;
}

struct C_01825830 {
    void sub_01825830();
};

int sub_0181b5d0(void);
extern undefined4 g_023e4f5c;
// @baa 0x01825830
void C_01825830::sub_01825830(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f5c));
  sub_0181b5d0();
  return;
}

struct C_01825860 {
    void sub_01825860();
};

extern undefined4 g_023e4f6c;
// @baa 0x01825860
void C_01825860::sub_01825860(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f6c));
  sub_0181b5d0();
  return;
}

struct C_01825890 {
    void sub_01825890();
};

extern undefined4 g_023e4f7c;
// @baa 0x01825890
void C_01825890::sub_01825890(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f7c));
  sub_0181b5d0();
  return;
}

struct C_018258c0 {
    void sub_018258c0();
};

extern undefined4 g_023e4f8c;
// @baa 0x018258c0
void C_018258c0::sub_018258c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f8c));
  sub_0181b5d0();
  return;
}

struct C_018258f0 {
    void sub_018258f0();
};

extern undefined4 g_023e4f9c;
// @baa 0x018258f0
void C_018258f0::sub_018258f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f9c));
  sub_0181b5d0();
  return;
}

struct C_01825920 {
    void sub_01825920();
};

extern undefined4 g_023e4fac;
// @baa 0x01825920
void C_01825920::sub_01825920(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fac));
  sub_0181b5d0();
  return;
}

struct C_01825950 {
    void sub_01825950();
};

extern undefined4 g_023e4fbc;
// @baa 0x01825950
void C_01825950::sub_01825950(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fbc));
  sub_0181b5d0();
  return;
}

struct C_01825980 {
    void sub_01825980();
};

extern undefined4 g_023e4fcc;
// @baa 0x01825980
void C_01825980::sub_01825980(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fcc));
  sub_0181b5d0();
  return;
}

struct C_018259c0 {
    undefined4 * sub_018259c0(byte);
};

// @baa 0x018259c0
undefined4 * C_018259c0::sub_018259c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f4c));
  sub_0181b600();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018259f0 {
    undefined4 * sub_018259f0(byte);
};

// @baa 0x018259f0
undefined4 * C_018259f0::sub_018259f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f5c));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825a20 {
    undefined4 * sub_01825a20(byte);
};

// @baa 0x01825a20
undefined4 * C_01825a20::sub_01825a20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f6c));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825a50 {
    undefined4 * sub_01825a50(byte);
};

// @baa 0x01825a50
undefined4 * C_01825a50::sub_01825a50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f7c));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825a80 {
    undefined4 * sub_01825a80(byte);
};

// @baa 0x01825a80
undefined4 * C_01825a80::sub_01825a80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f8c));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825ab0 {
    undefined4 * sub_01825ab0(byte);
};

// @baa 0x01825ab0
undefined4 * C_01825ab0::sub_01825ab0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4f9c));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825ae0 {
    undefined4 * sub_01825ae0(byte);
};

// @baa 0x01825ae0
undefined4 * C_01825ae0::sub_01825ae0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fac));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825b10 {
    undefined4 * sub_01825b10(byte);
};

// @baa 0x01825b10
undefined4 * C_01825b10::sub_01825b10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fbc));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825b40 {
    undefined4 * sub_01825b40(byte);
};

// @baa 0x01825b40
undefined4 * C_01825b40::sub_01825b40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fcc));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825b70 {
    undefined4 * sub_01825b70(byte);
};

extern undefined4 g_023e4fdc;
// @baa 0x01825b70
undefined4 * C_01825b70::sub_01825b70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4fdc));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825ee0 { void sub_01825ee0(void); };

// @baa 0x01825ee0
void C_01825ee0::sub_01825ee0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01825ef0 {
    undefined4 * sub_01825ef0(byte);
};

// @baa 0x01825ef0
undefined4 * C_01825ef0::sub_01825ef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7d64[];
// @baa 0x01825f10
int sub_01825f10(void) { return (int)g_027b7d64; }

// @baa 0x01825f20
int sub_01825f20(void) { return 4; }

// @baa 0x01825f30
undefined1 sub_01825f30(void)
{
  return 0;
}

// @baa 0x01825f40
undefined1 sub_01825f40(void)
{
  return 0;
}

struct C_01825f50 {
    undefined4 sub_01825f50(byte);
};

int sub_01825d90(void);
// @baa 0x01825f50
undefined4 C_01825f50::sub_01825f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01825d90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01825f70 { C_01825f70* sub_01825f70(void); };

// @baa 0x01825f70
C_01825f70* C_01825f70::sub_01825f70(void) { return this; }

extern undefined4 g_027b7d6c;
// @baa 0x01826090
void sub_01826090(undefined4 param_1)
{
  g_027b7d6c = param_1;
  return;
}

struct C_01826180 { int sub_01826180(void); };

// @baa 0x01826180
int C_01826180::sub_01826180(void) { return *(int*)((char*)this + 8); }

struct C_018261c0 { int sub_018261c0(void); };

// @baa 0x018261c0
int C_018261c0::sub_018261c0(void) { return *(int*)((char*)this + 8); }

struct C_01826240 { void sub_01826240(void); };

// @baa 0x01826240
void C_01826240::sub_01826240(void) { *(int*)((char*)this + 8) = 0; }

struct C_01826370 { void sub_01826370(void); };

// @baa 0x01826370
void C_01826370::sub_01826370(void) { *(int*)((char*)this + 8) = 0; }

struct C_01826470 {
    bool sub_01826470();
};

// @baa 0x01826470
bool C_01826470::sub_01826470(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01826480 {
    bool sub_01826480();
};

// @baa 0x01826480
bool C_01826480::sub_01826480(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01826d50 {
    int sub_01826d50(char *, int);
};

// @baa 0x01826d50
int C_01826d50::sub_01826d50(char * param_2, int param_3)
{
    int param_1 = (int)this;

  int iVar1;
  char *pcVar2;
  
  if ('\0' < *param_2) {
    iVar1 = *(int *)(param_1 + 8);
    for (pcVar2 = (char *)(param_3 + iVar1); pcVar2 < (char *)(*(int *)(param_1 + 4) + iVar1);
        pcVar2 = pcVar2 + 1) {
      if (*pcVar2 == *param_2) {
        return (int)pcVar2 - iVar1;
      }
    }
  }
  return -1;
}

struct C_01827410 {
    int sub_01827410();
};

// @baa 0x01827410
int C_01827410::sub_01827410(void)
{
    int param_1 = (int)this;

  if (1 < *(uint *)(param_1 + 4)) {
    return *(uint *)(param_1 + 4) - 1;
  }
  return 0;
}

extern char g_027b7dbc[];
// @baa 0x01829c10
int sub_01829c10(void) { return (int)g_027b7dbc; }

struct C_01829c40 {
    void sub_01829c40();
};

int sub_0181d320(void);
extern undefined4 g_023e52b0;
// @baa 0x01829c40
void C_01829c40::sub_01829c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e52b0));
  sub_0181d320();
  return;
}

struct C_01829c50 {
    undefined4 * sub_01829c50(byte);
};

// @baa 0x01829c50
undefined4 * C_01829c50::sub_01829c50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e52b0));
  sub_0181d320();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0182a010 { int sub_0182a010(void); };

// @baa 0x0182a010
int C_0182a010::sub_0182a010(void) { return *(int*)((char*)this + 4); }

struct C_0182a020 { int sub_0182a020(void); };

// @baa 0x0182a020
int C_0182a020::sub_0182a020(void) { return *(int*)((char*)this + 4); }

struct C_0182a070 { void sub_0182a070(void); };

// @baa 0x0182a070
void C_0182a070::sub_0182a070(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0182a0a0 { void sub_0182a0a0(void); };

// @baa 0x0182a0a0
void C_0182a0a0::sub_0182a0a0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0182a0b0 {
    undefined4 * sub_0182a0b0(byte);
};

// @baa 0x0182a0b0
undefined4 * C_0182a0b0::sub_0182a0b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0182a0d0 {
    undefined4 * sub_0182a0d0(byte);
};

// @baa 0x0182a0d0
undefined4 * C_0182a0d0::sub_0182a0d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0182a110 {
    void sub_0182a110();
};

// @baa 0x0182a110
void C_0182a110::sub_0182a110(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b7d88[];
// @baa 0x0182a130
int sub_0182a130(void) { return (int)g_027b7d88; }

struct C_0182a190 {
    undefined4 sub_0182a190(byte);
};

int sub_01829dc0(void);
// @baa 0x0182a190
undefined4 C_0182a190::sub_0182a190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01829dc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0182a200 { int sub_0182a200(void); };

// @baa 0x0182a200
int C_0182a200::sub_0182a200(void) { return *(int*)((char*)this + 0); }

struct C_0182a210 { int sub_0182a210(void); };

// @baa 0x0182a210
int C_0182a210::sub_0182a210(void) { return *(int*)((char*)this + 4); }

struct C_0182a220 { int sub_0182a220(void); };

// @baa 0x0182a220
int C_0182a220::sub_0182a220(void) { return *(int*)((char*)this + 8); }

struct C_0182a230 { int sub_0182a230(void); };

// @baa 0x0182a230
int C_0182a230::sub_0182a230(void) { return *(int*)((char*)this + 12); }

struct C_0182a240 { int sub_0182a240(void); };

// @baa 0x0182a240
int C_0182a240::sub_0182a240(void) { return *(int*)((char*)this + 16); }

struct C_0182a250 { int sub_0182a250(void); };

// @baa 0x0182a250
int C_0182a250::sub_0182a250(void) { return *(int*)((char*)this + 20); }

struct C_0182a260 { void sub_0182a260(int a0); };

// @baa 0x0182a260
void C_0182a260::sub_0182a260(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_0182a270 { void sub_0182a270(int a0); };

// @baa 0x0182a270
void C_0182a270::sub_0182a270(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_0182a280 { void sub_0182a280(int a0); };

// @baa 0x0182a280
void C_0182a280::sub_0182a280(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_0182a290 { void sub_0182a290(int a0); };

// @baa 0x0182a290
void C_0182a290::sub_0182a290(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_0182a2a0 { void sub_0182a2a0(int a0); };

// @baa 0x0182a2a0
void C_0182a2a0::sub_0182a2a0(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_0182a2b0 { void sub_0182a2b0(int a0); };

// @baa 0x0182a2b0
void C_0182a2b0::sub_0182a2b0(int a0) { *(int*)((char*)this + 20) = a0; }

struct C_0182a2d0 {
    void sub_0182a2d0();
};

// @baa 0x0182a2d0
void C_0182a2d0::sub_0182a2d0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0182a2e0 { int sub_0182a2e0(void); };

// @baa 0x0182a2e0
int C_0182a2e0::sub_0182a2e0(void) { return *(int*)((char*)this + 4); }

struct C_0182a2f0 { int sub_0182a2f0(void); };

// @baa 0x0182a2f0
int C_0182a2f0::sub_0182a2f0(void) { return *(int*)((char*)this + 4); }

struct C_0182a310 {
    void sub_0182a310();
};

// @baa 0x0182a310
void C_0182a310::sub_0182a310(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0182a330 {
    void sub_0182a330();
};

// @baa 0x0182a330
void C_0182a330::sub_0182a330(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0182a350 {
    void sub_0182a350();
};

// @baa 0x0182a350
void C_0182a350::sub_0182a350(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0182a370 {
    void sub_0182a370();
};

// @baa 0x0182a370
void C_0182a370::sub_0182a370(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0182a380 {
    int sub_0182a380();
};

// @baa 0x0182a380
int C_0182a380::sub_0182a380(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_0182a390 { int sub_0182a390(void); };

// @baa 0x0182a390
int C_0182a390::sub_0182a390(void) { return *(int*)((char*)this + 8); }

// @baa 0x0182a600
undefined4 sub_0182a600(char * param_1)
{
  char cVar1;
  
  if ((((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) && (cVar1 != '0')) &&
     ((cVar1 != 'f' && (cVar1 != 'F')))) {
    return 1;
  }
  return 0;
}

// @baa 0x0182a630
undefined4 sub_0182a630(short * param_1)
{
  short sVar1;
  
  if ((((param_1 != (short *)0x0) && (sVar1 = *param_1, sVar1 != 0)) && (sVar1 != 0x30)) &&
     ((sVar1 != 0x66 && (sVar1 != 0x46)))) {
    return 1;
  }
  return 0;
}

struct C_0182ab10 { int sub_0182ab10(void); };

// @baa 0x0182ab10
int C_0182ab10::sub_0182ab10(void) { return *(int*)((char*)this + 4); }

struct C_0182ab20 {
    bool sub_0182ab20();
};

// @baa 0x0182ab20
bool C_0182ab20::sub_0182ab20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_0182ab30 { int sub_0182ab30(void); };

// @baa 0x0182ab30
int C_0182ab30::sub_0182ab30(void) { return *(int*)((char*)this + 8); }

struct C_0182ab40 {
    int sub_0182ab40();
};

// @baa 0x0182ab40
int C_0182ab40::sub_0182ab40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_0182ab50 { int sub_0182ab50(void); };

// @baa 0x0182ab50
int C_0182ab50::sub_0182ab50(void) { return *(int*)((char*)this + 4); }

struct C_0182ab60 { int sub_0182ab60(void); };

// @baa 0x0182ab60
int C_0182ab60::sub_0182ab60(void) { return *(int*)((char*)this + 4); }

struct C_0182ab70 { int sub_0182ab70(void); };

// @baa 0x0182ab70
int C_0182ab70::sub_0182ab70(void) { return *(int*)((char*)this + 4); }

struct C_0182ab80 {
    int sub_0182ab80();
};

// @baa 0x0182ab80
int C_0182ab80::sub_0182ab80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_0182abc0 {
    int sub_0182abc0();
};

// @baa 0x0182abc0
int C_0182abc0::sub_0182abc0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4);
}

struct C_0182abd0 {
    int sub_0182abd0();
};

// @baa 0x0182abd0
int C_0182abd0::sub_0182abd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8;
}

struct C_0182abe0 {
    int sub_0182abe0();
};

// @baa 0x0182abe0
int C_0182abe0::sub_0182abe0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_0182abf0 {
    int sub_0182abf0();
};

// @baa 0x0182abf0
int C_0182abf0::sub_0182abf0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_0182ac00 { int sub_0182ac00(void); };

// @baa 0x0182ac00
int C_0182ac00::sub_0182ac00(void) { return *(int*)((char*)this + 8); }

struct C_0182ac10 { int sub_0182ac10(void); };

// @baa 0x0182ac10
int C_0182ac10::sub_0182ac10(void) { return *(int*)((char*)this + 8); }

struct C_0182ac50 { int sub_0182ac50(void); };

// @baa 0x0182ac50
int C_0182ac50::sub_0182ac50(void) { return *(int*)((char*)this + 8); }

struct C_0182ac90 { int sub_0182ac90(void); };

// @baa 0x0182ac90
int C_0182ac90::sub_0182ac90(void) { return *(int*)((char*)this + 8); }

struct C_0182acd0 { int sub_0182acd0(void); };

// @baa 0x0182acd0
int C_0182acd0::sub_0182acd0(void) { return *(int*)((char*)this + 8); }

struct C_0182ad10 {
    int sub_0182ad10(int);
};

// @baa 0x0182ad10
int C_0182ad10::sub_0182ad10(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

// @baa 0x0182b050
void sub_0182b050(void) {  }

// @baa 0x0182b060
void sub_0182b060(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x0182b080
void sub_0182b080(undefined1 * param_1, undefined1 * param_2)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

struct C_0182b0c0 {
    void sub_0182b0c0();
};

// @baa 0x0182b0c0
void C_0182b0c0::sub_0182b0c0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0182b0f0 {
    void sub_0182b0f0();
};

// @baa 0x0182b0f0
void C_0182b0f0::sub_0182b0f0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

int sub_0182ae40(...);
// @baa 0x0182bfa0
void sub_0182bfa0(undefined4 param_1, int param_2)
{
  sub_0182ae40(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  return;
}

int sub_0182aea0(...);
// @baa 0x0182bfc0
void sub_0182bfc0(undefined4 param_1, int param_2)
{
  sub_0182aea0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  return;
}

// @baa 0x0182c0c0
void sub_0182c0c0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// @baa 0x0182c0e0
void sub_0182c0e0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

struct C_0182d8c0 {
    int sub_0182d8c0(byte);
};

// @baa 0x0182d8c0
int C_0182d8c0::sub_0182d8c0(byte param_2)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0182f480 {
    void sub_0182f480(undefined4);
};

// @baa 0x0182f480
void C_0182f480::sub_0182f480(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}
