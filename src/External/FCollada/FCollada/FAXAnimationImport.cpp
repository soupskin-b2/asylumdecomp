// FAXAnimationImport.cpp (part 1 of 2): 15 functions
// Placed here by: neighbours 13, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_018260a0(...);
// @baa 0x018ba7b0
undefined1 sub_018ba7b0(void)
{
  sub_018260a0(".\\FAXAnimationImport.cpp",0x17f);
  return 0;
}

// @baa 0x018ba7d0
undefined1 sub_018ba7d0(void)
{
  sub_018260a0(".\\FAXAnimationImport.cpp",0x189);
  return 0;
}

struct C {
    void sub_018ba840();
};

void sub_01826080(void *);
// @baa 0x018ba840
void C::sub_018ba840(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018ba850 {
    void sub_018ba850();
};

// @baa 0x018ba850
void C_018ba850::sub_018ba850(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018ba8a0 {
    int sub_018ba8a0(byte);
};

int sub_00402660(...);
// @baa 0x018ba8a0
int C_018ba8a0::sub_018ba8a0(byte param_2)
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

struct C_018ba8d0 {
    int sub_018ba8d0();
};

// @baa 0x018ba8d0
int C_018ba8d0::sub_018ba8d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_018ba8e0 {
    int sub_018ba8e0();
};

// @baa 0x018ba8e0
int C_018ba8e0::sub_018ba8e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_018ba8f0 {
    int sub_018ba8f0();
};

// @baa 0x018ba8f0
int C_018ba8f0::sub_018ba8f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_018bab60 {
    void sub_018bab60(int *);
};

// @baa 0x018bab60
void C_018bab60::sub_018bab60(int * param_2)
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

// @baa 0x018bab90
void sub_018bab90(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

struct C_018bac00 { int sub_018bac00(void); };

// @baa 0x018bac00
int C_018bac00::sub_018bac00(void) { return *(int*)((char*)this + 144); }

struct C_018bae50 {
    int sub_018bae50(byte);
};

// @baa 0x018bae50
int C_018bae50::sub_018bae50(byte param_2)
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

struct C_018bae80 {
    int sub_018bae80(byte);
};

// @baa 0x018bae80
int C_018bae80::sub_018bae80(byte param_2)
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

// @baa 0x018bb000
void sub_018bb000(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// @baa 0x018bb020
void sub_018bb020(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
