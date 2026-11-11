// FCDEntityReference.cpp (part 2 of 2): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01852fc0();
};

// @baa 0x01852fc0
undefined4 C::sub_01852fc0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct A_01853050 { virtual void sub_01853250(); char pad[32]; };

struct B_01853050 { virtual void sub_01853250(); };

struct C_01853050 : A_01853050, B_01853050 { virtual void sub_01853250(); C_01853050(); };

C_01853050::C_01853050() {}

// @baa 0x01853050
void C_01853050::sub_01853250() {}
