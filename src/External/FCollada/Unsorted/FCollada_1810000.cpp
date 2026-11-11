// FCollada_1810000.cpp (part 1 of 8): 317 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_027b7fa4[];
// @baa 0x01811980
int sub_01811980(void) { return (int)g_027b7fa4; }

struct C { int sub_01811990(void); };

// @baa 0x01811990
int C::sub_01811990(void) { return *(int*)((char*)this + 36); }

struct C_018119c0 {
    void sub_018119c0(int);
};

int sub_018260a0(...);
// @baa 0x018119c0
void C_018119c0::sub_018119c0(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 4) != 0) && (param_2 != 0)) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0x5a);
    return;
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

struct C_018119f0 {
    void sub_018119f0(int);
};

// @baa 0x018119f0
void C_018119f0::sub_018119f0(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_2 + 4) != 0) && (param_1 != 0)) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0x5a);
    return;
  }
  *(int *)(param_2 + 4) = param_1;
  return;
}

struct C_01811a20 {
    void sub_01811a20(int);
};

// @baa 0x01811a20
void C_01811a20::sub_01811a20(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_2 + 4) != param_1) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0x73);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}

extern char g_023e42e0[];
struct C_01811a50 { void sub_01811a50(void); };

// @baa 0x01811a50
void C_01811a50::sub_01811a50(void) { *(int*)((char*)this + 0) = (int)g_023e42e0; }

struct C_01811a60 {
    undefined4 * sub_01811a60(byte);
};

int sub_00402660(...);
// @baa 0x01811a60
undefined4 * C_01811a60::sub_01811a60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e42e0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01811a80 { int sub_01811a80(void); };

// @baa 0x01811a80
int C_01811a80::sub_01811a80(void) { return *(int*)((char*)this + 8); }

void sub_018529d0();
// @baa 0x01811ac0
void sub_01811ac0(void) { sub_018529d0(); }

extern char g_027b7fb4[];
// @baa 0x01811ad0
int sub_01811ad0(void) { return (int)g_027b7fb4; }

extern char g_027b7e48[];
// @baa 0x01811ae0
int sub_01811ae0(void) { return (int)g_027b7e48; }

// @baa 0x01811af0
void sub_01811af0(void) {  }

struct C_01813050 { C_01813050* sub_01813050(void); };

// @baa 0x01813050
C_01813050* C_01813050::sub_01813050(void) { *(int*)((char*)this + 0) = (int)g_023e42e0; return this; }

struct C_01813060 {
    undefined4 sub_01813060(byte);
};

int sub_0184f6f0(void);
// @baa 0x01813060
undefined4 C_01813060::sub_01813060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184f6f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01813080 {
    undefined4 sub_01813080(byte);
};

// @baa 0x01813080
undefined4 C_01813080::sub_01813080(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01813200 {
    void sub_01813200(int);
};

// @baa 0x01813200
void C_01813200::sub_01813200(int param_2)
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

struct C_01813380 { int sub_01813380(void); };

// @baa 0x01813380
int C_01813380::sub_01813380(void) { return *(int*)((char*)this + 4); }

struct C_01813390 { int sub_01813390(void); };

// @baa 0x01813390
int C_01813390::sub_01813390(void) { return *(int*)((char*)this + 4); }

struct C_018133a0 { int sub_018133a0(void); };

// @baa 0x018133a0
int C_018133a0::sub_018133a0(void) { return *(int*)((char*)this + 4); }

struct C_018133b0 {
    void sub_018133b0(int);
};

// @baa 0x018133b0
void C_018133b0::sub_018133b0(int param_2)
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

struct C_018133e0 { int sub_018133e0(void); };

// @baa 0x018133e0
int C_018133e0::sub_018133e0(void) { return *(int*)((char*)this + 8); }

struct C_018133f0 {
    bool sub_018133f0();
};

// @baa 0x018133f0
bool C_018133f0::sub_018133f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01813420 {
    void sub_01813420();
};

void sub_01826080(void *);
// @baa 0x01813420
void C_01813420::sub_01813420(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01813580 {
    void sub_01813580(int);
};

// @baa 0x01813580
void C_01813580::sub_01813580(int param_2)
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

struct C_01813700 {
    void sub_01813700(int);
};

// @baa 0x01813700
void C_01813700::sub_01813700(int param_2)
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

extern char g_023e4370[];
struct C_01813750 { void sub_01813750(void); };

// @baa 0x01813750
void C_01813750::sub_01813750(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01813780 {
    void sub_01813780();
};

// @baa 0x01813780
void C_01813780::sub_01813780(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018138e0 { int sub_018138e0(void); };

// @baa 0x018138e0
int C_018138e0::sub_018138e0(void) { return *(int*)((char*)this + 4); }

struct C_018138f0 {
    void sub_018138f0(int);
};

// @baa 0x018138f0
void C_018138f0::sub_018138f0(int param_2)
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

struct C_01813a70 { int sub_01813a70(void); };

// @baa 0x01813a70
int C_01813a70::sub_01813a70(void) { return *(int*)((char*)this + 4); }

struct C_01813a80 {
    void sub_01813a80(int);
};

// @baa 0x01813a80
void C_01813a80::sub_01813a80(int param_2)
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

struct C_01813c00 { int sub_01813c00(void); };

// @baa 0x01813c00
int C_01813c00::sub_01813c00(void) { return *(int*)((char*)this + 4); }

struct C_01813c10 {
    void sub_01813c10(int);
};

// @baa 0x01813c10
void C_01813c10::sub_01813c10(int param_2)
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

struct C_01813d90 { int sub_01813d90(void); };

// @baa 0x01813d90
int C_01813d90::sub_01813d90(void) { return *(int*)((char*)this + 4); }

struct C_01813da0 {
    void sub_01813da0(int);
};

// @baa 0x01813da0
void C_01813da0::sub_01813da0(int param_2)
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

struct C_01813f20 { int sub_01813f20(void); };

// @baa 0x01813f20
int C_01813f20::sub_01813f20(void) { return *(int*)((char*)this + 4); }

struct C_01813f30 {
    void sub_01813f30(int);
};

// @baa 0x01813f30
void C_01813f30::sub_01813f30(int param_2)
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

struct C_018140b0 { int sub_018140b0(void); };

// @baa 0x018140b0
int C_018140b0::sub_018140b0(void) { return *(int*)((char*)this + 4); }

struct C_018140c0 { int sub_018140c0(void); };

// @baa 0x018140c0
int C_018140c0::sub_018140c0(void) { return *(int*)((char*)this + 4); }

struct C_018140d0 {
    void sub_018140d0(int);
};

// @baa 0x018140d0
void C_018140d0::sub_018140d0(int param_2)
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

struct C_01814250 { int sub_01814250(void); };

// @baa 0x01814250
int C_01814250::sub_01814250(void) { return *(int*)((char*)this + 4); }

struct C_01814260 {
    void sub_01814260(int);
};

// @baa 0x01814260
void C_01814260::sub_01814260(int param_2)
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

struct C_018143e0 { int sub_018143e0(void); };

// @baa 0x018143e0
int C_018143e0::sub_018143e0(void) { return *(int*)((char*)this + 4); }

struct C_018143f0 { int sub_018143f0(void); };

// @baa 0x018143f0
int C_018143f0::sub_018143f0(void) { return *(int*)((char*)this + 4); }

struct C_01814400 {
    void sub_01814400(int);
};

// @baa 0x01814400
void C_01814400::sub_01814400(int param_2)
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

struct C_01814580 { int sub_01814580(void); };

// @baa 0x01814580
int C_01814580::sub_01814580(void) { return *(int*)((char*)this + 4); }

struct C_01814590 {
    void sub_01814590(int);
};

// @baa 0x01814590
void C_01814590::sub_01814590(int param_2)
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

struct C_01814710 { int sub_01814710(void); };

// @baa 0x01814710
int C_01814710::sub_01814710(void) { return *(int*)((char*)this + 4); }

struct C_01814720 {
    void sub_01814720(int);
};

// @baa 0x01814720
void C_01814720::sub_01814720(int param_2)
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

struct C_018148a0 { int sub_018148a0(void); };

// @baa 0x018148a0
int C_018148a0::sub_018148a0(void) { return *(int*)((char*)this + 4); }

struct C_018148b0 { int sub_018148b0(void); };

// @baa 0x018148b0
int C_018148b0::sub_018148b0(void) { return *(int*)((char*)this + 4); }

struct C_018148c0 {
    void sub_018148c0(int);
};

// @baa 0x018148c0
void C_018148c0::sub_018148c0(int param_2)
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

struct C_01814a40 { int sub_01814a40(void); };

// @baa 0x01814a40
int C_01814a40::sub_01814a40(void) { return *(int*)((char*)this + 4); }

struct C_01814a50 { int sub_01814a50(void); };

// @baa 0x01814a50
int C_01814a50::sub_01814a50(void) { return *(int*)((char*)this + 4); }

struct C_01814a60 {
    void sub_01814a60(int);
};

// @baa 0x01814a60
void C_01814a60::sub_01814a60(int param_2)
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

struct C_01814be0 { int sub_01814be0(void); };

// @baa 0x01814be0
int C_01814be0::sub_01814be0(void) { return *(int*)((char*)this + 4); }

struct C_01814bf0 {
    void sub_01814bf0(int);
};

// @baa 0x01814bf0
void C_01814bf0::sub_01814bf0(int param_2)
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

struct C_01814d70 { int sub_01814d70(void); };

// @baa 0x01814d70
int C_01814d70::sub_01814d70(void) { return *(int*)((char*)this + 4); }

struct C_01814d80 { int sub_01814d80(void); };

// @baa 0x01814d80
int C_01814d80::sub_01814d80(void) { return *(int*)((char*)this + 4); }

struct C_01814d90 {
    void sub_01814d90(int);
};

// @baa 0x01814d90
void C_01814d90::sub_01814d90(int param_2)
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

struct C_01814f10 { int sub_01814f10(void); };

// @baa 0x01814f10
int C_01814f10::sub_01814f10(void) { return *(int*)((char*)this + 4); }

struct C_01814f20 {
    void sub_01814f20(int);
};

// @baa 0x01814f20
void C_01814f20::sub_01814f20(int param_2)
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

struct C_01814f50 {
    bool sub_01814f50();
};

// @baa 0x01814f50
bool C_01814f50::sub_01814f50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

void sub_0183c0d0();
// @baa 0x01814f90
void sub_01814f90(void) { sub_0183c0d0(); }

void sub_01839840();
// @baa 0x01814fa0
void sub_01814fa0(void) { sub_01839840(); }

void sub_01839a80();
// @baa 0x01814fb0
void sub_01814fb0(void) { sub_01839a80(); }

void sub_01839cc0();
// @baa 0x01814fc0
void sub_01814fc0(void) { sub_01839cc0(); }

void sub_0183a140();
// @baa 0x01814fd0
void sub_01814fd0(void) { sub_0183a140(); }

void sub_0183a380();
// @baa 0x01814fe0
void sub_01814fe0(void) { sub_0183a380(); }

void sub_01839f00();
// @baa 0x01814ff0
void sub_01814ff0(void) { sub_01839f00(); }

void sub_0183a5c0();
// @baa 0x01815000
void sub_01815000(void) { sub_0183a5c0(); }

void sub_0183a800();
// @baa 0x01815010
void sub_01815010(void) { sub_0183a800(); }

void sub_0183aa40();
// @baa 0x01815020
void sub_01815020(void) { sub_0183aa40(); }

void sub_0183ac80();
// @baa 0x01815030
void sub_01815030(void) { sub_0183ac80(); }

void sub_0183aec0();
// @baa 0x01815040
void sub_01815040(void) { sub_0183aec0(); }

void sub_0183b340();
// @baa 0x01815050
void sub_01815050(void) { sub_0183b340(); }

void sub_0183b100();
// @baa 0x01815060
void sub_01815060(void) { sub_0183b100(); }

void sub_0183b580();
// @baa 0x01815070
void sub_01815070(void) { sub_0183b580(); }

struct C_01815080 {
    bool sub_01815080(int *);
};

// @baa 0x01815080
bool C_01815080::sub_01815080(int * param_2)
{
    int * param_1 = (int *)this;

  return *param_2 != *param_1;
}

struct C_018150d0 {
    int sub_018150d0();
};

// @baa 0x018150d0
int C_018150d0::sub_018150d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_018150e0 {
    undefined4 sub_018150e0(byte);
};

int sub_01813130(void);
// @baa 0x018150e0
undefined4 C_018150e0::sub_018150e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813130();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815100 {
    undefined4 sub_01815100(byte);
};

int sub_018132b0(void);
// @baa 0x01815100
undefined4 C_01815100::sub_01815100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018132b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815120 {
    undefined4 sub_01815120(byte);
};

int sub_018134b0(void);
// @baa 0x01815120
undefined4 C_01815120::sub_01815120(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018134b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815140 {
    undefined4 sub_01815140(byte);
};

int sub_01813630(void);
// @baa 0x01815140
undefined4 C_01815140::sub_01815140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813630();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815160 {
    undefined4 * sub_01815160(byte);
};

// @baa 0x01815160
undefined4 * C_01815160::sub_01815160(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815180 {
    undefined4 sub_01815180(byte);
};

int sub_01813810(void);
// @baa 0x01815180
undefined4 C_01815180::sub_01815180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813810();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018151a0 {
    undefined4 sub_018151a0(byte);
};

int sub_018139a0(void);
// @baa 0x018151a0
undefined4 C_018151a0::sub_018151a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018139a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018151c0 {
    undefined4 sub_018151c0(byte);
};

int sub_01813b30(void);
// @baa 0x018151c0
undefined4 C_018151c0::sub_018151c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813b30();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018151e0 {
    undefined4 sub_018151e0(byte);
};

int sub_01813cc0(void);
// @baa 0x018151e0
undefined4 C_018151e0::sub_018151e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813cc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815200 {
    undefined4 sub_01815200(byte);
};

int sub_01813e50(void);
// @baa 0x01815200
undefined4 C_01815200::sub_01815200(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813e50();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815220 {
    undefined4 sub_01815220(byte);
};

int sub_01813fe0(void);
// @baa 0x01815220
undefined4 C_01815220::sub_01815220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01813fe0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815240 {
    undefined4 sub_01815240(byte);
};

int sub_01814180(void);
// @baa 0x01815240
undefined4 C_01815240::sub_01815240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814180();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815260 {
    undefined4 sub_01815260(byte);
};

int sub_01814310(void);
// @baa 0x01815260
undefined4 C_01815260::sub_01815260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814310();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815280 {
    undefined4 sub_01815280(byte);
};

int sub_018144b0(void);
// @baa 0x01815280
undefined4 C_01815280::sub_01815280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018144b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018152a0 {
    undefined4 sub_018152a0(byte);
};

int sub_01814640(void);
// @baa 0x018152a0
undefined4 C_018152a0::sub_018152a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018152c0 {
    undefined4 sub_018152c0(byte);
};

int sub_018147d0(void);
// @baa 0x018152c0
undefined4 C_018152c0::sub_018152c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018147d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018152e0 {
    undefined4 sub_018152e0(byte);
};

int sub_01814970(void);
// @baa 0x018152e0
undefined4 C_018152e0::sub_018152e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814970();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815300 {
    undefined4 sub_01815300(byte);
};

int sub_01814b10(void);
// @baa 0x01815300
undefined4 C_01815300::sub_01815300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814b10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815320 {
    undefined4 sub_01815320(byte);
};

int sub_01814ca0(void);
// @baa 0x01815320
undefined4 C_01815320::sub_01815320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814ca0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815340 {
    undefined4 sub_01815340(byte);
};

int sub_01814e40(void);
// @baa 0x01815340
undefined4 C_01815340::sub_01815340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01814e40();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018154e0 { int sub_018154e0(void); };

// @baa 0x018154e0
int C_018154e0::sub_018154e0(void) { return *(int*)((char*)this + 8); }

struct C_018154f0 { int sub_018154f0(void); };

// @baa 0x018154f0
int C_018154f0::sub_018154f0(void) { return *(int*)((char*)this + 8); }

struct C_01815500 { int sub_01815500(void); };

// @baa 0x01815500
int C_01815500::sub_01815500(void) { return *(int*)((char*)this + 8); }

struct C_01815730 {
    void sub_01815730(int *);
};

// @baa 0x01815730
void C_01815730::sub_01815730(int * param_2)
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

struct C_018157f0 { void sub_018157f0(void); };

// @baa 0x018157f0
void C_018157f0::sub_018157f0(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01815820 { void sub_01815820(void); };

// @baa 0x01815820
void C_01815820::sub_01815820(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01815830 { int sub_01815830(void); };

// @baa 0x01815830
int C_01815830::sub_01815830(void) { return *(int*)((char*)this + 200); }

struct C_01815840 { int sub_01815840(void); };

// @baa 0x01815840
int C_01815840::sub_01815840(void) { return *(int*)((char*)this + 216); }

struct C_01815850 { int sub_01815850(void); };

// @baa 0x01815850
int C_01815850::sub_01815850(void) { return *(int*)((char*)this + 240); }

struct C_01815860 { int sub_01815860(void); };

// @baa 0x01815860
int C_01815860::sub_01815860(void) { return *(int*)((char*)this + 248); }

struct C_01815870 {
    undefined4 * sub_01815870(byte);
};

// @baa 0x01815870
undefined4 * C_01815870::sub_01815870(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01815890 {
    undefined4 * sub_01815890(byte);
};

// @baa 0x01815890
undefined4 * C_01815890::sub_01815890(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018159f0 {
    int sub_018159f0();
};

// @baa 0x018159f0
int C_018159f0::sub_018159f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_01815a00 {
    void sub_01815a00(int *);
};

// @baa 0x01815a00
void C_01815a00::sub_01815a00(int * param_2)
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

struct C_01815a30 { int sub_01815a30(void); };

// @baa 0x01815a30
int C_01815a30::sub_01815a30(void) { return *(int*)((char*)this + 8); }

struct C_01815a60 {
    void sub_01815a60();
};

int sub_01815360(void);
// @baa 0x01815a60
void C_01815a60::sub_01815a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01815360();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01815b10 {
    void sub_01815b10();
};

int sub_01815470(void);
// @baa 0x01815b10
void C_01815b10::sub_01815b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01815470();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01815d20 { int sub_01815d20(void); };

// @baa 0x01815d20
int C_01815d20::sub_01815d20(void) { return *(int*)((char*)this + 44); }

struct C_01815d30 { int sub_01815d30(void); };

// @baa 0x01815d30
int C_01815d30::sub_01815d30(void) { return *(int*)((char*)this + 44); }

struct C_01815d40 { int sub_01815d40(void); };

// @baa 0x01815d40
int C_01815d40::sub_01815d40(void) { return *(int*)((char*)this + 44); }

struct C_01815d50 { int sub_01815d50(void); };

// @baa 0x01815d50
int C_01815d50::sub_01815d50(void) { return *(int*)((char*)this + 44); }

struct C_01815d60 {
    int sub_01815d60(byte);
};

// @baa 0x01815d60
int C_01815d60::sub_01815d60(byte param_2)
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

struct C_01815f40 {
    void sub_01815f40();
};

int sub_018156a0(void);
// @baa 0x01815f40
void C_01815f40::sub_01815f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018156a0();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01816020 {
    void sub_01816020(int *);
};

// @baa 0x01816020
void C_01816020::sub_01816020(int * param_2)
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

struct C_01816110 {
    void sub_01816110();
};

// @baa 0x01816110
void C_01816110::sub_01816110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01815360();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01816130 {
    void sub_01816130();
};

// @baa 0x01816130
void C_01816130::sub_01816130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01815470();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01816320 {
    void sub_01816320();
};

// @baa 0x01816320
void C_01816320::sub_01816320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018156a0();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

// @baa 0x01816380
void sub_01816380(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

// @baa 0x018163a0
void sub_018163a0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

// @baa 0x01816430
void sub_01816430(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

struct C_01816450 {
    undefined4 sub_01816450(byte);
};

int sub_018161a0(void);
// @baa 0x01816450
undefined4 C_01816450::sub_01816450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018161a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018164f0 {
    undefined4 * sub_018164f0();
};

void * sub_01826070(size_t);
// @baa 0x018164f0
undefined4 * C_018164f0::sub_018164f0(void)
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

struct C_01816590 {
    undefined4 * sub_01816590();
};

// @baa 0x01816590
undefined4 * C_01816590::sub_01816590(void)
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

struct C_01816700 {
    undefined4 * sub_01816700(byte);
};

// @baa 0x01816700
undefined4 * C_01816700::sub_01816700(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018156a0();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018167c0 {
    undefined4 * sub_018167c0();
};

// @baa 0x018167c0
undefined4 * C_018167c0::sub_018167c0(void)
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

struct C_01816800 {
    undefined4 * sub_01816800();
};

// @baa 0x01816800
undefined4 * C_01816800::sub_01816800(void)
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

struct C_01816840 {
    undefined4 * sub_01816840();
};

// @baa 0x01816840
undefined4 * C_01816840::sub_01816840(void)
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

struct C_01816880 {
    undefined4 sub_01816880(byte);
};

int sub_01816470(void);
// @baa 0x01816880
undefined4 C_01816880::sub_01816880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01816470();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01816950 {
    undefined4 * sub_01816950();
};

// @baa 0x01816950
undefined4 * C_01816950::sub_01816950(void)
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

struct C_01816b20 {
    void sub_01816b20();
};

// @baa 0x01816b20
void C_01816b20::sub_01816b20(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return;
}

struct C_01816b30 {
    void sub_01816b30();
};

// @baa 0x01816b30
void C_01816b30::sub_01816b30(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return;
}

extern char g_027b7d2c[];
// @baa 0x01816b40
int sub_01816b40(void) { return (int)g_027b7d2c; }

struct C_01816ba0 {
    undefined4 sub_01816ba0(byte);
};

int sub_01812220(void);
// @baa 0x01816ba0
undefined4 C_01816ba0::sub_01816ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01812220();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01816c30 {
    undefined4 sub_01816c30();
};

int sub_01816bc0(void);
// @baa 0x01816c30
undefined4 C_01816c30::sub_01816c30(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01816bc0();
  return param_1;
}

struct C_01816c40 {
    undefined4 sub_01816c40();
};

// @baa 0x01816c40
undefined4 C_01816c40::sub_01816c40(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01816bc0();
  return param_1;
}

extern char g_027b7fcc[];
// @baa 0x01816c50
int sub_01816c50(void) { return (int)g_027b7fcc; }

struct C_01816c80 { int sub_01816c80(void); };

// @baa 0x01816c80
int C_01816c80::sub_01816c80(void) { return *(int*)((char*)this + 4); }

struct C_01816c90 {
    void sub_01816c90();
};

int sub_0181b5d0(void);
extern undefined4 g_023e44d0;
// @baa 0x01816c90
void C_01816c90::sub_01816c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e44d0));
  sub_0181b5d0();
  return;
}

struct C_01816ce0 {
    void sub_01816ce0();
};

extern undefined4 g_023e44e0;
// @baa 0x01816ce0
void C_01816ce0::sub_01816ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e44e0));
  sub_0181b5d0();
  return;
}

struct C_01816d30 {
    void sub_01816d30();
};

extern undefined4 g_023e44f0;
// @baa 0x01816d30
void C_01816d30::sub_01816d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e44f0));
  sub_0181b5d0();
  return;
}

struct C_01816d80 {
    void sub_01816d80();
};

extern undefined4 g_023e4500;
// @baa 0x01816d80
void C_01816d80::sub_01816d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4500));
  sub_0181b5d0();
  return;
}

struct C_01816dc0 {
    void sub_01816dc0();
};

// @baa 0x01816dc0
void C_01816dc0::sub_01816dc0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
  return;
}

struct C_01816dd0 {
    void sub_01816dd0();
};

// @baa 0x01816dd0
void C_01816dd0::sub_01816dd0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff7f;
  return;
}

struct C_01816de0 {
    uint sub_01816de0();
};

// @baa 0x01816de0
uint C_01816de0::sub_01816de0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 7 & 1;
}

struct C_01816df0 {
    void sub_01816df0();
};

// @baa 0x01816df0
void C_01816df0::sub_01816df0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x100;
  return;
}

struct C_01816e00 {
    void sub_01816e00();
};

// @baa 0x01816e00
void C_01816e00::sub_01816e00(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffeff;
  return;
}

struct C_01816e10 {
    uint sub_01816e10();
};

// @baa 0x01816e10
uint C_01816e10::sub_01816e10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 8 & 1;
}

struct C_01816e20 {
    undefined4 * sub_01816e20(byte);
};

// @baa 0x01816e20
undefined4 * C_01816e20::sub_01816e20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e44d0));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01816e50 {
    undefined4 * sub_01816e50(byte);
};

// @baa 0x01816e50
undefined4 * C_01816e50::sub_01816e50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e44e0));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01816e80 {
    undefined4 * sub_01816e80(byte);
};

// @baa 0x01816e80
undefined4 * C_01816e80::sub_01816e80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e44f0));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01816eb0 {
    undefined4 * sub_01816eb0(byte);
};

// @baa 0x01816eb0
undefined4 * C_01816eb0::sub_01816eb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4500));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01816ee0 {
    undefined4 * sub_01816ee0(byte);
};

extern undefined4 g_023e4510;
// @baa 0x01816ee0
undefined4 * C_01816ee0::sub_01816ee0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4510));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e4520[];
struct C_01817260 { void sub_01817260(void); };

// @baa 0x01817260
void C_01817260::sub_01817260(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01817270 { char* sub_01817270(void); };

// @baa 0x01817270
char* C_01817270::sub_01817270(void) { return (char*)this + 16; }

struct C_01817280 {
    undefined4 * sub_01817280(byte);
};

// @baa 0x01817280
undefined4 * C_01817280::sub_01817280(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018172c0 { void sub_018172c0(void); };

// @baa 0x018172c0
void C_018172c0::sub_018172c0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_018172d0 {
    undefined4 * sub_018172d0(byte);
};

// @baa 0x018172d0
undefined4 * C_018172d0::sub_018172d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7d34[];
// @baa 0x01817300
int sub_01817300(void) { return (int)g_027b7d34; }

// @baa 0x01817310
int sub_01817310(void) { return 3; }

struct C_01817320 {
    undefined4 sub_01817320(byte);
};

int sub_01817070(void);
// @baa 0x01817320
undefined4 C_01817320::sub_01817320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01817070();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01817340 {
    void sub_01817340();
};

// @baa 0x01817340
void C_01817340::sub_01817340(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  return;
}

struct C_01817350 { int sub_01817350(void); };

// @baa 0x01817350
int C_01817350::sub_01817350(void) { return *(int*)((char*)this + 84); }

struct C_01817360 {
    void sub_01817360(undefined4);
};

// @baa 0x01817360
void C_01817360::sub_01817360(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}

// @baa 0x01817370
int sub_01817370(void) { return 0; }

struct C_01817380 { C_01817380* sub_01817380(int a0); };

// @baa 0x01817380
C_01817380* C_01817380::sub_01817380(int a0) { return this; }

// @baa 0x01817850
int __stdcall sub_01817850(int a0) { return 0; }

void sub_018181e0();
// @baa 0x01818250
void sub_01818250(void) { sub_018181e0(); }

struct C_01818340 { int sub_01818340(void); };

// @baa 0x01818340
int C_01818340::sub_01818340(void) { return *(int*)((char*)this + 4); }

struct C_01818350 { int sub_01818350(void); };

// @baa 0x01818350
int C_01818350::sub_01818350(void) { return *(int*)((char*)this + 4); }

struct C_01818360 { int sub_01818360(void); };

// @baa 0x01818360
int C_01818360::sub_01818360(void) { return *(int*)((char*)this + 4); }

struct C_018183a0 { C_018183a0* sub_018183a0(void); };

// @baa 0x018183a0
C_018183a0* C_018183a0::sub_018183a0(void) { return this; }

struct C_018183b0 {
    int sub_018183b0(int);
};

// @baa 0x018183b0
int C_018183b0::sub_018183b0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

void sub_00eec680();
// @baa 0x018184e0
void sub_018184e0(void) { sub_00eec680(); }

struct C_018184f0 { C_018184f0* sub_018184f0(void); };

// @baa 0x018184f0
C_018184f0* C_018184f0::sub_018184f0(void) { return this; }

void sub_0184b6a0();
// @baa 0x018185e0
void sub_018185e0(void) { sub_0184b6a0(); }

struct C_01818690 { C_01818690* sub_01818690(int a0); };

// @baa 0x01818690
C_01818690* C_01818690::sub_01818690(int a0) { return this; }

struct C_018186a0 { char* sub_018186a0(void); };

// @baa 0x018186a0
char* C_018186a0::sub_018186a0(void) { return (char*)this + 16; }

struct C_018186b0 { char* sub_018186b0(void); };

// @baa 0x018186b0
char* C_018186b0::sub_018186b0(void) { return (char*)this + 16; }

struct C_018186c0 { char* sub_018186c0(void); };

// @baa 0x018186c0
char* C_018186c0::sub_018186c0(void) { return (char*)this + 16; }

struct C_018186d0 { char* sub_018186d0(void); };

// @baa 0x018186d0
char* C_018186d0::sub_018186d0(void) { return (char*)this + 16; }

struct C_018186e0 { char* sub_018186e0(void); };

// @baa 0x018186e0
char* C_018186e0::sub_018186e0(void) { return (char*)this + 16; }

struct C_018186f0 { char* sub_018186f0(void); };

// @baa 0x018186f0
char* C_018186f0::sub_018186f0(void) { return (char*)this + 16; }

struct C_01818700 { char* sub_01818700(void); };

// @baa 0x01818700
char* C_01818700::sub_01818700(void) { return (char*)this + 16; }

struct C_01818710 { char* sub_01818710(void); };

// @baa 0x01818710
char* C_01818710::sub_01818710(void) { return (char*)this + 16; }

struct C_01818720 { char* sub_01818720(void); };

// @baa 0x01818720
char* C_01818720::sub_01818720(void) { return (char*)this + 16; }

struct C_01818730 { char* sub_01818730(void); };

// @baa 0x01818730
char* C_01818730::sub_01818730(void) { return (char*)this + 16; }

struct C_01818740 { char* sub_01818740(void); };

// @baa 0x01818740
char* C_01818740::sub_01818740(void) { return (char*)this + 16; }

struct C_01818750 { char* sub_01818750(void); };

// @baa 0x01818750
char* C_01818750::sub_01818750(void) { return (char*)this + 16; }

struct C_01818760 { char* sub_01818760(void); };

// @baa 0x01818760
char* C_01818760::sub_01818760(void) { return (char*)this + 16; }

struct C_01818770 { char* sub_01818770(void); };

// @baa 0x01818770
char* C_01818770::sub_01818770(void) { return (char*)this + 16; }

struct C_01818780 { char* sub_01818780(void); };

// @baa 0x01818780
char* C_01818780::sub_01818780(void) { return (char*)this + 16; }

struct C_01818790 { char* sub_01818790(void); };

// @baa 0x01818790
char* C_01818790::sub_01818790(void) { return (char*)this + 16; }

struct C_018187a0 { char* sub_018187a0(void); };

// @baa 0x018187a0
char* C_018187a0::sub_018187a0(void) { return (char*)this + 16; }

struct C_018187b0 { char* sub_018187b0(void); };

// @baa 0x018187b0
char* C_018187b0::sub_018187b0(void) { return (char*)this + 16; }

struct C_018187c0 { char* sub_018187c0(void); };

// @baa 0x018187c0
char* C_018187c0::sub_018187c0(void) { return (char*)this + 16; }

struct C_018187d0 { char* sub_018187d0(void); };

// @baa 0x018187d0
char* C_018187d0::sub_018187d0(void) { return (char*)this + 16; }

struct C_018187e0 { char* sub_018187e0(void); };

// @baa 0x018187e0
char* C_018187e0::sub_018187e0(void) { return (char*)this + 16; }

struct C_018187f0 { char* sub_018187f0(void); };

// @baa 0x018187f0
char* C_018187f0::sub_018187f0(void) { return (char*)this + 16; }

struct C_01818800 { char* sub_01818800(void); };

// @baa 0x01818800
char* C_01818800::sub_01818800(void) { return (char*)this + 16; }

struct C_01818810 { char* sub_01818810(void); };

// @baa 0x01818810
char* C_01818810::sub_01818810(void) { return (char*)this + 16; }

struct C_01818820 { char* sub_01818820(void); };

// @baa 0x01818820
char* C_01818820::sub_01818820(void) { return (char*)this + 16; }

struct C_01818830 { char* sub_01818830(void); };

// @baa 0x01818830
char* C_01818830::sub_01818830(void) { return (char*)this + 16; }

struct C_01818840 { char* sub_01818840(void); };

// @baa 0x01818840
char* C_01818840::sub_01818840(void) { return (char*)this + 16; }

struct C_01818850 { char* sub_01818850(void); };

// @baa 0x01818850
char* C_01818850::sub_01818850(void) { return (char*)this + 16; }

struct C_01818860 { char* sub_01818860(void); };

// @baa 0x01818860
char* C_01818860::sub_01818860(void) { return (char*)this + 16; }

struct C_01818870 { char* sub_01818870(void); };

// @baa 0x01818870
char* C_01818870::sub_01818870(void) { return (char*)this + 16; }

struct C_01818880 { char* sub_01818880(void); };

// @baa 0x01818880
char* C_01818880::sub_01818880(void) { return (char*)this + 16; }

struct C_01818890 { char* sub_01818890(void); };

// @baa 0x01818890
char* C_01818890::sub_01818890(void) { return (char*)this + 16; }

struct C_018188a0 { char* sub_018188a0(void); };

// @baa 0x018188a0
char* C_018188a0::sub_018188a0(void) { return (char*)this + 16; }

struct C_018188b0 { char* sub_018188b0(void); };

// @baa 0x018188b0
char* C_018188b0::sub_018188b0(void) { return (char*)this + 16; }

struct C_018188c0 { char* sub_018188c0(void); };

// @baa 0x018188c0
char* C_018188c0::sub_018188c0(void) { return (char*)this + 16; }

struct C_018188d0 { char* sub_018188d0(void); };

// @baa 0x018188d0
char* C_018188d0::sub_018188d0(void) { return (char*)this + 16; }

struct C_018188e0 { char* sub_018188e0(void); };

// @baa 0x018188e0
char* C_018188e0::sub_018188e0(void) { return (char*)this + 16; }

struct C_018188f0 { char* sub_018188f0(void); };

// @baa 0x018188f0
char* C_018188f0::sub_018188f0(void) { return (char*)this + 16; }

struct C_01818900 { char* sub_01818900(void); };

// @baa 0x01818900
char* C_01818900::sub_01818900(void) { return (char*)this + 16; }

struct C_01818910 { char* sub_01818910(void); };

// @baa 0x01818910
char* C_01818910::sub_01818910(void) { return (char*)this + 16; }

struct C_01818920 { char* sub_01818920(void); };

// @baa 0x01818920
char* C_01818920::sub_01818920(void) { return (char*)this + 16; }

struct C_01818930 { char* sub_01818930(void); };

// @baa 0x01818930
char* C_01818930::sub_01818930(void) { return (char*)this + 16; }

struct C_01818940 { char* sub_01818940(void); };

// @baa 0x01818940
char* C_01818940::sub_01818940(void) { return (char*)this + 16; }

struct C_01818950 { char* sub_01818950(void); };

// @baa 0x01818950
char* C_01818950::sub_01818950(void) { return (char*)this + 16; }

struct C_01818960 { char* sub_01818960(void); };

// @baa 0x01818960
char* C_01818960::sub_01818960(void) { return (char*)this + 16; }

struct C_01818970 { char* sub_01818970(void); };

// @baa 0x01818970
char* C_01818970::sub_01818970(void) { return (char*)this + 16; }

struct C_01818980 { char* sub_01818980(void); };

// @baa 0x01818980
char* C_01818980::sub_01818980(void) { return (char*)this + 28; }

struct C_01818990 { char* sub_01818990(void); };

// @baa 0x01818990
char* C_01818990::sub_01818990(void) { return (char*)this + 28; }

struct C_018189a0 { char* sub_018189a0(void); };

// @baa 0x018189a0
char* C_018189a0::sub_018189a0(void) { return (char*)this + 28; }

struct C_018189b0 {
    void sub_018189b0();
};

// @baa 0x018189b0
void C_018189b0::sub_018189b0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018189c0 { char* sub_018189c0(void); };

// @baa 0x018189c0
char* C_018189c0::sub_018189c0(void) { return (char*)this + 28; }

struct C_018189d0 { char* sub_018189d0(void); };

// @baa 0x018189d0
char* C_018189d0::sub_018189d0(void) { return (char*)this + 28; }

struct C_018189e0 {
    void sub_018189e0();
};

// @baa 0x018189e0
void C_018189e0::sub_018189e0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018189f0 { char* sub_018189f0(void); };

// @baa 0x018189f0
char* C_018189f0::sub_018189f0(void) { return (char*)this + 28; }

struct C_01818a00 { char* sub_01818a00(void); };

// @baa 0x01818a00
char* C_01818a00::sub_01818a00(void) { return (char*)this + 28; }

struct C_01818a10 { char* sub_01818a10(void); };

// @baa 0x01818a10
char* C_01818a10::sub_01818a10(void) { return (char*)this + 28; }

struct C_01818a20 { char* sub_01818a20(void); };

// @baa 0x01818a20
char* C_01818a20::sub_01818a20(void) { return (char*)this + 28; }

struct C_01818a30 {
    void sub_01818a30();
};

// @baa 0x01818a30
void C_01818a30::sub_01818a30(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01818a40 { char* sub_01818a40(void); };

// @baa 0x01818a40
char* C_01818a40::sub_01818a40(void) { return (char*)this + 28; }

struct C_01818a50 { char* sub_01818a50(void); };

// @baa 0x01818a50
char* C_01818a50::sub_01818a50(void) { return (char*)this + 28; }

struct C_01818b10 { int sub_01818b10(void); };

// @baa 0x01818b10
int C_01818b10::sub_01818b10(void) { return *(int*)((char*)this + 4); }

struct C_01818b20 { int sub_01818b20(void); };

// @baa 0x01818b20
int C_01818b20::sub_01818b20(void) { return *(int*)((char*)this + 8); }

struct C_01818b30 { int sub_01818b30(void); };

// @baa 0x01818b30
int C_01818b30::sub_01818b30(void) { return *(int*)((char*)this + 8); }

struct C_01818b40 {
    int sub_01818b40();
};

// @baa 0x01818b40
int C_01818b40::sub_01818b40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8;
}

struct C_01818bf0 { int sub_01818bf0(void); };

// @baa 0x01818bf0
int C_01818bf0::sub_01818bf0(void) { return *(int*)((char*)this + 4); }

struct C_01818c00 { int sub_01818c00(void); };

// @baa 0x01818c00
int C_01818c00::sub_01818c00(void) { return *(int*)((char*)this + 8); }

struct C_01818c10 { int sub_01818c10(void); };

// @baa 0x01818c10
int C_01818c10::sub_01818c10(void) { return *(int*)((char*)this + 8); }

struct C_01818c20 {
    int sub_01818c20();
};

// @baa 0x01818c20
int C_01818c20::sub_01818c20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_01818cd0 { int sub_01818cd0(void); };

// @baa 0x01818cd0
int C_01818cd0::sub_01818cd0(void) { return *(int*)((char*)this + 4); }

struct C_01818ce0 { int sub_01818ce0(void); };

// @baa 0x01818ce0
int C_01818ce0::sub_01818ce0(void) { return *(int*)((char*)this + 8); }

struct C_01818cf0 { int sub_01818cf0(void); };

// @baa 0x01818cf0
int C_01818cf0::sub_01818cf0(void) { return *(int*)((char*)this + 8); }

struct C_01818d00 {
    int sub_01818d00();
};

// @baa 0x01818d00
int C_01818d00::sub_01818d00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_01818db0 {
    int sub_01818db0();
};

// @baa 0x01818db0
int C_01818db0::sub_01818db0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8;
}

struct C_01818df0 {
    int sub_01818df0();
};

// @baa 0x01818df0
int C_01818df0::sub_01818df0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_01818e30 {
    int sub_01818e30();
};

// @baa 0x01818e30
int C_01818e30::sub_01818e30(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

// @baa 0x018191c0
void sub_018191c0(void) {  }

// @baa 0x018191d0
void sub_018191d0(void) {  }

// @baa 0x018191e0
void sub_018191e0(void) {  }

// @baa 0x018191f0
void sub_018191f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01819230
void sub_01819230(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct C_018199f0 {
    void sub_018199f0(int);
};

// @baa 0x018199f0
void C_018199f0::sub_018199f0(int param_2)
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

struct C_01819af0 { int sub_01819af0(void); };

// @baa 0x01819af0
int C_01819af0::sub_01819af0(void) { return *(int*)((char*)this + 8); }

struct C_01819b20 {
    void sub_01819b20();
};

// @baa 0x01819b20
void C_01819b20::sub_01819b20(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01819b30 {
    undefined4 sub_01819b30(byte);
};

int sub_01819a20(void);
// @baa 0x01819b30
undefined4 C_01819b30::sub_01819b30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01819a20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01819c20 {
    bool sub_01819c20();
};

// @baa 0x01819c20
bool C_01819c20::sub_01819c20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) == 0;
}

struct C_01819d20 { int sub_01819d20(void); };

// @baa 0x01819d20
int C_01819d20::sub_01819d20(void) { return *(int*)((char*)this + 32); }

struct C_01819d30 {
    bool sub_01819d30();
};

// @baa 0x01819d30
bool C_01819d30::sub_01819d30(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) == 0;
}

struct C_01819e30 { int sub_01819e30(void); };

// @baa 0x01819e30
int C_01819e30::sub_01819e30(void) { return *(int*)((char*)this + 32); }

struct C_01819e40 {
    bool sub_01819e40();
};

// @baa 0x01819e40
bool C_01819e40::sub_01819e40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) == 0;
}

struct C_01819f40 { int sub_01819f40(void); };

// @baa 0x01819f40
int C_01819f40::sub_01819f40(void) { return *(int*)((char*)this + 32); }

struct C_01819f50 {
    bool sub_01819f50();
};

// @baa 0x01819f50
bool C_01819f50::sub_01819f50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) == 0;
}

struct C_0181a050 { int sub_0181a050(void); };

// @baa 0x0181a050
int C_0181a050::sub_0181a050(void) { return *(int*)((char*)this + 32); }

struct C_0181a060 {
    bool sub_0181a060();
};

// @baa 0x0181a060
bool C_0181a060::sub_0181a060(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) == 0;
}

struct C_0181a160 { int sub_0181a160(void); };

// @baa 0x0181a160
int C_0181a160::sub_0181a160(void) { return *(int*)((char*)this + 32); }

struct C_0181a170 {
    bool sub_0181a170();
};

// @baa 0x0181a170
bool C_0181a170::sub_0181a170(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) == 0;
}

struct C_0181b430 {
    void sub_0181b430(int *);
};

// @baa 0x0181b430
void C_0181b430::sub_0181b430(int * param_2)
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

struct C_0181b5d0 {
    void sub_0181b5d0();
};

int sub_01817ec0(void);
extern undefined4 g_023e4b38;
// @baa 0x0181b5d0
void C_0181b5d0::sub_0181b5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b38));
  sub_01817ec0();
  return;
}

struct C_0181b5e0 {
    void sub_0181b5e0();
};

extern undefined4 g_023e4b48;
// @baa 0x0181b5e0
void C_0181b5e0::sub_0181b5e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b48));
  sub_01817ec0();
  return;
}

struct C_0181b5f0 {
    void sub_0181b5f0();
};

extern undefined4 g_023e4b58;
// @baa 0x0181b5f0
void C_0181b5f0::sub_0181b5f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b58));
  sub_01817ec0();
  return;
}

struct C_0181b600 {
    void sub_0181b600();
};

extern undefined4 g_023e4b68;
// @baa 0x0181b600
void C_0181b600::sub_0181b600(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b68));
  sub_01817ec0();
  return;
}

struct C_0181b610 {
    void sub_0181b610();
};

extern undefined4 g_023e4b78;
// @baa 0x0181b610
void C_0181b610::sub_0181b610(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b78));
  sub_01817ec0();
  return;
}

struct C_0181b620 {
    void sub_0181b620();
};

extern undefined4 g_023e4b88;
// @baa 0x0181b620
void C_0181b620::sub_0181b620(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b88));
  sub_01817ec0();
  return;
}

struct C_0181b630 {
    void sub_0181b630();
};

extern undefined4 g_023e4b98;
// @baa 0x0181b630
void C_0181b630::sub_0181b630(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4b98));
  sub_01817ec0();
  return;
}

struct C_0181b640 {
    void sub_0181b640();
};

extern undefined4 g_023e4ba8;
// @baa 0x0181b640
void C_0181b640::sub_0181b640(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4ba8));
  sub_01817ec0();
  return;
}

struct C_0181b650 {
    void sub_0181b650();
};

extern undefined4 g_023e4bb8;
// @baa 0x0181b650
void C_0181b650::sub_0181b650(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4bb8));
  sub_01817ec0();
  return;
}

struct C_0181b660 {
    void sub_0181b660();
};

extern undefined4 g_023e4bc8;
// @baa 0x0181b660
void C_0181b660::sub_0181b660(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4bc8));
  sub_01817ec0();
  return;
}

struct C_0181b6f0 {
    undefined4 sub_0181b6f0(byte);
};

// @baa 0x0181b6f0
undefined4 C_0181b6f0::sub_0181b6f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b710 {
    undefined4 sub_0181b710(byte);
};

int sub_0181b5e0(void);
// @baa 0x0181b710
undefined4 C_0181b710::sub_0181b710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b5e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b730 {
    undefined4 sub_0181b730(byte);
};

int sub_0181b5f0(void);
// @baa 0x0181b730
undefined4 C_0181b730::sub_0181b730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b5f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b750 {
    undefined4 sub_0181b750(byte);
};

int sub_0181b600(void);
// @baa 0x0181b750
undefined4 C_0181b750::sub_0181b750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b600();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b770 {
    undefined4 sub_0181b770(byte);
};

int sub_0181b610(void);
// @baa 0x0181b770
undefined4 C_0181b770::sub_0181b770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b610();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b790 {
    undefined4 sub_0181b790(byte);
};

int sub_0181b620(void);
// @baa 0x0181b790
undefined4 C_0181b790::sub_0181b790(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b620();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b7b0 {
    undefined4 sub_0181b7b0(byte);
};

int sub_0181b630(void);
// @baa 0x0181b7b0
undefined4 C_0181b7b0::sub_0181b7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b630();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b7d0 {
    undefined4 sub_0181b7d0(byte);
};

int sub_0181b640(void);
// @baa 0x0181b7d0
undefined4 C_0181b7d0::sub_0181b7d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b7f0 {
    undefined4 sub_0181b7f0(byte);
};

int sub_0181b650(void);
// @baa 0x0181b7f0
undefined4 C_0181b7f0::sub_0181b7f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b650();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181b810 {
    undefined4 sub_0181b810(byte);
};

int sub_0181b660(void);
// @baa 0x0181b810
undefined4 C_0181b810::sub_0181b810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181b660();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181c900 {
    undefined4 sub_0181c900(byte);
};

// @baa 0x0181c900
undefined4 C_0181c900::sub_0181c900(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01817ec0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d280 { int sub_0181d280(void); };

// @baa 0x0181d280
int C_0181d280::sub_0181d280(void) { return *(int*)((char*)this + 4); }

struct C_0181d290 {
    undefined4 sub_0181d290(byte);
};

int sub_0181c920(void);
// @baa 0x0181d290
undefined4 C_0181d290::sub_0181d290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181c920();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d560 {
    undefined4 sub_0181d560(byte);
};

int sub_0181d320(void);
// @baa 0x0181d560
undefined4 C_0181d560::sub_0181d560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181d320();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d580 {
    undefined4 sub_0181d580(byte);
};

int sub_0181d380(void);
// @baa 0x0181d580
undefined4 C_0181d580::sub_0181d580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181d380();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d5a0 {
    undefined4 sub_0181d5a0(byte);
};

int sub_0181d3e0(void);
// @baa 0x0181d5a0
undefined4 C_0181d5a0::sub_0181d5a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181d3e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d5c0 {
    undefined4 sub_0181d5c0(byte);
};

int sub_0181d440(void);
// @baa 0x0181d5c0
undefined4 C_0181d5c0::sub_0181d5c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181d440();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d5e0 {
    undefined4 sub_0181d5e0(byte);
};

int sub_0181d4a0(void);
// @baa 0x0181d5e0
undefined4 C_0181d5e0::sub_0181d5e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181d4a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181d600 {
    undefined4 sub_0181d600(byte);
};

int sub_0181d500(void);
// @baa 0x0181d600
undefined4 C_0181d600::sub_0181d600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0181d500();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181eff0 {
    undefined4 sub_0181eff0(byte);
};

int sub_01817fb0(void);
// @baa 0x0181eff0
undefined4 C_0181eff0::sub_0181eff0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01817fb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0181fea0 {
    void sub_0181fea0();
};

// @baa 0x0181fea0
void C_0181fea0::sub_0181fea0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  return;
}

struct C_0181feb0 { int sub_0181feb0(void); };

// @baa 0x0181feb0
int C_0181feb0::sub_0181feb0(void) { return *(int*)((char*)this + 28); }

struct C_0181fec0 { int sub_0181fec0(void); };

// @baa 0x0181fec0
int C_0181fec0::sub_0181fec0(void) { return *(int*)((char*)this + 28); }

extern char g_027b7d4c[];
// @baa 0x0181fed0
int sub_0181fed0(void) { return (int)g_027b7d4c; }

extern char g_027b7d54[];
// @baa 0x0181fee0
int sub_0181fee0(void) { return (int)g_027b7d54; }
