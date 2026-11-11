// UnrealEd_0fb0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_00fb4240(int); C *sub_00fb5670(int); };

// @baa 0x00fb5670
C *C::sub_00fb5670(int a) { sub_00fb4240(a); return this; }

struct C_00fb5690 { void sub_00fb4300(int); C_00fb5690 *sub_00fb5690(int); };

// @baa 0x00fb5690
C_00fb5690 *C_00fb5690::sub_00fb5690(int a) { sub_00fb4300(a); return this; }
