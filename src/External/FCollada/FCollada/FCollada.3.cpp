// FCollada.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_0185d9a0();
};

// @baa 0x0185d9a0
S *S::sub_0185d9a0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}
