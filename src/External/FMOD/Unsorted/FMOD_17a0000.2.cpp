// FMOD_17a0000.cpp (part 2 of 3): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017a3bc8(undefined4);
};

// @baa 0x017a3bc8
undefined4 C::sub_017a3bc8(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xf8) = param_2;
  return 0;
}

// @baa 0x017a5b04
int sub_017a5b04(void) { return 0; }

// @baa 0x017a5b07
int sub_017a5b07(void) { return 0; }

// @baa 0x017a5b4a
int __stdcall sub_017a5b4a(int a0, int a1) { return 0; }

// @baa 0x017a76cc
int __stdcall sub_017a76cc(int a0, int a1, int a2) { return 0; }

extern char g_023dd674[];
struct C_017a7847 { void sub_017a7847(void); };

// @baa 0x017a7847
void C_017a7847::sub_017a7847(void) { *(int*)((char*)this + 0) = (int)g_023dd674; }

struct C_017a90d2 {
    undefined4 sub_017a90d2(undefined4 *);
};

// @baa 0x017a90d2
undefined4 C_017a90d2::sub_017a90d2(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x54);
  return 0;
}

struct C_017aa26c {
    undefined4 sub_017aa26c(undefined4);
};

// @baa 0x017aa26c
undefined4 C_017aa26c::sub_017aa26c(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x140) = param_2;
  return 0;
}

struct C_017ab8c0 {
    undefined4 * sub_017ab8c0();
};

int sub_01796fef(void);
extern undefined4 g_023dde88;
// @baa 0x017ab8c0
undefined4 * C_017ab8c0::sub_017ab8c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01796fef();
  *param_1 = (undefined4)((&g_023dde88));
  return param_1;
}
