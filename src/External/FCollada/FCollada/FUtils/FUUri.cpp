// FUUri.cpp (part 1 of 2): 5 functions
// Placed here by: callers 3, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01827530();
};

// @baa 0x01827530
int C::sub_01827530(void)
{
    int param_1 = (int)this;

  if (1 < *(uint *)(param_1 + 4)) {
    return *(uint *)(param_1 + 4) - 1;
  }
  return 0;
}

// @baa 0x01854650
undefined4 sub_01854650(short param_1)
{
  if ((((((param_1 != 0x2d) && (param_1 != 0x5f)) && (param_1 != 0x2e)) &&
       ((param_1 != 0x21 && (param_1 != 0x7e)))) &&
      ((param_1 != 0x2a && ((param_1 != 0x27 && (param_1 != 0x28)))))) && (param_1 != 0x29)) {
    return 0;
  }
  return 1;
}

// @baa 0x018546d0
undefined4 sub_018546d0(short param_1)
{
  if ((((((param_1 != 0x3b) && (param_1 != 0x2f)) && (param_1 != 0x3f)) &&
       ((param_1 != 0x3a && (param_1 != 0x40)))) &&
      ((param_1 != 0x26 && ((param_1 != 0x3d && (param_1 != 0x2b)))))) &&
     ((param_1 != 0x24 && (param_1 != 0x2c)))) {
    return 0;
  }
  return 1;
}

struct C_01856e40 {
    void sub_01856e40(char *, char *);
};

// @baa 0x01856e40
void C_01856e40::sub_01856e40(char * param_2, char * param_3)
{
    int param_1 = (int)this;

  short *psVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 8);
  psVar1 = psVar2 + *(int *)(param_1 + 4);
  for (; psVar2 != psVar1; psVar2 = psVar2 + 1) {
    if (*psVar2 == (short)*param_2) {
      *psVar2 = (short)*param_3;
    }
  }
  return;
}

struct C_01856eb0 {
    int sub_01856eb0();
};

// @baa 0x01856eb0
int C_01856eb0::sub_01856eb0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 4) * 2;
}
