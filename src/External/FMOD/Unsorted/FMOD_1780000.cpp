// FMOD_1780000.cpp (part 1 of 2): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017805ba
int sub_017805ba(void) { return 0; }

struct C {
    undefined4 * sub_01780f16();
};

int sub_017a6142(void);
extern undefined4 g_023db6fc;
// @baa 0x01780f16
undefined4 * C::sub_01780f16(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017a6142();
  *param_1 = (undefined4)((&g_023db6fc));
  return param_1;
}

struct C_01780f28 {
    undefined4 * sub_01780f28();
};

int sub_01779bd0(void);
extern undefined4 g_023db75c;
// @baa 0x01780f28
undefined4 * C_01780f28::sub_01780f28(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01779bd0();
  *param_1 = (undefined4)((&g_023db75c));
  return param_1;
}

struct C_01780f3a {
    undefined4 * sub_01780f3a();
};

extern undefined4 g_023db7b4;
// @baa 0x01780f3a
undefined4 * C_01780f3a::sub_01780f3a(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01779bd0();
  *param_1 = (undefined4)((&g_023db7b4));
  return param_1;
}

struct C_01782521 {
    undefined4 sub_01782521(undefined4);
};

// @baa 0x01782521
undefined4 C_01782521::sub_01782521(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = param_2;
  return 0;
}

// @baa 0x01782861
int sub_01782861(void) { return 0; }

extern "C" __declspec(dllimport) int timeGetTime(...);
// @baa 0x01782922
undefined4 sub_01782922(DWORD * param_1)
{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *param_1 = DVar1;
  return 0;
}

extern "C" __declspec(dllimport) int GetCurrentThreadId(...);
// @baa 0x0178293e
undefined4 sub_0178293e(DWORD * param_1)
{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  *param_1 = DVar1;
  return 0;
}

// @baa 0x01782ee7
int sub_01782ee7(void) { return 0; }

// @baa 0x0178f97a
int sub_0178f97a(void) { return 0; }
