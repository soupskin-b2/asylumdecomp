// FCollada_1850000.cpp (part 1 of 19): 146 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01851520();
};

void * sub_01826070(size_t);
// @baa 0x01851520
undefined4 * C::sub_01851520(void)
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

void sub_0184e450();
// @baa 0x01851810
void sub_01851810(void) { sub_0184e450(); }

struct C_01851f20 { int sub_01851f20(void); };

// @baa 0x01851f20
int C_01851f20::sub_01851f20(void) { return *(int*)((char*)this + 4); }

struct C_01851f40 {
    void sub_01851f40();
};

void sub_01826080(void *);
// @baa 0x01851f40
void C_01851f40::sub_01851f40(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01851f50 { int sub_01851f50(void); };

// @baa 0x01851f50
int C_01851f50::sub_01851f50(void) { return *(int*)((char*)this + 8); }

struct C_01851f60 {
    int sub_01851f60();
};

// @baa 0x01851f60
int C_01851f60::sub_01851f60(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8;
}

extern char g_023e8674[];
struct C_01851ff0 { void sub_01851ff0(void); };

// @baa 0x01851ff0
void C_01851ff0::sub_01851ff0(void) { *(int*)((char*)this + 0) = (int)g_023e8674; }

struct C_01852050 { int sub_01852050(void); };

// @baa 0x01852050
int C_01852050::sub_01852050(void) { return *(int*)((char*)this + 8); }

struct C_01852060 {
    int sub_01852060();
};

// @baa 0x01852060
int C_01852060::sub_01852060(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_01852070 {
    undefined4 * sub_01852070(byte);
};

int sub_00402660(...);
// @baa 0x01852070
undefined4 * C_01852070::sub_01852070(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01852090 {
    void sub_01852090();
};

// @baa 0x01852090
void C_01852090::sub_01852090(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018520a0 {
    int sub_018520a0();
};

// @baa 0x018520a0
int C_018520a0::sub_018520a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x4c + *(int *)(param_1 + 8);
}

// @baa 0x01852100
void sub_01852100(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_01852130 { int sub_01852130(void); };

// @baa 0x01852130
int C_01852130::sub_01852130(void) { return *(int*)((char*)this + 112); }

struct C_018521a0 { void sub_018521a0(void); };

// @baa 0x018521a0
void C_018521a0::sub_018521a0(void) { *(int*)((char*)this + 0) = (int)g_023e8674; }

struct C_018521b0 {
    undefined4 * sub_018521b0(byte);
};

// @baa 0x018521b0
undefined4 * C_018521b0::sub_018521b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01852340 {
    int sub_01852340(byte);
};

// @baa 0x01852340
int C_01852340::sub_01852340(byte param_2)
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

struct C_01852370 {
    void sub_01852370();
};

// @baa 0x01852370
void C_01852370::sub_01852370(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

// @baa 0x018523c0
void sub_018523c0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

struct C_018523f0 {
    uint sub_018523f0();
};

// @baa 0x018523f0
uint C_018523f0::sub_018523f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 100) / *(uint *)(param_1 + 0x70);
}

struct C_01852500 {
    int sub_01852500(byte);
};

// @baa 0x01852500
int C_01852500::sub_01852500(byte param_2)
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

// @baa 0x01852640
void sub_01852640(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

extern char g_027b7f9c[];
// @baa 0x018527b0
int sub_018527b0(void) { return (int)g_027b7f9c; }

struct C_01852800 {
    undefined4 sub_01852800(byte);
};

int sub_018519f0(void);
// @baa 0x01852800
undefined4 C_01852800::sub_01852800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018519f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7fd4[];
// @baa 0x01852820
int sub_01852820(void) { return (int)g_027b7fd4; }

struct C_01852850 {
    undefined4 * sub_01852850(undefined4);
};

int sub_01858480(void);
extern undefined4 g_023e8704;
// @baa 0x01852850
undefined4 * C_01852850::sub_01852850(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01858480();
  param_1[6] = param_1[6] | 1;
  param_1[7] = param_2;
  *param_1 = (undefined4)((&g_023e8704));
  param_1[8] = 0;
  return param_1;
}

struct C_01852880 {
    void sub_01852880();
};

int sub_018584a0(void);
// @baa 0x01852880
void C_01852880::sub_01852880(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8704));
  sub_018584a0();
  return;
}

extern char g_027b7fa4[];
// @baa 0x01852890
int sub_01852890(void) { return (int)g_027b7fa4; }

struct C_018528a0 {
    undefined4 sub_018528a0(byte);
};

int sub_01852880(void);
// @baa 0x018528a0
undefined4 C_018528a0::sub_018528a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01852880();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01857370();
// @baa 0x018528c0
void sub_018528c0(void) { sub_01857370(); }

void sub_018574d0();
// @baa 0x018528d0
void sub_018528d0(void) { sub_018574d0(); }

struct C_01853250 {
    undefined4 sub_01853250(byte);
};

int sub_01852b20(void);
// @baa 0x01853250
undefined4 C_01853250::sub_01853250(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01852b20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01853780 { int sub_01853780(void); };

// @baa 0x01853780
int C_01853780::sub_01853780(void) { return *(int*)((char*)this + 8); }

struct C_018537b0 {
    void sub_018537b0();
};

// @baa 0x018537b0
void C_018537b0::sub_018537b0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018537c0 { int sub_018537c0(void); };

// @baa 0x018537c0
int C_018537c0::sub_018537c0(void) { return *(int*)((char*)this + 8); }

struct C_018537f0 {
    void sub_018537f0();
};

// @baa 0x018537f0
void C_018537f0::sub_018537f0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018538c0 {
    void sub_018538c0(int *);
};

// @baa 0x018538c0
void C_018538c0::sub_018538c0(int * param_2)
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

struct C_01853910 {
    void sub_01853910(int *);
};

// @baa 0x01853910
void C_01853910::sub_01853910(int * param_2)
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

extern char g_027b7fb4[];
// @baa 0x01853f00
int sub_01853f00(void) { return (int)g_027b7fb4; }

// @baa 0x01853f10
int sub_01853f10(void) { return 17; }

struct C_01853f20 {
    undefined4 sub_01853f20(byte);
};

int sub_01853c00(void);
// @baa 0x01853f20
undefined4 C_01853f20::sub_01853f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01853c00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01853f40 {
    undefined4 sub_01853f40(byte);
};

int sub_01853cd0(void);
// @baa 0x01853f40
undefined4 C_01853f40::sub_01853f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01853cd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01854180 {
    undefined4 sub_01854180(byte);
};

int sub_01853310(void);
// @baa 0x01854180
undefined4 C_01854180::sub_01854180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01853310();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern undefined4 g_025fbeac;
// @baa 0x018541a0
undefined * sub_018541a0(void)
{
  return (undefined *)(g_025fbeac);
}

struct C_018541d0 {
    void sub_018541d0();
};

// @baa 0x018541d0
void C_018541d0::sub_018541d0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01854230 {
    void sub_01854230(int *);
};

// @baa 0x01854230
void C_01854230::sub_01854230(int * param_2)
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

extern char g_027b7fbc[];
// @baa 0x018544d0
int sub_018544d0(void) { return (int)g_027b7fbc; }

struct C_01854580 {
    undefined4 sub_01854580(byte);
};

int sub_01854460(void);
// @baa 0x01854580
undefined4 C_01854580::sub_01854580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018545a0 { char* sub_018545a0(void); };

// @baa 0x018545a0
char* C_018545a0::sub_018545a0(void) { return (char*)this + 40; }

struct C_018545b0 { char* sub_018545b0(void); };

// @baa 0x018545b0
char* C_018545b0::sub_018545b0(void) { return (char*)this + 56; }

struct C_018545c0 { char* sub_018545c0(void); };

// @baa 0x018545c0
char* C_018545c0::sub_018545c0(void) { return (char*)this + 68; }

struct C_01856d40 {
    bool sub_01856d40();
};

// @baa 0x01856d40
bool C_01856d40::sub_01856d40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_01856da0 {
    void sub_01856da0(short *, short *);
};

// @baa 0x01856da0
void C_01856da0::sub_01856da0(short * param_2, short * param_3)
{
    int param_1 = (int)this;

  short *psVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 8);
  psVar1 = psVar2 + *(int *)(param_1 + 4);
  for (; psVar2 != psVar1; psVar2 = psVar2 + 1) {
    if (*psVar2 == *param_2) {
      *psVar2 = *param_3;
    }
  }
  return;
}

struct C_018571d0 { int sub_018571d0(void); };

// @baa 0x018571d0
int C_018571d0::sub_018571d0(void) { return *(int*)((char*)this + 36); }

struct C_018571e0 { char* sub_018571e0(void); };

// @baa 0x018571e0
char* C_018571e0::sub_018571e0(void) { return (char*)this + 48; }

struct C_018571f0 { int sub_018571f0(void); };

// @baa 0x018571f0
int C_018571f0::sub_018571f0(void) { return *(int*)((char*)this + 40); }

extern char g_027b7fc4[];
// @baa 0x01857d50
int sub_01857d50(void) { return (int)g_027b7fc4; }

struct C_01857d60 {
    undefined4 sub_01857d60(byte);
};

int sub_01857a70(void);
// @baa 0x01857d60
undefined4 C_01857d60::sub_01857d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01857a70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01857d80 {
    undefined4 sub_01857d80(byte);
};

int sub_01857250(void);
// @baa 0x01857d80
undefined4 C_01857d80::sub_01857d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01857250();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01857f40 {
    void sub_01857f40();
};

// @baa 0x01857f40
void C_01857f40::sub_01857f40(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}

struct C_018581e0 {
    bool sub_018581e0(int);
};

// @baa 0x018581e0
bool C_018581e0::sub_018581e0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_018581f0 { int sub_018581f0(void); };

// @baa 0x018581f0
int C_018581f0::sub_018581f0(void) { return *(int*)((char*)this + 4); }

struct C_01858200 { int sub_01858200(void); };

// @baa 0x01858200
int C_01858200::sub_01858200(void) { return *(int*)((char*)this + 4); }

struct C_01858210 { int sub_01858210(void); };

// @baa 0x01858210
int C_01858210::sub_01858210(void) { return *(int*)((char*)this + 4); }

struct C_01858260 {
    undefined4 sub_01858260(byte);
};

int sub_01858150(void);
// @baa 0x01858260
undefined4 C_01858260::sub_01858260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01858150();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7fcc[];
// @baa 0x01858280
int sub_01858280(void) { return (int)g_027b7fcc; }

struct C_018582e0 {
    undefined4 sub_018582e0(byte);
};

int sub_01857f90(void);
// @baa 0x018582e0
undefined4 C_018582e0::sub_018582e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01857f90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01858300 { C_01858300* sub_01858300(void); };

// @baa 0x01858300
C_01858300* C_01858300::sub_01858300(void) { return this; }

int sub_00eec680(...);
// @baa 0x01858360
undefined4 sub_01858360(int param_1, int param_2)
{
  char cVar1;
  
  cVar1 = sub_00eec680(param_1 + 0x20,param_2 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = sub_00eec680(param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = sub_00eec680(param_1 + 0x10,param_2 + 0x10);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

struct C_018583b0 { C_018583b0* sub_018583b0(void); };

// @baa 0x018583b0
C_018583b0* C_018583b0::sub_018583b0(void) { return this; }

struct C_01858480 {
    undefined4 * sub_01858480();
};

int sub_01854260(void);
extern undefined4 g_023e8a6c;
// @baa 0x01858480
undefined4 * C_01858480::sub_01858480(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01854260();
  *param_1 = (undefined4)((&g_023e8a6c));
  param_1[6] = 0;
  return param_1;
}

struct C_018584a0 {
    void sub_018584a0();
};

// @baa 0x018584a0
void C_018584a0::sub_018584a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8a6c));
  sub_01854460();
  return;
}

// @baa 0x018584b0
int sub_018584b0(void) { return (int)g_027b7fbc; }

struct C_018584c0 {
    undefined4 sub_018584c0(byte);
};

// @baa 0x018584c0
undefined4 C_018584c0::sub_018584c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018584a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01859f80 {
    undefined4 sub_01859f80();
};

int sub_01859b10(void);
// @baa 0x01859f80
undefined4 C_01859f80::sub_01859f80(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01859b10();
  return param_1;
}

struct C_01859f90 {
    undefined4 sub_01859f90();
};

// @baa 0x01859f90
undefined4 C_01859f90::sub_01859f90(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01859b10();
  return param_1;
}

// @baa 0x0185a190
void sub_0185a190(void) {  }

extern char g_023e4370[];
struct C_0185a5c0 { void sub_0185a5c0(void); };

// @baa 0x0185a5c0
void C_0185a5c0::sub_0185a5c0(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_0185a5f0 { void sub_0185a5f0(void); };

// @baa 0x0185a5f0
void C_0185a5f0::sub_0185a5f0(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_0185a600 {
    undefined4 * sub_0185a600(byte);
};

// @baa 0x0185a600
undefined4 * C_0185a600::sub_0185a600(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185a620 {
    undefined4 * sub_0185a620(byte);
};

// @baa 0x0185a620
undefined4 * C_0185a620::sub_0185a620(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7fdc[];
// @baa 0x0185a660
int sub_0185a660(void) { return (int)g_027b7fdc; }

// @baa 0x0185a670
int sub_0185a670(void) { return 2; }

struct C_0185a680 {
    undefined4 sub_0185a680(byte);
};

int sub_0185a3c0(void);
// @baa 0x0185a680
undefined4 C_0185a680::sub_0185a680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185a3c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185a6e0 {
    void sub_0185a6e0();
};

int sub_01842bf0(void);
extern undefined4 g_023e8b04;
// @baa 0x0185a6e0
void C_0185a6e0::sub_0185a6e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8b04));
  sub_01842bf0();
  return;
}

extern char g_027b7fe4[];
// @baa 0x0185a790
int sub_0185a790(void) { return (int)g_027b7fe4; }

// @baa 0x0185a7a0
int sub_0185a7a0(void) { return 19; }

struct C_0185a7b0 {
    undefined4 sub_0185a7b0(byte);
};

int sub_0185a6e0(void);
// @baa 0x0185a7b0
undefined4 C_0185a7b0::sub_0185a7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185a6e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7fec[];
// @baa 0x0185aa20
int sub_0185aa20(void) { return (int)g_027b7fec; }

// @baa 0x0185aa30
int sub_0185aa30(void) { return 18; }

struct C_0185aa40 {
    undefined4 sub_0185aa40(byte);
};

int sub_0185a890(void);
// @baa 0x0185aa40
undefined4 C_0185aa40::sub_0185aa40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185a890();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185aa60 {
    void sub_0185aa60(byte);
};

// @baa 0x0185aa60
void C_0185aa60::sub_0185aa60(byte param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = (uint)param_2 << 7 | *(uint *)(param_1 + 0x18) & 0xffffff7f;
  return;
}

struct C_0185aa80 {
    void sub_0185aa80();
};

// @baa 0x0185aa80
void C_0185aa80::sub_0185aa80(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff7f;
  return;
}

struct C_0185aa90 {
    uint sub_0185aa90();
};

// @baa 0x0185aa90
uint C_0185aa90::sub_0185aa90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 7 & 1;
}

struct C_0185add0 { char* sub_0185add0(void); };

// @baa 0x0185add0
char* C_0185add0::sub_0185add0(void) { return (char*)this + 4; }

extern char g_023e4520[];
struct C_0185ae00 { void sub_0185ae00(void); };

// @baa 0x0185ae00
void C_0185ae00::sub_0185ae00(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0185ae30 { void sub_0185ae30(void); };

// @baa 0x0185ae30
void C_0185ae30::sub_0185ae30(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0185ae60 { void sub_0185ae60(void); };

// @baa 0x0185ae60
void C_0185ae60::sub_0185ae60(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_0185ae70 {
    undefined4 * sub_0185ae70(byte);
};

// @baa 0x0185ae70
undefined4 * C_0185ae70::sub_0185ae70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185ae90 {
    undefined4 * sub_0185ae90(byte);
};

// @baa 0x0185ae90
undefined4 * C_0185ae90::sub_0185ae90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185aeb0 {
    undefined4 * sub_0185aeb0(byte);
};

// @baa 0x0185aeb0
undefined4 * C_0185aeb0::sub_0185aeb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185af20 {
    void sub_0185af20();
};

extern undefined4 g_023e4d38;
// @baa 0x0185af20
void C_0185af20::sub_0185af20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b7ff4[];
// @baa 0x0185af70
int sub_0185af70(void) { return (int)g_027b7ff4; }

// @baa 0x0185af80
int sub_0185af80(void) { return 5; }

struct C_0185af90 {
    undefined4 sub_0185af90(byte);
};

int sub_0185ab20(void);
// @baa 0x0185af90
undefined4 C_0185af90::sub_0185af90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185ab20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185b0c0 {
    void sub_0185b0c0();
};

extern undefined4 g_023e8bf0;
// @baa 0x0185b0c0
void C_0185b0c0::sub_0185b0c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8bf0));
  sub_01842bf0();
  return;
}

extern char g_027b7ffc[];
// @baa 0x0185b1a0
int sub_0185b1a0(void) { return (int)g_027b7ffc; }

// @baa 0x0185b1b0
int sub_0185b1b0(void) { return 12; }

struct C_0185b1c0 {
    undefined4 sub_0185b1c0(byte);
};

int sub_0185b0c0(void);
// @baa 0x0185b1c0
undefined4 C_0185b1c0::sub_0185b1c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185b0c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185b1e0 { char* sub_0185b1e0(void); };

// @baa 0x0185b1e0
char* C_0185b1e0::sub_0185b1e0(void) { return (char*)this + 100; }

void sub_018357b0();
// @baa 0x0185b1f0
void sub_0185b1f0(void) { sub_018357b0(); }

struct C_0185b200 { char* sub_0185b200(void); };

// @baa 0x0185b200
char* C_0185b200::sub_0185b200(void) { return (char*)this + 104; }

struct C_0185bae0 { int sub_0185bae0(void); };

// @baa 0x0185bae0
int C_0185bae0::sub_0185bae0(void) { return *(int*)((char*)this + 8); }

struct C_0185bb10 {
    void sub_0185bb10();
};

// @baa 0x0185bb10
void C_0185bb10::sub_0185bb10(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0185bb20 { int sub_0185bb20(void); };

// @baa 0x0185bb20
int C_0185bb20::sub_0185bb20(void) { return *(int*)((char*)this + 8); }

struct C_0185bb50 {
    void sub_0185bb50();
};

// @baa 0x0185bb50
void C_0185bb50::sub_0185bb50(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0185bb60 {
    bool sub_0185bb60();
};

// @baa 0x0185bb60
bool C_0185bb60::sub_0185bb60(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_0185bb70 {
    int sub_0185bb70();
};

// @baa 0x0185bb70
int C_0185bb70::sub_0185bb70(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_0185bd10 {
    void sub_0185bd10(int *);
};

// @baa 0x0185bd10
void C_0185bd10::sub_0185bd10(int * param_2)
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

struct C_0185bd60 {
    void sub_0185bd60(int *);
};

// @baa 0x0185bd60
void C_0185bd60::sub_0185bd60(int * param_2)
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

struct C_0185c320 {
    undefined4 sub_0185c320(byte);
};

int sub_0185c060(void);
// @baa 0x0185c320
undefined4 C_0185c320::sub_0185c320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185c060();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185c340 {
    undefined4 sub_0185c340(byte);
};

int sub_0185c0d0(void);
// @baa 0x0185c340
undefined4 C_0185c340::sub_0185c340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185c0d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8004[];
// @baa 0x0185c360
int sub_0185c360(void) { return (int)g_027b8004; }

// @baa 0x0185c370
int sub_0185c370(void) { return 16; }

struct C_0185c6a0 {
    undefined4 sub_0185c6a0(byte);
};

int sub_0185b230(void);
// @baa 0x0185c6a0
undefined4 C_0185c6a0::sub_0185c6a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185b230();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185c730 {
    undefined4 sub_0185c730();
};

int sub_0185c6c0(void);
// @baa 0x0185c730
undefined4 C_0185c730::sub_0185c730(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185c6c0();
  return param_1;
}

extern char g_027b81c0[];
// @baa 0x0185c900
int sub_0185c900(void) { return (int)g_027b81c0; }

extern char g_027b800c[];
// @baa 0x0185c910
int sub_0185c910(void) { return (int)g_027b800c; }

extern char g_027b8014[];
// @baa 0x0185c920
int sub_0185c920(void) { return (int)g_027b8014; }

extern char g_027b801c[];
// @baa 0x0185c930
int sub_0185c930(void) { return (int)g_027b801c; }

struct C_0185c940 { char* sub_0185c940(void); };

// @baa 0x0185c940
char* C_0185c940::sub_0185c940(void) { return (char*)this + 64; }

struct C_0185c950 { int sub_0185c950(void); };

// @baa 0x0185c950
int C_0185c950::sub_0185c950(void) { return *(int*)((char*)this + 36); }

struct C_0185d640 {
    int sub_0185d640();
};

// @baa 0x0185d640
int C_0185d640::sub_0185d640(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_0185d680 { int sub_0185d680(void); };

// @baa 0x0185d680
int C_0185d680::sub_0185d680(void) { return *(int*)((char*)this + 4); }

struct C_0185d690 { int sub_0185d690(void); };

// @baa 0x0185d690
int C_0185d690::sub_0185d690(void) { return *(int*)((char*)this + 8); }

struct C_0185d6a0 {
    bool sub_0185d6a0();
};

// @baa 0x0185d6a0
bool C_0185d6a0::sub_0185d6a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_0185e550 {
    undefined4 sub_0185e550(byte);
};

int sub_0185ca90(void);
// @baa 0x0185e550
undefined4 C_0185e550::sub_0185e550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185ca90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185e570 {
    undefined4 * sub_0185e570();
};

// @baa 0x0185e570
undefined4 * C_0185e570::sub_0185e570(void)
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

extern char g_023e8dd0[];
struct C_0185e5b0 { void sub_0185e5b0(void); };

// @baa 0x0185e5b0
void C_0185e5b0::sub_0185e5b0(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_0185e5c0 {
    undefined4 * sub_0185e5c0(byte);
};

// @baa 0x0185e5c0
undefined4 * C_0185e5c0::sub_0185e5c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185e5e0 { void sub_0185e5e0(void); };

// @baa 0x0185e5e0
void C_0185e5e0::sub_0185e5e0(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_0185e5f0 { C_0185e5f0* sub_0185e5f0(void); };

// @baa 0x0185e5f0
C_0185e5f0* C_0185e5f0::sub_0185e5f0(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; return this; }

struct C_0185e620 {
    undefined1 sub_0185e620();
};

// @baa 0x0185e620
undefined1 C_0185e620::sub_0185e620(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

struct C_0185e630 {
    undefined4 * sub_0185e630(byte);
};

// @baa 0x0185e630
undefined4 * C_0185e630::sub_0185e630(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185f930 { void sub_0185f930(void); };

// @baa 0x0185f930
void C_0185f930::sub_0185f930(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_0185f950 {
    undefined4 * sub_0185f950(byte);
};

// @baa 0x0185f950
undefined4 * C_0185f950::sub_0185f950(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
