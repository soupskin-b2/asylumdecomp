// FCDObjectWithId.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    INT pad_00;
    UINT Count;

    INT sub_018358b0();
};

// @baa 0x018358b0
INT C::sub_018358b0()
{
    return Count <= 1;
}
