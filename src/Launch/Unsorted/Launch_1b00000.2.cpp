// Launch_1b00000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_01b03820(void); };

// @baa 0x01b03820
C* C::sub_01b03820(void) { return this; }
