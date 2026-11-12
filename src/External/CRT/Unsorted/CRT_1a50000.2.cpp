// CRT_1a50000.cpp (part 2 of 2): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01a5df50(float *, float *);
};

// @baa 0x01a5df50
void C::sub_01a5df50(float * param_2, float * param_3)
{
    float * param_1 = (float *)this;

  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  param_1[2] = param_2[2] - param_3[2];
  param_1[3] = param_2[3] - param_3[3];
  param_1[4] = param_2[4] - param_3[4];
  param_1[5] = param_2[5] - param_3[5];
  param_1[6] = param_2[6] - param_3[6];
  param_1[7] = param_2[7] - param_3[7];
  param_1[8] = param_2[8] - param_3[8];
  return;
}

// @baa 0x01a5e0d0
float10 sub_01a5e0d0(float * param_1)
{
  float fStack_4;
  
  fStack_4 = 1.0;
  if (*param_1 != 0.0) {
    fStack_4 = *param_1;
  }
  if (param_1[1] != 0.0) {
    fStack_4 = param_1[1] * fStack_4;
  }
  if (param_1[2] != 0.0) {
    fStack_4 = param_1[2] * fStack_4;
  }
  return (float10)fStack_4;
}

// @baa 0x01a5e420
void sub_01a5e420(float * param_1, float param_2, float param_3, float param_4, float param_5)
{
  param_2 = param_2 / 12.0;
  *param_1 = param_2 * (param_5 * param_5 + param_4 * param_4);
  param_1[1] = param_2 * (param_3 * param_3 + param_5 * param_5);
  param_1[2] = param_2 * (param_3 * param_3 + param_4 * param_4);
  return;
}

// @baa 0x01a5f1d0
float10 sub_01a5f1d0(float * param_1)
{
  float fStack_4;
  
  fStack_4 = 1.0;
  if (*param_1 != 0.0) {
    fStack_4 = *param_1;
  }
  if (param_1[1] != 0.0) {
    fStack_4 = param_1[1] * fStack_4;
  }
  if (param_1[2] != 0.0) {
    fStack_4 = param_1[2] * fStack_4;
  }
  return (float10)fStack_4;
}

struct C_01a5f380
{
    char pad_00[0x10];
    void* Pointer;
    char pad_14[0x10];
    UINT Count;

    void* sub_01a5f380();
};

// @baa 0x01a5f380
void* C_01a5f380::sub_01a5f380()
{
    if (Count >= 0x10)
        return Pointer;
    return (void*)((char*)this + 0x10);
}
