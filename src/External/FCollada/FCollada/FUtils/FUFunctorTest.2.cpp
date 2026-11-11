// FUFunctorTest.cpp (part 2 of 2): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_018652c0 { int a, b, c; C_018652c0(); };

// @baa 0x018652c0
C_018652c0::C_018652c0() : a(0), b(0), c(0) {}

struct D {
    void method();
};

struct C {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_01865420();
};

// @baa 0x01865420
void C::sub_01865420() { return (d->*fn)(); }

struct C_01865540 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_01865540();
};

// @baa 0x01865540
void C_01865540::sub_01865540() { return (d->*fn)(); }

struct C_018656c0 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_018656c0();
};

// @baa 0x018656c0
void C_018656c0::sub_018656c0() { return (d->*fn)(); }

struct C_018657f0 {
    char pad[4];
    D *d;
    void (D::*fn)();
    void sub_018657f0();
};

// @baa 0x018657f0
void C_018657f0::sub_018657f0() { return (d->*fn)(); }
