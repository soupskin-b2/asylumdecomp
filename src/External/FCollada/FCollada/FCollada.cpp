// FCollada.cpp (part 1 of 3): 26 functions
// Placed here by: neighbours 26.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined1 g_025f97d0;
// @baa 0x0183def0
undefined1 sub_0183def0(void)
{
  return g_025f97d0;
}

// @baa 0x0183df00
void sub_0183df00(undefined1 param_1)
{
  g_025f97d0 = param_1;
  return;
}

extern undefined4 g_027b7e44;
// @baa 0x0183df40
void sub_0183df40(undefined4 param_1)
{
  g_027b7e44 = param_1;
  return;
}

extern undefined4 g_025f97dc;
// @baa 0x0183e000
undefined4 sub_0183e000(void)
{
  return g_025f97dc;
}

struct C { int sub_0183e390(void); };

// @baa 0x0183e390
int C::sub_0183e390(void) { return *(int*)((char*)this + 4); }

struct C_0183e430 { int sub_0183e430(void); };

// @baa 0x0183e430
int C_0183e430::sub_0183e430(void) { return *(int*)((char*)this + 44); }

struct C_0183e440 { int sub_0183e440(void); };

// @baa 0x0183e440
int C_0183e440::sub_0183e440(void) { return *(int*)((char*)this + 8); }

struct C_0183e4d0 {
    bool sub_0183e4d0();
};

// @baa 0x0183e4d0
bool C_0183e4d0::sub_0183e4d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_0183e4e0 { int sub_0183e4e0(void); };

// @baa 0x0183e4e0
int C_0183e4e0::sub_0183e4e0(void) { return *(int*)((char*)this + 8); }

struct C_0183e510 {
    void sub_0183e510();
};

void sub_01826080(void *);
// @baa 0x0183e510
void C_0183e510::sub_0183e510(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0183e5d0 {
    void sub_0183e5d0(int *);
};

// @baa 0x0183e5d0
void C_0183e5d0::sub_0183e5d0(int * param_2)
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

struct C_0185d8e0 { int sub_0185d8e0(void); };

// @baa 0x0185d8e0
int C_0185d8e0::sub_0185d8e0(void) { return *(int*)((char*)this + 8); }

struct C_0185d9c0 { int sub_0185d9c0(void); };

// @baa 0x0185d9c0
int C_0185d9c0::sub_0185d9c0(void) { return *(int*)((char*)this + 128); }

struct C_0185da00 { int sub_0185da00(void); };

// @baa 0x0185da00
int C_0185da00::sub_0185da00(void) { return *(int*)((char*)this + 40); }

struct C_0185da30 {
    void sub_0185da30();
};

// @baa 0x0185da30
void C_0185da30::sub_0185da30(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0185da40 { int sub_0185da40(void); };

// @baa 0x0185da40
int C_0185da40::sub_0185da40(void) { return *(int*)((char*)this + 8); }

struct C_0185da70 {
    void sub_0185da70();
};

// @baa 0x0185da70
void C_0185da70::sub_0185da70(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0185dc10 {
    void sub_0185dc10();
};

int sub_0185d7b0(void);
// @baa 0x0185dc10
void C_0185dc10::sub_0185dc10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0185d7b0();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_0185df20 {
    void sub_0185df20(int *);
};

// @baa 0x0185df20
void C_0185df20::sub_0185df20(int * param_2)
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

struct C_0185dfb0 {
    void sub_0185dfb0(int *);
};

// @baa 0x0185dfb0
void C_0185dfb0::sub_0185dfb0(int * param_2)
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

struct C_0185e020 {
    void sub_0185e020();
};

// @baa 0x0185e020
void C_0185e020::sub_0185e020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0185d7b0();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

// @baa 0x0185e210
void sub_0185e210(undefined4 * param_1)
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

struct C_0185e230 {
    undefined4 sub_0185e230(byte);
};

int sub_00402660(...);
int sub_0185e040(void);
// @baa 0x0185e230
undefined4 C_0185e230::sub_0185e230(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185e040();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0185e250 {
    undefined4 sub_0185e250(byte);
};

int sub_0185e110(void);
// @baa 0x0185e250
undefined4 C_0185e250::sub_0185e250(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0185e110();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b801c[];
// @baa 0x0185e270
int sub_0185e270(void) { return (int)g_027b801c; }

struct C_0185e3e0 {
    undefined4 * sub_0185e3e0();
};

void * sub_01826070(size_t);
// @baa 0x0185e3e0
undefined4 * C_0185e3e0::sub_0185e3e0(void)
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
