// FCDEffectStandard.cpp (part 1 of 2): 34 functions
// Placed here by: neighbours 34.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01857dd0
undefined4 sub_01857dd0(int * param_1, int * param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C {
    undefined4 sub_0186ec90(undefined4, undefined1 *);
};

int sub_01815fa0(...);
extern undefined4 g_027b80a0;
extern undefined4 g_027b80ac;
extern undefined4 g_027b80b8;
extern undefined4 g_027b80c4;
extern undefined4 g_027b80d0;
extern undefined4 g_027b80dc;
extern undefined4 g_027b80e8;
extern undefined4 g_027b80f4;
extern undefined4 g_027b8100;
extern undefined4 g_027b810c;
extern undefined4 g_027b8118;
extern undefined4 g_027b8124;
// @baa 0x0186ec90
undefined4 C::sub_0186ec90(undefined4 param_2, undefined1 * param_3)
{
    int param_1 = (int)this;

  char cVar1;
  
  cVar1 = sub_01815fa0(param_2,&g_027b8100);
  if (cVar1 != '\0') {
    *param_3 = 0;
    return *(undefined4 *)(param_1 + 0x128);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80f4);
  if (cVar1 != '\0') {
    *param_3 = 0;
    return *(undefined4 *)(param_1 + 0x10c);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80a0);
  if (cVar1 != '\0') {
    *param_3 = 0;
    return *(undefined4 *)(param_1 + 100);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80ac);
  if (cVar1 != '\0') {
    *param_3 = 1;
    return *(undefined4 *)(param_1 + 0x6c);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80d0);
  if (cVar1 != '\0') {
    *param_3 = 1;
    return *(undefined4 *)(param_1 + 0xbc);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80b8);
  if (cVar1 != '\0') {
    *param_3 = 0;
    return *(undefined4 *)(param_1 + 0x90);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80c4);
  if (cVar1 != '\0') {
    *param_3 = 1;
    return *(undefined4 *)(param_1 + 0x98);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b8124);
  if (cVar1 != '\0') {
    *param_3 = 1;
    return *(undefined4 *)(param_1 + 0x17c);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b810c);
  if (cVar1 != '\0') {
    *param_3 = 0;
    return *(undefined4 *)(param_1 + 0x144);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b8118);
  if (cVar1 != '\0') {
    *param_3 = 1;
    return *(undefined4 *)(param_1 + 0x160);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80dc);
  if (cVar1 != '\0') {
    *param_3 = 0;
    return *(undefined4 *)(param_1 + 0xe0);
  }
  cVar1 = sub_01815fa0(param_2,&g_027b80e8);
  if (cVar1 != '\0') {
    *param_3 = 1;
    return *(undefined4 *)(param_1 + 0xe8);
  }
  *param_3 = 1;
  return 0;
}

struct C_01870140 { int sub_01870140(void); };

// @baa 0x01870140
int C_01870140::sub_01870140(void) { return *(int*)((char*)this + 8); }

struct C_01870170 {
    void sub_01870170();
};

void sub_01826080(void *);
// @baa 0x01870170
void C_01870170::sub_01870170(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018702d0 { int sub_018702d0(void); };

// @baa 0x018702d0
int C_018702d0::sub_018702d0(void) { return *(int*)((char*)this + 4); }

struct C_018702e0 { int sub_018702e0(void); };

// @baa 0x018702e0
int C_018702e0::sub_018702e0(void) { return *(int*)((char*)this + 4); }

struct C_018702f0 {
    void sub_018702f0(int);
};

int sub_018260a0(...);
// @baa 0x018702f0
void C_018702f0::sub_018702f0(int param_2)
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

struct C_01870470 { int sub_01870470(void); };

// @baa 0x01870470
int C_01870470::sub_01870470(void) { return *(int*)((char*)this + 4); }

struct C_01870480 { int sub_01870480(void); };

// @baa 0x01870480
int C_01870480::sub_01870480(void) { return *(int*)((char*)this + 4); }

struct C_01870490 {
    void sub_01870490(int);
};

// @baa 0x01870490
void C_01870490::sub_01870490(int param_2)
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

extern char g_023ecd6c[];
struct C_018704e0 { void sub_018704e0(void); };

// @baa 0x018704e0
void C_018704e0::sub_018704e0(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_018704f0 { char* sub_018704f0(void); };

// @baa 0x018704f0
char* C_018704f0::sub_018704f0(void) { return (char*)this + 100; }

struct C_01870500 { char* sub_01870500(void); };

// @baa 0x01870500
char* C_01870500::sub_01870500(void) { return (char*)this + 100; }

struct C_01870510 { char* sub_01870510(void); };

// @baa 0x01870510
char* C_01870510::sub_01870510(void) { return (char*)this + 16; }

struct C_01870520 { char* sub_01870520(void); };

// @baa 0x01870520
char* C_01870520::sub_01870520(void) { return (char*)this + 100; }

struct C_01870530 { char* sub_01870530(void); };

// @baa 0x01870530
char* C_01870530::sub_01870530(void) { return (char*)this + 100; }

struct C_01870540 {
    undefined4 sub_01870540(byte);
};

int sub_00402660(...);
int sub_01870200(void);
// @baa 0x01870540
undefined4 C_01870540::sub_01870540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01870200();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870560 {
    undefined4 sub_01870560(byte);
};

int sub_018703a0(void);
// @baa 0x01870560
undefined4 C_01870560::sub_01870560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018703a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870580 {
    undefined4 * sub_01870580(byte);
};

// @baa 0x01870580
undefined4 * C_01870580::sub_01870580(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018705d0 { int sub_018705d0(void); };

// @baa 0x018705d0
int C_018705d0::sub_018705d0(void) { return *(int*)((char*)this + 72); }

extern char g_023e4520[];
struct C_01870620 { void sub_01870620(void); };

// @baa 0x01870620
void C_01870620::sub_01870620(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01870650 { void sub_01870650(void); };

// @baa 0x01870650
void C_01870650::sub_01870650(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_01870680 { void sub_01870680(void); };

// @baa 0x01870680
void C_01870680::sub_01870680(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_018706b0 { void sub_018706b0(void); };

// @baa 0x018706b0
void C_018706b0::sub_018706b0(void) { *(int*)((char*)this + 0) = (int)g_023ecd6c; }

struct C_018706e0 { void sub_018706e0(void); };

// @baa 0x018706e0
void C_018706e0::sub_018706e0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01870700 {
    undefined4 * sub_01870700(byte);
};

// @baa 0x01870700
undefined4 * C_01870700::sub_01870700(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870720 {
    undefined4 * sub_01870720(byte);
};

// @baa 0x01870720
undefined4 * C_01870720::sub_01870720(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870740 {
    undefined4 * sub_01870740(byte);
};

// @baa 0x01870740
undefined4 * C_01870740::sub_01870740(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870760 {
    undefined4 * sub_01870760(byte);
};

// @baa 0x01870760
undefined4 * C_01870760::sub_01870760(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ecd6c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870780 {
    undefined4 * sub_01870780(byte);
};

// @baa 0x01870780
undefined4 * C_01870780::sub_01870780(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018707c0 {
    void sub_018707c0(int *);
};

// @baa 0x018707c0
void C_018707c0::sub_018707c0(int * param_2)
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

extern char g_027b8098[];
// @baa 0x018709e0
int sub_018709e0(void) { return (int)g_027b8098; }

// @baa 0x018709f0
int sub_018709f0(void) { return 4; }

struct C_01870a00 {
    undefined4 sub_01870a00(byte);
};

int sub_018708f0(void);
// @baa 0x01870a00
undefined4 C_01870a00::sub_01870a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018708f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
