// D3D9Drv_1a20000.cpp (part 2 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a26ec0
unsigned sub_01a26ec0(unsigned value, int shift)
{
    return (value << shift) | (value >> (32 - shift));
}

struct C_01a27940 { int a; C_01a27940(int); };

// @baa 0x01a27940
C_01a27940::C_01a27940(int x) : a(x) {}

struct C_01a27ae0 { int a, b, c; C_01a27ae0(); };

// @baa 0x01a27ae0
C_01a27ae0::C_01a27ae0() : a(0), b(0), c(0) {}
