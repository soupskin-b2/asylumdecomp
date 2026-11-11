// FUFileManager.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01850c40();
};

// @baa 0x01850c40
S *S::sub_01850c40()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}
