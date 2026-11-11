// Log.cpp: 7 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_011c3140 { virtual void sub_011c3170(); char pad[332]; };

struct B_011c3140 { virtual void sub_011c3170(); };

struct C_011c3140 : A_011c3140, B_011c3140 { virtual void sub_011c3170(); C_011c3140(); };

C_011c3140::C_011c3140() {}

// @baa 0x011c3140
void C_011c3140::sub_011c3170() {}

struct A_011c3150 { virtual void sub_011c3170(); char pad[428]; };

struct B_011c3150 { virtual void sub_011c3170(); };

struct C_011c3150 : A_011c3150, B_011c3150 { virtual void sub_011c3170(); C_011c3150(); };

C_011c3150::C_011c3150() {}

// @baa 0x011c3150
void C_011c3150::sub_011c3170() {}

struct A_011c3160 { virtual void sub_011c3170(); char pad[432]; };

struct B_011c3160 { virtual void sub_011c3170(); };

struct C_011c3160 : A_011c3160, B_011c3160 { virtual void sub_011c3170(); C_011c3160(); };

C_011c3160::C_011c3160() {}

// @baa 0x011c3160
void C_011c3160::sub_011c3170() {}

struct C {
    undefined4 * sub_011c3190(undefined4, undefined4, undefined4);
    int sub_011c2ff0(int, int, int);
};

extern undefined4 g_021e9f8c;
extern undefined * g_021e9f98;
extern undefined * g_021e9fc4;
extern undefined * g_021ea000;
// @baa 0x011c3190
undefined4 * C::sub_011c3190(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_011c2ff0(param_2, param_3, param_4);
  *param_1 = (undefined4)(&g_021ea000);
  param_1[0x54] = (undefined4)(&g_021e9fc4);
  param_1[0x6c] = (undefined4)(&g_021e9f98);
  param_1[0x6d] = (undefined4)(&g_021e9f8c);
  return param_1;
}

struct A_011c31f0 { virtual void sub_011c3220(); char pad[332]; };

struct B_011c31f0 { virtual void sub_011c3220(); };

struct C_011c31f0 : A_011c31f0, B_011c31f0 { virtual void sub_011c3220(); C_011c31f0(); };

C_011c31f0::C_011c31f0() {}

// @baa 0x011c31f0
void C_011c31f0::sub_011c3220() {}

struct A_011c3200 { virtual void sub_011c3220(); char pad[428]; };

struct B_011c3200 { virtual void sub_011c3220(); };

struct C_011c3200 : A_011c3200, B_011c3200 { virtual void sub_011c3220(); C_011c3200(); };

C_011c3200::C_011c3200() {}

// @baa 0x011c3200
void C_011c3200::sub_011c3220() {}

struct A_011c3210 { virtual void sub_011c3220(); char pad[432]; };

struct B_011c3210 { virtual void sub_011c3220(); };

struct C_011c3210 : A_011c3210, B_011c3210 { virtual void sub_011c3220(); C_011c3210(); };

C_011c3210::C_011c3210() {}

// @baa 0x011c3210
void C_011c3210::sub_011c3220() {}
