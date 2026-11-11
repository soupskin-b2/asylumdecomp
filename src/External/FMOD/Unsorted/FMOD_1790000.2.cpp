// FMOD_1790000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_017971a5 { virtual void sub_017971c5(); char pad[248]; };

struct B_017971a5 { virtual void sub_017971c5(); };

struct C_017971a5 : A_017971a5, B_017971a5 { virtual void sub_017971c5(); C_017971a5(); };

C_017971a5::C_017971a5() {}

// @baa 0x017971a5
void C_017971a5::sub_017971c5() {}
