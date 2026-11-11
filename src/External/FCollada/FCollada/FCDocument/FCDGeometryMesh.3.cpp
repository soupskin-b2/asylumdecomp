// FCDGeometryMesh.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_018481c0();
};

// @baa 0x018481c0
S *S::sub_018481c0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}
