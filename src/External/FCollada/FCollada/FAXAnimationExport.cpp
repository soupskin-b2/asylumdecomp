// FAXAnimationExport.cpp (part 1 of 2): 13 functions
// Placed here by: neighbours 10, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_018260a0(...);
// @baa 0x018a2700
undefined4 sub_018a2700(void)
{
  sub_018260a0(".\\FAXAnimationExport.cpp",0xa3);
  return 0;
}

// @baa 0x018a2720
undefined4 sub_018a2720(void)
{
  sub_018260a0(".\\FAXAnimationExport.cpp",0xac);
  return 0;
}

struct C {
    bool sub_018a2740();
};

// @baa 0x018a2740
bool C::sub_018a2740(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_018a2750 {
    bool sub_018a2750();
};

// @baa 0x018a2750
bool C_018a2750::sub_018a2750(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_018a2760 { int sub_018a2760(void); };

// @baa 0x018a2760
int C_018a2760::sub_018a2760(void) { return *(int*)((char*)this + 4); }

struct C_018a2790 {
    void sub_018a2790();
};

void sub_01826080(void *);
// @baa 0x018a2790
void C_018a2790::sub_018a2790(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018a2af0 { int sub_018a2af0(void); };

// @baa 0x018a2af0
int C_018a2af0::sub_018a2af0(void) { return *(int*)((char*)this + 112); }

struct C_018a2b00 { int sub_018a2b00(void); };

// @baa 0x018a2b00
int C_018a2b00::sub_018a2b00(void) { return *(int*)((char*)this + 132); }

struct C_018a2b10 { float sub_018a2b10(void); };

// @baa 0x018a2b10
float C_018a2b10::sub_018a2b10(void) { return *(float*)((char*)this + 132); }

struct C_018a2b20 { int sub_018a2b20(void); };

// @baa 0x018a2b20
int C_018a2b20::sub_018a2b20(void) { return *(int*)((char*)this + 84); }

// @baa 0x01c11230
char * sub_01c11230(undefined4 * param_1)
{
  switch(*param_1) {
  case 0:
    return "STEP";
  case 1:
    return "LINEAR";
  case 2:
    return "BEZIER";
  case 3:
    return "TCB";
  default:
    return "unknown";
  }
}

// @baa 0x01c112d0
char * sub_01c112d0(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return "NONE";
  case 1:
    return "WRAP";
  case 2:
    return "MIRROR";
  case 3:
    return "CLAMP";
  case 4:
    return "BORDER";
  default:
    return "UNKNOWN";
  }
}

// @baa 0x01c11320
char * sub_01c11320(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return "NONE";
  case 1:
    return "NEAREST";
  default:
    return "UNKNOWN";
  case 3:
    return "NEAREST_MIPMAP_NEAREST";
  case 4:
    return "LINEAR_MIPMAP_NEAREST";
  case 5:
    return "NEAREST_MIPMAP_LINEAR";
  case 6:
    return "LINEAR_MIPMAP_LINEAR";
  }
}
