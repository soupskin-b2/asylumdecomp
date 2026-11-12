// FCDGeometryMesh.cpp (part 3 of 3): 2 functions
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

struct C
{
    INT Value_00;
    INT Value_04;

    C* sub_01848200(INT* Source);
};

// @baa 0x01848200
C* C::sub_01848200(INT* Source)
{
    Value_04 = *Source;
    return this;
}
