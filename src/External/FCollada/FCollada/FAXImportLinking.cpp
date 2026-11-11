// FAXImportLinking.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct B;
struct A {
    char pad[0xb8];
    B *b;
    int sub_01811b90();
};

struct B {
    int sub_01839cc0();
};

// @baa 0x01811b90
int A::sub_01811b90()
{
    return b->sub_01839cc0();
}
