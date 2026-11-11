// FMQuaternionTest.cpp: 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0184b420(double *);
};

// @baa 0x0184b420
void C::sub_0184b420(double * param_2)
{
    float * param_1 = (float *)this;

  *param_1 = (float)*param_2;
  param_1[4] = (float)param_2[1];
  param_1[8] = (float)param_2[2];
  param_1[0xc] = (float)param_2[3];
  param_1[1] = (float)param_2[4];
  param_1[5] = (float)param_2[5];
  param_1[9] = (float)param_2[6];
  param_1[0xd] = (float)param_2[7];
  param_1[2] = (float)param_2[8];
  param_1[6] = (float)param_2[9];
  param_1[10] = (float)param_2[10];
  param_1[0xe] = (float)param_2[0xb];
  param_1[3] = (float)param_2[0xc];
  param_1[7] = (float)param_2[0xd];
  param_1[0xb] = (float)param_2[0xe];
  param_1[0xf] = (float)param_2[0xf];
  return;
}

struct C_01868d50 {
    undefined4 * sub_01868d50(byte);
};

int sub_00402660(...);
extern undefined4 g_023e8dd0;
// @baa 0x01868d50
undefined4 * C_01868d50::sub_01868d50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
