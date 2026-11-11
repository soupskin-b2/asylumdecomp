// FCollada_1860000.cpp (part 2 of 15): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_01865270 { int a, b, c; C_01865270(); };

// @baa 0x01865270
C_01865270::C_01865270() : a(0), b(0), c(0) {}

struct C_01866260 { int a, b, c; C_01866260(); };

// @baa 0x01866260
C_01866260::C_01866260() : a(0), b(0), c(0) {}

struct C {
    undefined4 sub_0186d7a0(char);
    int sub_0186d5a0(int);
};

// @baa 0x0186d7a0
undefined4 C::sub_0186d7a0(char param_2)
{
    int param_1 = (int)this;
  if ((*(int *)(param_1 + 0x28) == 0) && (param_2 != '\0')) {
    ((C *)(this))->sub_0186d5a0(0);
  }
  return *(undefined4 *)(param_1 + 0x28);
}

struct A_0186d9f0 { virtual void sub_0186da20(); char pad[32]; };

struct B_0186d9f0 { virtual void sub_0186da20(); };

struct C_0186d9f0 : A_0186d9f0, B_0186d9f0 { virtual void sub_0186da20(); C_0186d9f0(); };

C_0186d9f0::C_0186d9f0() {}

// @baa 0x0186d9f0
void C_0186d9f0::sub_0186da20() {}

struct M_0186e3d0 { void sub_00ef1560(); };

struct C_0186e3d0 { char pad[4]; M_0186e3d0 m; void sub_0186e3d0(); };

// @baa 0x0186e3d0
void C_0186e3d0::sub_0186e3d0() { m.sub_00ef1560(); }

struct M_0186e3e0 { void sub_00ef1560(); };

struct C_0186e3e0 { char pad[4]; M_0186e3e0 m; void sub_0186e3e0(); };

// @baa 0x0186e3e0
void C_0186e3e0::sub_0186e3e0() { m.sub_00ef1560(); }
