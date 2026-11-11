// PhysX_1630000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0163e820();
};

// @baa 0x0163e820
undefined4 C::sub_0163e820(void)
{
    int param_1 = (int)this;
  if ((((0.0 <= *(float *)(param_1 + 4)) && (*(float *)(param_1 + 4) <= 1.0)) &&
      (0.0 <= *(float *)(param_1 + 8))) && (*(float *)(param_1 + 8) <= 1.0)) {
    return 1;
  }
  return 0;
}

// @baa 0x0163e860
void sub_0163e860(void) {  }

struct C_0163e870 {
    undefined4 sub_0163e870();
};

// @baa 0x0163e870
undefined4 C_0163e870::sub_0163e870(void)
{
    float * param_1 = (float *)this;
  if ((((((0.0 <= param_1[1]) && (param_1[1] <= 1.0)) && (0.0 <= param_1[2])) &&
       ((param_1[2] <= 1.0 && (0.0 <= param_1[4])))) &&
      ((param_1[4] <= 1.0 && ((0.0 <= param_1[5] && (param_1[5] <= 1.0)))))) &&
     (*param_1 <= param_1[3])) {
    return 1;
  }
  return 0;
}

extern char g_024088e4[];
struct C_0163e8d0 { void sub_0163e8d0(void); };

// @baa 0x0163e8d0
void C_0163e8d0::sub_0163e8d0(void) { *(int*)((char*)this + 0) = (int)g_024088e4; }

struct C_0163ea00 { int sub_0163ea00(void); };

// @baa 0x0163ea00
int C_0163ea00::sub_0163ea00(void) { return *(int*)((char*)this + 8); }
