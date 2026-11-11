// Launch_1b20000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b22a70
uint sub_01b22a70(uint param_1)
{
  return param_1 >> 4 | param_1 * 4;
}

struct C { int sub_01b22ce0(void); };

// @baa 0x01b22ce0
int C::sub_01b22ce0(void) { return *(int*)((char*)this + 36); }
