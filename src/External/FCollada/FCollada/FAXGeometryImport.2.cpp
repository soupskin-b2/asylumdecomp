// FAXGeometryImport.cpp (part 2 of 2): 5 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_018abc70 { void sub_018494a0(); };

struct C { char pad[100]; M_018abc70 m; void sub_018abc70(); };

// @baa 0x018abc70
void C::sub_018abc70() { m.sub_018494a0(); }

struct M_018abc80 { void sub_018495a0(); };

struct C_018abc80 { char pad[108]; M_018abc80 m; void sub_018abc80(); };

// @baa 0x018abc80
void C_018abc80::sub_018abc80() { m.sub_018495a0(); }

struct C_018abe00 {
    int v;
    int *sub_018abe00(int *a);
};

// @baa 0x018abe00
int *C_018abe00::sub_018abe00(int *a) {
    *a = v;
    return a;
}

struct C_018abc90
{
    INT Value_00;
    INT Value_04;

    C_018abc90* sub_018abc90(INT* Source);
};

// @baa 0x018abc90
C_018abc90* C_018abc90::sub_018abc90(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018abca0
{
    char pad_00[0x18];
    volatile INT Flags;
    char pad_1c[0x3c];
    INT Value;

    void sub_018abca0(INT In);
};

// @baa 0x018abca0
void C_018abca0::sub_018abca0(INT In)
{
    Value = In;
    Flags |= 1;
}
