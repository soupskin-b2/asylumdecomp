// PhysX_09d0000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_009d4ce0(float *);
};

// @baa 0x009d4ce0
void C::sub_009d4ce0(float * param_2)
{
    float * param_1 = (float *)this;
  *param_2 = param_1[3] - *param_1;
  param_2[1] = param_1[4] - param_1[1];
  param_2[2] = param_1[5] - param_1[2];
  *param_2 = *param_2 * 0.5;
  param_2[1] = param_2[1] * 0.5;
  param_2[2] = param_2[2] * 0.5;
  return;
}

// @baa 0x009d4dc0
void sub_009d4dc0(void)
{
  return;
}

struct C_009d4dd0 { C_009d4dd0* sub_009d4dd0(void); };

// @baa 0x009d4dd0
C_009d4dd0* C_009d4dd0::sub_009d4dd0(void) { return this; }

// @baa 0x009d4e10
void sub_009d4e10(void) {  }

extern char g_01fa3e7c[];
struct C_009d4e20 { C_009d4e20* sub_009d4e20(void); };

// @baa 0x009d4e20
C_009d4e20* C_009d4e20::sub_009d4e20(void) { *(int*)((char*)this + 0) = (int)g_01fa3e7c; return this; }

struct C_009d4e30 { void sub_009d4e30(void); };

// @baa 0x009d4e30
void C_009d4e30::sub_009d4e30(void) { *(int*)((char*)this + 0) = (int)g_01fa3e7c; }

struct C_009d4e40 {
    undefined4 * sub_009d4e40(byte);
};

int sub_0053dfa0(...);
// @baa 0x009d4e40
undefined4 * C_009d4e40::sub_009d4e40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3e7c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009d4e60
void sub_009d4e60(void) {  }

// @baa 0x009d5010
void sub_009d5010(void) {  }

struct C_009d5050 {
    undefined4 sub_009d5050(int);
};

// @baa 0x009d5050
undefined4 C_009d5050::sub_009d5050(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 4 + param_2 * 4);
}

struct C_009d5060 { int sub_009d5060(void); };

// @baa 0x009d5060
int C_009d5060::sub_009d5060(void) { return *(int*)((char*)this + 16); }

struct C_009d5070 { int sub_009d5070(void); };

// @baa 0x009d5070
int C_009d5070::sub_009d5070(void) { return *(int*)((char*)this + 24); }

struct C_009d5080 { float sub_009d5080(void); };

// @baa 0x009d5080
float C_009d5080::sub_009d5080(void) { return *(float*)((char*)this + 28); }

extern char g_02406e04[];
struct C_009d51c0 { void sub_009d51c0(void); };

// @baa 0x009d51c0
void C_009d51c0::sub_009d51c0(void) { *(int*)((char*)this + 0) = (int)g_02406e04; }

struct C_009d5260 { void sub_009d5260(void); };

// @baa 0x009d5260
void C_009d5260::sub_009d5260(void) { *(int*)((char*)this + 0) = (int)g_02406e04; }

struct C_009d5300 { void sub_009d5300(void); };

// @baa 0x009d5300
void C_009d5300::sub_009d5300(void) { *(int*)((char*)this + 0) = 0; }

struct C_009db9e0 {
    undefined4 * sub_009db9e0(byte);
};

// @baa 0x009db9e0
undefined4 * C_009db9e0::sub_009db9e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009dbc00 {
    undefined4 * sub_009dbc00(byte);
};

// @baa 0x009dbc00
undefined4 * C_009dbc00::sub_009dbc00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009dbc20 { C_009dbc20* sub_009dbc20(void); };

// @baa 0x009dbc20
C_009dbc20* C_009dbc20::sub_009dbc20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_009d5310 {
    int a;
    unsigned int pad : 29;
    unsigned int flag : 1;
    bool sub_009d5310();
};

// @baa 0x009d5310
bool C_009d5310::sub_009d5310()
{
    return flag ? true : false;
}
