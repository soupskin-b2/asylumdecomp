// FUError.cpp (part 1 of 2): 7 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023e8510[];
struct C { void sub_0184dd60(void); };

// @baa 0x0184dd60
void C::sub_0184dd60(void) { *(int*)((char*)this + 0) = (int)g_023e8510; }

struct C_0184dd70 { C_0184dd70* sub_0184dd70(void); };

// @baa 0x0184dd70
C_0184dd70* C_0184dd70::sub_0184dd70(void) { *(int*)((char*)this + 0) = (int)g_023e8510; return this; }

struct C_0184dd80 {
    undefined4 * sub_0184dd80(byte);
};

int sub_00402660(...);
// @baa 0x0184dd80
undefined4 * C_0184dd80::sub_0184dd80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8510));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0184de10 {
    void sub_0184de10();
};

void sub_01826080(void *);
// @baa 0x0184de10
void C_0184de10::sub_0184de10(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0184dea0 {
    undefined4 sub_0184dea0(int, int);
};

// @baa 0x0184dea0
undefined4 C_0184dea0::sub_0184dea0(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((param_2 == *(int *)(param_1 + 4)) && (param_3 == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}

struct C_0184dec0 { void sub_0184dec0(void); };

// @baa 0x0184dec0
void C_0184dec0::sub_0184dec0(void) { *(int*)((char*)this + 0) = (int)g_023e8510; }

struct C_0184df00 {
    undefined4 * sub_0184df00(byte);
};

// @baa 0x0184df00
undefined4 * C_0184df00::sub_0184df00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8510));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
