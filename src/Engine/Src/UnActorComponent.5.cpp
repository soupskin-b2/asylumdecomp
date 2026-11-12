// UnActorComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct Sub
{
    void sub_006d2b90(INT Value);
};

struct C
{
    char pad_00[0x250];
    Sub Marker;

    void sub_006d43c0();
};

// @baa 0x006d43c0
void C::sub_006d43c0()
{
    ((Sub*)((char*)this + 0x250))->sub_006d2b90(0);
}
