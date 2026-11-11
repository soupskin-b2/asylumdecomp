// UnrealEd_0ff0000.cpp (part 1 of 2): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C_00ff0030 { int a, b, c; C_00ff0030(); };

// @baa 0x00ff0030
C_00ff0030::C_00ff0030() : a(0), b(0), c(0) {}

struct C_00ff0040 { int a, b, c; C_00ff0040(); };

// @baa 0x00ff0040
C_00ff0040::C_00ff0040() : a(0), b(0), c(0) {}

struct T_00ff0050 { int x; };

// @baa 0x00ff0050
template T_00ff0050& TIndirectArray<T_00ff0050>::operator()(INT);

struct C_00ff00a0 { int a, b, c; C_00ff00a0(); };

// @baa 0x00ff00a0
C_00ff00a0::C_00ff00a0() : a(0), b(0), c(0) {}

struct C_00ff00b0 { int a, b, c; C_00ff00b0(); };

// @baa 0x00ff00b0
C_00ff00b0::C_00ff00b0() : a(0), b(0), c(0) {}

struct C_00ff0140 { int a, b, c; C_00ff0140(); };

// @baa 0x00ff0140
C_00ff0140::C_00ff0140() : a(0), b(0), c(0) {}
