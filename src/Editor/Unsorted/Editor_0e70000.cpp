// Editor_0e70000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00e707d0
int sub_00e707d0(int a0, int a1) { return a1; }

struct C { float sub_00e70810(void); };

// @baa 0x00e70810
float C::sub_00e70810(void) { return *(float*)((char*)this + 680); }

struct C_00e70820 { int sub_00e70820(void); };

// @baa 0x00e70820
int C_00e70820::sub_00e70820(void) { return *(int*)((char*)this + 472); }

// @baa 0x00e70830
void sub_00e70830(void) {  }
