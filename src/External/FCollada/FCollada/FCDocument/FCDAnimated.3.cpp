// FCDAnimated.cpp (part 3 of 3): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_01832e90 { int a, b, c; C_01832e90(); };

// @baa 0x01832e90
C_01832e90::C_01832e90() : a(0), b(0), c(0) {}

struct C { void sub_018332d0(int); void sub_018336d0(); };

// @baa 0x018336d0
void C::sub_018336d0() { sub_018332d0(0); }

struct C_01833930 { void sub_018237d0(int); void sub_01833930(); };

// @baa 0x01833930
void C_01833930::sub_01833930() { sub_018237d0(0); }

struct A_01833c90 { virtual void sub_01833d50(); char pad[32]; };

struct B_01833c90 { virtual void sub_01833d50(); };

struct C_01833c90 : A_01833c90, B_01833c90 { virtual void sub_01833d50(); C_01833c90(); };

C_01833c90::C_01833c90() {}

// @baa 0x01833c90
void C_01833c90::sub_01833d50() {}
