// FCollada_1810000.cpp (part 8 of 8): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0181ff50(); // 0x04
    void sub_01854290();
};

// @baa 0x0181ff50
void FCDocument::sub_0181ff50()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

struct Sub
{
    void sub_01852f10();
};

struct Object
{
    Sub Marker;
};

extern Object* sub_01811ed0();
// @baa 0x01811f90
void sub_01811f90()
{
    sub_01811ed0()->Marker.sub_01852f10();
}
