// ParticleEmitterInstances.cpp (part 1 of 2): 8 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00b31cc0
int __stdcall sub_00b31cc0(int a0) { return a0; }

// @baa 0x00b32590
void sub_00b32590(void) {  }

struct C {
    undefined4 * sub_00b4edc0();
};

int sub_00b4e270(void);
extern undefined * g_01feff98;
// @baa 0x00b4edc0
undefined4 * C::sub_00b4edc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00b4e270();
  *param_1 = (undefined4)(&g_01feff98);
  return param_1;
}

struct C_00b4ede0 {
    undefined4 * sub_00b4ede0(byte);
};

int sub_0053dfa0(...);
int sub_00b4cdd0(void);
// @baa 0x00b4ede0
undefined4 * C_00b4ede0::sub_00b4ede0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01feff98);
  sub_00b4cdd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b4ee10 {
    undefined4 * sub_00b4ee10();
};

extern undefined * g_01ff0038;
// @baa 0x00b4ee10
undefined4 * C_00b4ee10::sub_00b4ee10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00b4e270();
  *param_1 = (undefined4)(&g_01ff0038);
  return param_1;
}

struct C_00b4ee30 {
    undefined4 * sub_00b4ee30(byte);
};

// @baa 0x00b4ee30
undefined4 * C_00b4ee30::sub_00b4ee30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ff0038);
  sub_00b4cdd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_025ddfe0[];
// @baa 0x00b4eeb0
int sub_00b4eeb0(void) { return (int)g_025ddfe0; }

struct C_00b4eec0 {
    undefined4 sub_00b4eec0(byte);
};

int sub_00b4d030(void);
// @baa 0x00b4eec0
undefined4 C_00b4eec0::sub_00b4eec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b4d030();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
