// FCollada_1860000.cpp (part 8 of 15): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_018668c0(); // 0x04
    void sub_01854290();
};

// @baa 0x018668c0
void FCDocument::sub_018668c0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}
