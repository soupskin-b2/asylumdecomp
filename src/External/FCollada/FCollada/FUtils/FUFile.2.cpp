// FUFile.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_01875e40();
};

// @baa 0x01875e40
S16* S16::sub_01875e40()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}
