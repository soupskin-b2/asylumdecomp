// NxdShapeShared.cpp (part 2 of 2): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct Inner {
    bool sub_01a3ec90();
};

struct C {
    bool sub_01a50980();
};

// @baa 0x01a50980
bool C::sub_01a50980(void)
{
    Inner * p = *(Inner **)this;
    return p->sub_01a3ec90();
}

struct Target {
    void sub_01a40560(void);
};

struct S01a50990 {
    void sub_01a50990(void);
};

// @baa 0x01a50990
void S01a50990::sub_01a50990(void)
{
    ((Target *)*(void **)this)->sub_01a40560();
}
