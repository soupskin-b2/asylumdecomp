// Engine_0f50000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_00f5b960 { void sub_00f59350(); };

struct C { char pad[4]; M_00f5b960 m; void sub_00f5b960(); };

// @baa 0x00f5b960
void C::sub_00f5b960() { m.sub_00f59350(); }
