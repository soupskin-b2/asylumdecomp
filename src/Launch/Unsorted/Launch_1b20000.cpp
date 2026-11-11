// Launch_1b20000.cpp (part 1 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01b30750(int);
struct S {
    void sub_01b201b0(int A);
};

// @baa 0x01b201b0
void S::sub_01b201b0(int A)
{
    sub_01b30750(A);
}
