// FMOD_1790000.cpp (part 3 of 3): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01798786(undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x01798786
undefined4 C::sub_01798786(undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x118);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x11c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x120);
  }
  return 0;
}

struct C_0179933e {
    undefined4 sub_0179933e(undefined1);
};

// @baa 0x0179933e
undefined4 C_0179933e::sub_0179933e(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x232) = param_2;
  return 0;
}

struct C_01799367 {
    undefined4 sub_01799367(undefined4);
};

// @baa 0x01799367
undefined4 C_01799367::sub_01799367(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x228) = param_2;
  return 0;
}

extern char g_023dd418[];
struct C_0179bb2a { void sub_0179bb2a(void); };

// @baa 0x0179bb2a
void C_0179bb2a::sub_0179bb2a(void) { *(int*)((char*)this + 0) = (int)g_023dd418; }

// @baa 0x0179bdbc
int __stdcall sub_0179bdbc(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x0179fdb8
int sub_0179fdb8(void) { return 0; }

// @baa 0x0179fdbb
int sub_0179fdbb(void) { return 0; }

// @baa 0x0179fdbe
int __stdcall sub_0179fdbe(int a0, int a1) { return 0; }
